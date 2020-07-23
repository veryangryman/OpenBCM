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
#include "bcmlm_ha.h"

static const issu_field_t bcmissu_fields_bcmlm_pbmp_t[] = {
    {
        .fid = 0xe22fb442,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = BCMLM_PBMP_WORD_MAX,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmlm_pbmp_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmlm_pbmp_t var;

    switch (field_id) {
        case 0xe22fb442:
            return ((uint8_t *)&var.w) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmlm_ha_bcmlm_pbmp_t_v1_4 = {
    .offset_get_func = bcmlm_pbmp_t_field_offset_get,
    .generic_size = sizeof(bcmlm_pbmp_t),
    .field_count = 1,
    .fields = bcmissu_fields_bcmlm_pbmp_t,
};

static const issu_field_t bcmissu_fields_bcmlm_pbm_ha_t[] = {
    {
        .fid = 0x252727ae,
        .width = sizeof(bcmlm_pbmp_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = 0x9fb2e3c7a174b5f8,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xc04e666f,
        .width = sizeof(bcmlm_pbmp_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = 0x9fb2e3c7a174b5f8,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xae559cbc,
        .width = sizeof(bcmlm_pbmp_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = 0x9fb2e3c7a174b5f8,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x2084eedb,
        .width = sizeof(bcmlm_pbmp_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = 0x9fb2e3c7a174b5f8,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xde77f562,
        .width = sizeof(bcmlm_pbmp_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = 0x9fb2e3c7a174b5f8,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmlm_pbm_ha_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmlm_pbm_ha_t var;

    switch (field_id) {
        case 0x252727ae:
            return ((uint8_t *)&var.pbm_logical_link) - (uint8_t *)&var;
        case 0xc04e666f:
            return ((uint8_t *)&var.pbm_fault) - (uint8_t *)&var;
        case 0xae559cbc:
            return ((uint8_t *)&var.pbm_physical_link) - (uint8_t *)&var;
        case 0x2084eedb:
            return ((uint8_t *)&var.pbm_force) - (uint8_t *)&var;
        case 0xde77f562:
            return ((uint8_t *)&var.pbm_force_link) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmlm_ha_bcmlm_pbm_ha_t_v1_4 = {
    .offset_get_func = bcmlm_pbm_ha_t_field_offset_get,
    .generic_size = sizeof(bcmlm_pbm_ha_t),
    .field_count = 5,
    .fields = bcmissu_fields_bcmlm_pbm_ha_t,
};
