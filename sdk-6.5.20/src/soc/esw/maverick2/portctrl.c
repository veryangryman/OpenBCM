/*
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 *
 * portctrl soc routines
 */

#include <sal/core/libc.h>

#include <soc/debug.h>
#include <soc/util.h>
#include <soc/bondoptions.h>
#include <soc/mem.h>
#include <soc/esw/portctrl.h>
#include <shared/bsl.h>
#include <soc/phy/phymod_sim.h>
#include <soc/portmod/portmod.h>
#include <soc/maverick2.h>

#ifdef BCM_MAVERICK2_SUPPORT

#define SOC_MV2_PM4X10_COUNT         1
static uint32_t _mv2_pm4x10_addr[SOC_MV2_PM4X10_COUNT] = { 0x1c1 };

#define SOC_MV2_PM4X25_COUNT  20
#define SOC_MV2_MAX_PHYS      87  /* 20*4 CLMAC's + 4 XLMAC */

static uint32_t _mv2_pm4x25_addr[SOC_MV2_PM4X25_COUNT] = {
    0x81,  0x85,  0x89,  0x8D,  0x91,
    0xA1,  0xA5,  0xA9,  0xAD,  0xB1,
    0xC1,  0xC5,  0xC9,  0xCD,  0xD1,
    0xE1,  0xE5,  0xE9,  0xED,  0xF1,
};


static portmod_pm_instances_t mv2_pm_types[] = {
#ifdef PORTMOD_PM4X25_SUPPORT
        {portmodDispatchTypePm4x25,  SOC_MV2_PM4X25_COUNT},
#endif
#ifdef PORTMOD_PM4X10_SUPPORT
        {portmodDispatchTypePm4x10,  SOC_MV2_PM4X10_COUNT},
#endif
};

#ifdef PORTMOD_PM4X25_SUPPORT
static portmod_default_user_access_t *pm4x25_mv2_user_acc[SOC_MAX_NUM_DEVICES];
#endif /* PORTMOD_PM4X25_SUPPORT */

#ifdef PORTMOD_PM4X10_SUPPORT
static portmod_default_user_access_t *pm4x10_mv2_user_acc[SOC_MAX_NUM_DEVICES];
#endif /* PORTMOD_PM4X25_SUPPORT */



/*
 * Polarity get looks for physical port based config first. This will enable
 * the user to define the polarity for all ports weather mapped to logical 
 * port or not.
 *
 * For legacy compatibility - we still look for the logical port
 * config setup.
 */
STATIC void
mv2_pm_port_polarity_get (int unit, int logical_port, int physical_port,
                          int lane, uint32 *tx_pol, uint32* rx_pol)
{
    uint32 rx_polarity, tx_polarity;

    rx_polarity = soc_property_phy_get(unit, physical_port, 0, 0, lane,
                         spn_PHY_CHAIN_RX_POLARITY_FLIP_PHYSICAL, 0x0);
    *rx_pol = (rx_polarity & 0x1) << lane;

    tx_polarity = soc_property_phy_get(unit, physical_port, 0, 0, lane,
                         spn_PHY_CHAIN_TX_POLARITY_FLIP_PHYSICAL, 0x0);
    *tx_pol = (tx_polarity & 0x1) << lane;
}

/*
 * lanemap get looks for physical port based config first. This will enable
 * the user to define the lanemap for all ports weather mapped to logical 
 * port or not.
 *
 * For legacy compatibility - we still look for the logical port
 * config setup.
 */
STATIC 
void mv2_pm_port_lanemap_get (int unit, int logical_port, int physical_port, 
                           uint32 *txlane_map, uint32* rxlane_map)       
{
    *rxlane_map = soc_property_phy_get(unit, physical_port, 0, 0, 0,
                        spn_PHY_CHAIN_RX_LANE_MAP_PHYSICAL, 0x3210);

    *txlane_map = soc_property_phy_get(unit, physical_port, 0, 0, 0,
                        spn_PHY_CHAIN_TX_LANE_MAP_PHYSICAL, 0x3210);
}


STATIC int
_soc_mv2_portctrl_pm4x25_portmod_init(int unit, int second_mgmt_port)
{
#ifdef PORTMOD_PM4X25_SUPPORT
    int rv = SOC_E_NONE;
    portmod_pm_create_info_t pm_create_info;
    int pmid = 0, blk, is_sim, lane, phy, found, logical_port;
    int first_port, idx, ref_clk_prop;
    uint32 txlane_map, rxlane_map;
    uint32 tx_polarity, rx_polarity;

    /* Allocate user access for all PMs */
    SOC_IF_ERROR_RETURN (soc_esw_portctrl_pm_user_access_alloc(unit, 
                  SOC_MV2_PM4X25_COUNT, &pm4x25_mv2_user_acc[unit]));


    for (pmid = 0; PORTMOD_SUCCESS(rv) && (pmid < SOC_MV2_PM4X25_COUNT); pmid++) {

        rv = portmod_pm_create_info_t_init(unit, &pm_create_info);
        if (PORTMOD_FAILURE(rv)) {
            break;
        }

        pm_create_info.type         = portmodDispatchTypePm4x25;

        /* 1 based port number */
        first_port = 1 + (pmid << 2);

        SOC_PBMP_PORT_ADD(pm_create_info.phys, first_port);
        SOC_PBMP_PORT_ADD(pm_create_info.phys, first_port+1);
        SOC_PBMP_PORT_ADD(pm_create_info.phys, first_port+2);
        SOC_PBMP_PORT_ADD(pm_create_info.phys, first_port+3);

        /* Identify the block for this particular port */
        found = 0;

        for(idx = 0; idx < SOC_DRIVER(unit)->port_num_blktype; idx++){
            blk = SOC_PORT_IDX_INFO(unit, first_port, idx).blk;
            if (SOC_BLOCK_INFO(unit, blk).type ==
                (soc_feature(unit, soc_feature_clport_gen2) ? SOC_BLK_CLG2PORT : SOC_BLK_CLPORT)){
                found = 1;
                break;
            }
        }

        if (!found) {
            rv = SOC_E_INTERNAL;
            break;
        }


        /* Init user_acc for phymod access struct */
        rv = portmod_default_user_access_t_init(unit,
                                                &(pm4x25_mv2_user_acc[unit][pmid]));
        if (PORTMOD_FAILURE(rv)) {
            break;
        }

        PORTMOD_USER_ACCESS_FW_LOAD_REVERSE_SET((&(pm4x25_mv2_user_acc[unit][pmid])));
        pm4x25_mv2_user_acc[unit][pmid].unit = unit;
        pm4x25_mv2_user_acc[unit][pmid].blk_id = blk;
        pm4x25_mv2_user_acc[unit][pmid].mutex = sal_mutex_create("core mutex");

        if (pm4x25_mv2_user_acc[unit][pmid].mutex == NULL) {
            rv = SOC_E_MEMORY;
            break;
        }

        /* Specific info for PM4x25 */
        rv = phymod_access_t_init(&pm_create_info.pm_specific_info.pm4x25.access);
        if (PORTMOD_FAILURE(rv)) {
            break;
        }

        pm_create_info.pm_specific_info.pm4x25.access.user_acc = &(pm4x25_mv2_user_acc[unit][pmid]);
        pm_create_info.pm_specific_info.pm4x25.access.addr     = _mv2_pm4x25_addr[pmid];
        pm_create_info.pm_specific_info.pm4x25.access.bus      = NULL; /* Use default bus */
        pm_create_info.pm_specific_info.pm4x25.rescal          = -1;
#if !defined (EXCLUDE_PHYMOD_TSCF_SIM) && defined (PHYMOD_TSCF_SUPPORT)
        rv = soc_physim_check_sim(unit, phymodDispatchTypeTscf,
                                  &(pm_create_info.pm_specific_info.pm4x25.access),
                                  0, &is_sim);
#else
        is_sim = 0;
#endif

        if (PORTMOD_FAILURE(rv)) {
            break;
        }

        if (is_sim) {
            pm_create_info.pm_specific_info.pm4x25.access.bus->bus_capabilities |=
                (PHYMOD_BUS_CAP_WR_MODIFY | PHYMOD_BUS_CAP_LANE_CTRL);

            /* Firmward loader : Don't allow FW load on sim enviroment */
            pm_create_info.pm_specific_info.pm4x25.fw_load_method =
                phymodFirmwareLoadMethodNone;
        } else {
            pm_create_info.pm_specific_info.pm4x25.fw_load_method =
                soc_property_suffix_num_get(unit, pmid,
                                            spn_LOAD_FIRMWARE, "quad",
                                            phymodFirmwareLoadMethodExternal);
            pm_create_info.pm_specific_info.pm4x25.fw_load_method &= 0xff;
        }

        /* Use default external loader if NULL */
        pm_create_info.pm_specific_info.pm4x25.external_fw_loader = NULL;

        /* Polarity */
        rv = phymod_polarity_t_init (&(pm_create_info.pm_specific_info.pm4x25.polarity));
        if (PORTMOD_FAILURE(rv)) {
            break;
        }

        for (lane = 0; lane < SOC_PM4X25_NUM_LANES; lane++) {
            phy = first_port+lane;

            logical_port = SOC_INFO(unit).port_p2l_mapping[phy];

            mv2_pm_port_polarity_get (unit, logical_port, phy, lane, &tx_polarity, &rx_polarity);

            pm_create_info.pm_specific_info.pm4x25.polarity.rx_polarity |= rx_polarity;
            pm_create_info.pm_specific_info.pm4x25.polarity.tx_polarity |= tx_polarity;
        }

        /* Lane map */
        rv = phymod_lane_map_t_init
            (&(pm_create_info.pm_specific_info.pm4x25.lane_map));
        if (PORTMOD_FAILURE(rv)) {
            break;
        }

        logical_port = SOC_INFO(unit).port_p2l_mapping[first_port];

        mv2_pm_port_lanemap_get (unit, logical_port, first_port, &txlane_map, &rxlane_map);       

        pm_create_info.pm_specific_info.pm4x25.lane_map.num_of_lanes = SOC_PM4X25_NUM_LANES;
        pm_create_info.pm_specific_info.pm4x25.core_num = pmid; 
        pm_create_info.pm_specific_info.pm4x25.core_num_int = 0;

        for(lane=0 ; lane<SOC_PM4X25_NUM_LANES; lane++) {

            pm_create_info.pm_specific_info.pm4x25.lane_map.lane_map_tx[lane] =
                (txlane_map >> (lane * SOC_PM4X25_NUM_LANES)) &
                SOC_PM4X25_LANE_MASK;

            pm_create_info.pm_specific_info.pm4x25.lane_map.lane_map_rx[lane] =
                (rxlane_map >> (lane * SOC_PM4X25_NUM_LANES)) &
                SOC_PM4X25_LANE_MASK;
        }

        ref_clk_prop = soc_property_port_get(unit, first_port,
                            spn_XGXS_LCPLL_XTAL_REFCLK, 156);


        if ((ref_clk_prop == 156) ||( ref_clk_prop == 1)) {
            pm_create_info.pm_specific_info.pm4x25.ref_clk = phymodRefClk156Mhz;
        } else if (ref_clk_prop == 125) {
            pm_create_info.pm_specific_info.pm4x25.ref_clk = phymodRefClk125Mhz;
        } else {
            LOG_ERROR(BSL_LS_SOC_PORT, (BSL_META_UP(unit, first_port,
                       "ERROR: This %d MHz clk freq is not supported.  Use 156MHz / 125MHz.\n"),ref_clk_prop));
            return SOC_E_PARAM ;
        }

        /* Add PM to PortMod */
        rv = portmod_port_macro_add(unit, &pm_create_info);
    }

    if (PORTMOD_FAILURE(rv)) {
        for (pmid=0; pmid < SOC_MV2_PM4X25_COUNT; pmid++) {
            if (pm4x25_mv2_user_acc[unit][pmid].mutex) {
                sal_mutex_destroy(pm4x25_mv2_user_acc[unit][pmid].mutex);
                pm4x25_mv2_user_acc[unit][pmid].mutex = NULL;
            }
        }
    }

    return rv;
#else /* PORTMOD_PM4X25_SUPPORT */
    return SOC_E_UNAVAIL;
#endif /* PORTMOD_PM4X25_SUPPORT */
}

#define MAVERICK2_FIRST_MGMT_PHYSICAL_PORT_NUM   81
/* #define MAVERICK2_SECOND_MGMT_PHYSICAL_PORT_NUM  131 */
STATIC int
_soc_mv2_portctrl_pm4x10_portmod_init(int unit, int second_mgmt_port)
{
#ifdef PORTMOD_PM4X10_SUPPORT
    int rv = SOC_E_NONE;
    portmod_pm_create_info_t pm_create_info;
    int pmid = 0, blk, is_sim, lane, phy, found, logical_port;
    int idx, ref_clk_prop;
    uint32 txlane_map = 0x3210, rxlane_map = 0x3210;
    uint32 tx_polarity, rx_polarity;
    uint8_t pPort[] = {MAVERICK2_FIRST_MGMT_PHYSICAL_PORT_NUM, 0 /* unused */} ; 

    /* Allocate user access for all PMs */
    SOC_IF_ERROR_RETURN (soc_esw_portctrl_pm_user_access_alloc(unit, 
                  SOC_MV2_PM4X10_COUNT, &pm4x10_mv2_user_acc[unit]));


    for (pmid = 0; PORTMOD_SUCCESS(rv) && (pmid < SOC_MV2_PM4X10_COUNT); pmid++) {

        rv = portmod_pm_create_info_t_init(unit, &pm_create_info);
        if (PORTMOD_FAILURE(rv)) {
            break;
        }

        pm_create_info.type         = portmodDispatchTypePm4x10;

        SOC_PBMP_PORT_ADD(pm_create_info.phys, pPort[0]); /* first mgmt port */
        SOC_PBMP_PORT_ADD(pm_create_info.phys, pPort[0]+1);
        SOC_PBMP_PORT_ADD(pm_create_info.phys, pPort[0]+2);
        SOC_PBMP_PORT_ADD(pm_create_info.phys, pPort[0]+3);
        if (second_mgmt_port) {
            SOC_PBMP_PORT_ADD(pm_create_info.phys, pPort[1]); /* second mgmt port */
        }

        /* Identify the block for this particular port */
        found = 0;

        for(idx = 0; idx < SOC_DRIVER(unit)->port_num_blktype; idx++){
            blk = SOC_PORT_IDX_INFO(unit, pPort[0], idx).blk;
            if (SOC_BLOCK_INFO(unit, blk).type == SOC_BLK_XLPORT){
                found = 1;
                break;
            }
        }

        if (!found) {
            rv = SOC_E_INTERNAL;
            break;
        }


        /* Init user_acc for phymod access struct */
        rv = portmod_default_user_access_t_init(unit,
                                                &(pm4x10_mv2_user_acc[unit][pmid]));
        if (PORTMOD_FAILURE(rv)) {
            break;
        }

        PORTMOD_USER_ACCESS_FW_LOAD_REVERSE_SET((&(pm4x10_mv2_user_acc[unit][pmid])));
        pm4x10_mv2_user_acc[unit][pmid].unit = unit;
        pm4x10_mv2_user_acc[unit][pmid].blk_id = blk;
        pm4x10_mv2_user_acc[unit][pmid].mutex = sal_mutex_create("core mutex");

        if (pm4x10_mv2_user_acc[unit][pmid].mutex == NULL) {
            rv = SOC_E_MEMORY;
            break;
        }

        /* Specific info for PM4x10 */
        rv = phymod_access_t_init(&pm_create_info.pm_specific_info.pm4x10.access);
        if (PORTMOD_FAILURE(rv)) {
            break;
        }

        pm_create_info.pm_specific_info.pm4x10.access.user_acc = &(pm4x10_mv2_user_acc[unit][pmid]);
        pm_create_info.pm_specific_info.pm4x10.access.addr     = _mv2_pm4x10_addr[pmid];
        pm_create_info.pm_specific_info.pm4x10.access.bus      = NULL; /* Use default bus */
        pm_create_info.pm_specific_info.pm4x10.rescal          = -1;
#if !defined (EXCLUDE_PHYMOD_TSCE_SIM) && defined (PHYMOD_TSCE_SUPPORT)
        rv = soc_physim_check_sim(unit, phymodDispatchTypeTsce,
                                  &(pm_create_info.pm_specific_info.pm4x10.access),
                                  0, &is_sim);
#else
        is_sim = 0;
#endif

        if (PORTMOD_FAILURE(rv)) {
            break;
        }

        if (is_sim) {
            pm_create_info.pm_specific_info.pm4x10.access.bus->bus_capabilities |=
                (PHYMOD_BUS_CAP_WR_MODIFY | PHYMOD_BUS_CAP_LANE_CTRL);

            /* Firmward loader : Don't allow FW load on sim enviroment */
            pm_create_info.pm_specific_info.pm4x10.fw_load_method =
                phymodFirmwareLoadMethodNone;
        } else {
            pm_create_info.pm_specific_info.pm4x10.fw_load_method =
                soc_property_suffix_num_get(unit, pmid,
                                            spn_LOAD_FIRMWARE, "quad",
                                            phymodFirmwareLoadMethodExternal);
            pm_create_info.pm_specific_info.pm4x10.fw_load_method &= 0xff;
        }

        /* Use default external loader if NULL */
        pm_create_info.pm_specific_info.pm4x10.external_fw_loader = NULL;

        /* Polarity */
        rv = phymod_polarity_t_init (&(pm_create_info.pm_specific_info.pm4x10.polarity));
        if (PORTMOD_FAILURE(rv)) {
            break;
        }

        for (lane = 0; lane < SOC_PM4X10_NUM_LANES; lane++) {

            if ((lane == 1) || (lane == 3)) continue;
            if ((lane == 2) && (!second_mgmt_port)) continue;

            if (lane > 1) {
                rv = SOC_E_INTERNAL;
                break;
            }
            
            phy = pPort[lane];

            logical_port = SOC_INFO(unit).port_p2l_mapping[phy];

            mv2_pm_port_polarity_get (unit, logical_port, phy, lane, &tx_polarity, &rx_polarity);

            pm_create_info.pm_specific_info.pm4x10.polarity.rx_polarity |= rx_polarity;
            pm_create_info.pm_specific_info.pm4x10.polarity.tx_polarity |= tx_polarity;
        }

        if (PORTMOD_FAILURE(rv)) {
            break;
        }

        /* Lane map */
        rv = phymod_lane_map_t_init
            (&(pm_create_info.pm_specific_info.pm4x10.lane_map));
        if (PORTMOD_FAILURE(rv)) {
            break;
        }

        logical_port = SOC_INFO(unit).port_p2l_mapping[pPort[0]];

        if (logical_port != -1) {
            mv2_pm_port_lanemap_get (unit, logical_port, pPort[0], &txlane_map, &rxlane_map);
        }

        pm_create_info.pm_specific_info.pm4x10.lane_map.num_of_lanes = SOC_PM4X10_NUM_LANES;
        pm_create_info.pm_specific_info.pm4x10.core_num = pmid; 
        pm_create_info.pm_specific_info.pm4x10.core_num_int = 0;

        for(lane=0 ; lane<SOC_PM4X10_NUM_LANES; lane++) {
            /*if ((lane == 1) || (lane == 3)) continue;    only 2 lanes connected
            if ((lane == 2) && (!second_mgmt_port)) continue;    lane 2 for mgmt only. **/

            pm_create_info.pm_specific_info.pm4x10.lane_map.lane_map_tx[lane] =
                (txlane_map >> (lane * SOC_PM4X10_NUM_LANES)) &
                SOC_PM4X10_LANE_MASK;

            pm_create_info.pm_specific_info.pm4x10.lane_map.lane_map_rx[lane] =
                (rxlane_map >> (lane * SOC_PM4X10_NUM_LANES)) &
                SOC_PM4X10_LANE_MASK;
        }

        ref_clk_prop = soc_property_port_get(unit, pPort[0],
                            spn_XGXS_LCPLL_XTAL_REFCLK, 156);


        if ((ref_clk_prop == 156) ||( ref_clk_prop == 1)) {
            pm_create_info.pm_specific_info.pm4x10.ref_clk = phymodRefClk156Mhz;
        } else if (ref_clk_prop == 125) {
            pm_create_info.pm_specific_info.pm4x10.ref_clk = phymodRefClk125Mhz;
        } else {
            LOG_ERROR(BSL_LS_SOC_PORT, (BSL_META_UP(unit, pPort[0],
                "ERROR: %d MHz clk not valid. Use 156/125 MHz.\n"),ref_clk_prop));
            return SOC_E_PARAM ;
        }

        /* shim code for Mgmt port doesn't support single port mode
         * As a WAR, set 4-lanes port as dual-port mode
         */
        logical_port = SOC_INFO(unit).port_p2l_mapping[pPort[0]];
        if (SOC_INFO(unit).port_num_lanes[logical_port] == 4) {
            pm_create_info.pm_specific_info.pm4x10.port_mode_aux_info = portmodModeInfoTwoDualModePorts;
        }

        /* Add PM to PortMod */
        rv = portmod_port_macro_add(unit, &pm_create_info);
    }

    if (PORTMOD_FAILURE(rv)) {
        for (pmid=0; pmid < SOC_MV2_PM4X10_COUNT; pmid++) {
            if (pm4x10_mv2_user_acc[unit][pmid].mutex) {
                sal_mutex_destroy(pm4x10_mv2_user_acc[unit][pmid].mutex);
                pm4x10_mv2_user_acc[unit][pmid].mutex = NULL;
            }
        }
    }

    return rv;
#else /* PORTMOD_PM4X10_SUPPORT */
    return SOC_E_UNAVAIL;
#endif /* PORTMOD_PM4X10_SUPPORT */
}

/*
 * Function:
 *      soc_mv2_portctrl_pm_portmod_init
 * Purpose:
 *      Initialize PortMod and PortMacro for Trident2Plus
 *      Add port macros (PM) to the unit's PortMod Manager (PMM).
 * Parameters:
 *      unit             - (IN) Unit number.
 * Returns:
 *      SOC_E_XXX
 */
int
soc_mv2_portctrl_pm_portmod_init(int unit)
{
    int    rv = SOC_E_NONE;
    uint32 flags = 0, mgmt_port_count = 0;

    /*
     * If portmod was create - destroy and create again
     * Better way would be to create once and leave it.
     */
    if (SOC_E_NONE == soc_esw_portctrl_init_check(unit)) {
        SOC_IF_ERROR_RETURN(portmod_destroy(unit));
    }

    PORTMOD_CREATE_F_PM_NULL_SET(flags);

    SOC_IF_ERROR_RETURN
        (portmod_create(unit, flags, SOC_MAX_NUM_PORTS, SOC_MV2_MAX_PHYS, 
                         sizeof(mv2_pm_types)/sizeof(portmod_pm_instances_t), mv2_pm_types));

    SOC_PBMP_COUNT(SOC_INFO(unit).management_pbm, mgmt_port_count);

    rv = _soc_mv2_portctrl_pm4x25_portmod_init (unit, (mgmt_port_count == 2) ? 1 : 0);
    if (rv) return (rv);

    return(_soc_mv2_portctrl_pm4x10_portmod_init (unit, (mgmt_port_count == 2) ? 1 : 0));
}

/*
 * Function:
 *      soc_mv2_portctrl_pm_portmod_deinit
 * Purpose:
 *      Deinitialize PortMod and PortMacro for Trident2Plus.
 *      Free pm user access data.
 * Parameters:
 *      unit      - (IN) Unit number.
 * Returns:
 *      SOC_E_NONE
 */
int
soc_mv2_portctrl_pm_portmod_deinit(int unit)
{
    if (SOC_E_INIT == soc_esw_portctrl_init_check(unit)) {
        return SOC_E_NONE;
    }

    /* Free PMs structures */
#ifdef PORTMOD_PM4X25_SUPPORT
    if (pm4x25_mv2_user_acc[unit] != NULL) {
        sal_free(pm4x25_mv2_user_acc[unit]);
        pm4x25_mv2_user_acc[unit] = NULL;
    }
#endif /* PORTMOD_PM4X25_SUPPORT */

#ifdef PORTMOD_PM4X10_SUPPORT
    if (pm4x10_mv2_user_acc[unit] != NULL) {
        sal_free(pm4x10_mv2_user_acc[unit]);
        pm4x10_mv2_user_acc[unit] = NULL;
    }
#endif /* PORTMOD_PM4X10_SUPPORT */

    SOC_IF_ERROR_RETURN(portmod_destroy(unit));

    return SOC_E_NONE;
}

int
soc_mv2_portctrl_pm_port_config_get(int unit, soc_port_t port, void *port_config)
{
#ifdef PORTMOD_PM4X25_SUPPORT
    int rv = SOC_E_NONE;
    int pmid = 0, lane, phy, phy_port, logical_port;
    int first_port = 0, core_num, core_count = 0, core_index, is_sim, type;
    uint32 txlane_map, rxlane_map, i;
    uint32 tx_polarity, rx_polarity;
    portmod_port_init_config_t *port_config_info;
    phymod_firmware_load_method_t fw_load_method;
    phymod_polarity_t polarity; /**< Lanes Polarity */
    phymod_lane_map_t lane_map;

    port_config_info = (portmod_port_init_config_t *)port_config;

    phy = SOC_INFO(unit).port_l2p_mapping[port];

    /* Find the port belong to which PM. The port has its own core id, using it to compare PM. */
    core_num = (phy - 1) / SOC_PM4X25_NUM_LANES;

    for (i=0; i<SOC_MV2_PM4X25_COUNT; i++) {
        if (core_num == i) {
            type   = portmodDispatchTypePm4x25;
            pmid = i;
            first_port = 1 + (pmid << 2);
            core_count = 1;
            break;
        }
    }
    /* When port dones't find PM4x25, find PM4x10 again. */
    if (i == SOC_MV2_PM4X25_COUNT) {
        for (i=0; i<SOC_MV2_PM4X10_COUNT; i++) {
            if (core_num == (31+i)) {
                type = portmodDispatchTypePm4x10;
                pmid = i;
                core_count = 1;
                first_port = 128 + pmid;
                break;
            }
        }
    }

    for (core_index = 0; core_index < core_count; core_index++) {
        fw_load_method = phymodFirmwareLoadMethodExternal;

        soc_physim_enable_get(unit, &is_sim);

        if (is_sim) {
            /* Firmward loader : Don't allow FW load on sim enviroment */
            fw_load_method = phymodFirmwareLoadMethodNone;
        } else {
            fw_load_method = soc_property_suffix_num_get(unit, pmid,
                                            spn_LOAD_FIRMWARE, "quad",
                                            phymodFirmwareLoadMethodExternal);
            fw_load_method &= 0xff;
        }

        rv = phymod_polarity_t_init(&polarity);
        if (PORTMOD_FAILURE(rv)) {
            break;
        }

        /* Polarity */
        for (lane = 0; lane < SOC_PM4X25_NUM_LANES; lane++) {
            phy_port = first_port + lane + (core_index*4);
            logical_port = SOC_INFO(unit).port_p2l_mapping[phy_port];
        
            mv2_pm_port_polarity_get (unit, logical_port, phy_port, lane, &tx_polarity, &rx_polarity);

            polarity.rx_polarity |= rx_polarity;
            polarity.tx_polarity |= tx_polarity;
        }

        /* Lane map */
        rv = phymod_lane_map_t_init(&lane_map);
        if (PORTMOD_FAILURE(rv)) {
            break;
        }

        phy_port = first_port + (core_index*4);
        logical_port = SOC_INFO(unit).port_p2l_mapping[phy_port];

        mv2_pm_port_lanemap_get (unit, logical_port, first_port, &txlane_map, &rxlane_map);       

        lane_map.num_of_lanes = (type == portmodDispatchTypePm4x25) ?
                                 SOC_PM4X25_NUM_LANES : SOC_PM4X10_NUM_LANES;

        for(lane = 0 ; lane < lane_map.num_of_lanes; lane++) {
            lane_map.lane_map_tx[lane] =
                (txlane_map >> (lane * lane_map.num_of_lanes)) &
                SOC_PM4X25_LANE_MASK;
            lane_map.lane_map_rx[lane] =
                (rxlane_map >> (lane * lane_map.num_of_lanes)) &
                SOC_PM4X25_LANE_MASK;
        }

        sal_memcpy(&port_config_info->fw_load_method[core_index], &fw_load_method,
                    sizeof(phymod_firmware_load_method_t));
        port_config_info->fw_load_method_overwrite = 1;
        sal_memcpy(&port_config_info->polarity[core_index], &polarity,
                    sizeof(phymod_polarity_t));
        port_config_info->polarity_overwrite = 1;
        sal_memcpy(&port_config_info->lane_map[core_index], &lane_map,
                    sizeof(phymod_lane_map_t));
        port_config_info->lane_map_overwrite = 1;
    }

    return rv;
#else /* PORTMOD_PM4X25_SUPPORT */
    return SOC_E_UNAVAIL;
#endif /* PORTMOD_PM4X25_SUPPORT */
}

int
soc_mv2_portctrl_pm_port_phyaddr_get(int unit, soc_port_t port)
{
    int phy, core_index;
    uint32 pmid;

    phy = SOC_INFO(unit).port_l2p_mapping[port];

    /* Find the port belong to which PM. The port has its own core id, using it to compare PM. */
    core_index = (phy - 1) / SOC_PM4X25_NUM_LANES;

#ifdef PORTMOD_PM4X25_SUPPORT
    /* When port dones't find PM4x10, find PM4x25 again. */
    for (pmid=0; pmid<SOC_MV2_PM4X25_COUNT; pmid++) {
        if (core_index == pmid) {
            return _mv2_pm4x25_addr[pmid];
        }
    }
#endif /* PORTMOD_PM4X25_SUPPORT */

#ifdef PORTMOD_PM4X10_SUPPORT
    for (pmid=0; pmid<SOC_MV2_PM4X10_COUNT; pmid++) {
        if (core_index == (31+pmid)) {
            return _mv2_pm4x10_addr[pmid];
        }
    }
#endif /* PORTMOD_PM4X10_SUPPORT */
    return -1;
}

#define _MV2_PHY_PORT_MNG0              129
int
soc_mv2_portctrl_pm_type_get(int unit, soc_port_t phy_port, int* pm_type)
{
    *pm_type = -1;

    if (phy_port >= 1 && phy_port <= 128) {
#ifdef PORTMOD_PM4X25_SUPPORT
        *pm_type = portmodDispatchTypePm4x25;
        return (SOC_E_NONE);
#endif
    } else if (phy_port == _MV2_PHY_PORT_MNG0) {
#ifdef PORTMOD_PM4X10_SUPPORT
        *pm_type = portmodDispatchTypePm4x10;
        return (SOC_E_NONE);
#endif
    } else {
        return(SOC_E_PARAM);
    }

    return SOC_E_UNAVAIL;
}

STATIC int
_soc_mv2_portctrl_port_ability_update(int unit, soc_port_t port, soc_port_ability_t *ability)
{
    uint32 max_lane_speed = 0;

    if (!soc_feature(unit, soc_feature_untethered_otp)) {
        return SOC_E_NONE;
    }

    SHR_BITCOPY_RANGE(&max_lane_speed, 0, SOC_BOND_INFO(unit)->tsc_max_speed,
                      SOC_INFO(unit).port_serdes[port] * 2, 2);

    /* Each PM4x25 TSC has two bit.
     * 00= no restrcition, 01= 27.9525G, 10=10.9375G, 11=reserved
     */
    if (max_lane_speed == 2) {
        ability->speed_full_duplex &= (SOC_PA_SPEED_1000MB | SOC_PA_SPEED_10GB |
                                       SOC_PA_SPEED_11GB);
    }
    return SOC_E_NONE;
}

soc_portctrl_functions_t soc_mv2_portctrl_func = {
    soc_mv2_portctrl_pm_portmod_init,
    soc_mv2_portctrl_pm_portmod_deinit,
    soc_mv2_portctrl_pm_port_config_get,
    soc_mv2_portctrl_pm_port_phyaddr_get,
    _soc_mv2_portctrl_port_ability_update,
    soc_mv2_portctrl_pm_type_get,
    NULL,
    NULL
};

#endif /* BCM_MAVERICK2_SUPPORT */
