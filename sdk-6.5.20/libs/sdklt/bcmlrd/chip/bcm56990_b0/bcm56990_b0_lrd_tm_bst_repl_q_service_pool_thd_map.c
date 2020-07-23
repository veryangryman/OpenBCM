/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/tm/bcm56990_b0/bcm56990_b0_TM_BST_REPL_Q_SERVICE_POOL_THD.map.ltl for
 *      bcm56990_b0
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
#include <bcmlrd/chip/bcm56990_b0/bcm56990_b0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56990_b0/bcm56990_b0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56990_b0/bcm56990_b0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56990_b0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56990_b0_lrd_enumpool.h"
/* TM_BST_REPL_Q_SERVICE_POOL_THD field init */
static const bcmlrd_field_data_t bcm56990_b0_lrd_tm_bst_repl_q_service_pool_thd_map_field_data_mmd[] = {
    { /* 0 BUFFER_POOL */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 1 CELLS */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x1fff,
      .max = &bcm56990_b0_lrd_ifd_u32_0x1fff,
      .depth = 0,
      .width = 13,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56990_b0_lrd_tm_bst_repl_q_service_pool_thd_map_field_data = {
    .fields = 2,
    .field = bcm56990_b0_lrd_tm_bst_repl_q_service_pool_thd_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_b0_lrd_tm_bst_repl_q_service_pool_thdt_attr_entry[] = {
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
};

static const bcmlrd_map_attr_t bcm56990_b0_lrd_tm_bst_repl_q_service_pool_thdt_attr_group = {
    .attributes = 3,
    .attr = bcm56990_b0_lrd_tm_bst_repl_q_service_pool_thdt_attr_entry,
};

static const bcmlrd_map_entry_t bcm56990_b0_lrd_tm_bst_repl_q_service_pool_thdt_mmu_thdr_qe_bst_threshold_sp_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INSTANCE,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TM_BST_REPL_Q_SERVICE_POOL_THDt_BUFFER_POOLf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = THRESHOLDf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 12,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TM_BST_REPL_Q_SERVICE_POOL_THDt_CELLSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 12,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56990_b0_lrd_tm_bst_repl_q_service_pool_thd_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MMU_THDR_QE_BST_THRESHOLD_SPr,
        },
        .entries = 2,
        .entry = bcm56990_b0_lrd_tm_bst_repl_q_service_pool_thdt_mmu_thdr_qe_bst_threshold_sp_map_entry
    },
};
const bcmlrd_map_t bcm56990_b0_lrd_tm_bst_repl_q_service_pool_thd_map = {
    .src_id = TM_BST_REPL_Q_SERVICE_POOL_THDt,
    .field_data = &bcm56990_b0_lrd_tm_bst_repl_q_service_pool_thd_map_field_data,
    .groups = 1,
    .group  = bcm56990_b0_lrd_tm_bst_repl_q_service_pool_thd_map_group,
    .table_attr = &bcm56990_b0_lrd_tm_bst_repl_q_service_pool_thdt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
