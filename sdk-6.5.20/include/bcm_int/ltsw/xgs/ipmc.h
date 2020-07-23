/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMINT_LTSW_XGS_IPMC_H
#define BCMINT_LTSW_XGS_IPMC_H

#include <bcm/ipmc.h>
#include <bcm/types.h>

#include <bcm_int/ltsw/ipmc_int.h>

#include <sal/sal_types.h>

/*!
 * \brief Initialize IPMC module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_ipmc_init(int unit);

/*!
 * \brief De-initialize IPMC module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_ipmc_detach(int unit);

/*!
 * \brief Get the public info of IPMC module.
 *
 * \param [in] unit Unit Number.
 * \param [out] mc_pub Returned mc public info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_ipmc_pub_info_get(
    int unit,
    bcmint_ipmc_pub_info_t *mc_pub);

/*!
 * \brief Add an IPMC entry for L2 domain.
 *
 * \param [in] unit Unit Number.
 * \param [in] data IPMC entry information.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_ipmc_add_l2(
    int unit,
    bcm_ipmc_addr_t *data);

/*!
 * \brief Remove an IPMC entry for L2 domain.
 *
 * \param [in] unit Unit Number.
 * \param [in] data IPMC entry information.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_ipmc_remove_l2(
    int unit,
    bcm_ipmc_addr_t *data);

/*!
 * \brief Get an IPMC entry for L2 domain.
 *
 * \param [in] unit Unit Number.
 * \param [in] data IPMC entry information.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_ipmc_find_l2(
    int unit,
    bcm_ipmc_addr_t *data);

/*!
 * \brief Traverse valid IPMC entry for L2 domain.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags BCM_IPMC_XXX flags.
 * \param [in] cb User callback function, called once per IPMC entry for L2 domain.
 * \param [in] user_data Cookie.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_ipmc_traverse_l2(
    int unit,
    uint32_t flags,
    bcm_ipmc_traverse_cb cb,
    void *user_data);

/*!
 * \brief Delete all IPMC entry for L2 domain.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_ipmc_delete_all_l2(int unit);

/*!
 * \brief Enable/disable IPMC support.
 *
 * \param [in] unit Unit Number.
 * \param [in] enable 1: enable IPMC support. 0: disable IPMC support.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_ipmc_enable(
    int unit,
    int enable);

/*!
 * \brief Config the egress IP multicast Configuration Register.
 *
 * \param [in] unit Unit Number.
 * \param [in] port port to config.
 * \param [in] mac MAC address.
 * \param [in] untag 1: The IP multicast packet is transmitted as untagged packet. 0: The IP multicast packet is transmitted as tagged packet with VLAN tag vid.
 * \param [in] vid VLAN ID.
 * \param [in] ttl_thresh Drop IPMC packets if TTL of IP packet <= ttl_thresh.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_ipmc_egress_port_set(
    int unit,
    bcm_port_t port,
    const bcm_mac_t mac,
    int untag,
    bcm_vlan_t vid,
    int ttl_thresh);

/*!
 * \brief Get the egress IP multicast Configuration Register.
 *
 * \param [in] unit Unit Number.
 * \param [in] port port to config.
 * \param [out] mac MAC address.
 * \param [out] untag 1: The IP multicast packet is transmitted as untagged packet. 0: The IP multicast packet is transmitted as tagged packet with VLAN tag vid.
 * \param [out] vid VLAN ID.
 * \param [out] ttl_thresh Drop IPMC packets if TTL of IP packet <= ttl_thresh.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_ipmc_egress_port_get(
    int unit,
    bcm_port_t port,
    bcm_mac_t mac,
    int *untag,
    bcm_vlan_t *vid,
    int *ttl_thresh);

#endif /* BCMINT_LTSW_XGS_IPMC_H */
