/** \file algo/swstate/auto_generated/diagnostic/flow_control_diagnostic.h
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

#ifndef __FLOW_CONTROL_DIAGNOSTIC_H__
#define __FLOW_CONTROL_DIAGNOSTIC_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnxc/swstate/dnx_sw_state_size.h>
#include <soc/dnxc/swstate/dnx_sw_state_diagnostic_operation_counters.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/flow_control_types.h>
#include <bcm/cosq.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr_internal.h>
#include <bcm_int/dnx/cosq/flow_control/flow_control_imp.h>
#include <bcm_int/dnx/cosq/flow_control/pfc_deadlock.h>
#include <include/shared/periodic_event.h>
#include <include/soc/dnx/dnx_data/auto_generated/dnx_data_max_nif.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
typedef enum {
    FLOW_CONTROL_DB_INFO,
    FLOW_CONTROL_DB_FC_GENERIC_BMP_INFO,
    FLOW_CONTROL_DB_PFC_DEADLOCK_RECOVERY_INFO,
    FLOW_CONTROL_DB_PFC_DEADLOCK_RECOVERY_ENABLED_INFO,
    FLOW_CONTROL_DB_PFC_DEADLOCK_RECOVERY_ACTION_INFO,
    FLOW_CONTROL_DB_PFC_DEADLOCK_RECOVERY_DETECTION_TIMER_GRANULARITY_INFO,
    FLOW_CONTROL_DB_PFC_DEADLOCK_RECOVERY_TIMER_INFO,
    FLOW_CONTROL_DB_PFC_DEADLOCK_RECOVERY_DATA_INFO,
    FLOW_CONTROL_DB_PFC_DEADLOCK_RECOVERY_OCCURANCES_INFO,
    FLOW_CONTROL_DB_PFC_DEADLOCK_RECOVERY_EVENT_HANDLE_INFO,
    FLOW_CONTROL_DB_INFO_NOF_ENTRIES
} sw_state_flow_control_db_layout_e;


extern dnx_sw_state_diagnostic_info_t flow_control_db_info[SOC_MAX_NUM_DEVICES][FLOW_CONTROL_DB_INFO_NOF_ENTRIES];

extern const char* flow_control_db_layout_str[FLOW_CONTROL_DB_INFO_NOF_ENTRIES];
int flow_control_db_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int flow_control_db_fc_generic_bmp_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int flow_control_db_pfc_deadlock_recovery_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int flow_control_db_pfc_deadlock_recovery_enabled_dump(
    int unit, int enabled_idx_0, dnx_sw_state_dump_filters_t filters);

int flow_control_db_pfc_deadlock_recovery_action_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int flow_control_db_pfc_deadlock_recovery_detection_timer_granularity_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int flow_control_db_pfc_deadlock_recovery_timer_dump(
    int unit, int timer_idx_0, int timer_idx_1, dnx_sw_state_dump_filters_t filters);

int flow_control_db_pfc_deadlock_recovery_data_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int flow_control_db_pfc_deadlock_recovery_occurances_dump(
    int unit, int occurances_idx_0, int occurances_idx_1, dnx_sw_state_dump_filters_t filters);

int flow_control_db_pfc_deadlock_recovery_event_handle_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __FLOW_CONTROL_DIAGNOSTIC_H__ */
