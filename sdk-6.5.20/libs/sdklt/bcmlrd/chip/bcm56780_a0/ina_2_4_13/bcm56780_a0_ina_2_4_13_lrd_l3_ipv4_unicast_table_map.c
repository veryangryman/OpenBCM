/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56780_a0/ina_2_4_13/bcm56780_a0_ina_2_4_13_L3_IPV4_UNICAST_TABLE.map.ltl for
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
/* L3_IPV4_UNICAST_TABLE field init */
static const bcmlrd_field_data_t bcm56780_a0_ina_2_4_13_lrd_l3_ipv4_unicast_table_map_field_data_mmd[] = {
    { /* 0 IPV4_ADDR */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 1 VRF */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x3fff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 2 DESTINATION */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 3 DESTINATION_TYPE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u32_0xa,
      .depth = 0,
      .width = 4,
      .edata = BCM56780_A0_INA_2_4_13_LRD_DESTINATION_TYPE_DATA,
    },
    { /* 4 NAT_INDEX */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 5 CLASS_ID */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 6 NHOP_2_OR_ECMP_GROUP_INDEX_1 */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 7 NAT_CTRL */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 8 ECMP_AND_PROT_SWT_SFC_PROFILE_INDEX */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 9 MISC_CTRL_0 */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 10 MISC_CTRL_1 */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_ina_2_4_13_lrd_l3_ipv4_unicast_table_map_field_data = {
    .fields = 11,
    .field = bcm56780_a0_ina_2_4_13_lrd_l3_ipv4_unicast_table_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_ina_2_4_13_lrd_l3_ipv4_unicast_tablet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 40960,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_ina_2_4_13_lrd_l3_ipv4_unicast_tablet_attr_group = {
    .attributes = 2,
    .attr = bcm56780_a0_ina_2_4_13_lrd_l3_ipv4_unicast_tablet_attr_entry,
};


const bcmltd_field_desc_t
bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv4_unicast_tablet_ipv4_addrf_0_src_field_desc_s0[3] = {
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV4_UNICAST_TABLEt_IPV4_ADDRf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV4_UNICAST_TABLEt_IPV4_ADDRf,
        .field_idx = 0,
        .minbit    = 16,
        .maxbit    = 29,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV4_UNICAST_TABLEt_IPV4_ADDRf,
        .field_idx = 0,
        .minbit    = 30,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv4_unicast_tablet_ipv4_addrf_0_dst_field_desc[3] = {
    {
        .field_id  = TABLE_FIELDSf,
        .field_idx = 0,
        .minbit    = 39,
        .maxbit    = 54,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = TABLE_FIELDSf,
        .field_idx = 0,
        .minbit    = 13,
        .maxbit    = 26,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = TABLE_FIELDSf,
        .field_idx = 0,
        .minbit    = 7,
        .maxbit    = 8,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv4_unicast_tablet_vrff_0_src_field_desc_s0[2] = {
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV4_UNICAST_TABLEt_VRFf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 11,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_INA_2_4_13_L3_IPV4_UNICAST_TABLEt_VRFf,
        .field_idx = 0,
        .minbit    = 12,
        .maxbit    = 13,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv4_unicast_tablet_vrff_0_dst_field_desc[2] = {
    {
        .field_id  = TABLE_FIELDSf,
        .field_idx = 0,
        .minbit    = 27,
        .maxbit    = 38,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = TABLE_FIELDSf,
        .field_idx = 0,
        .minbit    = 11,
        .maxbit    = 12,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv4_unicast_tablet_ipv4_addrf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_INA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_IPV4_UNICAST_TABLET_IPV4_ADDRF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 3,
    .src = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv4_unicast_tablet_ipv4_addrf_0_src_field_desc_s0,
    .dst_fields = 3,
    .dst = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv4_unicast_tablet_ipv4_addrf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv4_unicast_tablet_ipv4_addrf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_INA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_IPV4_UNICAST_TABLET_IPV4_ADDRF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 3,
    .src = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv4_unicast_tablet_ipv4_addrf_0_dst_field_desc,
    .dst_fields = 3,
    .dst = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv4_unicast_tablet_ipv4_addrf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv4_unicast_tablet_vrff_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_INA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_IPV4_UNICAST_TABLET_VRFF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv4_unicast_tablet_vrff_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv4_unicast_tablet_vrff_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv4_unicast_tablet_vrff_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_INA_2_4_13_LTA_BCMLTX_FIELD_DEMUX_L3_IPV4_UNICAST_TABLET_VRFF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv4_unicast_tablet_vrff_0_dst_field_desc,
    .dst_fields = 2,
    .dst = bcm56780_a0_ina_2_4_13_lrd_field_demux_l3_ipv4_unicast_tablet_vrff_0_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56780_a0_ina_2_4_13_lrd_l3_ipv4_unicast_tablet_ifta80_e2t_03_b0_single_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDSf,
            .field_idx = 0,
            .minbit    = 60,
            .maxbit    = 63,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_INA_2_4_13_L3_IPV4_UNICAST_TABLEt_DESTINATION_TYPEf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDSf,
            .field_idx = 0,
            .minbit    = 64,
            .maxbit    = 67,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_INA_2_4_13_L3_IPV4_UNICAST_TABLEt_ECMP_AND_PROT_SWT_SFC_PROFILE_INDEXf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDSf,
            .field_idx = 0,
            .minbit    = 72,
            .maxbit    = 87,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_INA_2_4_13_L3_IPV4_UNICAST_TABLEt_CLASS_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDSf,
            .field_idx = 0,
            .minbit    = 88,
            .maxbit    = 103,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_INA_2_4_13_L3_IPV4_UNICAST_TABLEt_DESTINATIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDSf,
            .field_idx = 0,
            .minbit    = 56,
            .maxbit    = 59,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_INA_2_4_13_L3_IPV4_UNICAST_TABLEt_MISC_CTRL_0f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDSf,
            .field_idx = 0,
            .minbit    = 104,
            .maxbit    = 119,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_INA_2_4_13_L3_IPV4_UNICAST_TABLEt_NHOP_2_OR_ECMP_GROUP_INDEX_1f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = TABLE_FIELDSf,
            .field_idx = 0,
            .minbit    = 68,
            .maxbit    = 71,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_INA_2_4_13_L3_IPV4_UNICAST_TABLEt_MISC_CTRL_1f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BASE_VALIDf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 2,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY_TYPEf,
            .field_idx = 0,
            .minbit    = 3,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 5,
            }
        },
    },
    { /* 9 */
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
                /* handler: bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv4_unicast_tablet_ipv4_addrf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv4_unicast_tablet_ipv4_addrf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 10 */
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
                /* handler: bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv4_unicast_tablet_ipv4_addrf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv4_unicast_tablet_ipv4_addrf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 11 */
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
                /* handler: bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv4_unicast_tablet_vrff_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv4_unicast_tablet_vrff_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 12 */
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
                /* handler: bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv4_unicast_tablet_vrff_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56780_a0_ina_2_4_13_lta_bcmltx_field_demux_l3_ipv4_unicast_tablet_vrff_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56780_a0_ina_2_4_13_lrd_l3_ipv4_unicast_table_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IFTA80_E2T_03_B0_SINGLEm,
        },
        .entries = 13,
        .entry = bcm56780_a0_ina_2_4_13_lrd_l3_ipv4_unicast_tablet_ifta80_e2t_03_b0_single_map_entry
    },
};
const bcmlrd_map_t bcm56780_a0_ina_2_4_13_lrd_l3_ipv4_unicast_table_map = {
    .src_id = BCM56780_A0_INA_2_4_13_L3_IPV4_UNICAST_TABLEt,
    .field_data = &bcm56780_a0_ina_2_4_13_lrd_l3_ipv4_unicast_table_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_ina_2_4_13_lrd_l3_ipv4_unicast_table_map_group,
    .table_attr = &bcm56780_a0_ina_2_4_13_lrd_l3_ipv4_unicast_tablet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
