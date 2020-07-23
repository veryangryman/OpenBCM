/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/ctr/bcm56996_a0/bcm56996_a0_CTR_EGR_TM_BST_MC_Q.map.ltl for
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
/* CTR_EGR_TM_BST_MC_Q field init */
static const bcmlrd_field_data_t bcm56996_a0_lrd_ctr_egr_tm_bst_mc_q_map_field_data_mmd[] = {
    { /* 0 PORT_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x10f,
      .depth = 0,
      .width = 9,
      .edata = NULL,
    },
    { /* 1 TM_MC_Q_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x2f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
    { /* 2 BUFFER_POOL */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 3 CELLS */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u64_0x0,
      .def = &bcm56996_a0_lrd_ifd_u64_0x0,
      .max = &bcm56996_a0_lrd_ifd_u64_0x3ffff,
      .depth = 0,
      .width = 18,
      .edata = NULL,
    },
    { /* 4 OPERATIONAL_STATE */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56996_a0_lrd_ifd_u32_0x0,
      .def = &bcm56996_a0_lrd_ifd_u32_0x0,
      .max = &bcm56996_a0_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCMLTD_COMMON_CTR_PORT_MC_Q_ENTRY_STATE_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56996_a0_lrd_ctr_egr_tm_bst_mc_q_map_field_data = {
    .fields = 5,
    .field = bcm56996_a0_lrd_ctr_egr_tm_bst_mc_q_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56996_a0_lrd_ctr_egr_tm_bst_mc_qt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INSTANCE_MAX_INDEX,
        .value = 1,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INSTANCE_MIN_INDEX,
        .value = 0,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = true,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 3263,
    },
    { /* 4 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
    { /* 5 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MAX_INDEX,
        .value = 34783,
    },
    { /* 6 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56996_a0_lrd_ctr_egr_tm_bst_mc_qt_attr_group = {
    .attributes = 7,
    .attr = bcm56996_a0_lrd_ctr_egr_tm_bst_mc_qt_attr_entry,
};


const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_track_index_src_field_desc_s2[3] = {
    {
        .field_id  = CTR_EGR_TM_BST_MC_Qt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = CTR_EGR_TM_BST_MC_Qt_TM_MC_Q_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = CTR_EGR_TM_BST_MC_Qt_BUFFER_POOLf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 1,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_track_index_ctr_egr_tm_bst_mc_q_dst_field_desc_d0[1] = {
    {
        .field_id  = BCMLRD_FIELD_TRACK_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_chip_q_num_idx_src_field_desc_s0[3] = {
    {
        .field_id  = CTR_EGR_TM_BST_MC_Qt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = CTR_EGR_TM_BST_MC_Qt_TM_MC_Q_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = CTR_EGR_TM_BST_MC_Qt_BUFFER_POOLf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 1,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_chip_q_num_idx_ctr_egr_tm_bst_mc_q_dst_field_desc_d0[2] = {
    {
        .field_id  = BCMLRD_FIELD_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 11,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = BCMLRD_FIELD_INSTANCE,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_port_q_pt_suppress_src_field_desc_s0[2] = {
    {
        .field_id  = CTR_EGR_TM_BST_MC_Qt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = CTR_EGR_TM_BST_MC_Qt_TM_MC_Q_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_port_q_pt_suppress_ctr_egr_tm_bst_mc_q_dst_field_desc_d0[1] = {
    {
        .field_id  = BCMLRD_FIELD_PT_SUPPRESS,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_port_q_oper_state_src_field_desc_s0[1] = {
    {
        .field_id  = CTR_EGR_TM_BST_MC_Qt_OPERATIONAL_STATEf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56996_a0_lta_bcmltx_track_index_xfrm_handler_fwd_s2_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56996_A0_LTA_BCMLTX_TRACK_INDEX_XFRM_HANDLER_FWD_S2_D0_ID,
    .src_fields = 3,
    .src = bcm56996_a0_lrd_bcmltx_track_index_src_field_desc_s2,
    .dst_fields = 1,
    .dst = bcm56996_a0_lrd_bcmltx_track_index_ctr_egr_tm_bst_mc_q_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56996_a0_lta_bcmltx_track_index_xfrm_handler_rev_s2_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56996_A0_LTA_BCMLTX_TRACK_INDEX_XFRM_HANDLER_REV_S2_D0_ID,
    .src_fields = 1,
    .src = bcm56996_a0_lrd_bcmltx_track_index_ctr_egr_tm_bst_mc_q_dst_field_desc_d0,
    .dst_fields = 3,
    .dst = bcm56996_a0_lrd_bcmltx_track_index_src_field_desc_s2,
};

const bcmlrd_field_xfrm_desc_t
bcm56996_a0_lta_bcmltx_chip_q_num_idx_xfrm_handler_fwd_s0_d0_x0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56996_A0_LTA_BCMLTX_CHIP_Q_NUM_IDX_XFRM_HANDLER_FWD_S0_D0_X0_ID,
    .src_fields = 3,
    .src = bcm56996_a0_lrd_bcmltx_chip_q_num_idx_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56996_a0_lrd_bcmltx_chip_q_num_idx_ctr_egr_tm_bst_mc_q_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56996_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_s0_d0_x0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56996_A0_LTA_BCMLTX_PORT_Q_PT_SUPPRESS_XFRM_HANDLER_FWD_S0_D0_X0_ID,
    .src_fields = 2,
    .src = bcm56996_a0_lrd_bcmltx_port_q_pt_suppress_src_field_desc_s0,
    .dst_fields = 1,
    .dst = bcm56996_a0_lrd_bcmltx_port_q_pt_suppress_ctr_egr_tm_bst_mc_q_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56996_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_s0_k0_d0_x0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56996_A0_LTA_BCMLTX_PORT_Q_OPER_STATE_XFRM_HANDLER_REV_S0_K0_D0_X0_ID,
    .src_fields = 0,
    .src = NULL,
    .dst_fields = 1,
    .dst = bcm56996_a0_lrd_bcmltx_port_q_oper_state_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56996_a0_lrd_ctr_egr_tm_bst_mc_qt_mmu_thdo_bst_total_queue_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = BST_QUEUE_TOTAL_COUNTf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 17,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_EGR_TM_BST_MC_Qt_CELLSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 17,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
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
                /* handler: bcm56996_a0_lta_bcmltx_track_index_xfrm_handler_fwd_s2_d0 */
                .desc = &bcm56996_a0_lta_bcmltx_track_index_xfrm_handler_fwd_s2_d0_desc,
            },
        },
    },
    { /* 2 */
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
                /* handler: bcm56996_a0_lta_bcmltx_track_index_xfrm_handler_rev_s2_d0 */
                .desc = &bcm56996_a0_lta_bcmltx_track_index_xfrm_handler_rev_s2_d0_desc,
            },
        },
    },
    { /* 3 */
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
                /* handler: bcm56996_a0_lta_bcmltx_chip_q_num_idx_xfrm_handler_fwd_s0_d0_x0 */
                .desc = &bcm56996_a0_lta_bcmltx_chip_q_num_idx_xfrm_handler_fwd_s0_d0_x0_desc,
            },
        },
    },
    { /* 4 */
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
                /* handler: bcm56996_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_s0_d0_x0 */
                .desc = &bcm56996_a0_lta_bcmltx_port_q_pt_suppress_xfrm_handler_fwd_s0_d0_x0_desc,
            },
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_ALWAYS_REV_VALUE_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56996_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_s0_k0_d0_x0 */
                .desc = &bcm56996_a0_lta_bcmltx_port_q_oper_state_xfrm_handler_rev_s0_k0_d0_x0_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t
bcm56996_a0_lrd_bcmltx_ctr_egr_tm_bst_mc_q_validate_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_VALUE_FIELD_VALIDATION,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56996_a0_lta_bcmltx_ctr_egr_tm_bst_mc_q_std_val_fv_handler */
            .handler_id = BCMLTD_VALIDATE_BCM56996_A0_LTA_BCMLTX_CTR_EGR_TM_BST_MC_Q_STD_VAL_FV_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56996_a0_lrd_ctr_egr_tm_bst_mc_q_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MMU_THDO_BST_TOTAL_QUEUEm,
        },
        .entries = 6,
        .entry = bcm56996_a0_lrd_ctr_egr_tm_bst_mc_qt_mmu_thdo_bst_total_queue_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_VALIDATION,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56996_a0_lrd_bcmltx_ctr_egr_tm_bst_mc_q_validate_entry
    },
};
const bcmlrd_map_t bcm56996_a0_lrd_ctr_egr_tm_bst_mc_q_map = {
    .src_id = CTR_EGR_TM_BST_MC_Qt,
    .field_data = &bcm56996_a0_lrd_ctr_egr_tm_bst_mc_q_map_field_data,
    .groups = 2,
    .group  = bcm56996_a0_lrd_ctr_egr_tm_bst_mc_q_map_group,
    .table_attr = &bcm56996_a0_lrd_ctr_egr_tm_bst_mc_qt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
