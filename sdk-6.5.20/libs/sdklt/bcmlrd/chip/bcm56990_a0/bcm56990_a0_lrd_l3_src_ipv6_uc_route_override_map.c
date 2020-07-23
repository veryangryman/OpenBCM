/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/l3/bcm56990_a0/bcm56990_a0_L3_SRC_IPV6_UC_ROUTE_OVERRIDE.map.ltl for
 *      bcm56990_a0
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
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56990_a0/bcm56990_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56990_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56990_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* L3_SRC_IPV6_UC_ROUTE_OVERRIDE field init */
static const bcmlrd_field_data_t bcm56990_a0_lrd_l3_src_ipv6_uc_route_override_map_field_data_mmd[] = {
    { /* 0 IPV6_UPPER */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 1 IPV6_UPPER_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 2 IPV6_LOWER */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 3 IPV6_LOWER_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56990_a0_lrd_ifd_u64_0x0,
      .def = &bcm56990_a0_lrd_ifd_u64_0x0,
      .max = &bcm56990_a0_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 4 CLASS_ID */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u16_0x0,
      .def = &bcm56990_a0_lrd_ifd_u16_0x0,
      .max = &bcm56990_a0_lrd_ifd_u16_0x3ff,
      .depth = 0,
      .width = 10,
      .edata = NULL,
    },
    { /* 5 CTR_ING_FLEX_POOL_NUMBER */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_u32_0x0,
      .def = &bcm56990_a0_lrd_ifd_u32_0x0,
      .max = &bcm56990_a0_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 6 CTR_ING_FLEX_BASE_INDEX */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_u32_0x0,
      .def = &bcm56990_a0_lrd_ifd_u32_0x0,
      .max = &bcm56990_a0_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 7 CTR_ING_FLEX_OFFSET_MODE */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_u32_0x0,
      .def = &bcm56990_a0_lrd_ifd_u32_0x0,
      .max = &bcm56990_a0_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 8 CTR_ING_EFLEX_OBJECT */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u16_0x0,
      .def = &bcm56990_a0_lrd_ifd_u16_0x0,
      .max = &bcm56990_a0_lrd_ifd_u16_0x7fff,
      .depth = 0,
      .width = 15,
      .edata = NULL,
    },
    { /* 9 L3_SRC_IPV6_UC_CTR_ING_EFLEX_ACTION_ID */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 10 HIT */
      .flags = 0,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 11 STRENGTH_PROFILE_INDEX */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 12 DATA_TYPE */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 13 DESTINATION_TYPE */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_u32_0x0,
      .def = &bcm56990_a0_lrd_ifd_u32_0x0,
      .max = &bcm56990_a0_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 14 DESTINATION */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_u16_0x0,
      .def = &bcm56990_a0_lrd_ifd_u16_0x0,
      .max = &bcm56990_a0_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 15 MISC_CTRL_0 */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 16 MISC_CTRL_1 */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_u8_0x0,
      .def = &bcm56990_a0_lrd_ifd_u8_0x0,
      .max = &bcm56990_a0_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 17 HOST_NUMBER_MODE */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56990_a0_lrd_ifd_is_true_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56990_a0_lrd_l3_src_ipv6_uc_route_override_map_field_data = {
    .fields = 18,
    .field = bcm56990_a0_lrd_l3_src_ipv6_uc_route_override_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56990_a0_lrd_l3_src_ipv6_uc_route_overridet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 2048,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TCAM_ORDERING,
        .value = LPM,
    },
};

static const bcmlrd_map_attr_t bcm56990_a0_lrd_l3_src_ipv6_uc_route_overridet_attr_group = {
    .attributes = 3,
    .attr = bcm56990_a0_lrd_l3_src_ipv6_uc_route_overridet_attr_entry,
};


const bcmltd_field_desc_t
bcm56990_a0_lrd_field_demux_l3_src_ipv6_uc_route_overridet_class_idf_0_src_field_desc_s0[2] = {
    {
        .field_id  = L3_SRC_IPV6_UC_ROUTE_OVERRIDEt_CLASS_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 5,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = L3_SRC_IPV6_UC_ROUTE_OVERRIDEt_CLASS_IDf,
        .field_idx = 0,
        .minbit    = 6,
        .maxbit    = 9,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_class_idf_0_dst_field_desc_d0[2] = {
    {
        .field_id  = LWR_ASSOC_DATA0_LPM_ASSOC_DATA_FULL_CLASS_IDf,
        .field_idx = 0,
        .minbit    = 456,
        .maxbit    = 461,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = LWR_ASSOC_DATA0_LPM_ASSOC_DATA_FULL_PRIf,
        .field_idx = 0,
        .minbit    = 462,
        .maxbit    = 465,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_src_field_desc_s0[3] = {
    {
        .field_id  = L3_SRC_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_LOWER_MASKf,
        .field_idx = 0,
        .minbit    = 51,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = L3_SRC_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_LOWER_MASKf,
        .field_idx = 0,
        .minbit    = 6,
        .maxbit    = 50,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = L3_SRC_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_LOWER_MASKf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 5,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_dst_field_desc_d0[3] = {
    {
        .field_id  = UPR_MASK0_LPM_V6_KEY_D_IP_ADDR_1f,
        .field_idx = 0,
        .minbit    = 311,
        .maxbit    = 323,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = LWR_MASK1_LPM_V6_KEY_D_IP_ADDR_2f,
        .field_idx = 0,
        .minbit    = 149,
        .maxbit    = 193,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = LWR_MASK0_LPM_V6_KEY_D_IP_ADDR_3f,
        .field_idx = 0,
        .minbit    = 140,
        .maxbit    = 145,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lowerf_0_src_field_desc_s0[3] = {
    {
        .field_id  = L3_SRC_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_LOWERf,
        .field_idx = 0,
        .minbit    = 51,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = L3_SRC_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_LOWERf,
        .field_idx = 0,
        .minbit    = 6,
        .maxbit    = 50,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = L3_SRC_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_LOWERf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 5,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lowerf_0_dst_field_desc_d0[3] = {
    {
        .field_id  = UPR_KEY0_LPM_V6_KEY_D_IP_ADDR_1f,
        .field_idx = 0,
        .minbit    = 215,
        .maxbit    = 227,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = LWR_KEY1_LPM_V6_KEY_D_IP_ADDR_2f,
        .field_idx = 0,
        .minbit    = 53,
        .maxbit    = 97,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = LWR_KEY0_LPM_V6_KEY_D_IP_ADDR_3f,
        .field_idx = 0,
        .minbit    = 44,
        .maxbit    = 49,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_src_field_desc_s0[2] = {
    {
        .field_id  = L3_SRC_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_UPPER_MASKf,
        .field_idx = 0,
        .minbit    = 32,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = L3_SRC_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_UPPER_MASKf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_dst_field_desc_d0[2] = {
    {
        .field_id  = UPR_MASK1_LPM_V6_KEY_D_IP_ADDR_0f,
        .field_idx = 0,
        .minbit    = 359,
        .maxbit    = 390,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = UPR_MASK0_LPM_V6_KEY_D_IP_ADDR_1f,
        .field_idx = 0,
        .minbit    = 324,
        .maxbit    = 355,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_src_field_desc_s0[2] = {
    {
        .field_id  = L3_SRC_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_UPPERf,
        .field_idx = 0,
        .minbit    = 32,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = L3_SRC_IPV6_UC_ROUTE_OVERRIDEt_IPV6u_UPPERf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56990_a0_lrd_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_dst_field_desc_d0[2] = {
    {
        .field_id  = UPR_KEY1_LPM_V6_KEY_D_IP_ADDR_0f,
        .field_idx = 0,
        .minbit    = 263,
        .maxbit    = 294,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = UPR_KEY0_LPM_V6_KEY_D_IP_ADDR_1f,
        .field_idx = 0,
        .minbit    = 228,
        .maxbit    = 259,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_class_idf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_FIELD_DEMUX_L3_SRC_IPV6_UC_ROUTE_OVERRIDET_CLASS_IDF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56990_a0_lrd_field_demux_l3_src_ipv6_uc_route_overridet_class_idf_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56990_a0_lrd_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_class_idf_0_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_class_idf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_FIELD_DEMUX_L3_SRC_IPV6_UC_ROUTE_OVERRIDET_CLASS_IDF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56990_a0_lrd_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_class_idf_0_dst_field_desc_d0,
    .dst_fields = 2,
    .dst = bcm56990_a0_lrd_field_demux_l3_src_ipv6_uc_route_overridet_class_idf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_FIELD_DEMUX_L3_SRC_IPV6_UC_ROUTE_OVERRIDET_IPV6U_LOWER_MASKF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 3,
    .src = bcm56990_a0_lrd_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_src_field_desc_s0,
    .dst_fields = 3,
    .dst = bcm56990_a0_lrd_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_FIELD_DEMUX_L3_SRC_IPV6_UC_ROUTE_OVERRIDET_IPV6U_LOWER_MASKF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 3,
    .src = bcm56990_a0_lrd_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_dst_field_desc_d0,
    .dst_fields = 3,
    .dst = bcm56990_a0_lrd_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lowerf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_FIELD_DEMUX_L3_SRC_IPV6_UC_ROUTE_OVERRIDET_IPV6U_LOWERF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 3,
    .src = bcm56990_a0_lrd_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lowerf_0_src_field_desc_s0,
    .dst_fields = 3,
    .dst = bcm56990_a0_lrd_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lowerf_0_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lowerf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_FIELD_DEMUX_L3_SRC_IPV6_UC_ROUTE_OVERRIDET_IPV6U_LOWERF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 3,
    .src = bcm56990_a0_lrd_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lowerf_0_dst_field_desc_d0,
    .dst_fields = 3,
    .dst = bcm56990_a0_lrd_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lowerf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_FIELD_DEMUX_L3_SRC_IPV6_UC_ROUTE_OVERRIDET_IPV6U_UPPER_MASKF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56990_a0_lrd_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56990_a0_lrd_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_FIELD_DEMUX_L3_SRC_IPV6_UC_ROUTE_OVERRIDET_IPV6U_UPPER_MASKF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56990_a0_lrd_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_dst_field_desc_d0,
    .dst_fields = 2,
    .dst = bcm56990_a0_lrd_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_FIELD_DEMUX_L3_SRC_IPV6_UC_ROUTE_OVERRIDET_IPV6U_UPPERF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56990_a0_lrd_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56990_a0_lrd_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56990_A0_LTA_BCMLTX_FIELD_DEMUX_L3_SRC_IPV6_UC_ROUTE_OVERRIDET_IPV6U_UPPERF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56990_a0_lrd_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_dst_field_desc_d0,
    .dst_fields = 2,
    .dst = bcm56990_a0_lrd_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56990_a0_lrd_l3_src_ipv6_uc_route_overridet_l3_defip_pair_level1_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = UPR_KEY1_LPM_V6_KEY_D_VRFf,
            .field_idx = 0,
            .minbit    = 295,
            .maxbit    = 307,
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
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = UPR_MASK1_LPM_V6_KEY_D_VRFf,
            .field_idx = 0,
            .minbit    = 391,
            .maxbit    = 403,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0,
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = LWR_KEY0_KEY_MODEf,
            .field_idx = 0,
            .minbit    = 2,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = LWR_KEY1_KEY_MODEf,
            .field_idx = 0,
            .minbit    = 50,
            .maxbit    = 51,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = UPR_KEY0_KEY_MODEf,
            .field_idx = 0,
            .minbit    = 212,
            .maxbit    = 213,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = UPR_KEY1_KEY_MODEf,
            .field_idx = 0,
            .minbit    = 260,
            .maxbit    = 261,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = LWR_MASK0_KEY_MODEf,
            .field_idx = 0,
            .minbit    = 98,
            .maxbit    = 99,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = LWR_MASK1_KEY_MODEf,
            .field_idx = 0,
            .minbit    = 146,
            .maxbit    = 147,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = UPR_MASK0_KEY_MODEf,
            .field_idx = 0,
            .minbit    = 308,
            .maxbit    = 309,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 9 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = UPR_MASK1_KEY_MODEf,
            .field_idx = 0,
            .minbit    = 356,
            .maxbit    = 357,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 10 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = LWR_KEY0_KEY_TYPEf,
            .field_idx = 0,
            .minbit    = 4,
            .maxbit    = 4,
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
            .field_id  = LWR_KEY1_KEY_TYPEf,
            .field_idx = 0,
            .minbit    = 52,
            .maxbit    = 52,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 12 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = UPR_KEY0_KEY_TYPEf,
            .field_idx = 0,
            .minbit    = 214,
            .maxbit    = 214,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 13 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = UPR_KEY1_KEY_TYPEf,
            .field_idx = 0,
            .minbit    = 262,
            .maxbit    = 262,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 14 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = LWR_MASK0_KEY_TYPEf,
            .field_idx = 0,
            .minbit    = 100,
            .maxbit    = 100,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 15 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = LWR_MASK1_KEY_TYPEf,
            .field_idx = 0,
            .minbit    = 148,
            .maxbit    = 148,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 16 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = UPR_MASK0_KEY_TYPEf,
            .field_idx = 0,
            .minbit    = 310,
            .maxbit    = 310,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
        },
    },
    { /* 17 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = UPR_MASK1_KEY_TYPEf,
            .field_idx = 0,
            .minbit    = 358,
            .maxbit    = 358,
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
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = LWR_FIXED_DATA0f,
            .field_idx = 0,
            .minbit    = 517,
            .maxbit    = 518,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 0,
            }
        },
    },
    { /* 19 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = LWR_ASSOC_DATA0_LPM_ASSOC_DATA_FULL_FLEX_CTR_OBJECTf,
            .field_idx = 0,
            .minbit    = 438,
            .maxbit    = 452,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_SRC_IPV6_UC_ROUTE_OVERRIDEt_CTR_ING_EFLEX_OBJECTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 14,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 20 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = LWR_ASSOC_DATA0_LPM_ASSOC_DATA_FULL_FLEX_CTR_ACTION_SELf,
            .field_idx = 0,
            .minbit    = 453,
            .maxbit    = 453,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_SRC_IPV6_UC_ROUTE_OVERRIDEt_L3_SRC_IPV6_UC_CTR_ING_EFLEX_ACTION_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 21 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = LWR_PARITY0f,
            .field_idx = 0,
            .minbit    = 526,
            .maxbit    = 526,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = L3_SRC_IPV6_UC_ROUTE_OVERRIDEt_HITf,
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
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = UPR_VALIDf,
            .field_idx = 0,
            .minbit    = 210,
            .maxbit    = 211,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 23 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = LWR_VALIDf,
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
    { /* 24 */
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
                /* handler: bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_class_idf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_class_idf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 25 */
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
                /* handler: bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_class_idf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_class_idf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 26 */
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
                /* handler: bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 27 */
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
                /* handler: bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lower_maskf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 28 */
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
                /* handler: bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lowerf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lowerf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 29 */
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
                /* handler: bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lowerf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_lowerf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 30 */
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
                /* handler: bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 31 */
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
                /* handler: bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upper_maskf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 32 */
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
                /* handler: bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 33 */
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
                /* handler: bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56990_a0_lta_bcmltx_field_demux_l3_src_ipv6_uc_route_overridet_ipv6u_upperf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56990_a0_lrd_l3_src_ipv6_uc_route_override_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = L3_DEFIP_PAIR_LEVEL1m,
        },
        .entries = 34,
        .entry = bcm56990_a0_lrd_l3_src_ipv6_uc_route_overridet_l3_defip_pair_level1_map_entry
    },
};
const bcmlrd_map_t bcm56990_a0_lrd_l3_src_ipv6_uc_route_override_map = {
    .src_id = L3_SRC_IPV6_UC_ROUTE_OVERRIDEt,
    .field_data = &bcm56990_a0_lrd_l3_src_ipv6_uc_route_override_map_field_data,
    .groups = 1,
    .group  = bcm56990_a0_lrd_l3_src_ipv6_uc_route_override_map_group,
    .table_attr = &bcm56990_a0_lrd_l3_src_ipv6_uc_route_overridet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
