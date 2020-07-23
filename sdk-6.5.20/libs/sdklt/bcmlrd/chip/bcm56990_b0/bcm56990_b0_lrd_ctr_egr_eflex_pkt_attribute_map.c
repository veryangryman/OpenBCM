/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/ctr/bcm56990_b0/bcm56990_b0_CTR_EGR_EFLEX_PKT_ATTRIBUTE.map.ltl for
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
/* CTR_EGR_EFLEX_PKT_ATTRIBUTE field init */
static const bcmlrd_field_data_t bcm56990_b0_lrd_ctr_egr_eflex_pkt_attribute_map_field_data_mmd[] = {
    { /* 0 PIPE */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 1 CTR_EGR_EFLEX_PKT_ATTRIBUTE_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0x2,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 2 PKT_ATTRIBUTE */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 8,
      .width = 1,
      .edata = NULL,
    },
    { /* 3 PKT_ATTRIBUTE_MAP */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x28,
      .depth = 8,
      .width = 6,
      .edata = BCM56990_B0_LRD_CTR_EGR_EFLEX_PKT_ATTR_BUS_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56990_b0_lrd_ctr_egr_eflex_pkt_attribute_map_field_data = {
    .fields = 4,
    .field = bcm56990_b0_lrd_ctr_egr_eflex_pkt_attribute_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_b0_lrd_ctr_egr_eflex_pkt_attributet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INSTANCE_MAX_INDEX,
        .value = 3,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INSTANCE_MIN_INDEX,
        .value = 0,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = TRUE,
    },
};

static const bcmlrd_map_attr_t bcm56990_b0_lrd_ctr_egr_eflex_pkt_attributet_attr_group = {
    .attributes = 3,
    .attr = bcm56990_b0_lrd_ctr_egr_eflex_pkt_attributet_attr_entry,
};


const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_id_to_table_sel_src_field_desc_s0[1] = {
    {
        .field_id  = CTR_EGR_EFLEX_PKT_ATTRIBUTEt_CTR_EGR_EFLEX_PKT_ATTRIBUTE_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_id_to_table_sel_ctr_egr_eflex_pkt_attribute_dst_field_desc_d0[1] = {
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
bcm56990_b0_lrd_id_to_table_sel_transform_tbl_t0[3] = {
    EGR_FLEX_CTR_PKT_ATTR_SELECTOR_KEY_0_INST0r,
    EGR_FLEX_CTR_PKT_ATTR_SELECTOR_KEY_1_INST0r,
    EGR_FLEX_CTR_PKT_ATTR_SELECTOR_KEY_2_INST0r,
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_array_field_src_field_desc_s0[1] = {
    {
        .field_id  = CTR_EGR_EFLEX_PKT_ATTRIBUTEt_PKT_ATTRIBUTEf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_array_field_ctr_egr_eflex_pkt_attribute_dst_field_desc_d0[8] = {
    {
        .field_id  = SELECTOR_0_ENf,
        .field_idx = 0,
        .minbit    = 48,
        .maxbit    = 48,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = SELECTOR_1_ENf,
        .field_idx = 0,
        .minbit    = 49,
        .maxbit    = 49,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = SELECTOR_2_ENf,
        .field_idx = 0,
        .minbit    = 50,
        .maxbit    = 50,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = SELECTOR_3_ENf,
        .field_idx = 0,
        .minbit    = 51,
        .maxbit    = 51,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = SELECTOR_4_ENf,
        .field_idx = 0,
        .minbit    = 52,
        .maxbit    = 52,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = SELECTOR_5_ENf,
        .field_idx = 0,
        .minbit    = 53,
        .maxbit    = 53,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = SELECTOR_6_ENf,
        .field_idx = 0,
        .minbit    = 54,
        .maxbit    = 54,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = SELECTOR_7_ENf,
        .field_idx = 0,
        .minbit    = 55,
        .maxbit    = 55,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_array_field_src_field_desc_s1[1] = {
    {
        .field_id  = CTR_EGR_EFLEX_PKT_ATTRIBUTEt_PKT_ATTRIBUTE_MAPf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_b0_lrd_bcmltx_array_field_ctr_egr_eflex_pkt_attribute_dst_field_desc_d1[8] = {
    {
        .field_id  = SELECTOR_FOR_BIT_0f,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 5,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = SELECTOR_FOR_BIT_1f,
        .field_idx = 0,
        .minbit    = 6,
        .maxbit    = 11,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = SELECTOR_FOR_BIT_2f,
        .field_idx = 0,
        .minbit    = 12,
        .maxbit    = 17,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = SELECTOR_FOR_BIT_3f,
        .field_idx = 0,
        .minbit    = 18,
        .maxbit    = 23,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = SELECTOR_FOR_BIT_4f,
        .field_idx = 0,
        .minbit    = 24,
        .maxbit    = 29,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = SELECTOR_FOR_BIT_5f,
        .field_idx = 0,
        .minbit    = 30,
        .maxbit    = 35,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = SELECTOR_FOR_BIT_6f,
        .field_idx = 0,
        .minbit    = 36,
        .maxbit    = 41,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = SELECTOR_FOR_BIT_7f,
        .field_idx = 0,
        .minbit    = 42,
        .maxbit    = 47,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const uint32_t
bcm56990_b0_lrd_id_to_table_sel_transform_tbl_t1[3] = {
    EGR_FLEX_CTR_PKT_ATTR_SELECTOR_KEY_0_INST1r,
    EGR_FLEX_CTR_PKT_ATTR_SELECTOR_KEY_1_INST1r,
    EGR_FLEX_CTR_PKT_ATTR_SELECTOR_KEY_2_INST1r,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_id_to_table_sel_xfrm_handler_fwd_s0_d0_t0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_ID_TO_TABLE_SEL_XFRM_HANDLER_FWD_S0_D0_T0_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_id_to_table_sel_src_field_desc_s0,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_id_to_table_sel_ctr_egr_eflex_pkt_attribute_dst_field_desc_d0,
    .tables = 3,
    .tbl = bcm56990_b0_lrd_id_to_table_sel_transform_tbl_t0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_id_to_table_sel_xfrm_handler_rev_s0_d0_t0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_ID_TO_TABLE_SEL_XFRM_HANDLER_REV_S0_D0_T0_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_id_to_table_sel_ctr_egr_eflex_pkt_attribute_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_id_to_table_sel_src_field_desc_s0,
    .tables = 3,
    .tbl = bcm56990_b0_lrd_id_to_table_sel_transform_tbl_t0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_array_field_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_ARRAY_FIELD_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_array_field_src_field_desc_s0,
    .dst_fields = 8,
    .dst = bcm56990_b0_lrd_bcmltx_array_field_ctr_egr_eflex_pkt_attribute_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_array_field_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_ARRAY_FIELD_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 8,
    .src = bcm56990_b0_lrd_bcmltx_array_field_ctr_egr_eflex_pkt_attribute_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_array_field_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_array_field_xfrm_handler_fwd_s1_d1_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_ARRAY_FIELD_XFRM_HANDLER_FWD_S1_D1_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_array_field_src_field_desc_s1,
    .dst_fields = 8,
    .dst = bcm56990_b0_lrd_bcmltx_array_field_ctr_egr_eflex_pkt_attribute_dst_field_desc_d1,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_array_field_xfrm_handler_rev_s1_d1_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_ARRAY_FIELD_XFRM_HANDLER_REV_S1_D1_ID,
    .src_fields = 8,
    .src = bcm56990_b0_lrd_bcmltx_array_field_ctr_egr_eflex_pkt_attribute_dst_field_desc_d1,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_array_field_src_field_desc_s1,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_b0_lta_bcmltx_id_to_table_sel_xfrm_handler_fwd_s0_d0_t1_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_B0_LTA_BCMLTX_ID_TO_TABLE_SEL_XFRM_HANDLER_FWD_S0_D0_T1_ID,
    .src_fields = 1,
    .src = bcm56990_b0_lrd_bcmltx_id_to_table_sel_src_field_desc_s0,
    .dst_fields = 1,
    .dst = bcm56990_b0_lrd_bcmltx_id_to_table_sel_ctr_egr_eflex_pkt_attribute_dst_field_desc_d0,
    .tables = 3,
    .tbl = bcm56990_b0_lrd_id_to_table_sel_transform_tbl_t1,
};


static const bcmlrd_map_entry_t bcm56990_b0_lrd_ctr_egr_eflex_pkt_attributet_egr_flex_ctr_pkt_attr_selector_key_0_inst0_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INSTANCE,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_EGR_EFLEX_PKT_ATTRIBUTEt_PIPEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
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
                /* handler: bcm56990_b0_lta_bcmltx_id_to_table_sel_xfrm_handler_fwd_s0_d0_t0 */
                .desc = &bcm56990_b0_lta_bcmltx_id_to_table_sel_xfrm_handler_fwd_s0_d0_t0_desc,
            },
        },
    },
    { /* 2 */
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
                /* handler: bcm56990_b0_lta_bcmltx_id_to_table_sel_xfrm_handler_rev_s0_d0_t0 */
                .desc = &bcm56990_b0_lta_bcmltx_id_to_table_sel_xfrm_handler_rev_s0_d0_t0_desc,
            },
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_VALUE_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56990_b0_lta_bcmltx_array_field_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56990_b0_lta_bcmltx_array_field_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_VALUE_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56990_b0_lta_bcmltx_array_field_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56990_b0_lta_bcmltx_array_field_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_VALUE_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56990_b0_lta_bcmltx_array_field_xfrm_handler_fwd_s1_d1 */
                .desc = &bcm56990_b0_lta_bcmltx_array_field_xfrm_handler_fwd_s1_d1_desc,
            },
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_VALUE_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56990_b0_lta_bcmltx_array_field_xfrm_handler_rev_s1_d1 */
                .desc = &bcm56990_b0_lta_bcmltx_array_field_xfrm_handler_rev_s1_d1_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t bcm56990_b0_lrd_ctr_egr_eflex_pkt_attributet_egr_flex_ctr_pkt_attr_selector_key_0_inst1_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INSTANCE,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = CTR_EGR_EFLEX_PKT_ATTRIBUTEt_PIPEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
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
                /* handler: bcm56990_b0_lta_bcmltx_id_to_table_sel_xfrm_handler_fwd_s0_d0_t1 */
                .desc = &bcm56990_b0_lta_bcmltx_id_to_table_sel_xfrm_handler_fwd_s0_d0_t1_desc,
            },
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_VALUE_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56990_b0_lta_bcmltx_array_field_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56990_b0_lta_bcmltx_array_field_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_VALUE_FIELD_XFRM_HANDLER,
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
                /* handler: bcm56990_b0_lta_bcmltx_array_field_xfrm_handler_fwd_s1_d1 */
                .desc = &bcm56990_b0_lta_bcmltx_array_field_xfrm_handler_fwd_s1_d1_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t
bcm56990_b0_lrd_bcmltx_ctr_egr_eflex_pkt_attribute_validate_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_KEY_FIELD_VALIDATION,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56990_b0_lta_bcmltx_ctr_egr_eflex_pkt_attribute_pipe_fv_handler_v0 */
            .handler_id = BCMLTD_VALIDATE_BCM56990_B0_LTA_BCMLTX_CTR_EGR_EFLEX_PKT_ATTRIBUTE_PIPE_FV_HANDLER_V0_ID
        }
    },
};
/* Map conditions */
static const uint32_t
bcm56990_b0_lrd_ctr_egr_eflex_pkt_attribute_map_cond_edit[] = {
    2, /* Number of groups. */
    0, /* Group ID. */
    1, /* Number of entries. */
    0, /* Entry ID. */
    1, /* Group ID. */
    1, /* Number of entries. */
    0, /* Entry ID. */
    0, /* Number of multi-entry transforms. */
};

static const bcmlrd_condition_t
bcm56990_b0_lrd_ctr_egr_eflex_pkt_attribute_map_condition[] = {
    {
        .op    = BCMLRD_CONDITION_AND,
        .table = CTR_EFLEX_CONFIGt,
        .field = CTR_EFLEX_CONFIGt_CTR_EGR_EFLEX_OPERMODE_PIPEUNIQUEf,
        .value = 1
    },
};

static const bcmlrd_cond_expr_t
bcm56990_b0_lrd_ctr_egr_eflex_pkt_attribute_map_cond_expr[] = {
    {
        .num_cond = 1,
        .cond     = bcm56990_b0_lrd_ctr_egr_eflex_pkt_attribute_map_condition + 0,
    },
};

static const bcmlrd_cond_field_t bcm56990_b0_lrd_ctr_egr_eflex_pkt_attribute_map_cond_field[] = {
    {
        .field = CTR_EGR_EFLEX_PKT_ATTRIBUTEt_PIPEf,
        .expr  = bcm56990_b0_lrd_ctr_egr_eflex_pkt_attribute_map_cond_expr + 0,
        .edit  = bcm56990_b0_lrd_ctr_egr_eflex_pkt_attribute_map_cond_edit + 0,
    },
};
static const bcmlrd_cond_data_t
bcm56990_b0_lrd_ctr_egr_eflex_pkt_attribute_map_cond = {
    .num_field_cond = 1,
    .field_cond = bcm56990_b0_lrd_ctr_egr_eflex_pkt_attribute_map_cond_field
};
static const bcmlrd_map_group_t bcm56990_b0_lrd_ctr_egr_eflex_pkt_attribute_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = EGR_FLEX_CTR_PKT_ATTR_SELECTOR_KEY_0_INST0r,
        },
        .entries = 7,
        .entry = bcm56990_b0_lrd_ctr_egr_eflex_pkt_attributet_egr_flex_ctr_pkt_attr_selector_key_0_inst0_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = EGR_FLEX_CTR_PKT_ATTR_SELECTOR_KEY_0_INST1r,
        },
        .entries = 4,
        .entry = bcm56990_b0_lrd_ctr_egr_eflex_pkt_attributet_egr_flex_ctr_pkt_attr_selector_key_0_inst1_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_VALIDATION,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56990_b0_lrd_bcmltx_ctr_egr_eflex_pkt_attribute_validate_entry
    },
};
const bcmlrd_map_t bcm56990_b0_lrd_ctr_egr_eflex_pkt_attribute_map = {
    .src_id = CTR_EGR_EFLEX_PKT_ATTRIBUTEt,
    .field_data = &bcm56990_b0_lrd_ctr_egr_eflex_pkt_attribute_map_field_data,
    .groups = 3,
    .group  = bcm56990_b0_lrd_ctr_egr_eflex_pkt_attribute_map_group,
    .table_attr = &bcm56990_b0_lrd_ctr_egr_eflex_pkt_attributet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE,
    .cond = &bcm56990_b0_lrd_ctr_egr_eflex_pkt_attribute_map_cond,
};
