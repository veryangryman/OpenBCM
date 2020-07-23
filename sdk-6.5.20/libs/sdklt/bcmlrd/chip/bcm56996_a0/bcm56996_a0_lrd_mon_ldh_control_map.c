/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/mon/bcm56996_a0/bcm56996_a0_MON_LDH_CONTROL.map.ltl for
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
/* MON_LDH_CONTROL field init */
static const bcmlrd_field_data_t bcm56996_a0_lrd_mon_ldh_control_map_field_data_mmd[] = {
    { /* 0 MON_LDH_INSTANCE */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 1 MONITOR */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56996_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56996_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 2 COUNT_MODE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56996_a0_lrd_ifd_u32_0x0,
      .def = &bcm56996_a0_lrd_ifd_u32_0x0,
      .max = &bcm56996_a0_lrd_ifd_u32_0x3,
      .depth = 0,
      .width = 2,
      .edata = BCM56996_A0_LRD_LDH_COUNT_MODE_T_DATA,
    },
    { /* 3 COLLECTION_MODE */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u32_0x0,
      .def = &bcm56996_a0_lrd_ifd_u32_0x0,
      .max = &bcm56996_a0_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 4 TIME_STEP */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u32_0x0,
      .def = &bcm56996_a0_lrd_ifd_u32_0x0,
      .max = &bcm56996_a0_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 5 CTR_EGR_FLEX_POOL_NUMBER */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u32_0x0,
      .def = &bcm56996_a0_lrd_ifd_u32_0x0,
      .max = &bcm56996_a0_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 6 CTR_EGR_FLEX_OFFSET_MODE */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u32_0x0,
      .def = &bcm56996_a0_lrd_ifd_u32_0x0,
      .max = &bcm56996_a0_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 7 OFFSET */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 8 COUNTER_INCREMENT */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 9 MAX_HISTOGRAM_GROUP */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 10 CTR_EGR_EFLEX_ACTION */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56996_a0_lrd_mon_ldh_control_map_field_data = {
    .fields = 11,
    .field = bcm56996_a0_lrd_mon_ldh_control_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56996_a0_lrd_mon_ldh_controlt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56996_a0_lrd_mon_ldh_controlt_attr_group = {
    .attributes = 1,
    .attr = bcm56996_a0_lrd_mon_ldh_controlt_attr_entry,
};


const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_id_to_table_sel_src_field_desc_s3[1] = {
    {
        .field_id  = MON_LDH_CONTROLt_MON_LDH_INSTANCEf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_id_to_table_sel_mon_ldh_control_dst_field_desc_d0[1] = {
    {
        .field_id  = BCMLRD_FIELD_TABLE_SEL,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const uint32_t
bcm56996_a0_lrd_id_to_table_sel_transform_tbl_t5[4] = {
    EGR_HISTO_MON_0_CONFIGr,
    EGR_HISTO_MON_1_CONFIGr,
    EGR_HISTO_MON_2_CONFIGr,
    EGR_HISTO_MON_3_CONFIGr,
};

const bcmlrd_field_xfrm_desc_t
bcm56996_a0_lta_bcmltx_id_to_table_sel_xfrm_handler_fwd_s3_d0_t5_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56996_A0_LTA_BCMLTX_ID_TO_TABLE_SEL_XFRM_HANDLER_FWD_S3_D0_T5_ID,
    .src_fields = 1,
    .src = bcm56996_a0_lrd_bcmltx_id_to_table_sel_src_field_desc_s3,
    .dst_fields = 1,
    .dst = bcm56996_a0_lrd_bcmltx_id_to_table_sel_mon_ldh_control_dst_field_desc_d0,
    .tables = 4,
    .tbl = bcm56996_a0_lrd_id_to_table_sel_transform_tbl_t5,
};

const bcmlrd_field_xfrm_desc_t
bcm56996_a0_lta_bcmltx_id_to_table_sel_xfrm_handler_rev_s3_d0_t5_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56996_A0_LTA_BCMLTX_ID_TO_TABLE_SEL_XFRM_HANDLER_REV_S3_D0_T5_ID,
    .src_fields = 1,
    .src = bcm56996_a0_lrd_bcmltx_id_to_table_sel_mon_ldh_control_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56996_a0_lrd_bcmltx_id_to_table_sel_src_field_desc_s3,
    .tables = 4,
    .tbl = bcm56996_a0_lrd_id_to_table_sel_transform_tbl_t5,
};


static const bcmlrd_map_entry_t bcm56996_a0_lrd_mon_ldh_controlt_egr_histo_mon_0_config_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MONITOR_ENf,
            .field_idx = 0,
            .minbit    = 4,
            .maxbit    = 4,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_LDH_CONTROLt_MONITORf,
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
            .field_id  = MON_CUT_THROUGHf,
            .field_idx = 0,
            .minbit    = 5,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_LDH_CONTROLt_COUNT_MODEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = FLEX_CTR_ACTIONf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_LDH_CONTROLt_CTR_EGR_EFLEX_ACTIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
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
                /* handler: bcm56996_a0_lta_bcmltx_id_to_table_sel_xfrm_handler_fwd_s3_d0_t5 */
                .desc = &bcm56996_a0_lta_bcmltx_id_to_table_sel_xfrm_handler_fwd_s3_d0_t5_desc,
            },
        },
    },
    { /* 4 */
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
                /* handler: bcm56996_a0_lta_bcmltx_id_to_table_sel_xfrm_handler_rev_s3_d0_t5 */
                .desc = &bcm56996_a0_lta_bcmltx_id_to_table_sel_xfrm_handler_rev_s3_d0_t5_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56996_a0_lrd_mon_ldh_control_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = EGR_HISTO_MON_0_CONFIGr,
        },
        .entries = 5,
        .entry = bcm56996_a0_lrd_mon_ldh_controlt_egr_histo_mon_0_config_map_entry
    },
};
const bcmlrd_map_t bcm56996_a0_lrd_mon_ldh_control_map = {
    .src_id = MON_LDH_CONTROLt,
    .field_data = &bcm56996_a0_lrd_mon_ldh_control_map_field_data,
    .groups = 1,
    .group  = bcm56996_a0_lrd_mon_ldh_control_map_group,
    .table_attr = &bcm56996_a0_lrd_mon_ldh_controlt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
