/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/ctr/bcm56990_b0/bcm56990_b0_CTR_EGR_TM_SERVICE_POOL.map.ltl for
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
/* CTR_EGR_TM_SERVICE_POOL field init */
static const bcmlrd_field_data_t bcm56990_b0_lrd_ctr_egr_tm_service_pool_map_field_data_mmd[] = {
    { /* 0 BUFFER_POOL */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 1 TM_EGR_SERVICE_POOL_ID */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 2 TOTAL_USAGE_CELLS */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56990_b0_lrd_ifd_u64_0x0,
      .def = &bcm56990_b0_lrd_ifd_u64_0x0,
      .max = &bcm56990_b0_lrd_ifd_u64_0x7ffff,
      .depth = 0,
      .width = 19,
      .edata = NULL,
    },
    { /* 3 TOTAL_MC_USAGE_CELLS */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56990_b0_lrd_ifd_u64_0x0,
      .def = &bcm56990_b0_lrd_ifd_u64_0x0,
      .max = &bcm56990_b0_lrd_ifd_u64_0x3fff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56990_b0_lrd_ctr_egr_tm_service_pool_map_field_data = {
    .fields = 4,
    .field = bcm56990_b0_lrd_ctr_egr_tm_service_pool_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_b0_lrd_ctr_egr_tm_service_poolt_attr_entry[] = {
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
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_PREPOPULATE,
        .value = true,
    },
    { /* 4 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 7,
    },
    { /* 5 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56990_b0_lrd_ctr_egr_tm_service_poolt_attr_group = {
    .attributes = 6,
    .attr = bcm56990_b0_lrd_ctr_egr_tm_service_poolt_attr_entry,
};

static const bcmlrd_map_entry_t bcm56990_b0_lrd_ctr_egr_tm_service_poolt_mmu_thdo_mc_shared_cqe_pool_shared_count_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 1,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_EGR_TM_SERVICE_POOLt_TM_EGR_SERVICE_POOL_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
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
                    .field_id = CTR_EGR_TM_SERVICE_POOLt_BUFFER_POOLf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = COUNTf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 13,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_EGR_TM_SERVICE_POOLt_TOTAL_MC_USAGE_CELLSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 13,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_entry_t bcm56990_b0_lrd_ctr_egr_tm_service_poolt_mmu_thdo_shared_db_pool_shared_count_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 1,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_EGR_TM_SERVICE_POOLt_TM_EGR_SERVICE_POOL_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
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
                    .field_id = CTR_EGR_TM_SERVICE_POOLt_BUFFER_POOLf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = COUNTf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 18,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_EGR_TM_SERVICE_POOLt_TOTAL_USAGE_CELLSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 18,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56990_b0_lrd_ctr_egr_tm_service_pool_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MMU_THDO_MC_SHARED_CQE_POOL_SHARED_COUNTr,
        },
        .entries = 3,
        .entry = bcm56990_b0_lrd_ctr_egr_tm_service_poolt_mmu_thdo_mc_shared_cqe_pool_shared_count_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MMU_THDO_SHARED_DB_POOL_SHARED_COUNTr,
        },
        .entries = 3,
        .entry = bcm56990_b0_lrd_ctr_egr_tm_service_poolt_mmu_thdo_shared_db_pool_shared_count_map_entry
    },
};
const bcmlrd_map_t bcm56990_b0_lrd_ctr_egr_tm_service_pool_map = {
    .src_id = CTR_EGR_TM_SERVICE_POOLt,
    .field_data = &bcm56990_b0_lrd_ctr_egr_tm_service_pool_map_field_data,
    .groups = 2,
    .group  = bcm56990_b0_lrd_ctr_egr_tm_service_pool_map_group,
    .table_attr = &bcm56990_b0_lrd_ctr_egr_tm_service_poolt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE
};
