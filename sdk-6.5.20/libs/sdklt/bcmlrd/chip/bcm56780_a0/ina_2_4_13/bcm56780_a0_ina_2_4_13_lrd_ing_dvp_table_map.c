/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56780_a0/ina_2_4_13/bcm56780_a0_ina_2_4_13_ING_DVP_TABLE.map.ltl for
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
/* ING_DVP_TABLE field init */
static const bcmlrd_field_data_t bcm56780_a0_ina_2_4_13_lrd_ing_dvp_table_map_field_data_mmd[] = {
    { /* 0 DVP */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u16_0x3fff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 1 NO_CUT_THRU */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
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
    { /* 3 L2MC_L3MC_L2_OIF_SYS_DST_VALID */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 4 STRENGTH_PROFILE_INDEX */
      .flags = 0,
      .min = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_ina_2_4_13_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_ina_2_4_13_lrd_ing_dvp_table_map_field_data = {
    .fields = 5,
    .field = bcm56780_a0_ina_2_4_13_lrd_ing_dvp_table_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_ina_2_4_13_lrd_ing_dvp_tablet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 16383,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MAX_INDEX,
        .value = 16383,
    },
    { /* 4 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_ina_2_4_13_lrd_ing_dvp_tablet_attr_group = {
    .attributes = 5,
    .attr = bcm56780_a0_ina_2_4_13_lrd_ing_dvp_tablet_attr_entry,
};


const bcmltd_field_desc_t
bcm56780_a0_ina_2_4_13_lrd_bcmltx_copy_field_src_field_desc_s7[1] = {
    {
        .field_id  = BCM56780_A0_INA_2_4_13_ING_DVP_TABLEt_DVPf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 13,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_ina_2_4_13_lrd_bcmltx_copy_field_ing_dvp_table_dst_field_desc_d0[1] = {
    {
        .field_id  = BCMLRD_FIELD_TRACK_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_ina_2_4_13_lrd_bcmltx_divmod_src_field_desc_s3[1] = {
    {
        .field_id  = BCM56780_A0_INA_2_4_13_ING_DVP_TABLEt_DVPf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 13,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_ina_2_4_13_lrd_bcmltx_divmod_ing_dvp_table_dst_field_desc_d1[2] = {
    {
        .field_id  = BCMLRD_FIELD_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 12,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = BCMLRD_FIELD_SELECTOR,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_copy_field_xfrm_handler_fwd_s7_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_INA_2_4_13_LTA_BCMLTX_COPY_FIELD_XFRM_HANDLER_FWD_S7_D0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_ina_2_4_13_lrd_bcmltx_copy_field_src_field_desc_s7,
    .dst_fields = 1,
    .dst = bcm56780_a0_ina_2_4_13_lrd_bcmltx_copy_field_ing_dvp_table_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_copy_field_xfrm_handler_rev_s7_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_INA_2_4_13_LTA_BCMLTX_COPY_FIELD_XFRM_HANDLER_REV_S7_D0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_ina_2_4_13_lrd_bcmltx_copy_field_ing_dvp_table_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56780_a0_ina_2_4_13_lrd_bcmltx_copy_field_src_field_desc_s7,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_ina_2_4_13_lta_bcmltx_divmod_xfrm_handler_fwd_s3_d1_x0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_INA_2_4_13_LTA_BCMLTX_DIVMOD_XFRM_HANDLER_FWD_S3_D1_X0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_ina_2_4_13_lrd_bcmltx_divmod_src_field_desc_s3,
    .dst_fields = 2,
    .dst = bcm56780_a0_ina_2_4_13_lrd_bcmltx_divmod_ing_dvp_table_dst_field_desc_d1,
};


static const bcmlrd_map_entry_t bcm56780_a0_ina_2_4_13_lrd_ing_dvp_tablet_memdb_ifta140_mem0_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 1,
            .maxbit    = 2,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_INA_2_4_13_ING_DVP_TABLEt_STRENGTH_PROFILE_INDEXf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 7,
            .maxbit    = 7,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_INA_2_4_13_ING_DVP_TABLEt_NO_CUT_THRUf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 11,
            .maxbit    = 26,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_INA_2_4_13_ING_DVP_TABLEt_DESTINATIONf,
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
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 3,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_INA_2_4_13_ING_DVP_TABLEt_L2MC_L3MC_L2_OIF_SYS_DST_VALIDf,
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
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 44,
            .maxbit    = 45,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_INA_2_4_13_ING_DVP_TABLEt_STRENGTH_PROFILE_INDEXf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 50,
            .maxbit    = 50,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_INA_2_4_13_ING_DVP_TABLEt_NO_CUT_THRUf,
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
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 54,
            .maxbit    = 69,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_INA_2_4_13_ING_DVP_TABLEt_DESTINATIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 46,
            .maxbit    = 49,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_INA_2_4_13_ING_DVP_TABLEt_L2MC_L3MC_L2_OIF_SYS_DST_VALIDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 86,
            .maxbit    = 86,
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
                /* handler: bcm56780_a0_ina_2_4_13_lta_bcmltx_copy_field_xfrm_handler_fwd_s7_d0 */
                .desc = &bcm56780_a0_ina_2_4_13_lta_bcmltx_copy_field_xfrm_handler_fwd_s7_d0_desc,
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
                /* handler: bcm56780_a0_ina_2_4_13_lta_bcmltx_copy_field_xfrm_handler_rev_s7_d0 */
                .desc = &bcm56780_a0_ina_2_4_13_lta_bcmltx_copy_field_xfrm_handler_rev_s7_d0_desc,
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
                /* handler: bcm56780_a0_ina_2_4_13_lta_bcmltx_divmod_xfrm_handler_fwd_s3_d1_x0 */
                .desc = &bcm56780_a0_ina_2_4_13_lta_bcmltx_divmod_xfrm_handler_fwd_s3_d1_x0_desc,
            },
        },
    },
};
const bcmlrd_field_selector_t bcm56780_a0_ina_2_4_13_lrd_ing_dvp_table_map_select[] = {
    { /* Node:0, Type:ROOT, MEMDB_IFTA140_MEM0.__SELECTOR */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_ROOT,
        .field_id = BCMLRD_FIELD_SELECTOR,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = BCMLRD_INVALID_SELECTOR_INDEX,
        .group = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_id = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_value = BCMLRD_INVALID_SELECTOR_INDEX
    },
    { /* Node:1, Type:Directmap, STRENGTH_PROFILE_INDEX:MEMDB_IFTA140_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56780_A0_INA_2_4_13_ING_DVP_TABLEt_STRENGTH_PROFILE_INDEXf,
        .group_index = 0,
        .entry_index = 0,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCMLRD_FIELD_SELECTOR,
        .selector_value = 0
    },
    { /* Node:2, Type:Directmap, NO_CUT_THRU:MEMDB_IFTA140_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56780_A0_INA_2_4_13_ING_DVP_TABLEt_NO_CUT_THRUf,
        .group_index = 0,
        .entry_index = 1,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCMLRD_FIELD_SELECTOR,
        .selector_value = 0
    },
    { /* Node:3, Type:Directmap, DESTINATION:MEMDB_IFTA140_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56780_A0_INA_2_4_13_ING_DVP_TABLEt_DESTINATIONf,
        .group_index = 0,
        .entry_index = 2,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCMLRD_FIELD_SELECTOR,
        .selector_value = 0
    },
    { /* Node:4, Type:Directmap, L2MC_L3MC_L2_OIF_SYS_DST_VALID:MEMDB_IFTA140_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56780_A0_INA_2_4_13_ING_DVP_TABLEt_L2MC_L3MC_L2_OIF_SYS_DST_VALIDf,
        .group_index = 0,
        .entry_index = 3,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCMLRD_FIELD_SELECTOR,
        .selector_value = 0
    },
    { /* Node:5, Type:Directmap, STRENGTH_PROFILE_INDEX:MEMDB_IFTA140_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56780_A0_INA_2_4_13_ING_DVP_TABLEt_STRENGTH_PROFILE_INDEXf,
        .group_index = 0,
        .entry_index = 4,
        .selection_parent = 0,
        .group = 1,
        .selector_id = BCMLRD_FIELD_SELECTOR,
        .selector_value = 1
    },
    { /* Node:6, Type:Directmap, NO_CUT_THRU:MEMDB_IFTA140_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56780_A0_INA_2_4_13_ING_DVP_TABLEt_NO_CUT_THRUf,
        .group_index = 0,
        .entry_index = 5,
        .selection_parent = 0,
        .group = 1,
        .selector_id = BCMLRD_FIELD_SELECTOR,
        .selector_value = 1
    },
    { /* Node:7, Type:Directmap, DESTINATION:MEMDB_IFTA140_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56780_A0_INA_2_4_13_ING_DVP_TABLEt_DESTINATIONf,
        .group_index = 0,
        .entry_index = 6,
        .selection_parent = 0,
        .group = 1,
        .selector_id = BCMLRD_FIELD_SELECTOR,
        .selector_value = 1
    },
    { /* Node:8, Type:Directmap, L2MC_L3MC_L2_OIF_SYS_DST_VALID:MEMDB_IFTA140_MEM0.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56780_A0_INA_2_4_13_ING_DVP_TABLEt_L2MC_L3MC_L2_OIF_SYS_DST_VALIDf,
        .group_index = 0,
        .entry_index = 7,
        .selection_parent = 0,
        .group = 1,
        .selector_id = BCMLRD_FIELD_SELECTOR,
        .selector_value = 1
    },
};

const bcmlrd_field_selector_data_t bcm56780_a0_ina_2_4_13_lrd_ing_dvp_table_map_select_data = {
    .num_field_selector = 9,
    .field_selector = bcm56780_a0_ina_2_4_13_lrd_ing_dvp_table_map_select,
};

static const bcmlrd_map_group_t bcm56780_a0_ina_2_4_13_lrd_ing_dvp_table_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MEMDB_IFTA140_MEM0m,
        },
        .entries = 12,
        .entry = bcm56780_a0_ina_2_4_13_lrd_ing_dvp_tablet_memdb_ifta140_mem0_map_entry
    },
};
const bcmlrd_map_t bcm56780_a0_ina_2_4_13_lrd_ing_dvp_table_map = {
    .src_id = BCM56780_A0_INA_2_4_13_ING_DVP_TABLEt,
    .field_data = &bcm56780_a0_ina_2_4_13_lrd_ing_dvp_table_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_ina_2_4_13_lrd_ing_dvp_table_map_group,
    .table_attr = &bcm56780_a0_ina_2_4_13_lrd_ing_dvp_tablet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE,
    .sel = &bcm56780_a0_ina_2_4_13_lrd_ing_dvp_table_map_select_data,
};
