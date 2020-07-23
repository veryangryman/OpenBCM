/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from Logical Table mapping files.
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
/* Logical Table Adaptor for component bcmtm */
/* Handler: bcm56990_b0_lta_bcmtm_tm_scheduler_profile_q_info_cth_handler */
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmtm/sched_shaper/bcmtm_scheduler_profile_q_info.h>



const bcmltd_generic_arg_t
bcm56990_b0_lta_bcmtm_tm_scheduler_profile_q_info_cth_handler_arg = {
    .sid = TM_SCHEDULER_PROFILE_Q_INFOt,
    .values = 0,
    .value = NULL,
    .user_data = NULL
};

const bcmltd_table_handler_t
bcm56990_b0_lta_bcmtm_tm_scheduler_profile_q_info_cth_handler = {
    .validate = bcmtm_scheduler_profile_q_info_validate,
    .op_insert       = bcmtm_scheduler_profile_q_info_insert,
    .op_lookup       = bcmtm_scheduler_profile_q_info_lookup,
    .op_delete       = bcmtm_scheduler_profile_q_info_delete,
    .op_update       = bcmtm_scheduler_profile_q_info_update,
    .op_first        = bcmtm_scheduler_profile_q_info_first,
    .op_next         = bcmtm_scheduler_profile_q_info_next,
    .ha       = NULL,
    .arg      = &bcm56990_b0_lta_bcmtm_tm_scheduler_profile_q_info_cth_handler_arg
};

