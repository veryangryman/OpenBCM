/** \file dnx/swstate/auto_generated/diagnostic/dnx_egr_db_commandline.h
 *
 * sw state functions declarations
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

#ifndef __DNX_EGR_DB_COMMANDLINE_H__
#define __DNX_EGR_DB_COMMANDLINE_H__

#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnx/swstate/auto_generated/types/dnx_egr_db_types.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_max_device.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_max_egr_queuing.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
shr_error_e sh_dnx_swstate_dnx_egr_db_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_dump_man;
shr_error_e sh_dnx_swstate_dnx_egr_db_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_size_get_man;
shr_error_e sh_dnx_swstate_dnx_egr_db_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_diagnostic_operation_counters_man;
extern sh_sand_cmd_t sh_dnx_swstate_dnx_egr_db_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_man;
extern const char cmd_dnx_swstate_dnx_egr_db_desc[];

extern sh_sand_cmd_t sh_dnx_swstate_dnx_egr_db_ps_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_ps_man;
extern const char cmd_dnx_swstate_dnx_egr_db_ps_desc[];
shr_error_e sh_dnx_swstate_dnx_egr_db_ps_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_ps_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_ps_dump_man;


shr_error_e sh_dnx_swstate_dnx_egr_db_ps_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_ps_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_ps_size_get_man;


shr_error_e sh_dnx_swstate_dnx_egr_db_ps_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_ps_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_ps_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_egr_db_ps_allocation_bmap_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_ps_allocation_bmap_man;
extern const char cmd_dnx_swstate_dnx_egr_db_ps_allocation_bmap_desc[];
shr_error_e sh_dnx_swstate_dnx_egr_db_ps_allocation_bmap_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_ps_allocation_bmap_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_ps_allocation_bmap_dump_man;


shr_error_e sh_dnx_swstate_dnx_egr_db_ps_allocation_bmap_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_ps_allocation_bmap_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_ps_allocation_bmap_size_get_man;


shr_error_e sh_dnx_swstate_dnx_egr_db_ps_allocation_bmap_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_ps_allocation_bmap_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_ps_allocation_bmap_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_egr_db_ps_prio_mode_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_ps_prio_mode_man;
extern const char cmd_dnx_swstate_dnx_egr_db_ps_prio_mode_desc[];
shr_error_e sh_dnx_swstate_dnx_egr_db_ps_prio_mode_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_ps_prio_mode_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_ps_prio_mode_dump_man;


shr_error_e sh_dnx_swstate_dnx_egr_db_ps_prio_mode_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_ps_prio_mode_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_ps_prio_mode_size_get_man;


shr_error_e sh_dnx_swstate_dnx_egr_db_ps_prio_mode_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_ps_prio_mode_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_ps_prio_mode_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_egr_db_ps_if_idx_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_ps_if_idx_man;
extern const char cmd_dnx_swstate_dnx_egr_db_ps_if_idx_desc[];
shr_error_e sh_dnx_swstate_dnx_egr_db_ps_if_idx_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_ps_if_idx_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_ps_if_idx_dump_man;


shr_error_e sh_dnx_swstate_dnx_egr_db_ps_if_idx_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_ps_if_idx_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_ps_if_idx_size_get_man;


shr_error_e sh_dnx_swstate_dnx_egr_db_ps_if_idx_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_ps_if_idx_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_ps_if_idx_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_egr_db_interface_occ_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_interface_occ_man;
extern const char cmd_dnx_swstate_dnx_egr_db_interface_occ_desc[];
shr_error_e sh_dnx_swstate_dnx_egr_db_interface_occ_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_interface_occ_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_interface_occ_dump_man;


shr_error_e sh_dnx_swstate_dnx_egr_db_interface_occ_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_interface_occ_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_interface_occ_size_get_man;


shr_error_e sh_dnx_swstate_dnx_egr_db_interface_occ_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_interface_occ_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_interface_occ_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_dnx_egr_db_total_egr_if_credits_cmds[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_total_egr_if_credits_man;
extern const char cmd_dnx_swstate_dnx_egr_db_total_egr_if_credits_desc[];
shr_error_e sh_dnx_swstate_dnx_egr_db_total_egr_if_credits_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_total_egr_if_credits_dump_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_total_egr_if_credits_dump_man;


shr_error_e sh_dnx_swstate_dnx_egr_db_total_egr_if_credits_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_total_egr_if_credits_size_get_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_total_egr_if_credits_size_get_man;


shr_error_e sh_dnx_swstate_dnx_egr_db_total_egr_if_credits_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_dnx_egr_db_total_egr_if_credits_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_dnx_egr_db_total_egr_if_credits_diagnostic_operation_counters_man;


#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_EGR_DB_COMMANDLINE_H__ */
