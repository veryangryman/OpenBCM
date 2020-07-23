/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/tnl/bcm56990_b0/bcm56990_b0_TNL_L2_VXLAN_DECAP_OVID_DST_IPV4.map.ltl for
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
/* TNL_L2_VXLAN_DECAP_OVID_DST_IPV4 field init */
static const bcmlrd_field_data_t bcm56990_b0_lrd_tnl_l2_vxlan_decap_ovid_dst_ipv4_map_field_data_mmd[] = {
    { /* 0 OVID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 1 OVID_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 2 OUTER_DST_IPV4 */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 3 OUTER_DST_IPV4_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 4 IPV6_PAYLOAD */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 5 IPV4_PAYLOAD */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 6 USE_TNL_HDR_TTL */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 7 KEEP_PAYLOAD_DSCP */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 8 L3_IIF_ID */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x1fff,
      .depth = 0,
      .width = 13,
      .edata = NULL,
    },
    { /* 9 CLASS_ID */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 10 BFD */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 11 TNL_DECAP_PORT_PROFILE_ID */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 12 CTR_ING_EFLEX_OBJECT */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u16_0x0,
      .def = &bcm56990_b0_lrd_ifd_u16_0x0,
      .max = &bcm56990_b0_lrd_ifd_u16_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 13 CTR_ING_EFLEX_ACTION */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_u8_0x0,
      .def = &bcm56990_b0_lrd_ifd_u8_0x0,
      .max = &bcm56990_b0_lrd_ifd_u8_0x1f,
      .depth = 0,
      .width = 5,
      .edata = NULL,
    },
    { /* 14 IGNORE_UDP_CHKSUM */
      .flags = 0,
      .min = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_b0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_b0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 15 TNL_HDR_FOR_PHB */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56990_b0_lrd_ifd_u32_0x0,
      .def = &bcm56990_b0_lrd_ifd_u32_0x0,
      .max = &bcm56990_b0_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCM56990_B0_LRD_VXLAN_TNL_HDR_FOR_PHB_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56990_b0_lrd_tnl_l2_vxlan_decap_ovid_dst_ipv4_map_field_data = {
    .fields = 16,
    .field = bcm56990_b0_lrd_tnl_l2_vxlan_decap_ovid_dst_ipv4_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_b0_lrd_tnl_l2_vxlan_decap_ovid_dst_ipv4t_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 256,
    },
};

static const bcmlrd_map_attr_t bcm56990_b0_lrd_tnl_l2_vxlan_decap_ovid_dst_ipv4t_attr_group = {
    .attributes = 2,
    .attr = bcm56990_b0_lrd_tnl_l2_vxlan_decap_ovid_dst_ipv4t_attr_entry,
};

static const bcmlrd_map_entry_t bcm56990_b0_lrd_tnl_l2_vxlan_decap_ovid_dst_ipv4t_l3_tunnel_tcam_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = VALID0f,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY0_KEY_TYPEf,
            .field_idx = 0,
            .minbit    = 2,
            .maxbit    = 5,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 2,
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASK0_KEY_TYPEf,
            .field_idx = 0,
            .minbit    = 154,
            .maxbit    = 157,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0xf,
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = KEY0_VIDf,
            .field_idx = 0,
            .minbit    = 38,
            .maxbit    = 49,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_OVID_DST_IPV4t_OVIDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = MASK0_VIDf,
            .field_idx = 0,
            .minbit    = 190,
            .maxbit    = 201,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_OVID_DST_IPV4t_OVID_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = KEY0_V4_DIPf,
            .field_idx = 0,
            .minbit    = 6,
            .maxbit    = 37,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_OVID_DST_IPV4t_OUTER_DST_IPV4f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 31,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = MASK0_V4_DIPf,
            .field_idx = 0,
            .minbit    = 158,
            .maxbit    = 189,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_OVID_DST_IPV4t_OUTER_DST_IPV4_MASKf,
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
            .field_id  = DATA0_VXLANv_PAYLOAD_IPV6f,
            .field_idx = 0,
            .minbit    = 379,
            .maxbit    = 379,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_OVID_DST_IPV4t_IPV6_PAYLOADf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA0_VXLANv_PAYLOAD_IPV4f,
            .field_idx = 0,
            .minbit    = 378,
            .maxbit    = 378,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_OVID_DST_IPV4t_IPV4_PAYLOADf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA0_VXLANv_IGNORE_UDP_CHECKSUMf,
            .field_idx = 0,
            .minbit    = 377,
            .maxbit    = 377,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_OVID_DST_IPV4t_IGNORE_UDP_CHKSUMf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 10 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA0_VXLANv_USE_OUTER_HDR_PHBf,
            .field_idx = 0,
            .minbit    = 380,
            .maxbit    = 381,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_OVID_DST_IPV4t_TNL_HDR_FOR_PHBf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA0_USE_OUTER_HDR_TTLf,
            .field_idx = 0,
            .minbit    = 370,
            .maxbit    = 370,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_OVID_DST_IPV4t_USE_TNL_HDR_TTLf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 12 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA0_L3_IIFf,
            .field_idx = 0,
            .minbit    = 345,
            .maxbit    = 357,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_OVID_DST_IPV4t_L3_IIF_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 12,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 13 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA0_TUNNEL_CLASS_IDf,
            .field_idx = 0,
            .minbit    = 358,
            .maxbit    = 369,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_OVID_DST_IPV4t_CLASS_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 14 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA0_FLEX_CTR_OBJECTf,
            .field_idx = 0,
            .minbit    = 337,
            .maxbit    = 344,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_OVID_DST_IPV4t_CTR_ING_EFLEX_OBJECTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 15 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA0_FLEX_CTR_ACTIONf,
            .field_idx = 0,
            .minbit    = 332,
            .maxbit    = 336,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_OVID_DST_IPV4t_CTR_ING_EFLEX_ACTIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 4,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 16 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA0_DONOT_CHANGE_INNER_HDR_DSCPf,
            .field_idx = 0,
            .minbit    = 331,
            .maxbit    = 331,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_OVID_DST_IPV4t_KEEP_PAYLOAD_DSCPf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 17 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = DATA0_DATA_TYPEf,
            .field_idx = 0,
            .minbit    = 329,
            .maxbit    = 330,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 18 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA0_BFD_ENABLEf,
            .field_idx = 0,
            .minbit    = 328,
            .maxbit    = 328,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_OVID_DST_IPV4t_BFDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 19 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA0_ALLOWED_PORT_BITMAP_PROFILE_PTRf,
            .field_idx = 0,
            .minbit    = 324,
            .maxbit    = 327,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = TNL_L2_VXLAN_DECAP_OVID_DST_IPV4t_TNL_DECAP_PORT_PROFILE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56990_b0_lrd_tnl_l2_vxlan_decap_ovid_dst_ipv4_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = L3_TUNNEL_TCAMm,
        },
        .entries = 20,
        .entry = bcm56990_b0_lrd_tnl_l2_vxlan_decap_ovid_dst_ipv4t_l3_tunnel_tcam_map_entry
    },
};
const bcmlrd_map_t bcm56990_b0_lrd_tnl_l2_vxlan_decap_ovid_dst_ipv4_map = {
    .src_id = TNL_L2_VXLAN_DECAP_OVID_DST_IPV4t,
    .field_data = &bcm56990_b0_lrd_tnl_l2_vxlan_decap_ovid_dst_ipv4_map_field_data,
    .groups = 1,
    .group  = bcm56990_b0_lrd_tnl_l2_vxlan_decap_ovid_dst_ipv4_map_group,
    .table_attr = &bcm56990_b0_lrd_tnl_l2_vxlan_decap_ovid_dst_ipv4t_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
