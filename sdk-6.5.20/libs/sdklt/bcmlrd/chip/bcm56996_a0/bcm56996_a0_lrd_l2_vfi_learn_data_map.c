/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/l2/bcm56996_a0/bcm56996_a0_L2_VFI_LEARN_DATA.map.ltl for
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
/* L2_VFI_LEARN_DATA field init */
static const bcmlrd_field_data_t bcm56996_a0_lrd_l2_vfi_learn_data_map_field_data_mmd[] = {
    { /* 0 PIPE */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 1 L2_VFI_LEARN_DATA_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x3f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
    { /* 2 VFI_ID */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x1fff,
      .depth = 0,
      .width = 13,
      .edata = NULL,
    },
    { /* 3 MAC_ADDR */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u64_0x0,
      .def = &bcm56996_a0_lrd_ifd_u64_0x0,
      .max = &bcm56996_a0_lrd_ifd_u64_0xffffffffffff,
      .depth = 0,
      .width = 48,
      .edata = NULL,
    },
    { /* 4 SVP */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x3fff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 5 SRC_TYPE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56996_a0_lrd_ifd_u32_0x0,
      .def = &bcm56996_a0_lrd_ifd_u32_0x0,
      .max = &bcm56996_a0_lrd_ifd_u32_0x5,
      .depth = 0,
      .width = 3,
      .edata = BCM56996_A0_LRD_L2_DEST_T_DATA,
    },
    { /* 6 MODID */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 7 MODPORT */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x10f,
      .depth = 0,
      .width = 9,
      .edata = NULL,
    },
    { /* 8 TRUNK_ID */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 9 L2_MC_GROUP_ID */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x1ff,
      .depth = 0,
      .width = 9,
      .edata = NULL,
    },
    { /* 10 TM_MC_GROUP_ID */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u16_0x1,
      .def = &bcm56996_a0_lrd_ifd_u16_0x1,
      .max = &bcm56996_a0_lrd_ifd_u16_0x1ff,
      .depth = 0,
      .width = 9,
      .edata = NULL,
    },
    { /* 11 NHOP_ID */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u16_0x1,
      .def = &bcm56996_a0_lrd_ifd_u16_0x1,
      .max = &bcm56996_a0_lrd_ifd_u16_0x7fff,
      .depth = 0,
      .width = 15,
      .edata = NULL,
    },
    { /* 12 ECMP_ID */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56996_a0_lrd_l2_vfi_learn_data_map_field_data = {
    .fields = 13,
    .field = bcm56996_a0_lrd_l2_vfi_learn_data_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56996_a0_lrd_l2_vfi_learn_datat_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 512,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = true,
    },
};

static const bcmlrd_map_attr_t bcm56996_a0_lrd_l2_vfi_learn_datat_attr_group = {
    .attributes = 2,
    .attr = bcm56996_a0_lrd_l2_vfi_learn_datat_attr_entry,
};

static const bcmlrd_map_entry_t bcm56996_a0_lrd_bcmimm_l2_vfi_learn_data_entry[] = {
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
            /* handler: bcm56996_a0_lta_bcmimm_l2_vfi_learn_data_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56996_A0_LTA_BCMIMM_L2_VFI_LEARN_DATA_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56996_a0_lrd_l2_vfi_learn_data_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56996_a0_lrd_bcmimm_l2_vfi_learn_data_entry
    },
};
const bcmlrd_map_t bcm56996_a0_lrd_l2_vfi_learn_data_map = {
    .src_id = L2_VFI_LEARN_DATAt,
    .field_data = &bcm56996_a0_lrd_l2_vfi_learn_data_map_field_data,
    .groups = 1,
    .group  = bcm56996_a0_lrd_l2_vfi_learn_data_map_group,
    .table_attr = &bcm56996_a0_lrd_l2_vfi_learn_datat_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE
};
