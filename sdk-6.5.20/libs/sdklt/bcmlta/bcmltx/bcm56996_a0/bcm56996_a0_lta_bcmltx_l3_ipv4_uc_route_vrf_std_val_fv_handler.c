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
/* Handler: bcm56996_a0_lta_bcmltx_l3_ipv4_uc_route_vrf_std_val_fv_handler */
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmdrd/chip/bcm56996_a0_enum.h>
#include <bcmltx/bcmltx_std_table_validator.h>

static const uint32_t
bcm56996_a0_lta_bcmltx_l3_ipv4_uc_route_vrf_std_val_validate_src[1] = {
    L3_IPV4_UC_ROUTE_VRFt_MON_INBAND_TELEMETRY_OPAQUE_DATA_PROFILE_IDf,
};

static const bcmltd_generic_arg_t
bcm56996_a0_lta_bcmltx_l3_ipv4_uc_route_vrf_std_val_comp_data = {
    .sid       = L3_IPV4_UC_ROUTE_VRFt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

const bcmltd_field_val_arg_t
bcm56996_a0_lta_bcmltx_l3_ipv4_uc_route_vrf_std_val_fv_handler_arg = {
    .values = 0,
    .value = NULL,
    .fields = 1,
    .field = bcm56996_a0_lta_bcmltx_l3_ipv4_uc_route_vrf_std_val_validate_src,
    .comp_data = &bcm56996_a0_lta_bcmltx_l3_ipv4_uc_route_vrf_std_val_comp_data
};

const bcmltd_field_val_handler_t
bcm56996_a0_lta_bcmltx_l3_ipv4_uc_route_vrf_std_val_fv_handler = {
    .validate = bcmltx_std_table_validator,
    .arg      = &bcm56996_a0_lta_bcmltx_l3_ipv4_uc_route_vrf_std_val_fv_handler_arg
};


