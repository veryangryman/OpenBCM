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
/* Handler: bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmtm/bcmltx_port_pt_suppress.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_xfrm_field_desc.h>

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s1[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s2[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s3[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s4[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s5[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s6[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s7[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s8[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s9[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s10[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s11[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_bst_port_service_pool_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_drop_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_service_pool_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_bst_port_pri_grp_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_bst_port_service_pool_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_port_pri_grp_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_port_uc_drop_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_thd_port_service_pool_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_tm_obm_port_drop_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_tm_obm_port_flow_ctrl_dst_field_desc_d0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_tm_thd_q_grp_dst_field_desc_d0[];

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s0
};

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s1 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s1
};

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s2 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s2
};

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s3 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s3
};

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s4 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s4
};

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s5 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s5
};

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s6 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s6
};

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s7 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s7
};

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s8 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s8
};

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s9 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s9
};

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s10 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s10
};

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s11 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s11
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_bst_port_service_pool_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_bst_port_service_pool_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_drop_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_drop_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_service_pool_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_service_pool_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_bst_port_pri_grp_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_bst_port_pri_grp_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_bst_port_service_pool_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_bst_port_service_pool_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_port_pri_grp_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_port_pri_grp_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_port_uc_drop_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_port_uc_drop_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_thd_port_service_pool_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_thd_port_service_pool_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_tm_obm_port_drop_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_tm_obm_port_drop_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_tm_obm_port_flow_ctrl_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_tm_obm_port_flow_ctrl_dst_field_desc_d0
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_tm_thd_q_grp_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_tm_thd_q_grp_dst_field_desc_d0
};

static const uint32_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s0[1] = {
    CTR_EGR_TM_BST_PORT_SERVICE_POOLt_PORT_IDf,
};

static const uint32_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s1[1] = {
    CTR_EGR_TM_PORTt_PORT_IDf,
};

static const uint32_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s2[1] = {
    CTR_EGR_TM_PORT_DROPt_PORT_IDf,
};

static const uint32_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s3[1] = {
    CTR_EGR_TM_PORT_SERVICE_POOLt_PORT_IDf,
};

static const uint32_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s4[1] = {
    CTR_ING_TM_BST_PORT_PRI_GRPt_PORT_IDf,
};

static const uint32_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s5[1] = {
    CTR_ING_TM_BST_PORT_SERVICE_POOLt_PORT_IDf,
};

static const uint32_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s6[1] = {
    CTR_ING_TM_PORT_PRI_GRPt_PORT_IDf,
};

static const uint32_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s7[1] = {
    CTR_ING_TM_PORT_UC_DROPt_PORT_IDf,
};

static const uint32_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s8[1] = {
    CTR_ING_TM_THD_PORT_SERVICE_POOLt_PORT_IDf,
};

static const uint32_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s9[1] = {
    CTR_TM_OBM_PORT_DROPt_PORT_IDf,
};

static const uint32_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s10[1] = {
    CTR_TM_OBM_PORT_FLOW_CTRLt_PORT_IDf,
};

static const uint32_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s11[1] = {
    CTR_TM_THD_Q_GRPt_PORT_IDf,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_bst_port_service_pool_transform_dst_d0[1] = {
    BCMLRD_FIELD_PT_SUPPRESS,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_transform_dst_d0[1] = {
    BCMLRD_FIELD_PT_SUPPRESS,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_drop_transform_dst_d0[1] = {
    BCMLRD_FIELD_PT_SUPPRESS,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_service_pool_transform_dst_d0[1] = {
    BCMLRD_FIELD_PT_SUPPRESS,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_bst_port_pri_grp_transform_dst_d0[1] = {
    BCMLRD_FIELD_PT_SUPPRESS,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_bst_port_service_pool_transform_dst_d0[1] = {
    BCMLRD_FIELD_PT_SUPPRESS,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_port_pri_grp_transform_dst_d0[1] = {
    BCMLRD_FIELD_PT_SUPPRESS,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_port_uc_drop_transform_dst_d0[1] = {
    BCMLRD_FIELD_PT_SUPPRESS,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_thd_port_service_pool_transform_dst_d0[1] = {
    BCMLRD_FIELD_PT_SUPPRESS,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_tm_obm_port_drop_transform_dst_d0[1] = {
    BCMLRD_FIELD_PT_SUPPRESS,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_tm_obm_port_flow_ctrl_transform_dst_d0[1] = {
    BCMLRD_FIELD_PT_SUPPRESS,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_tm_thd_q_grp_transform_dst_d0[1] = {
    BCMLRD_FIELD_PT_SUPPRESS,
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data = {
    .sid       = CTR_EGR_TM_BST_PORT_SERVICE_POOLt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data1 = {
    .sid       = CTR_EGR_TM_PORTt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data2 = {
    .sid       = CTR_EGR_TM_PORT_DROPt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data3 = {
    .sid       = CTR_EGR_TM_PORT_SERVICE_POOLt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data4 = {
    .sid       = CTR_ING_TM_BST_PORT_PRI_GRPt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data5 = {
    .sid       = CTR_ING_TM_BST_PORT_SERVICE_POOLt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data6 = {
    .sid       = CTR_ING_TM_PORT_PRI_GRPt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data7 = {
    .sid       = CTR_ING_TM_PORT_UC_DROPt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data8 = {
    .sid       = CTR_ING_TM_THD_PORT_SERVICE_POOLt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data9 = {
    .sid       = CTR_TM_OBM_PORT_DROPt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data10 = {
    .sid       = CTR_TM_OBM_PORT_FLOW_CTRLt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data11 = {
    .sid       = CTR_TM_THD_Q_GRPt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s0,
    .field_list  = &bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s0,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_bst_port_service_pool_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_bst_port_service_pool_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s1_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s1,
    .field_list  = &bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s1,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data1
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s2_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s2,
    .field_list  = &bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s2,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_drop_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_drop_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data2
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s3_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s3,
    .field_list  = &bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s3,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_service_pool_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_egr_tm_port_service_pool_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data3
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s4_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s4,
    .field_list  = &bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s4,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_bst_port_pri_grp_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_bst_port_pri_grp_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data4
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s5_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s5,
    .field_list  = &bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s5,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_bst_port_service_pool_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_bst_port_service_pool_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data5
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s6_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s6,
    .field_list  = &bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s6,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_port_pri_grp_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_port_pri_grp_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data6
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s7_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s7,
    .field_list  = &bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s7,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_port_uc_drop_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_port_uc_drop_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data7
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s8_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s8,
    .field_list  = &bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s8,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_thd_port_service_pool_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_thd_port_service_pool_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data8
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s9_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s9,
    .field_list  = &bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s9,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_tm_obm_port_drop_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_tm_obm_port_drop_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data9
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s10_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s10,
    .field_list  = &bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s10,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_tm_obm_port_flow_ctrl_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_tm_obm_port_flow_ctrl_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data10
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s11_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_lta_bcmltx_port_pt_suppress_transform_src_s11,
    .field_list  = &bcm56780_a0_lta_bcmltx_port_pt_suppress_src_list_s11,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_tm_thd_q_grp_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_tm_thd_q_grp_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_port_pt_suppress_comp_data11
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s0_d0 = {
    .transform     = bcmltx_port_pt_suppress_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s0_d0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s1_d0 = {
    .transform     = bcmltx_port_pt_suppress_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s1_d0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s2_d0 = {
    .transform     = bcmltx_port_pt_suppress_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s2_d0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s3_d0 = {
    .transform     = bcmltx_port_pt_suppress_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s3_d0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s4_d0 = {
    .transform     = bcmltx_port_pt_suppress_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s4_d0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s5_d0 = {
    .transform     = bcmltx_port_pt_suppress_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s5_d0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s6_d0 = {
    .transform     = bcmltx_port_pt_suppress_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s6_d0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s7_d0 = {
    .transform     = bcmltx_port_pt_suppress_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s7_d0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s8_d0 = {
    .transform     = bcmltx_port_pt_suppress_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s8_d0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s9_d0 = {
    .transform     = bcmltx_port_pt_suppress_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s9_d0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s10_d0 = {
    .transform     = bcmltx_port_pt_suppress_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s10_d0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s11_d0 = {
    .transform     = bcmltx_port_pt_suppress_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_arg_s11_d0
};


