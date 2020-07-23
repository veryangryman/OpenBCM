/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from Logical Table mapping files.
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
/* Logical Table Adaptor for component bcmltx */
/* Handler: bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmltx_field_demux.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_6_6/bcm56880_a0_dna_4_6_6_lrd_xfrm_field_desc.h>


extern const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lrd_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_src_field_desc_s0[];

static const bcmltd_field_desc_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_dst_field_desc[2] = {
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 26,
        .field_idx = 0,
        .minbit    = 82,
        .maxbit    = 88,
        .entry_idx = 0,
        .sym       = "MEMDB_IFTA120_MEM4_MEM5m.MEM5f[40:34]",
        .reserved  = 0
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 27,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .sym       = "MEMDB_IFTA120_MEM4_MEM5m.MEM4f[7:0]",
        .reserved  = 0
    },
};

static const
bcmltd_field_list_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_src_list_s0 = {
    .field_num = 2,
    .field_array = bcm56880_a0_dna_4_6_6_lrd_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_src_field_desc_s0
};

static const bcmltd_field_list_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_dst_list_d0 = {
    .field_num = 2,
    .field_array = bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_dst_field_desc
};

static const uint32_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_transform_src_s0[1] = {
    BCM56880_A0_DNA_4_6_6_ING_L3_SRC_ECMP_GROUP_A_TABLEt_L3_OIF0_VALUE_TYPEf,
};

static const uint32_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_transform_dst_d0[2] = {
    BCMLTD_INTERNAL_FIELD_BASE + 26,
    BCMLTD_INTERNAL_FIELD_BASE + 27,
};

static const bcmltd_generic_arg_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_comp_data = {
    .sid       = BCM56880_A0_DNA_4_6_6_ING_L3_SRC_ECMP_GROUP_A_TABLEt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_xfrm_handler_fwd_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_transform_src_s0,
    .field_list  = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_src_list_s0,
    .rfields     = 2,
    .rfield      = bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_transform_dst_d0,
    .rfield_list = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_dst_list_d0,
    .comp_data   = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_comp_data
};

static const bcmltd_transform_arg_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_xfrm_handler_rev_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 2,
    .field       = bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_transform_dst_d0,
    .field_list  = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_dst_list_d0,
    .rfields     = 1,
    .rfield      = bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_transform_src_s0,
    .rfield_list = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_src_list_s0,
    .comp_data   = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_comp_data
};

const bcmltd_xfrm_handler_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_xfrm_handler_fwd_s0_d0 = {
    .transform     = bcmltx_field_demux_transform,
    .arg           = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_xfrm_handler_fwd_arg_s0_d0
};

const bcmltd_xfrm_handler_t
bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_xfrm_handler_rev_s0_d0 = {
    .transform     = bcmltx_field_mux_transform,
    .arg           = &bcm56880_a0_dna_4_6_6_lta_bcmltx_field_demux_ing_l3_src_ecmp_group_a_tablet_l3_oif0_value_typef_0_xfrm_handler_rev_arg_s0_d0
};


