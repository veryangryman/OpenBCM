/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_L3_IPV4_UC_ROUTE_VRF.map.ltl for
 *      bcm56880_a0 variant dna_4_6_6
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
#include <bcmlrd/chip/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_lrd_field_data.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "../bcm56880_a0_lrd_enumpool.h"
#include "bcm56880_a0_dna_4_6_6_lrd_enumpool.h"
/* L3_IPV4_UC_ROUTE_VRF field init */
static const bcmlrd_field_data_t bcm56880_a0_dna_4_6_6_lrd_l3_ipv4_uc_route_vrf_map_field_data_mmd[] = {
    { /* 0 IPV4 */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 1 IPV4_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 2 VRF_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x3fff,
      .depth = 0,
      .width = 15,
      .edata = NULL,
    },
    { /* 3 VRF_ID_MASK */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 4 DESTINATION */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 5 DESTINATION_TYPE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0xa,
      .depth = 0,
      .width = 4,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_DESTINATION_TYPE_DATA,
    },
    { /* 6 MISC_CTRL_0 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 7 MISC_CTRL_1 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 8 DATA_TYPE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = BCM56880_A0_DNA_4_6_6_LRD_L3_IPV4_ALPM_VIEW_TYPE_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_dna_4_6_6_lrd_l3_ipv4_uc_route_vrf_map_field_data = {
    .fields = 9,
    .field = bcm56880_a0_dna_4_6_6_lrd_l3_ipv4_uc_route_vrf_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_dna_4_6_6_lrd_l3_ipv4_uc_route_vrft_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 2621440,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TCAM_ORDERING,
        .value = LPM,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_dna_4_6_6_lrd_l3_ipv4_uc_route_vrft_attr_group = {
    .attributes = 3,
    .attr = bcm56880_a0_dna_4_6_6_lrd_l3_ipv4_uc_route_vrft_attr_entry,
};

static const bcmlrd_map_entry_t bcm56880_a0_dna_4_6_6_lrd_l3_ipv4_uc_route_vrft_memdb_tcam_ifta80_mem0_1_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA_ONLYf,
            .field_idx = 0,
            .minbit    = 309,
            .maxbit    = 313,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_L3_IPV4_UC_ROUTE_VRFt_DATA_TYPEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 4,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA_ONLYf,
            .field_idx = 0,
            .minbit    = 232,
            .maxbit    = 235,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_L3_IPV4_UC_ROUTE_VRFt_DESTINATION_TYPEf,
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
            .field_id  = DATA_ONLYf,
            .field_idx = 0,
            .minbit    = 236,
            .maxbit    = 239,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_L3_IPV4_UC_ROUTE_VRFt_MISC_CTRL_1f,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA_ONLYf,
            .field_idx = 0,
            .minbit    = 228,
            .maxbit    = 231,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_L3_IPV4_UC_ROUTE_VRFt_MISC_CTRL_0f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATA_ONLYf,
            .field_idx = 0,
            .minbit    = 240,
            .maxbit    = 255,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_L3_IPV4_UC_ROUTE_VRFt_DESTINATIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = KEYf,
            .field_idx = 0,
            .minbit    = 5,
            .maxbit    = 36,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_L3_IPV4_UC_ROUTE_VRFt_IPV4f,
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
            .field_id  = MASKf,
            .field_idx = 0,
            .minbit    = 105,
            .maxbit    = 136,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_L3_IPV4_UC_ROUTE_VRFt_IPV4_MASKf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = KEYf,
            .field_idx = 0,
            .minbit    = 37,
            .maxbit    = 51,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_6_6_L3_IPV4_UC_ROUTE_VRFt_VRF_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 14,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
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
                .value = 1,
            }
        },
    },
    { /* 9 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEYf,
            .field_idx = 0,
            .minbit    = 4,
            .maxbit    = 4,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0,
            }
        },
    },
    { /* 10 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASKf,
            .field_idx = 0,
            .minbit    = 104,
            .maxbit    = 104,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEYf,
            .field_idx = 0,
            .minbit    = 2,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 2,
            }
        },
    },
    { /* 12 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASKf,
            .field_idx = 0,
            .minbit    = 102,
            .maxbit    = 103,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 13 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASKf,
            .field_idx = 0,
            .minbit    = 137,
            .maxbit    = 151,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0x7FFF,
            }
        },
    },
    { /* 14 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = DATA_ONLYf,
            .field_idx = 0,
            .minbit    = 303,
            .maxbit    = 304,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
};
static const bcmlrd_map_group_t bcm56880_a0_dna_4_6_6_lrd_l3_ipv4_uc_route_vrf_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MEMDB_TCAM_IFTA80_MEM0_1m,
        },
        .entries = 15,
        .entry = bcm56880_a0_dna_4_6_6_lrd_l3_ipv4_uc_route_vrft_memdb_tcam_ifta80_mem0_1_map_entry
    },
};
const bcmlrd_map_t bcm56880_a0_dna_4_6_6_lrd_l3_ipv4_uc_route_vrf_map = {
    .src_id = BCM56880_A0_DNA_4_6_6_L3_IPV4_UC_ROUTE_VRFt,
    .field_data = &bcm56880_a0_dna_4_6_6_lrd_l3_ipv4_uc_route_vrf_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_dna_4_6_6_lrd_l3_ipv4_uc_route_vrf_map_group,
    .table_attr = &bcm56880_a0_dna_4_6_6_lrd_l3_ipv4_uc_route_vrft_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
