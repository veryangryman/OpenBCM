/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/fp/bcm56996_a0/bcm56996_a0_FP_EM_GRP_TEMPLATE_PARTITION_INFO.map.ltl for
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
/* FP_EM_GRP_TEMPLATE_PARTITION_INFO field init */
static const bcmlrd_field_data_t bcm56996_a0_lrd_fp_em_grp_template_partition_info_map_field_data_mmd[] = {
    { /* 0 FP_EM_GRP_TEMPLATE_ID */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_KEY,
      .min = &bcm56996_a0_lrd_ifd_u32_0x1,
      .def = &bcm56996_a0_lrd_ifd_u32_0x1,
      .max = &bcm56996_a0_lrd_ifd_u32_0x10,
      .depth = 0,
      .width = 5,
      .edata = NULL,
    },
    { /* 1 PARTITION_ID */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_KEY,
      .min = &bcm56996_a0_lrd_ifd_u8_0x1,
      .def = &bcm56996_a0_lrd_ifd_u8_0x1,
      .max = &bcm56996_a0_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 2 NUM_QUAL_SRC_IP_INFO */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 3 QUAL_SRC_IP_OFFSET */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 4 QUAL_SRC_IP_WIDTH */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 5 QUAL_SRC_IP_ORDER */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 6 NUM_QUAL_DST_IP_INFO */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 7 QUAL_DST_IP_OFFSET */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 8 QUAL_DST_IP_WIDTH */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 9 QUAL_DST_IP_ORDER */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 10 NUM_QUAL_L4_SRC_PORT_INFO */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 11 QUAL_L4_SRC_PORT_OFFSET */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 12 QUAL_L4_SRC_PORT_WIDTH */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 13 QUAL_L4_SRC_PORT_ORDER */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 14 NUM_QUAL_L4_DST_PORT_INFO */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 15 QUAL_L4_DST_PORT_OFFSET */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 16 QUAL_L4_DST_PORT_WIDTH */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 17 QUAL_L4_DST_PORT_ORDER */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 18 NUM_QUAL_IP_PROTOCOL_INFO */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 19 QUAL_IP_PROTOCOL_OFFSET */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 20 QUAL_IP_PROTOCOL_WIDTH */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 21 QUAL_IP_PROTOCOL_ORDER */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 22 NUM_QUAL_INGRESS_PORT_INFO */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 23 QUAL_INGRESS_PORT_OFFSET */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 24 QUAL_INGRESS_PORT_WIDTH */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 25 QUAL_INGRESS_PORT_ORDER */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 26 NUM_QUAL_UDF_2_BYTE_CONTAINER_INFO */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 27 QUAL_UDF_2_BYTE_CONTAINER_OFFSET */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 28 QUAL_UDF_2_BYTE_CONTAINER_WIDTH */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 29 QUAL_UDF_2_BYTE_CONTAINER_ORDER */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 30 EM_KEY_ATTRIBUTE_INDEX */
      .flags = BCMLRD_FIELD_F_READ_ONLY,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 31 NUM_UDF_1_BYTE_CONTAINER_INFO */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 32 QUAL_UDF_1_BYTE_CONTAINER_OFFSET */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 33 QUAL_UDF_1_BYTE_CONTAINER_WIDTH */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 34 QUAL_UDF_1_BYTE_CONTAINER_ORDER */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56996_a0_lrd_fp_em_grp_template_partition_info_map_field_data = {
    .fields = 35,
    .field = bcm56996_a0_lrd_fp_em_grp_template_partition_info_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56996_a0_lrd_fp_em_grp_template_partition_infot_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 48,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56996_a0_lrd_fp_em_grp_template_partition_infot_attr_group = {
    .attributes = 2,
    .attr = bcm56996_a0_lrd_fp_em_grp_template_partition_infot_attr_entry,
};

static const bcmlrd_map_entry_t bcm56996_a0_lrd_bcmfp_fp_em_grp_template_partition_info_entry[] = {
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
            /* handler: bcm56996_a0_lta_bcmfp_fp_em_grp_template_partition_info_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56996_A0_LTA_BCMFP_FP_EM_GRP_TEMPLATE_PARTITION_INFO_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56996_a0_lrd_fp_em_grp_template_partition_info_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56996_a0_lrd_bcmfp_fp_em_grp_template_partition_info_entry
    },
};
const bcmlrd_map_t bcm56996_a0_lrd_fp_em_grp_template_partition_info_map = {
    .src_id = FP_EM_GRP_TEMPLATE_PARTITION_INFOt,
    .field_data = &bcm56996_a0_lrd_fp_em_grp_template_partition_info_map_field_data,
    .groups = 1,
    .group  = bcm56996_a0_lrd_fp_em_grp_template_partition_info_map_group,
    .table_attr = &bcm56996_a0_lrd_fp_em_grp_template_partition_infot_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE
};
