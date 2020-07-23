/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/flex_state/bcm56880_a0/bcm56880_a0_FLEX_STATE_ING_BITP_PROFILE.map.ltl for
 *      bcm56880_a0
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
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56880_a0_lrd_enumpool.h"
/* FLEX_STATE_ING_BITP_PROFILE field init */
static const bcmlrd_field_data_t bcm56880_a0_lrd_flex_state_ing_bitp_profile_map_field_data_mmd[] = {
    { /* 0 MUX0_SIZE0_SEL_0 */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0x3f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
    { /* 1 MUX0_SIZE0_SEL_1 */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0x3f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
    { /* 2 MUX0_SIZE0_SEL_2 */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0x3f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
    { /* 3 MUX0_MASK */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 4 MUX_ENABLE */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 5 MIRROR_COPY_VALUE */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 6 MIRROR_COPY_MASK */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_lrd_flex_state_ing_bitp_profile_map_field_data = {
    .fields = 7,
    .field = bcm56880_a0_lrd_flex_state_ing_bitp_profile_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_lrd_flex_state_ing_bitp_profilet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = true,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_lrd_flex_state_ing_bitp_profilet_attr_group = {
    .attributes = 1,
    .attr = bcm56880_a0_lrd_flex_state_ing_bitp_profilet_attr_entry,
};

static const bcmlrd_map_entry_t bcm56880_a0_lrd_flex_state_ing_bitp_profilet_flex_ctr_st_ing0_bitp_profile_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MUX0_SIZE0_SEL_0f,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 5,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FLEX_STATE_ING_BITP_PROFILEt_MUX0_SIZE0_SEL_0f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 5,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MUX0_SIZE0_SEL_1f,
            .field_idx = 0,
            .minbit    = 6,
            .maxbit    = 11,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FLEX_STATE_ING_BITP_PROFILEt_MUX0_SIZE0_SEL_1f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 5,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MUX0_SIZE0_SEL_2f,
            .field_idx = 0,
            .minbit    = 12,
            .maxbit    = 17,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FLEX_STATE_ING_BITP_PROFILEt_MUX0_SIZE0_SEL_2f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 5,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MUX0_MASKf,
            .field_idx = 0,
            .minbit    = 18,
            .maxbit    = 29,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FLEX_STATE_ING_BITP_PROFILEt_MUX0_MASKf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MUX_ENABLEf,
            .field_idx = 0,
            .minbit    = 30,
            .maxbit    = 30,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FLEX_STATE_ING_BITP_PROFILEt_MUX_ENABLEf,
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
            .field_id  = MIRROR_COPY_VALUEf,
            .field_idx = 0,
            .minbit    = 35,
            .maxbit    = 38,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FLEX_STATE_ING_BITP_PROFILEt_MIRROR_COPY_VALUEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = MIRROR_COPY_MASKf,
            .field_idx = 0,
            .minbit    = 31,
            .maxbit    = 34,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = FLEX_STATE_ING_BITP_PROFILEt_MIRROR_COPY_MASKf,
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
static const bcmlrd_map_group_t bcm56880_a0_lrd_flex_state_ing_bitp_profile_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = FLEX_CTR_ST_ING0_BITP_PROFILEm,
        },
        .entries = 7,
        .entry = bcm56880_a0_lrd_flex_state_ing_bitp_profilet_flex_ctr_st_ing0_bitp_profile_map_entry
    },
};
const bcmlrd_map_t bcm56880_a0_lrd_flex_state_ing_bitp_profile_map = {
    .src_id = FLEX_STATE_ING_BITP_PROFILEt,
    .field_data = &bcm56880_a0_lrd_flex_state_ing_bitp_profile_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_lrd_flex_state_ing_bitp_profile_map_group,
    .table_attr = &bcm56880_a0_lrd_flex_state_ing_bitp_profilet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
