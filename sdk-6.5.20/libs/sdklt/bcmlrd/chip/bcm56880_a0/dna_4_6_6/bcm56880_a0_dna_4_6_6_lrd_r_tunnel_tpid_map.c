/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_R_TUNNEL_TPID.map.ltl for
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
#include <bcmltd/bcmltd_handler.h>
/* R_TUNNEL_TPID field init */
static const bcmlrd_field_data_t bcm56880_a0_dna_4_6_6_lrd_r_tunnel_tpid_map_field_data_mmd[] = {
    { /* 0 V_0 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_6_6_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_dna_4_6_6_lrd_r_tunnel_tpid_map_field_data = {
    .fields = 1,
    .field = bcm56880_a0_dna_4_6_6_lrd_r_tunnel_tpid_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_dna_4_6_6_lrd_r_tunnel_tpidt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_dna_4_6_6_lrd_r_tunnel_tpidt_attr_group = {
    .attributes = 1,
    .attr = bcm56880_a0_dna_4_6_6_lrd_r_tunnel_tpidt_attr_entry,
};


const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_field_demux_r_tunnel_tpidt_v_0f_0_src_field_desc_s0[2] = {
    {
        .field_id  = BCM56880_A0_DNA_4_6_6_R_TUNNEL_TPIDt_V_0f,
        .field_idx = 0,
        .minbit    = 8,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56880_A0_DNA_4_6_6_R_TUNNEL_TPIDt_V_0f,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_field_demux_r_tunnel_tpidt_v_0f_0_dst_field_desc[2] = {
    {
        .field_id  = DATAf,
        .field_idx = 0,
        .minbit    = 88,
        .maxbit    = 95,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = DATAf,
        .field_idx = 0,
        .minbit    = 96,
        .maxbit    = 103,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_r_tunnel_tpidt_v_0f_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_FIELD_DEMUX_R_TUNNEL_TPIDT_V_0F_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_6_6_lrd_field_demux_r_tunnel_tpidt_v_0f_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_6_6_lrd_field_demux_r_tunnel_tpidt_v_0f_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_r_tunnel_tpidt_v_0f_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_6_6_LTA_BCMLTX_FIELD_DEMUX_R_TUNNEL_TPIDT_V_0F_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_6_6_lrd_field_demux_r_tunnel_tpidt_v_0f_0_dst_field_desc,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_6_6_lrd_field_demux_r_tunnel_tpidt_v_0f_0_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56880_a0_dna_4_6_6_lrd_r_tunnel_tpidt_efsl20_data_constant_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0,
            }
        },
    },
    { /* 1 */
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
                /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_r_tunnel_tpidt_v_0f_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_r_tunnel_tpidt_v_0f_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 2 */
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
                /* handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_r_tunnel_tpidt_v_0f_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_r_tunnel_tpidt_v_0f_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56880_a0_dna_4_6_6_lrd_r_tunnel_tpid_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = EFSL20_DATA_CONSTANTm,
        },
        .entries = 3,
        .entry = bcm56880_a0_dna_4_6_6_lrd_r_tunnel_tpidt_efsl20_data_constant_map_entry
    },
};
const bcmlrd_map_t bcm56880_a0_dna_4_6_6_lrd_r_tunnel_tpid_map = {
    .src_id = BCM56880_A0_DNA_4_6_6_R_TUNNEL_TPIDt,
    .field_data = &bcm56880_a0_dna_4_6_6_lrd_r_tunnel_tpid_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_dna_4_6_6_lrd_r_tunnel_tpid_map_group,
    .table_attr = &bcm56880_a0_dna_4_6_6_lrd_r_tunnel_tpidt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
