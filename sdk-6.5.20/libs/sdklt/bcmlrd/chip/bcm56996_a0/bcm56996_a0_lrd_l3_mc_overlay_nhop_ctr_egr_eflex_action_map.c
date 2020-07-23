/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/l3/bcm56996_a0/bcm56996_a0_L3_MC_OVERLAY_NHOP_CTR_EGR_EFLEX_ACTION.map.ltl for
 *      bcm56996_a0
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include <bcmlrd/bcmlrd_internal.h>
#include <bcmlrd/chip/bcmlrd_id.h>
#include <bcmlrd/chip/bcm56996_a0/bcm56996_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56996_a0/bcm56996_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56996_a0/bcm56996_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56996_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56996_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* L3_MC_OVERLAY_NHOP_CTR_EGR_EFLEX_ACTION field init */
static const bcmlrd_field_data_t bcm56996_a0_lrd_l3_mc_overlay_nhop_ctr_egr_eflex_action_map_field_data_mmd[] = {
    { /* 0 L3_MC_NHOP_CTR_EGR_EFLEX_ACTION_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 1 ACTION */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56996_a0_lrd_l3_mc_overlay_nhop_ctr_egr_eflex_action_map_field_data = {
    .fields = 2,
    .field = bcm56996_a0_lrd_l3_mc_overlay_nhop_ctr_egr_eflex_action_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56996_a0_lrd_l3_mc_overlay_nhop_ctr_egr_eflex_actiont_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MAX_INDEX,
        .value = 1,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56996_a0_lrd_l3_mc_overlay_nhop_ctr_egr_eflex_actiont_attr_group = {
    .attributes = 3,
    .attr = bcm56996_a0_lrd_l3_mc_overlay_nhop_ctr_egr_eflex_actiont_attr_entry,
};


const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_copy_field_src_field_desc_s18[1] = {
    {
        .field_id  = L3_MC_OVERLAY_NHOP_CTR_EGR_EFLEX_ACTIONt_L3_MC_NHOP_CTR_EGR_EFLEX_ACTION_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_copy_field_l3_mc_overlay_nhop_ctr_egr_eflex_action_dst_field_desc_d3[1] = {
    {
        .field_id  = BCMLRD_FIELD_TRACK_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56996_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s18_d3_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56996_A0_LTA_BCMLTX_COPY_FIELD_XFRM_HANDLER_FWD_S18_D3_ID,
    .src_fields = 1,
    .src = bcm56996_a0_lrd_bcmltx_copy_field_src_field_desc_s18,
    .dst_fields = 1,
    .dst = bcm56996_a0_lrd_bcmltx_copy_field_l3_mc_overlay_nhop_ctr_egr_eflex_action_dst_field_desc_d3,
};

const bcmlrd_field_xfrm_desc_t
bcm56996_a0_lta_bcmltx_copy_field_xfrm_handler_rev_s18_d3_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56996_A0_LTA_BCMLTX_COPY_FIELD_XFRM_HANDLER_REV_S18_D3_ID,
    .src_fields = 1,
    .src = bcm56996_a0_lrd_bcmltx_copy_field_l3_mc_overlay_nhop_ctr_egr_eflex_action_dst_field_desc_d3,
    .dst_fields = 1,
    .dst = bcm56996_a0_lrd_bcmltx_copy_field_src_field_desc_s18,
};


static const bcmlrd_map_entry_t bcm56996_a0_lrd_l3_mc_overlay_nhop_ctr_egr_eflex_actiont_egr_nhop_flex_ctr_control_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56996_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s18_d3 */
                .desc = &bcm56996_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s18_d3_desc,
            },
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56996_a0_lta_bcmltx_copy_field_xfrm_handler_rev_s18_d3 */
                .desc = &bcm56996_a0_lta_bcmltx_copy_field_xfrm_handler_rev_s18_d3_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t bcm56996_a0_lrd_l3_mc_overlay_nhop_ctr_egr_eflex_actiont_egr_o_nhop_flex_ctr_control_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = L3MC_FLEX_CTR_ACTION_0f,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_MC_OVERLAY_NHOP_CTR_EGR_EFLEX_ACTIONt_ACTIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = L3MC_FLEX_CTR_ACTION_1f,
            .field_idx = 0,
            .minbit    = 4,
            .maxbit    = 7,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_MC_OVERLAY_NHOP_CTR_EGR_EFLEX_ACTIONt_ACTIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
const bcmlrd_field_selector_t bcm56996_a0_lrd_l3_mc_overlay_nhop_ctr_egr_eflex_action_map_select[] = {
    { /* Node:0, Type:ROOT, L3_MC_NHOP_CTR_EGR_EFLEX_ACTION_ID */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_ROOT,
        .field_id = L3_MC_OVERLAY_NHOP_CTR_EGR_EFLEX_ACTIONt_L3_MC_NHOP_CTR_EGR_EFLEX_ACTION_IDf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = BCMLRD_INVALID_SELECTOR_INDEX,
        .group = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_id = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_value = BCMLRD_INVALID_SELECTOR_INDEX
    },
    { /* Node:1, Type:Directmap, ACTION:EGR_O_NHOP_FLEX_CTR_CONTROL.L3MC_FLEX_CTR_ACTION_0 */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = L3_MC_OVERLAY_NHOP_CTR_EGR_EFLEX_ACTIONt_ACTIONf,
        .group_index = 1,
        .entry_index = 0,
        .selection_parent = 0,
        .group = 0,
        .selector_id = L3_MC_OVERLAY_NHOP_CTR_EGR_EFLEX_ACTIONt_L3_MC_NHOP_CTR_EGR_EFLEX_ACTION_IDf,
        .selector_value = 0
    },
    { /* Node:2, Type:Directmap, ACTION:EGR_O_NHOP_FLEX_CTR_CONTROL.L3MC_FLEX_CTR_ACTION_1 */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = L3_MC_OVERLAY_NHOP_CTR_EGR_EFLEX_ACTIONt_ACTIONf,
        .group_index = 1,
        .entry_index = 1,
        .selection_parent = 0,
        .group = 1,
        .selector_id = L3_MC_OVERLAY_NHOP_CTR_EGR_EFLEX_ACTIONt_L3_MC_NHOP_CTR_EGR_EFLEX_ACTION_IDf,
        .selector_value = 1
    },
};

const bcmlrd_field_selector_data_t bcm56996_a0_lrd_l3_mc_overlay_nhop_ctr_egr_eflex_action_map_select_data = {
    .num_field_selector = 3,
    .field_selector = bcm56996_a0_lrd_l3_mc_overlay_nhop_ctr_egr_eflex_action_map_select,
};

static const bcmlrd_map_group_t bcm56996_a0_lrd_l3_mc_overlay_nhop_ctr_egr_eflex_action_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = EGR_NHOP_FLEX_CTR_CONTROLr,
        },
        .entries = 2,
        .entry = bcm56996_a0_lrd_l3_mc_overlay_nhop_ctr_egr_eflex_actiont_egr_nhop_flex_ctr_control_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = EGR_O_NHOP_FLEX_CTR_CONTROLr,
        },
        .entries = 2,
        .entry = bcm56996_a0_lrd_l3_mc_overlay_nhop_ctr_egr_eflex_actiont_egr_o_nhop_flex_ctr_control_map_entry
    },
};
const bcmlrd_map_t bcm56996_a0_lrd_l3_mc_overlay_nhop_ctr_egr_eflex_action_map = {
    .src_id = L3_MC_OVERLAY_NHOP_CTR_EGR_EFLEX_ACTIONt,
    .field_data = &bcm56996_a0_lrd_l3_mc_overlay_nhop_ctr_egr_eflex_action_map_field_data,
    .groups = 2,
    .group  = bcm56996_a0_lrd_l3_mc_overlay_nhop_ctr_egr_eflex_action_map_group,
    .table_attr = &bcm56996_a0_lrd_l3_mc_overlay_nhop_ctr_egr_eflex_actiont_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE,
    .sel = &bcm56996_a0_lrd_l3_mc_overlay_nhop_ctr_egr_eflex_action_map_select_data,
};
