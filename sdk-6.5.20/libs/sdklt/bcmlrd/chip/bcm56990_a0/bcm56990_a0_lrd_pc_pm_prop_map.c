/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/pc/bcm56990_a0/bcm56990_a0_PC_PM_PROP.map.ltl for
 *      bcm56990_a0
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
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56990_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56990_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* PC_PM_PROP field init */
static const bcmlrd_field_data_t bcm56990_a0_lrd_pc_pm_prop_map_field_data_mmd[] = {
    { /* 0 PC_PM_ID */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0x49,
      .depth = 0,
      .width = 7,
      .edata = NULL,
    },
    { /* 1 PM_TYPE */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_a0_lrd_ifd_u32_0x0,
      .def = &bcm56990_a0_lrd_ifd_u32_0x0,
      .max = &bcm56990_a0_lrd_ifd_u32_0xb,
      .depth = 0,
      .width = 4,
      .edata = BCMLTD_COMMON_PC_PM_TYPE_T_DATA,
    },
    { /* 2 NUM_LANES */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 3 NUM_PORTS */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 4 NUM_AGGR */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 5 NUM_PLL */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 6 VCO_RATE */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_a0_lrd_ifd_u32_0x0,
      .def = &bcm56990_a0_lrd_ifd_u32_0x0,
      .max = &bcm56990_a0_lrd_ifd_u32_0x5,
      .depth = 2,
      .width = 3,
      .edata = BCM56990_A0_LRD_PC_PM_PLL_VCO_RATE_T_DATA,
    },
    { /* 7 TVCO_SOURCE_INDEX */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56990_a0_lrd_pc_pm_prop_map_field_data = {
    .fields = 8,
    .field = bcm56990_a0_lrd_pc_pm_prop_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_a0_lrd_pc_pm_propt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 73,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56990_a0_lrd_pc_pm_propt_attr_group = {
    .attributes = 3,
    .attr = bcm56990_a0_lrd_pc_pm_propt_attr_entry,
};

static const bcmlrd_map_entry_t bcm56990_a0_lrd_bcmpc_pc_pm_prop_entry[] = {
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
            /* handler: bcm56990_a0_lta_bcmpc_pc_pm_prop_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56990_A0_LTA_BCMPC_PC_PM_PROP_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56990_a0_lrd_pc_pm_prop_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56990_a0_lrd_bcmpc_pc_pm_prop_entry
    },
};
const bcmlrd_map_t bcm56990_a0_lrd_pc_pm_prop_map = {
    .src_id = PC_PM_PROPt,
    .field_data = &bcm56990_a0_lrd_pc_pm_prop_map_field_data,
    .groups = 1,
    .group  = bcm56990_a0_lrd_pc_pm_prop_map_group,
    .table_attr = &bcm56990_a0_lrd_pc_pm_propt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE
};
