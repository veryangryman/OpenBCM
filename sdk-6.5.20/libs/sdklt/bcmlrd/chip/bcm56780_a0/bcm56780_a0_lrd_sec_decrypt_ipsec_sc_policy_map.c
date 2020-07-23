/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/sec/bcm56780_a0/bcm56780_a0_SEC_DECRYPT_IPSEC_SC_POLICY.map.ltl for
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
/* SEC_DECRYPT_IPSEC_SC_POLICY field init */
static const bcmlrd_field_data_t bcm56780_a0_lrd_sec_decrypt_ipsec_sc_policy_map_field_data_mmd[] = {
    { /* 0 SEC_BLOCK_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0x5,
      .depth = 0,
      .width = 7,
      .edata = NULL,
    },
    { /* 1 SEC_DECRYPT_IPSEC_SC_POLICY_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x3ff,
      .depth = 0,
      .width = 10,
      .edata = NULL,
    },
    { /* 2 SA_EXPIRY_DISABLE */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 3 VXLAN_HEADER_UPDATE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x3,
      .depth = 0,
      .width = 2,
      .edata = BCMLTD_COMMON_VXLAN_HEADER_UPDATE_T_DATA,
    },
    { /* 4 DUPLICATE_REJECT */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 5 REPLAY_PROTECT */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 6 REPLAY_PROTECT_WINDOW */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 7 ESP_ICV_MODE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCMLTD_COMMON_SEC_HEADER_ICV_MODE_T_DATA,
    },
    { /* 8 CIPHER_SUITE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x3,
      .depth = 0,
      .width = 2,
      .edata = BCMLTD_COMMON_CIPHER_SUITE_T_DATA,
    },
    { /* 9 GMAC_MODE */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_lrd_sec_decrypt_ipsec_sc_policy_map_field_data = {
    .fields = 10,
    .field = bcm56780_a0_lrd_sec_decrypt_ipsec_sc_policy_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_lrd_sec_decrypt_ipsec_sc_policyt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_PORT_MAX_INDEX,
        .value = 79,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_PORT_MIN_INDEX,
        .value = 0,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_SHARED_INDEX,
        .value = SEC_DECRYPT_MACSEC_SC_POLICYt,
    },
    { /* 4 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 1023,
    },
    { /* 5 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_lrd_sec_decrypt_ipsec_sc_policyt_attr_group = {
    .attributes = 6,
    .attr = bcm56780_a0_lrd_sec_decrypt_ipsec_sc_policyt_attr_entry,
};


const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_sectag_icv_xform_src_field_desc_s0[1] = {
    {
        .field_id  = SEC_DECRYPT_IPSEC_SC_POLICYt_ESP_ICV_MODEf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_sectag_icv_xform_sec_decrypt_ipsec_sc_policy_dst_field_desc_d0[1] = {
    {
        .field_id  = ESPHDR_ICV_MODEf,
        .field_idx = 0,
        .minbit    = 25,
        .maxbit    = 26,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_sectag_icv_xform_xfrm_handler_fwd_s0_d0_x0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_SECTAG_ICV_XFORM_XFRM_HANDLER_FWD_S0_D0_X0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_sectag_icv_xform_src_field_desc_s0,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_sectag_icv_xform_sec_decrypt_ipsec_sc_policy_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_sectag_icv_xform_xfrm_handler_rev_s0_d0_x0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_SECTAG_ICV_XFORM_XFRM_HANDLER_REV_S0_D0_X0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_sectag_icv_xform_sec_decrypt_ipsec_sc_policy_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_sectag_icv_xform_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56780_a0_lrd_sec_decrypt_ipsec_sc_policyt_isec_sc_table_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 9,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_DECRYPT_IPSEC_SC_POLICYt_SEC_DECRYPT_IPSEC_SC_POLICY_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 9,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_PORT,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_DECRYPT_IPSEC_SC_POLICYt_SEC_BLOCK_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 6,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = SAEXPIRYINTERRUPTDISABLEf,
            .field_idx = 0,
            .minbit    = 67,
            .maxbit    = 67,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_DECRYPT_IPSEC_SC_POLICYt_SA_EXPIRY_DISABLEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = VXLANSEC_L3L4_HDR_UPDATEf,
            .field_idx = 0,
            .minbit    = 61,
            .maxbit    = 62,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_DECRYPT_IPSEC_SC_POLICYt_VXLAN_HEADER_UPDATEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DUPLICATEREJECTENABLEf,
            .field_idx = 0,
            .minbit    = 60,
            .maxbit    = 60,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_DECRYPT_IPSEC_SC_POLICYt_DUPLICATE_REJECTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = REPLAYPROTECTf,
            .field_idx = 0,
            .minbit    = 59,
            .maxbit    = 59,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_DECRYPT_IPSEC_SC_POLICYt_REPLAY_PROTECTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = REPLAYWINDOWf,
            .field_idx = 0,
            .minbit    = 27,
            .maxbit    = 58,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_DECRYPT_IPSEC_SC_POLICYt_REPLAY_PROTECT_WINDOWf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 31,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = CIPHERSUITEf,
            .field_idx = 0,
            .minbit    = 23,
            .maxbit    = 24,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_DECRYPT_IPSEC_SC_POLICYt_CIPHER_SUITEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = IPSEC_GMACf,
            .field_idx = 0,
            .minbit    = 7,
            .maxbit    = 7,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = SEC_DECRYPT_IPSEC_SC_POLICYt_GMAC_MODEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 9 */
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
                /* handler: bcm56780_a0_lta_bcmltx_sectag_icv_xform_xfrm_handler_fwd_s0_d0_x0 */
                .desc = &bcm56780_a0_lta_bcmltx_sectag_icv_xform_xfrm_handler_fwd_s0_d0_x0_desc,
            },
        },
    },
    { /* 10 */
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
                /* handler: bcm56780_a0_lta_bcmltx_sectag_icv_xform_xfrm_handler_rev_s0_d0_x0 */
                .desc = &bcm56780_a0_lta_bcmltx_sectag_icv_xform_xfrm_handler_rev_s0_d0_x0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56780_a0_lrd_sec_decrypt_ipsec_sc_policy_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = ISEC_SC_TABLEm,
        },
        .entries = 11,
        .entry = bcm56780_a0_lrd_sec_decrypt_ipsec_sc_policyt_isec_sc_table_map_entry
    },
};
const bcmlrd_map_t bcm56780_a0_lrd_sec_decrypt_ipsec_sc_policy_map = {
    .src_id = SEC_DECRYPT_IPSEC_SC_POLICYt,
    .field_data = &bcm56780_a0_lrd_sec_decrypt_ipsec_sc_policy_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_lrd_sec_decrypt_ipsec_sc_policy_map_group,
    .table_attr = &bcm56780_a0_lrd_sec_decrypt_ipsec_sc_policyt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
