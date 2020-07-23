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
/* Handler: bcm56996_a0_lta_bcmltx_dlb_port_status_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmdlb/bcmltx_dlb_port_status.h>
#include <bcmdrd/chip/bcm56996_a0_enum.h>
#include <bcmlrd/chip/bcm56996_a0/bcm56996_a0_lrd_xfrm_field_desc.h>

extern const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_dlb_port_status_src_field_desc_s0[];

static const bcmltd_field_desc_t
bcm56996_a0_lta_bcmltx_dlb_port_status_src_field_desc_k0[1] = {
    {
        .field_id  = DLB_ECMP_PORT_STATUSt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

extern const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_dlb_port_status_dlb_ecmp_port_status_dst_field_desc_d0[];

static const
bcmltd_field_list_t
bcm56996_a0_lta_bcmltx_dlb_port_status_src_list_s0 = {
    .field_num = 1,
    .field_array = bcm56996_a0_lrd_bcmltx_dlb_port_status_src_field_desc_s0
};

static const
bcmltd_field_list_t
bcm56996_a0_lta_bcmltx_dlb_port_status_src_list_k0 = {
    .field_num = 1,
    .field_array = bcm56996_a0_lta_bcmltx_dlb_port_status_src_field_desc_k0
};

static const bcmltd_field_list_t
bcm56996_a0_lrd_bcmltx_dlb_port_status_dlb_ecmp_port_status_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56996_a0_lrd_bcmltx_dlb_port_status_dlb_ecmp_port_status_dst_field_desc_d0
};

static const uint32_t
bcm56996_a0_lta_bcmltx_dlb_port_status_transform_src_s0[1] = {
    DLB_ECMP_PORT_STATUSt_LINK_STATEf,
};

static const uint32_t
bcm56996_a0_lta_bcmltx_dlb_port_status_transform_src_k0[1] = {
    DLB_ECMP_PORT_STATUSt_PORT_IDf,
};

static const uint32_t
bcm56996_a0_lrd_bcmltx_dlb_port_status_dlb_ecmp_port_status_transform_dst_d0[1] = {
    BITMAPf,
};

static const bcmltd_generic_arg_t
bcm56996_a0_lta_bcmltx_dlb_port_status_comp_data = {
    .sid       = DLB_ECMP_PORT_STATUSt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56996_a0_lta_bcmltx_dlb_port_status_xfrm_handler_rev_arg_s0_k0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56996_a0_lrd_bcmltx_dlb_port_status_dlb_ecmp_port_status_transform_dst_d0,
    .field_list  = &bcm56996_a0_lrd_bcmltx_dlb_port_status_dlb_ecmp_port_status_dst_list_d0,
    .kfields     = 1,
    .kfield      = bcm56996_a0_lta_bcmltx_dlb_port_status_transform_src_k0,
    .kfield_list = &bcm56996_a0_lta_bcmltx_dlb_port_status_src_list_k0,
    .rfields     = 1,
    .rfield      = bcm56996_a0_lta_bcmltx_dlb_port_status_transform_src_s0,
    .rfield_list = &bcm56996_a0_lta_bcmltx_dlb_port_status_src_list_s0,
    .comp_data   = &bcm56996_a0_lta_bcmltx_dlb_port_status_comp_data
};

const bcmltd_xfrm_handler_t
bcm56996_a0_lta_bcmltx_dlb_port_status_xfrm_handler_rev_s0_k0_d0 = {
    .ext_transform = bcmltx_dlb_port_status_rev_transform,
    .arg           = &bcm56996_a0_lta_bcmltx_dlb_port_status_xfrm_handler_rev_arg_s0_k0_d0
};


