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
/* Logical Table Adaptor for component bcmcth */
/* Handler: bcm56990_b0_lta_bcmcth_tnl_mpls_decap_trunk_cth_handler */
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmcth/bcmcth_tnl_decap.h>



const bcmltd_generic_arg_t
bcm56990_b0_lta_bcmcth_tnl_mpls_decap_trunk_cth_handler_arg = {
    .sid = TNL_MPLS_DECAP_TRUNKt,
    .values = 0,
    .value = NULL,
    .user_data = NULL
};

const bcmltd_table_handler_t
bcm56990_b0_lta_bcmcth_tnl_mpls_decap_trunk_cth_handler = {
    .validate = bcmcth_tnl_decap_validate,
    .op_insert       = bcmcth_tnl_decap_insert,
    .op_lookup       = bcmcth_tnl_decap_lookup,
    .op_delete       = bcmcth_tnl_decap_delete,
    .op_update       = bcmcth_tnl_decap_update,
    .op_first        = bcmcth_tnl_decap_first,
    .op_next         = bcmcth_tnl_decap_next,
    .ha       = NULL,
    .arg      = &bcm56990_b0_lta_bcmcth_tnl_mpls_decap_trunk_cth_handler_arg
};

