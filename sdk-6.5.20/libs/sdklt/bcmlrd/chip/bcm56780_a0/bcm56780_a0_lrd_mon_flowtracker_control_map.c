/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/mon/bcm56780_a0/bcm56780_a0_MON_FLOWTRACKER_CONTROL.map.ltl for
 *      bcm56780_a0
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
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56780_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* MON_FLOWTRACKER_CONTROL field init */
static const bcmlrd_field_data_t bcm56780_a0_lrd_mon_flowtracker_control_map_field_data_mmd[] = {
    { /* 0 FLOWTRACKER */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 1 OBSERVATION_DOMAIN */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 2 MAX_GROUPS */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u32_0x1,
      .def = &bcm56780_a0_lrd_ifd_u32_0xff,
      .max = &bcm56780_a0_lrd_ifd_u32_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 3 MAX_GROUPS_OPER */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0xff,
      .max = &bcm56780_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 4 MAX_EXPORT_LENGTH */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u32_0x80,
      .def = &bcm56780_a0_lrd_ifd_u32_0x5dc,
      .max = &bcm56780_a0_lrd_ifd_u32_0x2328,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 5 MAX_EXPORT_LENGTH_OPER */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x5dc,
      .max = &bcm56780_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 6 MAX_FLOWS */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x10000,
      .depth = 4,
      .width = 17,
      .edata = NULL,
    },
    { /* 7 MAX_FLOWS_OPER */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x10000,
      .depth = 4,
      .width = 17,
      .edata = NULL,
    },
    { /* 8 PKT_BYTE_CTR_ING_EFLEX_ACTION_PROFILE_ID */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 9 PKT_BYTE_CTR_ING_EFLEX_ACTION_PROFILE_ID_OPER */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 10 DOUBLE_ENTRY_WIDE_HITBIT_CTR_ING_EFLEX_ACTION_PROFILE_ID */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 11 DOUBLE_ENTRY_WIDE_HITBIT_CTR_ING_EFLEX_ACTION_PROFILE_ID_OPER */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 12 QUAD_ENTRY_WIDE_HITBIT_CTR_ING_EFLEX_ACTION_PROFILE_ID */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 13 QUAD_ENTRY_WIDE_HITBIT_CTR_ING_EFLEX_ACTION_PROFILE_ID_OPER */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 14 DOUBLE_ENTRY_WIDE_HITBIT_CTR_ING_EFLEX_GROUP_ACTION */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 15 DOUBLE_ENTRY_WIDE_HITBIT_CTR_ING_EFLEX_GROUP_ACTION_OPER */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 16 QUAD_ENTRY_WIDE_HITBIT_CTR_ING_EFLEX_GROUP_ACTION */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 17 QUAD_ENTRY_WIDE_HITBIT_CTR_ING_EFLEX_GROUP_ACTION_OPER */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 18 ETRAP */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 19 ETRAP_OPER */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 20 SCAN_INTERVAL_USECS */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u32_0x7d0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x186a0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x7a120,
      .depth = 0,
      .width = 19,
      .edata = NULL,
    },
    { /* 21 SCAN_INTERVAL_USECS_OPER */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x186a0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 22 FLOW_START_TIMESTAMP_ENABLE */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 23 FLOW_START_TIMESTAMP_ENABLE_OPER */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 24 HOST_MEM */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 25 HOST_MEM_OPER */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56780_a0_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 26 HARDWARE_LEARN */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCMLTD_COMMON_FLOWTRACKER_HARDWARE_LEARN_T_DATA,
    },
    { /* 27 HARDWARE_LEARN_OPER */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCMLTD_COMMON_FLOWTRACKER_HARDWARE_LEARN_T_DATA,
    },
    { /* 28 OPERATIONAL_STATE */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x7,
      .depth = 0,
      .width = 3,
      .edata = BCMLTD_COMMON_MON_FLOWTRACKER_CONTROL_STATE_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_lrd_mon_flowtracker_control_map_field_data = {
    .fields = 29,
    .field = bcm56780_a0_lrd_mon_flowtracker_control_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_lrd_mon_flowtracker_controlt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 1,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = TRUE,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_lrd_mon_flowtracker_controlt_attr_group = {
    .attributes = 2,
    .attr = bcm56780_a0_lrd_mon_flowtracker_controlt_attr_entry,
};

static const bcmlrd_map_entry_t bcm56780_a0_lrd_bcmimm_mon_flowtracker_control_entry[] = {
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
            /* handler: bcm56780_a0_lta_bcmimm_mon_flowtracker_control_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56780_A0_LTA_BCMIMM_MON_FLOWTRACKER_CONTROL_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_entry_t
bcm56780_a0_lrd_bcmltx_mon_flowtracker_control_validate_entry[] = {
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
            /* handler: bcm56780_a0_lta_bcmltx_mon_flowtracker_control_std_val_fv_handler */
            .handler_id = BCMLTD_VALIDATE_BCM56780_A0_LTA_BCMLTX_MON_FLOWTRACKER_CONTROL_STD_VAL_FV_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56780_a0_lrd_mon_flowtracker_control_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56780_a0_lrd_bcmimm_mon_flowtracker_control_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_VALIDATION,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56780_a0_lrd_bcmltx_mon_flowtracker_control_validate_entry
    },
};
const bcmlrd_map_t bcm56780_a0_lrd_mon_flowtracker_control_map = {
    .src_id = MON_FLOWTRACKER_CONTROLt,
    .field_data = &bcm56780_a0_lrd_mon_flowtracker_control_map_field_data,
    .groups = 2,
    .group  = bcm56780_a0_lrd_mon_flowtracker_control_map_group,
    .table_attr = &bcm56780_a0_lrd_mon_flowtracker_controlt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
