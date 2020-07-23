/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/l2/bcm56996_a0/bcm56996_a0_L2_VFI_FDB_STATIC.map.ltl for
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
/* L2_VFI_FDB_STATIC field init */
static const bcmlrd_field_data_t bcm56996_a0_lrd_l2_vfi_fdb_static_map_field_data_mmd[] = {
    { /* 0 VFI_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x1fff,
      .depth = 0,
      .width = 13,
      .edata = NULL,
    },
    { /* 1 VFI_ID_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x1fff,
      .depth = 0,
      .width = 13,
      .edata = NULL,
    },
    { /* 2 MAC_ADDR */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56996_a0_lrd_ifd_u64_0x0,
      .def = &bcm56996_a0_lrd_ifd_u64_0x0,
      .max = &bcm56996_a0_lrd_ifd_u64_0xffffffffffff,
      .depth = 0,
      .width = 48,
      .edata = NULL,
    },
    { /* 3 MAC_ADDR_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56996_a0_lrd_ifd_u64_0x0,
      .def = &bcm56996_a0_lrd_ifd_u64_0x0,
      .max = &bcm56996_a0_lrd_ifd_u64_0xffffffffffff,
      .depth = 0,
      .width = 48,
      .edata = NULL,
    },
    { /* 4 ENTRY_PRIORITY */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u32_0x0,
      .def = &bcm56996_a0_lrd_ifd_u32_0x0,
      .max = &bcm56996_a0_lrd_ifd_u32_0x7fffffff,
      .depth = 0,
      .width = 31,
      .edata = NULL,
    },
    { /* 5 DEST_TYPE */
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
      .width = 16,
      .edata = NULL,
    },
    { /* 8 TRUNK_ID */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0xff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 9 L2_MC_GROUP_ID */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x1ff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 10 TM_MC_GROUP_ID */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u16_0x1,
      .def = &bcm56996_a0_lrd_ifd_u16_0x1,
      .max = &bcm56996_a0_lrd_ifd_u16_0x1ff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 11 NHOP_ID */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u16_0x1,
      .def = &bcm56996_a0_lrd_ifd_u16_0x1,
      .max = &bcm56996_a0_lrd_ifd_u16_0x7fff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 12 ECMP_ID */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 13 SKIP_LEARNING */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56996_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56996_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 14 BPDU */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56996_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56996_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 15 L2_PROTOCOL_PKT */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56996_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56996_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 16 CLASS_ID */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x3ff,
      .depth = 0,
      .width = 10,
      .edata = NULL,
    },
    { /* 17 DVP */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u16_0x0,
      .def = &bcm56996_a0_lrd_ifd_u16_0x0,
      .max = &bcm56996_a0_lrd_ifd_u16_0x1fff,
      .depth = 0,
      .width = 13,
      .edata = NULL,
    },
    { /* 18 ASSIGN_INT_PRI */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56996_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56996_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 19 INT_PRI */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_u8_0x0,
      .def = &bcm56996_a0_lrd_ifd_u8_0x0,
      .max = &bcm56996_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 20 DROP */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56996_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56996_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 21 COPY_TO_CPU */
      .flags = 0,
      .min = &bcm56996_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56996_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56996_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56996_a0_lrd_l2_vfi_fdb_static_map_field_data = {
    .fields = 22,
    .field = bcm56996_a0_lrd_l2_vfi_fdb_static_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56996_a0_lrd_l2_vfi_fdb_statict_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 256,
    },
};

static const bcmlrd_map_attr_t bcm56996_a0_lrd_l2_vfi_fdb_statict_attr_group = {
    .attributes = 2,
    .attr = bcm56996_a0_lrd_l2_vfi_fdb_statict_attr_entry,
};


const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_l2_vfi_fdb_dest_src_field_desc_s1[1] = {
    {
        .field_id  = L2_VFI_FDB_STATICt_DEST_TYPEf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_l2_vfi_fdb_dest_l2_vfi_fdb_static_dst_field_desc_d1[1] = {
    {
        .field_id  = DEST_TYPEf,
        .field_idx = 0,
        .minbit    = 178,
        .maxbit    = 180,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56996_a0_lta_bcmltx_l2_vfi_fdb_dest_xfrm_handler_fwd_s1_k1_d1_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56996_A0_LTA_BCMLTX_L2_VFI_FDB_DEST_XFRM_HANDLER_FWD_S1_K1_D1_ID,
    .src_fields = 1,
    .src = bcm56996_a0_lrd_bcmltx_l2_vfi_fdb_dest_src_field_desc_s1,
    .dst_fields = 1,
    .dst = bcm56996_a0_lrd_bcmltx_l2_vfi_fdb_dest_l2_vfi_fdb_static_dst_field_desc_d1,
};

const bcmlrd_field_xfrm_desc_t
bcm56996_a0_lta_bcmltx_l2_vfi_fdb_dest_xfrm_handler_rev_s1_k1_d1_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56996_A0_LTA_BCMLTX_L2_VFI_FDB_DEST_XFRM_HANDLER_REV_S1_K1_D1_ID,
    .src_fields = 1,
    .src = bcm56996_a0_lrd_bcmltx_l2_vfi_fdb_dest_l2_vfi_fdb_static_dst_field_desc_d1,
    .dst_fields = 1,
    .dst = bcm56996_a0_lrd_bcmltx_l2_vfi_fdb_dest_src_field_desc_s1,
};


static const bcmlrd_map_entry_t bcm56996_a0_lrd_l2_vfi_fdb_statict_l2_user_entry_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = VALIDf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 1,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = VFIf,
            .field_idx = 0,
            .minbit    = 50,
            .maxbit    = 62,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L2_VFI_FDB_STATICt_VFI_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 12,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = VFI_MASKf,
            .field_idx = 0,
            .minbit    = 130,
            .maxbit    = 142,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L2_VFI_FDB_STATICt_VFI_ID_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 12,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = MAC_ADDRf,
            .field_idx = 0,
            .minbit    = 2,
            .maxbit    = 49,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L2_VFI_FDB_STATICt_MAC_ADDRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 47,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = MAC_ADDR_MASKf,
            .field_idx = 0,
            .minbit    = 82,
            .maxbit    = 129,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L2_VFI_FDB_STATICt_MAC_ADDR_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 47,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY_TYPEf,
            .field_idx = 0,
            .minbit    = 63,
            .maxbit    = 63,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0,
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEY_TYPE_MASKf,
            .field_idx = 0,
            .minbit    = 143,
            .maxbit    = 143,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_ENTRY_PRIORITY,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 30,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L2_VFI_FDB_STATICt_ENTRY_PRIORITYf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 30,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DESTINATIONf,
            .field_idx = 0,
            .minbit    = 181,
            .maxbit    = 196,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L2_VFI_FDB_STATICt_MODPORTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 9 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DESTINATIONf,
            .field_idx = 0,
            .minbit    = 181,
            .maxbit    = 196,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L2_VFI_FDB_STATICt_TRUNK_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 10 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DESTINATIONf,
            .field_idx = 0,
            .minbit    = 181,
            .maxbit    = 196,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L2_VFI_FDB_STATICt_L2_MC_GROUP_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DESTINATIONf,
            .field_idx = 0,
            .minbit    = 181,
            .maxbit    = 196,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L2_VFI_FDB_STATICt_TM_MC_GROUP_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 12 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DESTINATIONf,
            .field_idx = 0,
            .minbit    = 181,
            .maxbit    = 196,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L2_VFI_FDB_STATICt_NHOP_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 13 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DESTINATIONf,
            .field_idx = 0,
            .minbit    = 181,
            .maxbit    = 196,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L2_VFI_FDB_STATICt_ECMP_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 14 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DO_NOT_LEARN_MACSAf,
            .field_idx = 0,
            .minbit    = 209,
            .maxbit    = 209,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L2_VFI_FDB_STATICt_SKIP_LEARNINGf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 15 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = BPDUf,
            .field_idx = 0,
            .minbit    = 197,
            .maxbit    = 197,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L2_VFI_FDB_STATICt_BPDUf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 16 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = L2_PROTOCOL_PKTf,
            .field_idx = 0,
            .minbit    = 224,
            .maxbit    = 224,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L2_VFI_FDB_STATICt_L2_PROTOCOL_PKTf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = CLASS_IDf,
            .field_idx = 0,
            .minbit    = 198,
            .maxbit    = 207,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L2_VFI_FDB_STATICt_CLASS_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 9,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 18 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DVPf,
            .field_idx = 0,
            .minbit    = 211,
            .maxbit    = 223,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L2_VFI_FDB_STATICt_DVPf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 12,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 19 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = RPEf,
            .field_idx = 0,
            .minbit    = 229,
            .maxbit    = 229,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L2_VFI_FDB_STATICt_ASSIGN_INT_PRIf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 20 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = PRIf,
            .field_idx = 0,
            .minbit    = 225,
            .maxbit    = 228,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L2_VFI_FDB_STATICt_INT_PRIf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 21 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DST_DISCARDf,
            .field_idx = 0,
            .minbit    = 210,
            .maxbit    = 210,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L2_VFI_FDB_STATICt_DROPf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 22 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = CPUf,
            .field_idx = 0,
            .minbit    = 208,
            .maxbit    = 208,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L2_VFI_FDB_STATICt_COPY_TO_CPUf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 23 */
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
                /* handler: bcm56996_a0_lta_bcmltx_l2_vfi_fdb_dest_xfrm_handler_fwd_s1_k1_d1 */
                .desc = &bcm56996_a0_lta_bcmltx_l2_vfi_fdb_dest_xfrm_handler_fwd_s1_k1_d1_desc,
            },
        },
    },
    { /* 24 */
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
                /* handler: bcm56996_a0_lta_bcmltx_l2_vfi_fdb_dest_xfrm_handler_rev_s1_k1_d1 */
                .desc = &bcm56996_a0_lta_bcmltx_l2_vfi_fdb_dest_xfrm_handler_rev_s1_k1_d1_desc,
            },
        },
    },
};
const bcmlrd_field_selector_t bcm56996_a0_lrd_l2_vfi_fdb_static_map_select[] = {
    { /* Node:0, Type:ROOT, DEST_TYPE */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_ROOT,
        .field_id = L2_VFI_FDB_STATICt_DEST_TYPEf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = BCMLRD_INVALID_SELECTOR_INDEX,
        .group = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_id = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_value = BCMLRD_INVALID_SELECTOR_INDEX
    },
    { /* Node:1, Type:Directmap, MODPORT:L2_USER_ENTRY.DESTINATION */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = L2_VFI_FDB_STATICt_MODPORTf,
        .group_index = 0,
        .entry_index = 8,
        .selection_parent = 0,
        .group = 0,
        .selector_id = L2_VFI_FDB_STATICt_DEST_TYPEf,
        .selector_value = 0 /* PORT */
    },
    { /* Node:2, Type:Directmap, TRUNK_ID:L2_USER_ENTRY.DESTINATION */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = L2_VFI_FDB_STATICt_TRUNK_IDf,
        .group_index = 0,
        .entry_index = 9,
        .selection_parent = 0,
        .group = 0,
        .selector_id = L2_VFI_FDB_STATICt_DEST_TYPEf,
        .selector_value = 1 /* TRUNK */
    },
    { /* Node:3, Type:Directmap, L2_MC_GROUP_ID:L2_USER_ENTRY.DESTINATION */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = L2_VFI_FDB_STATICt_L2_MC_GROUP_IDf,
        .group_index = 0,
        .entry_index = 10,
        .selection_parent = 0,
        .group = 0,
        .selector_id = L2_VFI_FDB_STATICt_DEST_TYPEf,
        .selector_value = 2 /* L2_MC_GRP */
    },
    { /* Node:4, Type:Directmap, TM_MC_GROUP_ID:L2_USER_ENTRY.DESTINATION */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = L2_VFI_FDB_STATICt_TM_MC_GROUP_IDf,
        .group_index = 0,
        .entry_index = 11,
        .selection_parent = 0,
        .group = 0,
        .selector_id = L2_VFI_FDB_STATICt_DEST_TYPEf,
        .selector_value = 3 /* L3_MC_GRP */
    },
    { /* Node:5, Type:Directmap, NHOP_ID:L2_USER_ENTRY.DESTINATION */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = L2_VFI_FDB_STATICt_NHOP_IDf,
        .group_index = 0,
        .entry_index = 12,
        .selection_parent = 0,
        .group = 0,
        .selector_id = L2_VFI_FDB_STATICt_DEST_TYPEf,
        .selector_value = 4 /* NHOP */
    },
    { /* Node:6, Type:Directmap, ECMP_ID:L2_USER_ENTRY.DESTINATION */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = L2_VFI_FDB_STATICt_ECMP_IDf,
        .group_index = 0,
        .entry_index = 13,
        .selection_parent = 0,
        .group = 0,
        .selector_id = L2_VFI_FDB_STATICt_DEST_TYPEf,
        .selector_value = 5 /* ECMP_GRP */
    },
};

const bcmlrd_field_selector_data_t bcm56996_a0_lrd_l2_vfi_fdb_static_map_select_data = {
    .num_field_selector = 7,
    .field_selector = bcm56996_a0_lrd_l2_vfi_fdb_static_map_select,
};

static const bcmlrd_map_group_t bcm56996_a0_lrd_l2_vfi_fdb_static_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = L2_USER_ENTRYm,
        },
        .entries = 25,
        .entry = bcm56996_a0_lrd_l2_vfi_fdb_statict_l2_user_entry_map_entry
    },
};
const bcmlrd_map_t bcm56996_a0_lrd_l2_vfi_fdb_static_map = {
    .src_id = L2_VFI_FDB_STATICt,
    .field_data = &bcm56996_a0_lrd_l2_vfi_fdb_static_map_field_data,
    .groups = 1,
    .group  = bcm56996_a0_lrd_l2_vfi_fdb_static_map_group,
    .table_attr = &bcm56996_a0_lrd_l2_vfi_fdb_statict_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE,
    .sel = &bcm56996_a0_lrd_l2_vfi_fdb_static_map_select_data,
};
