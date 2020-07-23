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
/* Handler: bcm56996_a0_lta_bcmltx_chip_port_sp_idx_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmtm/bcmltx_chip_port_sp_idx.h>
#include <bcmdrd/chip/bcm56996_a0_enum.h>
#include <bcmlrd/chip/bcm56996_a0/bcm56996_a0_lrd_xfrm_field_desc.h>

static const uint32_t
bcm56996_a0_lta_bcmltx_chip_port_sp_idx_transform_arg0[1] = {
    4,
};

extern const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_chip_port_sp_idx_src_field_desc_s0[];

extern const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_chip_port_sp_idx_src_field_desc_s1[];

extern const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_chip_port_sp_idx_ctr_egr_tm_bst_port_service_pool_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56996_a0_lrd_bcmltx_chip_port_sp_idx_ctr_egr_tm_port_service_pool_dst_field_desc_d0[];

static const
bcmltd_field_list_t
bcm56996_a0_lta_bcmltx_chip_port_sp_idx_src_list_s0 = {
    .field_num = 3,
    .field_array = bcm56996_a0_lrd_bcmltx_chip_port_sp_idx_src_field_desc_s0
};

static const
bcmltd_field_list_t
bcm56996_a0_lta_bcmltx_chip_port_sp_idx_src_list_s1 = {
    .field_num = 3,
    .field_array = bcm56996_a0_lrd_bcmltx_chip_port_sp_idx_src_field_desc_s1
};

static const bcmltd_field_list_t
bcm56996_a0_lrd_bcmltx_chip_port_sp_idx_ctr_egr_tm_bst_port_service_pool_dst_list_d0 = {
    .field_num = 2,
    .field_array = bcm56996_a0_lrd_bcmltx_chip_port_sp_idx_ctr_egr_tm_bst_port_service_pool_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56996_a0_lrd_bcmltx_chip_port_sp_idx_ctr_egr_tm_port_service_pool_dst_list_d0 = {
    .field_num = 2,
    .field_array = bcm56996_a0_lrd_bcmltx_chip_port_sp_idx_ctr_egr_tm_port_service_pool_dst_field_desc_d0
};

static const uint32_t
bcm56996_a0_lta_bcmltx_chip_port_sp_idx_transform_src_s0[3] = {
    CTR_EGR_TM_BST_PORT_SERVICE_POOLt_PORT_IDf,
    CTR_EGR_TM_BST_PORT_SERVICE_POOLt_TM_EGR_SERVICE_POOL_IDf,
    CTR_EGR_TM_BST_PORT_SERVICE_POOLt_BUFFER_POOLf,
};

static const uint32_t
bcm56996_a0_lta_bcmltx_chip_port_sp_idx_transform_src_s1[3] = {
    CTR_EGR_TM_PORT_SERVICE_POOLt_PORT_IDf,
    CTR_EGR_TM_PORT_SERVICE_POOLt_TM_EGR_SERVICE_POOL_IDf,
    CTR_EGR_TM_PORT_SERVICE_POOLt_BUFFER_POOLf,
};

static const uint32_t
bcm56996_a0_lrd_bcmltx_chip_port_sp_idx_ctr_egr_tm_bst_port_service_pool_transform_dst_d0[2] = {
    BCMLRD_FIELD_INDEX,
    BCMLRD_FIELD_INSTANCE,
};

static const uint32_t
bcm56996_a0_lrd_bcmltx_chip_port_sp_idx_ctr_egr_tm_port_service_pool_transform_dst_d0[2] = {
    BCMLRD_FIELD_INDEX,
    BCMLRD_FIELD_INSTANCE,
};

static const bcmltd_generic_arg_t
bcm56996_a0_lta_bcmltx_chip_port_sp_idx_comp_data = {
    .sid       = CTR_EGR_TM_BST_PORT_SERVICE_POOLt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56996_a0_lta_bcmltx_chip_port_sp_idx_comp_data1 = {
    .sid       = CTR_EGR_TM_PORT_SERVICE_POOLt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56996_a0_lta_bcmltx_chip_port_sp_idx_xfrm_handler_fwd_arg_s0_d0_x0 = {
    .values      = 1,
    .value       = bcm56996_a0_lta_bcmltx_chip_port_sp_idx_transform_arg0,
    .tables      = 0,
    .table       = NULL,
    .fields      = 3,
    .field       = bcm56996_a0_lta_bcmltx_chip_port_sp_idx_transform_src_s0,
    .field_list  = &bcm56996_a0_lta_bcmltx_chip_port_sp_idx_src_list_s0,
    .rfields     = 2,
    .rfield      = bcm56996_a0_lrd_bcmltx_chip_port_sp_idx_ctr_egr_tm_bst_port_service_pool_transform_dst_d0,
    .rfield_list = &bcm56996_a0_lrd_bcmltx_chip_port_sp_idx_ctr_egr_tm_bst_port_service_pool_dst_list_d0,
    .comp_data   = &bcm56996_a0_lta_bcmltx_chip_port_sp_idx_comp_data
};

static const bcmltd_transform_arg_t
bcm56996_a0_lta_bcmltx_chip_port_sp_idx_xfrm_handler_fwd_arg_s1_d0_x0 = {
    .values      = 1,
    .value       = bcm56996_a0_lta_bcmltx_chip_port_sp_idx_transform_arg0,
    .tables      = 0,
    .table       = NULL,
    .fields      = 3,
    .field       = bcm56996_a0_lta_bcmltx_chip_port_sp_idx_transform_src_s1,
    .field_list  = &bcm56996_a0_lta_bcmltx_chip_port_sp_idx_src_list_s1,
    .rfields     = 2,
    .rfield      = bcm56996_a0_lrd_bcmltx_chip_port_sp_idx_ctr_egr_tm_port_service_pool_transform_dst_d0,
    .rfield_list = &bcm56996_a0_lrd_bcmltx_chip_port_sp_idx_ctr_egr_tm_port_service_pool_dst_list_d0,
    .comp_data   = &bcm56996_a0_lta_bcmltx_chip_port_sp_idx_comp_data1
};

const bcmltd_xfrm_handler_t
bcm56996_a0_lta_bcmltx_chip_port_sp_idx_xfrm_handler_fwd_s0_d0_x0 = {
    .transform     = bcmltx_chip_port_sp_idx_transform,
    .arg           = &bcm56996_a0_lta_bcmltx_chip_port_sp_idx_xfrm_handler_fwd_arg_s0_d0_x0
};

const bcmltd_xfrm_handler_t
bcm56996_a0_lta_bcmltx_chip_port_sp_idx_xfrm_handler_fwd_s1_d0_x0 = {
    .transform     = bcmltx_chip_port_sp_idx_transform,
    .arg           = &bcm56996_a0_lta_bcmltx_chip_port_sp_idx_xfrm_handler_fwd_arg_s1_d0_x0
};


