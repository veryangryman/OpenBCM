/** \file algo/swstate/auto_generated/access/ingress_compensation_access.c
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
#include <bcm_int/dnx/algo/swstate/auto_generated/access/ingress_compensation_access.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_device.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/ingress_compensation_diagnostic.h>
/*
 * Global Variables
 */

/* dummy variable for gdb to know this type */
dnx_ingress_compensation_db_t* dnx_ingress_compensation_db_dummy = NULL;
/*
 * FUNCTIONs
 */

/*
 *
 * is_init function for the variable dnx_ingress_compensation_db
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_compensation_db_is_init(int unit, uint8 *is_init)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        SW_STATE_FUNC_IS_INIT,
        DNXC_SW_STATE_NO_FLAGS);

    *is_init = (NULL != ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID]));
    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_IS_INIT_LOGGING,
        BSL_LS_SWSTATEDNX_ISINIT,
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID]),
        "dnx_ingress_compensation_db[%d]",
        unit);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * init function for the variable dnx_ingress_compensation_db
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_compensation_db_init(int unit)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        SW_STATE_FUNC_INIT,
        DNXC_SW_STATE_NO_FLAGS);

    DNX_SW_STATE_MODULE_INIT(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        DNXC_SW_STATE_IMPLEMENTATION_WB,
        dnx_ingress_compensation_db_t,
        DNXC_SW_STATE_AUTO_GENERATED_ALLOCATION,
        "dnx_ingress_compensation_db_init");

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_INIT_LOGGING,
        BSL_LS_SWSTATEDNX_INIT,
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID]),
        "dnx_ingress_compensation_db[%d]",
        unit);

    DNX_SW_STATE_DIAG_INFO_UPDATE(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        dnx_ingress_compensation_db_info,
        DNX_INGRESS_COMPENSATION_DB_INFO,
        DNX_SW_STATE_DIAG_ALLOC,
        sizeof(dnx_ingress_compensation_db_t),
        NULL);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * set function for the variable compensation
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_compensation_db_compensation_set(int unit, uint32 compensation_idx_0, dnx_algo_template_t compensation)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        SW_STATE_FUNC_SET,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID]);

    DNX_SW_STATE_OOB_DYNAMIC_ARRAY_CHECK(
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation,
        compensation_idx_0);

    DNX_SW_STATE_PTR_NULL_CHECK(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        INGRESS_COMPENSATION_MODULE_ID);

    DNX_SW_STATE_SET(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation[compensation_idx_0],
        compensation,
        dnx_algo_template_t,
        0,
        "dnx_ingress_compensation_db_compensation_set");

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_SET_LOGGING,
        BSL_LS_SWSTATEDNX_SET,
        INGRESS_COMPENSATION_MODULE_ID,
        &compensation,
        "dnx_ingress_compensation_db[%d]->compensation[%d]",
        unit, compensation_idx_0);

    DNX_SW_STATE_DIAG_INFO_POST(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        dnx_ingress_compensation_db_info,
        DNX_INGRESS_COMPENSATION_DB_COMPENSATION_INFO,
        DNX_SW_STATE_DIAG_MODIFY,
        NULL);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * get function for the variable compensation
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_compensation_db_compensation_get(int unit, uint32 compensation_idx_0, dnx_algo_template_t *compensation)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        SW_STATE_FUNC_GET,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID]);

    DNX_SW_STATE_OOB_DYNAMIC_ARRAY_CHECK(
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation,
        compensation_idx_0);

    DNX_SW_STATE_PTR_NULL_CHECK(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        compensation);

    DNX_SW_STATE_PTR_NULL_CHECK(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        INGRESS_COMPENSATION_MODULE_ID);

    *compensation = ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation[compensation_idx_0];
    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_GET_LOGGING,
        BSL_LS_SWSTATEDNX_GET,
        INGRESS_COMPENSATION_MODULE_ID,
        &((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation[compensation_idx_0],
        "dnx_ingress_compensation_db[%d]->compensation[%d]",
        unit, compensation_idx_0);

    DNX_SW_STATE_DIAG_INFO_POST(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        dnx_ingress_compensation_db_info,
        DNX_INGRESS_COMPENSATION_DB_COMPENSATION_INFO,
        DNX_SW_STATE_DIAG_READ,
        NULL);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * alloc function for the variable compensation
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_compensation_db_compensation_alloc(int unit)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        SW_STATE_FUNC_ALLOC,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        INGRESS_COMPENSATION_MODULE_ID);

    DNX_SW_STATE_ALLOC(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation,
        dnx_algo_template_t,
        dnx_data_device.general.nof_cores_get(unit),
        DNXC_SW_STATE_DNX_DATA_ALLOC | DNXC_SW_STATE_AUTO_GENERATED_ALLOCATION,
        "dnx_ingress_compensation_db_compensation_alloc");

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_ALLOC_LOGGING,
        BSL_LS_SWSTATEDNX_ALLOC,
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation,
        "dnx_ingress_compensation_db[%d]->compensation",
        unit,
        dnx_data_device.general.nof_cores_get(unit) * sizeof(dnx_algo_template_t) / sizeof(*((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation));

    DNX_SW_STATE_DIAG_INFO_POST(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        dnx_ingress_compensation_db_info,
        DNX_INGRESS_COMPENSATION_DB_COMPENSATION_INFO,
        DNX_SW_STATE_DIAG_ALLOC,
        NULL);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * create function for the variable compensation
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_compensation_db_compensation_create(int unit, uint32 compensation_idx_0, dnx_algo_template_create_data_t * data, void *extra_arguments)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        SW_STATE_FUNC_CREATE,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID]);

    DNX_SW_STATE_PTR_NULL_CHECK(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        INGRESS_COMPENSATION_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_CREATE(
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation[compensation_idx_0],
        data,
        extra_arguments,
        DNXC_SW_STATE_AUTO_GENERATED_ALLOCATION);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_CREATE_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGRCREATE,
        INGRESS_COMPENSATION_MODULE_ID,
        &((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation[compensation_idx_0],
        "dnx_ingress_compensation_db[%d]->compensation[%d]",
        unit, compensation_idx_0);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        dnx_ingress_compensation_db_info,
        DNX_INGRESS_COMPENSATION_DB_COMPENSATION_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_AUTO_GENERATED_ALLOCATION);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * exchange function for the variable compensation
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_compensation_db_compensation_exchange(int unit, uint32 compensation_idx_0, uint32 flags, const int *profile_data, int old_profile, const void *extra_arguments, int *new_profile, uint8 *first_reference, uint8 *last_reference)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        SW_STATE_FUNC_EXCHANGE,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID]);

    DNX_SW_STATE_PTR_NULL_CHECK(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        INGRESS_COMPENSATION_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_EXCHANGE(
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation[compensation_idx_0],
        flags,
        profile_data,
        old_profile,
        extra_arguments,
        new_profile,
        first_reference,
        last_reference);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_EXCHANGE_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGREXCHANGE,
        INGRESS_COMPENSATION_MODULE_ID,
        &((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation[compensation_idx_0],
        "dnx_ingress_compensation_db[%d]->compensation[%d]",
        unit, compensation_idx_0);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        dnx_ingress_compensation_db_info,
        DNX_INGRESS_COMPENSATION_DB_COMPENSATION_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * replace_data function for the variable compensation
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_compensation_db_compensation_replace_data(int unit, uint32 compensation_idx_0, int profile, const int *new_profile_data)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        SW_STATE_FUNC_REPLACE_DATA,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID]);

    DNX_SW_STATE_PTR_NULL_CHECK(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        INGRESS_COMPENSATION_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_REPLACE_DATA(
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation[compensation_idx_0],
        profile,
        new_profile_data);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_REPLACE_DATA_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGRREPLACE_DATA,
        INGRESS_COMPENSATION_MODULE_ID,
        &((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation[compensation_idx_0],
        "dnx_ingress_compensation_db[%d]->compensation[%d]",
        unit, compensation_idx_0);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        dnx_ingress_compensation_db_info,
        DNX_INGRESS_COMPENSATION_DB_COMPENSATION_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * profile_data_get function for the variable compensation
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_compensation_db_compensation_profile_data_get(int unit, uint32 compensation_idx_0, int profile, int *ref_count, int *profile_data)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        SW_STATE_FUNC_PROFILE_DATA_GET,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID]);

    DNX_SW_STATE_PTR_NULL_CHECK(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        INGRESS_COMPENSATION_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_PROFILE_DATA_GET(
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation[compensation_idx_0],
        profile,
        ref_count,
        profile_data);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_PROFILE_DATA_GET_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGRPROFILE_DATA_GET,
        INGRESS_COMPENSATION_MODULE_ID,
        &((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation[compensation_idx_0],
        "dnx_ingress_compensation_db[%d]->compensation[%d]",
        unit, compensation_idx_0);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        dnx_ingress_compensation_db_info,
        DNX_INGRESS_COMPENSATION_DB_COMPENSATION_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * profile_get function for the variable compensation
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_compensation_db_compensation_profile_get(int unit, uint32 compensation_idx_0, const int *profile_data, int *profile)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        SW_STATE_FUNC_PROFILE_GET,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID]);

    DNX_SW_STATE_PTR_NULL_CHECK(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        INGRESS_COMPENSATION_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_PROFILE_GET(
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation[compensation_idx_0],
        profile_data,
        profile);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_PROFILE_GET_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGRPROFILE_GET,
        INGRESS_COMPENSATION_MODULE_ID,
        &((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation[compensation_idx_0],
        "dnx_ingress_compensation_db[%d]->compensation[%d]",
        unit, compensation_idx_0);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        dnx_ingress_compensation_db_info,
        DNX_INGRESS_COMPENSATION_DB_COMPENSATION_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * get_next function for the variable compensation
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_compensation_db_compensation_get_next(int unit, uint32 compensation_idx_0, int *current_profile)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        SW_STATE_FUNC_GET_NEXT,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID]);

    DNX_SW_STATE_PTR_NULL_CHECK(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        INGRESS_COMPENSATION_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_GET_NEXT(
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation[compensation_idx_0],
        current_profile);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_GET_NEXT_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGRGET_NEXT,
        INGRESS_COMPENSATION_MODULE_ID,
        &((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation[compensation_idx_0],
        "dnx_ingress_compensation_db[%d]->compensation[%d]",
        unit, compensation_idx_0);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        dnx_ingress_compensation_db_info,
        DNX_INGRESS_COMPENSATION_DB_COMPENSATION_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump_info_get function for the variable compensation
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
dnx_ingress_compensation_db_compensation_dump_info_get(int unit, uint32 compensation_idx_0, dnx_algo_template_dump_data_t * info)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        SW_STATE_FUNC_DUMP_INFO_GET,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID]);

    DNX_SW_STATE_PTR_NULL_CHECK(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        INGRESS_COMPENSATION_MODULE_ID);

    DNX_ALGO_TEMP_MNGR_DUMP_INFO_GET(
        INGRESS_COMPENSATION_MODULE_ID,
        ((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation[compensation_idx_0],
        info);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_TEMP_MNGR_DUMP_INFO_GET_LOGGING,
        BSL_LS_SWSTATEDNX_TEMP_MNGRDUMP_INFO_GET,
        INGRESS_COMPENSATION_MODULE_ID,
        &((dnx_ingress_compensation_db_t*)sw_state_roots_array[unit][INGRESS_COMPENSATION_MODULE_ID])->compensation[compensation_idx_0],
        "dnx_ingress_compensation_db[%d]->compensation[%d]",
        unit, compensation_idx_0);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        INGRESS_COMPENSATION_MODULE_ID,
        dnx_ingress_compensation_db_info,
        DNX_INGRESS_COMPENSATION_DB_COMPENSATION_INFO,
        DNX_SW_STATE_DIAG_TEMP_MNGR,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 * Global Variables
 */

dnx_ingress_compensation_db_cbs dnx_ingress_compensation_db = 	{
	
	dnx_ingress_compensation_db_is_init,
	dnx_ingress_compensation_db_init,
		{
		
		dnx_ingress_compensation_db_compensation_set,
		dnx_ingress_compensation_db_compensation_get,
		dnx_ingress_compensation_db_compensation_alloc,
		dnx_ingress_compensation_db_compensation_create,
		dnx_ingress_compensation_db_compensation_exchange,
		dnx_ingress_compensation_db_compensation_replace_data,
		dnx_ingress_compensation_db_compensation_profile_data_get,
		dnx_ingress_compensation_db_compensation_profile_get,
		dnx_ingress_compensation_db_compensation_get_next,
		dnx_ingress_compensation_db_compensation_dump_info_get}
	}
;
#undef BSL_LOG_MODULE
