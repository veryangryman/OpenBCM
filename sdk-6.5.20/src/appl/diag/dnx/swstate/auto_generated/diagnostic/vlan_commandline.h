/** \file dnx/swstate/auto_generated/diagnostic/vlan_commandline.h
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

#ifndef __VLAN_COMMANDLINE_H__
#define __VLAN_COMMANDLINE_H__

#include <appl/diag/sand/diag_sand_framework.h>
#include <appl/diag/sand/diag_sand_utils.h>
#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/vlan_types.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr_internal.h>
#include <bcm_int/dnx/algo/vlan/algo_vlan.h>
#include <include/bcm/types.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
shr_error_e sh_dnx_swstate_vlan_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_dump_options[];
extern sh_sand_man_t dnx_swstate_vlan_dump_man;
shr_error_e sh_dnx_swstate_vlan_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_size_get_options[];
extern sh_sand_man_t dnx_swstate_vlan_size_get_man;
shr_error_e sh_dnx_swstate_vlan_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_vlan_diagnostic_operation_counters_man;
extern sh_sand_cmd_t sh_dnx_swstate_vlan_cmds[];
extern sh_sand_man_t dnx_swstate_vlan_man;
extern const char cmd_dnx_swstate_vlan_desc[];

extern sh_sand_cmd_t sh_dnx_swstate_vlan_vlan_info_cmds[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_info_man;
extern const char cmd_dnx_swstate_vlan_vlan_info_desc[];
shr_error_e sh_dnx_swstate_vlan_vlan_info_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vlan_info_dump_options[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_info_dump_man;


shr_error_e sh_dnx_swstate_vlan_vlan_info_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vlan_info_size_get_options[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_info_size_get_man;


shr_error_e sh_dnx_swstate_vlan_vlan_info_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vlan_info_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_info_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_vlan_vlan_info_default_vid_cmds[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_info_default_vid_man;
extern const char cmd_dnx_swstate_vlan_vlan_info_default_vid_desc[];
shr_error_e sh_dnx_swstate_vlan_vlan_info_default_vid_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vlan_info_default_vid_dump_options[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_info_default_vid_dump_man;


shr_error_e sh_dnx_swstate_vlan_vlan_info_default_vid_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vlan_info_default_vid_size_get_options[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_info_default_vid_size_get_man;


shr_error_e sh_dnx_swstate_vlan_vlan_info_default_vid_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vlan_info_default_vid_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_info_default_vid_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_vlan_vsi_cmds[];
extern sh_sand_man_t dnx_swstate_vlan_vsi_man;
extern const char cmd_dnx_swstate_vlan_vsi_desc[];
shr_error_e sh_dnx_swstate_vlan_vsi_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vsi_dump_options[];
extern sh_sand_man_t dnx_swstate_vlan_vsi_dump_man;


shr_error_e sh_dnx_swstate_vlan_vsi_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vsi_size_get_options[];
extern sh_sand_man_t dnx_swstate_vlan_vsi_size_get_man;


shr_error_e sh_dnx_swstate_vlan_vsi_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vsi_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_vlan_vsi_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_vlan_action_id_ingress_cmds[];
extern sh_sand_man_t dnx_swstate_vlan_action_id_ingress_man;
extern const char cmd_dnx_swstate_vlan_action_id_ingress_desc[];
shr_error_e sh_dnx_swstate_vlan_action_id_ingress_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_action_id_ingress_dump_options[];
extern sh_sand_man_t dnx_swstate_vlan_action_id_ingress_dump_man;


shr_error_e sh_dnx_swstate_vlan_action_id_ingress_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_action_id_ingress_size_get_options[];
extern sh_sand_man_t dnx_swstate_vlan_action_id_ingress_size_get_man;


shr_error_e sh_dnx_swstate_vlan_action_id_ingress_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_action_id_ingress_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_vlan_action_id_ingress_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_vlan_action_id_egress_cmds[];
extern sh_sand_man_t dnx_swstate_vlan_action_id_egress_man;
extern const char cmd_dnx_swstate_vlan_action_id_egress_desc[];
shr_error_e sh_dnx_swstate_vlan_action_id_egress_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_action_id_egress_dump_options[];
extern sh_sand_man_t dnx_swstate_vlan_action_id_egress_dump_man;


shr_error_e sh_dnx_swstate_vlan_action_id_egress_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_action_id_egress_size_get_options[];
extern sh_sand_man_t dnx_swstate_vlan_action_id_egress_size_get_man;


shr_error_e sh_dnx_swstate_vlan_action_id_egress_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_action_id_egress_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_vlan_action_id_egress_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_vlan_vlan_port_ingress_virtual_gport_id_cmds[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_port_ingress_virtual_gport_id_man;
extern const char cmd_dnx_swstate_vlan_vlan_port_ingress_virtual_gport_id_desc[];
shr_error_e sh_dnx_swstate_vlan_vlan_port_ingress_virtual_gport_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vlan_port_ingress_virtual_gport_id_dump_options[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_port_ingress_virtual_gport_id_dump_man;


shr_error_e sh_dnx_swstate_vlan_vlan_port_ingress_virtual_gport_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vlan_port_ingress_virtual_gport_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_port_ingress_virtual_gport_id_size_get_man;


shr_error_e sh_dnx_swstate_vlan_vlan_port_ingress_virtual_gport_id_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vlan_port_ingress_virtual_gport_id_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_port_ingress_virtual_gport_id_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_vlan_vlan_port_egress_virtual_gport_id_cmds[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_port_egress_virtual_gport_id_man;
extern const char cmd_dnx_swstate_vlan_vlan_port_egress_virtual_gport_id_desc[];
shr_error_e sh_dnx_swstate_vlan_vlan_port_egress_virtual_gport_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vlan_port_egress_virtual_gport_id_dump_options[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_port_egress_virtual_gport_id_dump_man;


shr_error_e sh_dnx_swstate_vlan_vlan_port_egress_virtual_gport_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vlan_port_egress_virtual_gport_id_size_get_options[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_port_egress_virtual_gport_id_size_get_man;


shr_error_e sh_dnx_swstate_vlan_vlan_port_egress_virtual_gport_id_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vlan_port_egress_virtual_gport_id_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_port_egress_virtual_gport_id_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_vlan_vlan_range_outer_profile_cmds[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_range_outer_profile_man;
extern const char cmd_dnx_swstate_vlan_vlan_range_outer_profile_desc[];
shr_error_e sh_dnx_swstate_vlan_vlan_range_outer_profile_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vlan_range_outer_profile_dump_options[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_range_outer_profile_dump_man;


shr_error_e sh_dnx_swstate_vlan_vlan_range_outer_profile_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vlan_range_outer_profile_size_get_options[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_range_outer_profile_size_get_man;


shr_error_e sh_dnx_swstate_vlan_vlan_range_outer_profile_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vlan_range_outer_profile_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_range_outer_profile_diagnostic_operation_counters_man;



extern sh_sand_cmd_t sh_dnx_swstate_vlan_vlan_range_inner_profile_cmds[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_range_inner_profile_man;
extern const char cmd_dnx_swstate_vlan_vlan_range_inner_profile_desc[];
shr_error_e sh_dnx_swstate_vlan_vlan_range_inner_profile_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vlan_range_inner_profile_dump_options[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_range_inner_profile_dump_man;


shr_error_e sh_dnx_swstate_vlan_vlan_range_inner_profile_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vlan_range_inner_profile_size_get_options[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_range_inner_profile_size_get_man;


shr_error_e sh_dnx_swstate_vlan_vlan_range_inner_profile_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control);
extern sh_sand_option_t dnx_swstate_vlan_vlan_range_inner_profile_diagnostic_operation_counters_options[];
extern sh_sand_man_t dnx_swstate_vlan_vlan_range_inner_profile_diagnostic_operation_counters_man;


#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __VLAN_COMMANDLINE_H__ */
