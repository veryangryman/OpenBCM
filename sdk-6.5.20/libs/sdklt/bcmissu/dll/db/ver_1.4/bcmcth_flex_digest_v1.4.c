/*************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by HA parser from YAML formated file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: bcmha/scripts/issu_db_gen.py
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcmissu/issu_types.h>
#include "flex_digest_ha.h"

static const issu_field_t bcmissu_fields_bcmcth_flex_digest_mux_cont_map_t[] = {
    {
        .fid = 0x2a47d7c5,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x9ecd3f60,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xa1f73a07,
        .width = sizeof(uint16_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmcth_flex_digest_mux_cont_map_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmcth_flex_digest_mux_cont_map_t var;

    switch (field_id) {
        case 0x2a47d7c5:
            return ((uint8_t *)&var.lk_fld) - (uint8_t *)&var;
        case 0x9ecd3f60:
            return ((uint8_t *)&var.lk_fld_mask) - (uint8_t *)&var;
        case 0xa1f73a07:
            return ((uint8_t *)&var.cont_id) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_flex_digest_ha_bcmcth_flex_digest_mux_cont_map_t_v1_4 = {
    .offset_get_func = bcmcth_flex_digest_mux_cont_map_t_field_offset_get,
    .generic_size = sizeof(bcmcth_flex_digest_mux_cont_map_t),
    .field_count = 3,
    .fields = bcmissu_fields_bcmcth_flex_digest_mux_cont_map_t,
};

static const issu_field_t bcmissu_fields_bcmcth_flex_digest_mux_cont_map_info_t[] = {
    {
        .fid = 0x402819d7,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xce7d898e,
        .width = sizeof(int),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x0aa613c8,
        .width = sizeof(bcmcth_flex_digest_mux_cont_map_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = 0,
        .var_size_id = 0xce7d898e,
        .struct_id = 0x10e1ec016de36c19,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmcth_flex_digest_mux_cont_map_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmcth_flex_digest_mux_cont_map_info_t var;

    switch (field_id) {
        case 0x402819d7:
            return ((uint8_t *)&var.array_count) - (uint8_t *)&var;
        case 0xce7d898e:
            return ((uint8_t *)&var.array_size) - (uint8_t *)&var;
        case 0x0aa613c8:
            return ((uint8_t *)&var.mux_cont_map) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_flex_digest_ha_bcmcth_flex_digest_mux_cont_map_info_t_v1_4 = {
    .offset_get_func = bcmcth_flex_digest_mux_cont_map_info_t_field_offset_get,
    .generic_size = sizeof(bcmcth_flex_digest_mux_cont_map_info_t),
    .field_count = 3,
    .fields = bcmissu_fields_bcmcth_flex_digest_mux_cont_map_info_t,
};
