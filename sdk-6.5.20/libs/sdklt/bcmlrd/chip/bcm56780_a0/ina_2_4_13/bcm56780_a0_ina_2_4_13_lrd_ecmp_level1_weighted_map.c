/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/ecmp/bcm56780_a0/bcm56780_a0_ECMP_LEVEL1_WEIGHTED.map.ltl for
 *      bcm56780_a0 variant ina_2_4_13
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
#include <bcmlrd/chip/bcm56780_a0/ina_2_4_13/bcm56780_a0_ina_2_4_13_lrd_field_data.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/ina_2_4_13/bcm56780_a0_ina_2_4_13_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/ina_2_4_13/bcm56780_a0_ina_2_4_13_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "../bcm56780_a0_lrd_enumpool.h"
#include "bcm56780_a0_ina_2_4_13_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* ECMP_LEVEL1_WEIGHTED field init */
static const bcmlrd_field_data_t bcm56780_a0_ina_2_4_13_lrd_ecmp_level1_weighted_map_field_data_mmd[] = {
    { /* 0 ECMP_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 1 NHOP_INDEX_1 */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0xffff,
      .depth = 16384,
      .width = 16,
      .edata = NULL,
    },
    { /* 2 NHOP_INDEX_2 */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0xffff,
      .depth = 16384,
      .width = 16,
      .edata = NULL,
    },
    { /* 3 STRENGTH_PROFILE_INDEX */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x1f,
      .depth = 16384,
      .width = 5,
      .edata = NULL,
    },
    { /* 4 RH_RANDOM_SEED */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 5 RH_MODE */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 6 RH_NUM_PATHS */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x40,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x4000,
      .depth = 0,
      .width = 15,
      .edata = NULL,
    },
    { /* 7 NUM_PATHS */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x100,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x4000,
      .depth = 0,
      .width = 15,
      .edata = NULL,
    },
    { /* 8 WEIGHTED_SIZE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x2,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x2,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x8,
      .depth = 0,
      .width = 4,
      .edata = BCM56780_A0_INA_2_4_13_LRD_ECMP_WEIGHTED_SIZE_T_DATA,
    },
    { /* 9 WEIGHTED_MODE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x1,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x1,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCM56780_A0_LRD_ECMP_WEIGHTED_MODE_T_DATA,
    },
    { /* 10 WEIGHTED_NHOP_INDEX */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0xffff,
      .depth = 16384,
      .width = 16,
      .edata = NULL,
    },
    { /* 11 WEIGHT */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0xffff,
      .depth = 16384,
      .width = 16,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_ina_2_4_13_lrd_ecmp_level1_weighted_map_field_data = {
    .fields = 12,
    .field = bcm56780_a0_ina_2_4_13_lrd_ecmp_level1_weighted_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_ina_2_4_13_lrd_ecmp_level1_weightedt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 4096,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_HANDLER_INTF,
        .value = BCMLRD_MAP_TABLE_ATTRIBUTE_HANDLER_INTF_EXPEDITED,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_ina_2_4_13_lrd_ecmp_level1_weightedt_attr_group = {
    .attributes = 3,
    .attr = bcm56780_a0_ina_2_4_13_lrd_ecmp_level1_weightedt_attr_entry,
};

static const bcmlrd_map_entry_t bcm56780_a0_ina_2_4_13_lrd_bcmimm_ecmp_level1_weighted_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_TABLE_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56780_a0_ina_2_4_13_lta_bcmimm_ecmp_level1_weighted_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56780_A0_INA_2_4_13_LTA_BCMIMM_ECMP_LEVEL1_WEIGHTED_CTH_HANDLER_ID
        }
    },
};
const bcmlrd_field_selector_t bcm56780_a0_ina_2_4_13_lrd_ecmp_level1_weighted_map_select[] = {
    { /* Node:0, Type:ROOT, WEIGHTED_MODE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_ROOT,
        .field_id = ECMP_LEVEL1_WEIGHTEDt_WEIGHTED_MODEf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = BCMLRD_INVALID_SELECTOR_INDEX,
        .group = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_id = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_value = BCMLRD_INVALID_SELECTOR_INDEX
    },
    { /* Node:1, Type:FIELD, WEIGHT */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_FIELD,
        .field_id = ECMP_LEVEL1_WEIGHTEDt_WEIGHTf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = 0,
        .group = 0,
        .selector_id = ECMP_LEVEL1_WEIGHTEDt_WEIGHTED_MODEf,
        .selector_value = 2 /* MEMBER_WEIGHT */
    },
    { /* Node:2, Type:FIELD, WEIGHTED_NHOP_INDEX */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_FIELD,
        .field_id = ECMP_LEVEL1_WEIGHTEDt_WEIGHTED_NHOP_INDEXf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = 0,
        .group = 0,
        .selector_id = ECMP_LEVEL1_WEIGHTEDt_WEIGHTED_MODEf,
        .selector_value = 2 /* MEMBER_WEIGHT */
    },
};

const bcmlrd_field_selector_data_t bcm56780_a0_ina_2_4_13_lrd_ecmp_level1_weighted_map_select_data = {
    .num_field_selector = 3,
    .field_selector = bcm56780_a0_ina_2_4_13_lrd_ecmp_level1_weighted_map_select,
};

static const bcmlrd_map_group_t bcm56780_a0_ina_2_4_13_lrd_ecmp_level1_weighted_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56780_a0_ina_2_4_13_lrd_bcmimm_ecmp_level1_weighted_entry
    },
};
const bcmlrd_map_t bcm56780_a0_ina_2_4_13_lrd_ecmp_level1_weighted_map = {
    .src_id = ECMP_LEVEL1_WEIGHTEDt,
    .field_data = &bcm56780_a0_ina_2_4_13_lrd_ecmp_level1_weighted_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_ina_2_4_13_lrd_ecmp_level1_weighted_map_group,
    .table_attr = &bcm56780_a0_ina_2_4_13_lrd_ecmp_level1_weightedt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE,
    .sel = &bcm56780_a0_ina_2_4_13_lrd_ecmp_level1_weighted_map_select_data,
};
