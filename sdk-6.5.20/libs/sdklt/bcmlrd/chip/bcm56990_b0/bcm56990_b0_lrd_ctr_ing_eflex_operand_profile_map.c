/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/ctr/bcm56990_b0/bcm56990_b0_CTR_ING_EFLEX_OPERAND_PROFILE.map.ltl for
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
/* CTR_ING_EFLEX_OPERAND_PROFILE field init */
static const bcmlrd_field_data_t bcm56990_b0_lrd_ctr_ing_eflex_operand_profile_map_field_data_mmd[] = {
    { /* 0 CTR_ING_EFLEX_OPERAND_PROFILE_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 1 PROFILE */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0x3f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
    { /* 2 PIPE */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 3 OBJ_1 */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0xa,
      .depth = 0,
      .width = 4,
      .edata = BCM56990_B0_LRD_CTR_EFLEX_OBJ_SRC_T_DATA,
    },
    { /* 4 OBJ_2 */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0xa,
      .depth = 0,
      .width = 4,
      .edata = BCM56990_B0_LRD_CTR_EFLEX_OBJ_SRC_T_DATA,
    },
    { /* 5 MASK_SIZE_1 */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 6 MASK_SIZE_2 */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 7 SHIFT_1 */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x1f,
      .depth = 0,
      .width = 5,
      .edata = NULL,
    },
    { /* 8 SHIFT_2 */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x1f,
      .depth = 0,
      .width = 5,
      .edata = NULL,
    },
    { /* 9 OBJ_3 */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 0,
      .edata = BCM56990_B0_LRD_CTR_EFLEX_OBJ_SRC_T_DATA,
    },
    { /* 10 MASK_SIZE_3 */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 11 SHIFT_3 */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 12 SHIFT_4 */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 13 SHIFT_5 */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56990_b0_lrd_ctr_ing_eflex_operand_profile_map_field_data = {
    .fields = 14,
    .field = bcm56990_b0_lrd_ctr_ing_eflex_operand_profile_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_b0_lrd_ctr_ing_eflex_operand_profilet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 256,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = true,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_RESOURCE_INFO,
        .value = CTR_ING_EFLEX_OPERAND_PROFILE_INFOt,
    },
};

static const bcmlrd_map_attr_t bcm56990_b0_lrd_ctr_ing_eflex_operand_profilet_attr_group = {
    .attributes = 3,
    .attr = bcm56990_b0_lrd_ctr_ing_eflex_operand_profilet_attr_entry,
};

static const bcmlrd_map_entry_t bcm56990_b0_lrd_bcmimm_ctr_ing_eflex_operand_profile_entry[] = {
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
            /* handler: bcm56990_b0_lta_bcmimm_ctr_ing_eflex_operand_profile_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56990_B0_LTA_BCMIMM_CTR_ING_EFLEX_OPERAND_PROFILE_CTH_HANDLER_ID
        }
    },
};
/* Map conditions */
static const uint32_t
bcm56990_b0_lrd_ctr_ing_eflex_operand_profile_map_cond_edit[] = {
    0, /* Number of groups. */
    0, /* Number of multi-entry transforms. */
};

static const bcmlrd_condition_t
bcm56990_b0_lrd_ctr_ing_eflex_operand_profile_map_condition[] = {
    {
        .op    = BCMLRD_CONDITION_AND,
        .table = CTR_EFLEX_CONFIGt,
        .field = CTR_EFLEX_CONFIGt_CTR_ING_EFLEX_OPERMODE_PIPEUNIQUEf,
        .value = 1
    },
};

static const bcmlrd_cond_expr_t
bcm56990_b0_lrd_ctr_ing_eflex_operand_profile_map_cond_expr[] = {
    {
        .num_cond = 1,
        .cond     = bcm56990_b0_lrd_ctr_ing_eflex_operand_profile_map_condition + 0,
    },
};

static const bcmlrd_cond_field_t bcm56990_b0_lrd_ctr_ing_eflex_operand_profile_map_cond_field[] = {
    {
        .field = CTR_ING_EFLEX_OPERAND_PROFILEt_PIPEf,
        .expr  = bcm56990_b0_lrd_ctr_ing_eflex_operand_profile_map_cond_expr + 0,
        .edit  = bcm56990_b0_lrd_ctr_ing_eflex_operand_profile_map_cond_edit + 0,
    },
};
static const bcmlrd_cond_data_t
bcm56990_b0_lrd_ctr_ing_eflex_operand_profile_map_cond = {
    .num_field_cond = 1,
    .field_cond = bcm56990_b0_lrd_ctr_ing_eflex_operand_profile_map_cond_field
};
static const bcmlrd_map_group_t bcm56990_b0_lrd_ctr_ing_eflex_operand_profile_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56990_b0_lrd_bcmimm_ctr_ing_eflex_operand_profile_entry
    },
};
const bcmlrd_map_t bcm56990_b0_lrd_ctr_ing_eflex_operand_profile_map = {
    .src_id = CTR_ING_EFLEX_OPERAND_PROFILEt,
    .field_data = &bcm56990_b0_lrd_ctr_ing_eflex_operand_profile_map_field_data,
    .groups = 1,
    .group  = bcm56990_b0_lrd_ctr_ing_eflex_operand_profile_map_group,
    .table_attr = &bcm56990_b0_lrd_ctr_ing_eflex_operand_profilet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE,
    .cond = &bcm56990_b0_lrd_ctr_ing_eflex_operand_profile_map_cond,
};
