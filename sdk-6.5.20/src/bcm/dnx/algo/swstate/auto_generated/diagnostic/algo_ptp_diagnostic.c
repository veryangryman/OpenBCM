/** \file algo/swstate/auto_generated/diagnostic/algo_ptp_diagnostic.c
 *
 * sw state functions definitions
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifdef BSL_LOG_MODULE
#error "BSL_LOG_MODULE redefined"
#endif
#define BSL_LOG_MODULE BSL_LS_SWSTATEDNX_GENERAL

#include <soc/dnxc/swstate/dnxc_sw_state_c_includes.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/algo_ptp_diagnostic.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
/*
 * Global Variables
 */

extern algo_ptp_sw_state_t * algo_ptp_db_data[SOC_MAX_NUM_DEVICES];
/*
 * FUNCTIONs
 */

/*
 *
 * dump function for the variable algo_ptp_db
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_ptp_db_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;
    SHR_IF_ERR_EXIT(algo_ptp_db_ptp_port_profile_dump(unit, filters));
    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable ptp_port_profile
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_ptp_db_ptp_port_profile_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_ptp ptp_port_profile") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_ptp ptp_port_profile\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_ptp_db/ptp_port_profile.txt",
            "algo_ptp_db[%d]->","((algo_ptp_sw_state_t*)sw_state_roots_array[%d][ALGO_PTP_MODULE_ID])->","ptp_port_profile: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_ptp_sw_state_t*)sw_state_roots_array[unit][ALGO_PTP_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_ptp_db[%d]->","((algo_ptp_sw_state_t*)sw_state_roots_array[%d][ALGO_PTP_MODULE_ID])->","ptp_port_profile: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_PTP_MODULE_ID,
            &((algo_ptp_sw_state_t*)sw_state_roots_array[unit][ALGO_PTP_MODULE_ID])->ptp_port_profile,
            dnx_algo_ptp_tm_port_profile_print_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 * Global Variables
 */

dnx_sw_state_diagnostic_info_t algo_ptp_db_info[SOC_MAX_NUM_DEVICES][ALGO_PTP_DB_INFO_NOF_ENTRIES];
const char* algo_ptp_db_layout_str[ALGO_PTP_DB_INFO_NOF_ENTRIES] = {
    "ALGO_PTP_DB~",
    "ALGO_PTP_DB~PTP_PORT_PROFILE~",
};
#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE
