/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/pc/bcm56990_b0/bcm56990_b0_PC_PORT_ABILITIES.map.ltl for
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
#include <bcmltd/bcmltd_handler.h>
/* PC_PORT_ABILITIES field init */
static const bcmlrd_field_data_t bcm56990_b0_lrd_pc_port_abilities_map_field_data_mmd[] = {
    { /* 0 PORT_ID */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u16_0x1,
      .def = &bcm56990_b0_lrd_ifd_u16_0x1,
      .max = &bcm56990_b0_lrd_ifd_u16_0x10f,
      .depth = 0,
      .width = 9,
      .edata = NULL,
    },
    { /* 1 ABILITY_TYPE */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_KEY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = BCM56990_B0_LRD_PC_ABILITY_TYPE_T_DATA,
    },
    { /* 2 NUM_ABILITIES */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 3 SPEED */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0xffffffff,
      .depth = 128,
      .width = 32,
      .edata = NULL,
    },
    { /* 4 NUM_LANES */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0xff,
      .depth = 128,
      .width = 8,
      .edata = NULL,
    },
    { /* 5 FEC_MODE */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x6,
      .depth = 128,
      .width = 3,
      .edata = BCMLTD_COMMON_PC_FEC_T_DATA,
    },
    { /* 6 AUTONEG_MODE */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x6,
      .depth = 128,
      .width = 3,
      .edata = BCMLTD_COMMON_PC_PHY_AUTONEG_MODE_T_DATA,
    },
    { /* 7 MEDIUM_TYPE */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x3,
      .depth = 128,
      .width = 2,
      .edata = BCMLTD_COMMON_PC_PHY_SUPPORTED_MEDIUM_T_DATA,
    },
    { /* 8 PAUSE_TYPE */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x4,
      .depth = 128,
      .width = 3,
      .edata = BCMLTD_COMMON_PC_SUPPORTED_PAUSE_T_DATA,
    },
    { /* 9 CHANNEL_TYPE */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x2,
      .depth = 128,
      .width = 2,
      .edata = BCMLTD_COMMON_PC_PHY_CHANNEL_TYPE_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56990_b0_lrd_pc_port_abilities_map_field_data = {
    .fields = 10,
    .field = bcm56990_b0_lrd_pc_port_abilities_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_b0_lrd_pc_port_abilitiest_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 544,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56990_b0_lrd_pc_port_abilitiest_attr_group = {
    .attributes = 3,
    .attr = bcm56990_b0_lrd_pc_port_abilitiest_attr_entry,
};

static const bcmlrd_map_entry_t bcm56990_b0_lrd_bcmpc_pc_port_abilities_entry[] = {
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
            /* handler: bcm56990_b0_lta_bcmpc_pc_port_abilities_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56990_B0_LTA_BCMPC_PC_PORT_ABILITIES_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56990_b0_lrd_pc_port_abilities_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56990_b0_lrd_bcmpc_pc_port_abilities_entry
    },
};
const bcmlrd_map_t bcm56990_b0_lrd_pc_port_abilities_map = {
    .src_id = PC_PORT_ABILITIESt,
    .field_data = &bcm56990_b0_lrd_pc_port_abilities_map_field_data,
    .groups = 1,
    .group  = bcm56990_b0_lrd_pc_port_abilities_map_group,
    .table_attr = &bcm56990_b0_lrd_pc_port_abilitiest_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE
};