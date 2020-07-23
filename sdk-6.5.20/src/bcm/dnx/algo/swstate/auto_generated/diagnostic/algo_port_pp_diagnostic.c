/** \file algo/swstate/auto_generated/diagnostic/algo_port_pp_diagnostic.c
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
#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/algo_port_pp_diagnostic.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_device.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_port.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
/*
 * Global Variables
 */

extern algo_port_pp_sw_state_t * algo_port_pp_db_data[SOC_MAX_NUM_DEVICES];
/*
 * FUNCTIONs
 */

/*
 *
 * dump function for the variable algo_port_pp_db
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_port_pp_db_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;
    SHR_IF_ERR_EXIT(algo_port_pp_db_esem_default_result_profile_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_port_pp_db_port_pp_tpid_profile_ingress_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_port_pp_db_port_pp_tpid_profile_egress_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_port_pp_db_egress_acceptable_frame_type_profile_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_port_pp_db_egress_pp_port_sit_profile_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_port_pp_db_pp_port_lb_profile_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_port_pp_db_force_forward_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_port_pp_db_esem_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_port_pp_db_recycle_app_dump(unit, -1, -1, filters));
    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable esem_default_result_profile
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_port_pp_db_esem_default_result_profile_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_port_pp esem_default_result_profile") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_port_pp esem_default_result_profile\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_port_pp_db/esem_default_result_profile.txt",
            "algo_port_pp_db[%d]->","((algo_port_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_PORT_PP_MODULE_ID])->","esem_default_result_profile: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_port_pp_db[%d]->","((algo_port_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_PORT_PP_MODULE_ID])->","esem_default_result_profile: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            ALGO_PORT_PP_MODULE_ID,
            &((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->esem_default_result_profile);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable port_pp_tpid_profile_ingress
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_port_pp_db_port_pp_tpid_profile_ingress_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_port_pp port_pp_tpid_profile_ingress") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_port_pp port_pp_tpid_profile_ingress\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_port_pp_db/port_pp_tpid_profile_ingress.txt",
            "algo_port_pp_db[%d]->","((algo_port_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_PORT_PP_MODULE_ID])->","port_pp_tpid_profile_ingress: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_port_pp_db[%d]->","((algo_port_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_PORT_PP_MODULE_ID])->","port_pp_tpid_profile_ingress: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_PORT_PP_MODULE_ID,
            &((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->port_pp_tpid_profile_ingress,
            dnx_algo_port_tpid_print_ingress_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable port_pp_tpid_profile_egress
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_port_pp_db_port_pp_tpid_profile_egress_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_port_pp port_pp_tpid_profile_egress") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_port_pp port_pp_tpid_profile_egress\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_port_pp_db/port_pp_tpid_profile_egress.txt",
            "algo_port_pp_db[%d]->","((algo_port_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_PORT_PP_MODULE_ID])->","port_pp_tpid_profile_egress: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_port_pp_db[%d]->","((algo_port_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_PORT_PP_MODULE_ID])->","port_pp_tpid_profile_egress: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_PORT_PP_MODULE_ID,
            &((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->port_pp_tpid_profile_egress,
            dnx_algo_port_tpid_print_egress_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable egress_acceptable_frame_type_profile
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_port_pp_db_egress_acceptable_frame_type_profile_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_port_pp egress_acceptable_frame_type_profile") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_port_pp egress_acceptable_frame_type_profile\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_port_pp_db/egress_acceptable_frame_type_profile.txt",
            "algo_port_pp_db[%d]->","((algo_port_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_PORT_PP_MODULE_ID])->","egress_acceptable_frame_type_profile: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_port_pp_db[%d]->","((algo_port_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_PORT_PP_MODULE_ID])->","egress_acceptable_frame_type_profile: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_PORT_PP_MODULE_ID,
            &((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->egress_acceptable_frame_type_profile,
            dnx_algo_egress_acceptable_frame_type_profile_template_print_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable egress_pp_port_sit_profile
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_port_pp_db_egress_pp_port_sit_profile_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_port_pp egress_pp_port_sit_profile") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_port_pp egress_pp_port_sit_profile\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_port_pp_db/egress_pp_port_sit_profile.txt",
            "algo_port_pp_db[%d]->","((algo_port_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_PORT_PP_MODULE_ID])->","egress_pp_port_sit_profile: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_port_pp_db[%d]->","((algo_port_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_PORT_PP_MODULE_ID])->","egress_pp_port_sit_profile: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_PORT_PP_MODULE_ID,
            &((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->egress_pp_port_sit_profile,
            dnx_algo_egress_sit_profile_template_print_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable pp_port_lb_profile
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_port_pp_db_pp_port_lb_profile_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_port_pp pp_port_lb_profile") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_port_pp pp_port_lb_profile\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_port_pp_db/pp_port_lb_profile.txt",
            "algo_port_pp_db[%d]->","((algo_port_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_PORT_PP_MODULE_ID])->","pp_port_lb_profile: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_port_pp_db[%d]->","((algo_port_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_PORT_PP_MODULE_ID])->","pp_port_lb_profile: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_PORT_PP_MODULE_ID,
            &((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->pp_port_lb_profile,
            dnx_algo_pp_port_lb_profile_print_entry_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable force_forward
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_port_pp_db_force_forward_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;
    SHR_IF_ERR_EXIT(algo_port_pp_db_force_forward_mngr_dump(unit, -1, filters));
    SHR_IF_ERR_EXIT(algo_port_pp_db_force_forward_trap_id_dump(unit, -1, -1, filters));
    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable mngr
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_port_pp_db_force_forward_mngr_dump(int  unit,  int  mngr_idx_0,  dnx_sw_state_dump_filters_t  filters)
{
    int i0 = mngr_idx_0, I0 = mngr_idx_0 + 1;
    char *s0 = "";
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_port_pp force_forward mngr") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_port_pp force_forward mngr\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_port_pp_db/force_forward/mngr.txt",
            "algo_port_pp_db[%d]->","((algo_port_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_PORT_PP_MODULE_ID])->","force_forward.mngr[]: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID]));

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->force_forward.mngr);

        if (i0 == -1) {
            I0 = dnx_sw_state_get_nof_elements(unit,
                ALGO_PORT_PP_MODULE_ID,
                ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->force_forward.mngr);
            i0 = dnx_sw_state_dump_check_all_the_same(unit,
                ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->force_forward.mngr
                , sizeof(*((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->force_forward.mngr), I0, &s0) ? I0 - 1 : 0;
        }

        if(i0 >= dnx_sw_state_get_nof_elements(unit, ALGO_PORT_PP_MODULE_ID, ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->force_forward.mngr))
        {
            LOG_CLI((BSL_META("algo_port_pp_db[]->((algo_port_pp_sw_state_t*)sw_state_roots_array[][ALGO_PORT_PP_MODULE_ID])->force_forward.mngr[]: ")));
            LOG_CLI((BSL_META("Invalid index: %d \n"),i0));
            SHR_EXIT();
        }

        if(dnx_sw_state_get_nof_elements(unit, ALGO_PORT_PP_MODULE_ID, ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->force_forward.mngr) == 0)
        {
            SHR_EXIT();
        }

        for(; i0 < I0; i0++) {
            dnx_sw_state_dump_update_current_idx(unit, i0);
            DNX_SW_STATE_PRINT_MONITOR(
                unit,
                "algo_port_pp_db[%d]->","((algo_port_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_PORT_PP_MODULE_ID])->","force_forward.mngr[%s%d]: ", s0, i0);

            DNX_SW_STATE_PRINT_FILE(
                unit,
                "[%s%d]: ", s0, i0);

            DNX_ALGO_TEMP_MNGR_PRINT(
                unit,
                ALGO_PORT_PP_MODULE_ID,
                &((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->force_forward.mngr[i0],
                dnx_algo_port_pp_force_forward_template_cb);

        }
        dnx_sw_state_dump_end_of_stride(unit);
        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable trap_id
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_port_pp_db_force_forward_trap_id_dump(int  unit,  int  trap_id_idx_0,  int  trap_id_idx_1,  dnx_sw_state_dump_filters_t  filters)
{
    int i0 = trap_id_idx_0, I0 = trap_id_idx_0 + 1;
    int i1 = trap_id_idx_1, I1 = trap_id_idx_1 + 1, org_i1 = trap_id_idx_1;
    char *s0 = "", *s1 = "";
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "uint32") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_port_pp force_forward trap_id") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_port_pp force_forward trap_id\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_port_pp_db/force_forward/trap_id.txt",
            "algo_port_pp_db[%d]->","((algo_port_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_PORT_PP_MODULE_ID])->","force_forward.trap_id[][]: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID]));

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->force_forward.trap_id);

        if (i0 == -1) {
            I0 = dnx_sw_state_get_nof_elements(unit,
                ALGO_PORT_PP_MODULE_ID,
                ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->force_forward.trap_id);
            i0 = dnx_sw_state_dump_check_all_the_same(unit,
                ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->force_forward.trap_id
                , sizeof(*((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->force_forward.trap_id), I0, &s0) ? I0 - 1 : 0;
        }

        if(i0 >= dnx_sw_state_get_nof_elements(unit, ALGO_PORT_PP_MODULE_ID, ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->force_forward.trap_id))
        {
            LOG_CLI((BSL_META("algo_port_pp_db[]->((algo_port_pp_sw_state_t*)sw_state_roots_array[][ALGO_PORT_PP_MODULE_ID])->force_forward.trap_id[][]: ")));
            LOG_CLI((BSL_META("Invalid index: %d \n"),i0));
            SHR_EXIT();
        }

        if(dnx_sw_state_get_nof_elements(unit, ALGO_PORT_PP_MODULE_ID, ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->force_forward.trap_id) == 0)
        {
            SHR_EXIT();
        }

        for(; i0 < I0; i0++) {
            /*coverity explanation: coverity has detected an out of bound read, due to i0 being incremented;
            However, we have a check if i0 > the end condition of the loop. If the check catches that i0 has
            reached the value of the end condition, we exit the function.
            What coverity is catching is the last increment of i0 before the loop ends. */
            /* coverity[overrun-local:FALSE] */
                DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
                    unit,
                    ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->force_forward.trap_id[i0]);

            if (i1 == -1) {
                I1 = dnx_sw_state_get_nof_elements(unit,
                    ALGO_PORT_PP_MODULE_ID,
                    ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->force_forward.trap_id[i0]);
                i1 = dnx_sw_state_dump_check_all_the_same(unit,
                    ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->force_forward.trap_id[i0]
                    , sizeof(*((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->force_forward.trap_id[i0]), I1, &s1) ? I1 - 1 : 0;
            }

            if(i1 >= dnx_sw_state_get_nof_elements(unit, ALGO_PORT_PP_MODULE_ID, ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->force_forward.trap_id[i0]))
            {
                LOG_CLI((BSL_META("algo_port_pp_db[]->((algo_port_pp_sw_state_t*)sw_state_roots_array[][ALGO_PORT_PP_MODULE_ID])->force_forward.trap_id[][]: ")));
                LOG_CLI((BSL_META("Invalid index: %d \n"),i1));
                SHR_EXIT();
            }

            if(dnx_sw_state_get_nof_elements(unit, ALGO_PORT_PP_MODULE_ID, ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->force_forward.trap_id[i0]) == 0)
            {
                SHR_EXIT();
            }

            for(; i1 < I1; i1++) {
                dnx_sw_state_dump_update_current_idx(unit, i1);
                DNX_SW_STATE_PRINT_MONITOR(
                    unit,
                    "algo_port_pp_db[%d]->","((algo_port_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_PORT_PP_MODULE_ID])->","force_forward.trap_id[%s%d][%s%d]: ", s0, i0, s1, i1);

                DNX_SW_STATE_PRINT_FILE(
                    unit,
                    "[%s%d][%s%d]: ", s0, i0, s1, i1);

                dnx_sw_state_print_uint32(
                    unit,
                    &((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->force_forward.trap_id[i0][i1]);

            }
            i1 = org_i1;
            dnx_sw_state_dump_end_of_stride(unit);
        }
        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable esem
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_port_pp_db_esem_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;
    SHR_IF_ERR_EXIT(algo_port_pp_db_esem_access_cmd_dump(unit, filters));
    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable access_cmd
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_port_pp_db_esem_access_cmd_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_port_pp esem access_cmd") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_port_pp esem access_cmd\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_port_pp_db/esem/access_cmd.txt",
            "algo_port_pp_db[%d]->","((algo_port_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_PORT_PP_MODULE_ID])->","esem.access_cmd: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_port_pp_db[%d]->","((algo_port_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_PORT_PP_MODULE_ID])->","esem.access_cmd: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_PORT_PP_MODULE_ID,
            &((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->esem.access_cmd,
            dnx_algo_port_esem_access_cmd_template_print_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable recycle_app
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_port_pp_db_recycle_app_dump(int  unit,  int  recycle_app_idx_0,  int  recycle_app_idx_1,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;
    SHR_IF_ERR_EXIT(algo_port_pp_db_recycle_app_type_dump(unit, recycle_app_idx_0,recycle_app_idx_1, filters));
    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable type
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_port_pp_db_recycle_app_type_dump(int  unit,  int  recycle_app_idx_0,  int  recycle_app_idx_1,  dnx_sw_state_dump_filters_t  filters)
{
    int i0 = recycle_app_idx_0, I0 = recycle_app_idx_0 + 1;
    int i1 = recycle_app_idx_1, I1 = recycle_app_idx_1 + 1, org_i1 = recycle_app_idx_1;
    char *s0 = "", *s1 = "";
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "uint32") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_port_pp recycle_app type") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_port_pp recycle_app type\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_port_pp_db/recycle_app/type.txt",
            "algo_port_pp_db[%d]->","((algo_port_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_PORT_PP_MODULE_ID])->","recycle_app[][].type: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID]));

        if (i0 == -1) {
            I0 = DNX_DATA_MAX_DEVICE_GENERAL_NOF_CORES;
            i0 = dnx_sw_state_dump_check_all_the_same(unit,
                ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->recycle_app
                , sizeof(*((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->recycle_app), I0, &s0) ? I0 - 1 : 0;
        }

        if(i0 >= DNX_DATA_MAX_DEVICE_GENERAL_NOF_CORES)
        {
            LOG_CLI((BSL_META("algo_port_pp_db[]->((algo_port_pp_sw_state_t*)sw_state_roots_array[][ALGO_PORT_PP_MODULE_ID])->recycle_app[][].type: ")));
            LOG_CLI((BSL_META("Invalid index: %d \n"),i0));
            SHR_EXIT();
        }

        if(DNX_DATA_MAX_DEVICE_GENERAL_NOF_CORES == 0)
        {
            SHR_EXIT();
        }

        for(; i0 < I0; i0++) {
            /*coverity explanation: coverity has detected an out of bound read, due to i0 being incremented;
            However, we have a check if i0 > the end condition of the loop. If the check catches that i0 has
            reached the value of the end condition, we exit the function.
            What coverity is catching is the last increment of i0 before the loop ends. */
            /* coverity[overrun-local:FALSE] */
                DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
                    unit,
                    ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->recycle_app[i0]);

            if (i1 == -1) {
                I1 = dnx_sw_state_get_nof_elements(unit,
                    ALGO_PORT_PP_MODULE_ID,
                    ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->recycle_app[i0]);
                i1 = dnx_sw_state_dump_check_all_the_same(unit,
                    ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->recycle_app[i0]
                    , sizeof(*((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->recycle_app[i0]), I1, &s1) ? I1 - 1 : 0;
            }

            if(i1 >= dnx_sw_state_get_nof_elements(unit, ALGO_PORT_PP_MODULE_ID, ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->recycle_app[i0]))
            {
                LOG_CLI((BSL_META("algo_port_pp_db[]->((algo_port_pp_sw_state_t*)sw_state_roots_array[][ALGO_PORT_PP_MODULE_ID])->recycle_app[][].type: ")));
                LOG_CLI((BSL_META("Invalid index: %d \n"),i1));
                SHR_EXIT();
            }

            if(dnx_sw_state_get_nof_elements(unit, ALGO_PORT_PP_MODULE_ID, ((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->recycle_app[i0]) == 0)
            {
                SHR_EXIT();
            }

            for(; i1 < I1; i1++) {
                dnx_sw_state_dump_update_current_idx(unit, i1);
                DNX_SW_STATE_PRINT_MONITOR(
                    unit,
                    "algo_port_pp_db[%d]->","((algo_port_pp_sw_state_t*)sw_state_roots_array[%d][ALGO_PORT_PP_MODULE_ID])->","recycle_app[%s%d][%s%d].type: ", s0, i0, s1, i1);

                DNX_SW_STATE_PRINT_FILE(
                    unit,
                    "[%s%d][%s%d]: ", s0, i0, s1, i1);

                dnx_sw_state_print_uint32(
                    unit,
                    &((algo_port_pp_sw_state_t*)sw_state_roots_array[unit][ALGO_PORT_PP_MODULE_ID])->recycle_app[i0][i1].type);

            }
            i1 = org_i1;
            dnx_sw_state_dump_end_of_stride(unit);
        }
        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 * Global Variables
 */

dnx_sw_state_diagnostic_info_t algo_port_pp_db_info[SOC_MAX_NUM_DEVICES][ALGO_PORT_PP_DB_INFO_NOF_ENTRIES];
const char* algo_port_pp_db_layout_str[ALGO_PORT_PP_DB_INFO_NOF_ENTRIES] = {
    "ALGO_PORT_PP_DB~",
    "ALGO_PORT_PP_DB~ESEM_DEFAULT_RESULT_PROFILE~",
    "ALGO_PORT_PP_DB~PORT_PP_TPID_PROFILE_INGRESS~",
    "ALGO_PORT_PP_DB~PORT_PP_TPID_PROFILE_EGRESS~",
    "ALGO_PORT_PP_DB~EGRESS_ACCEPTABLE_FRAME_TYPE_PROFILE~",
    "ALGO_PORT_PP_DB~EGRESS_PP_PORT_SIT_PROFILE~",
    "ALGO_PORT_PP_DB~PP_PORT_LB_PROFILE~",
    "ALGO_PORT_PP_DB~FORCE_FORWARD~",
    "ALGO_PORT_PP_DB~FORCE_FORWARD~MNGR~",
    "ALGO_PORT_PP_DB~FORCE_FORWARD~TRAP_ID~",
    "ALGO_PORT_PP_DB~ESEM~",
    "ALGO_PORT_PP_DB~ESEM~ACCESS_CMD~",
    "ALGO_PORT_PP_DB~RECYCLE_APP~",
    "ALGO_PORT_PP_DB~RECYCLE_APP~TYPE~",
};
#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE
