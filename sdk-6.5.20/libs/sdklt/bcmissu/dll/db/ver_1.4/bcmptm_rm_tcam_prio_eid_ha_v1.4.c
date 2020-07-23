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
#include "bcmptm_rm_tcam_prio_eid_ha.h"

static const issu_field_t bcmissu_fields_bcmptm_rm_tcam_prio_eid_info_t[] = {
    {
        .fid = 0xb4744c9d,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_LTID,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .is_local_enum = false,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x4e5868d6,
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
        .fid = 0x9f8b970b,
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
    {
        .fid = 0x8afadbeb,
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
    {
        .fid = 0x8f67f4ec,
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
    {
        .fid = 0xd2eff38e,
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
        .fid = 0x3840cace,
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
        .fid = 0x05b3dd89,
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
    {
        .fid = 0xb9c42685,
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
};

static uint32_t bcmptm_rm_tcam_prio_eid_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmptm_rm_tcam_prio_eid_info_t var;

    switch (field_id) {
        case 0xb4744c9d:
            return ((uint8_t *)&var.ltid) - (uint8_t *)&var;
        case 0x4e5868d6:
            return ((uint8_t *)&var.flags) - (uint8_t *)&var;
        case 0x9f8b970b:
            return ((uint8_t *)&var.num_entries) - (uint8_t *)&var;
        case 0x8afadbeb:
            return ((uint8_t *)&var.num_entries_ltid) - (uint8_t *)&var;
        case 0x8f67f4ec:
            return ((uint8_t *)&var.free_entries) - (uint8_t *)&var;
        case 0xd2eff38e:
            return ((uint8_t *)&var.slice_info_offset) - (uint8_t *)&var;
        case 0x3840cace:
            return ((uint8_t *)&var.entry_info_offset) - (uint8_t *)&var;
        case 0x05b3dd89:
            return ((uint8_t *)&var.entry_hash_size) - (uint8_t *)&var;
        case 0xb9c42685:
            return ((uint8_t *)&var.entry_hash_offset) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmptm_rm_tcam_prio_eid_ha_bcmptm_rm_tcam_prio_eid_info_t_v1_4 = {
    .offset_get_func = bcmptm_rm_tcam_prio_eid_info_t_field_offset_get,
    .generic_size = sizeof(bcmptm_rm_tcam_prio_eid_info_t),
    .field_count = 9,
    .fields = bcmissu_fields_bcmptm_rm_tcam_prio_eid_info_t,
};

static const issu_field_t bcmissu_fields_bcmptm_rm_tcam_prio_eid_entry_info_t[] = {
    {
        .fid = 0x8e4ca966,
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
        .fid = 0xb64a62ea,
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
        .fid = 0xcff25b3f,
        .width = sizeof(int8_t),
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
        .fid = 0x7a86c157,
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
        .fid = 0xd653f871,
        .width = sizeof(bool),
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

static uint32_t bcmptm_rm_tcam_prio_eid_entry_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmptm_rm_tcam_prio_eid_entry_info_t var;

    switch (field_id) {
        case 0x8e4ca966:
            return ((uint8_t *)&var.entry_pri) - (uint8_t *)&var;
        case 0xb64a62ea:
            return ((uint8_t *)&var.entry_id) - (uint8_t *)&var;
        case 0xcff25b3f:
            return ((uint8_t *)&var.entry_type) - (uint8_t *)&var;
        case 0x7a86c157:
            return ((uint8_t *)&var.offset) - (uint8_t *)&var;
        case 0xd653f871:
            return ((uint8_t *)&var.global_to_all_pipes) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmptm_rm_tcam_prio_eid_ha_bcmptm_rm_tcam_prio_eid_entry_info_t_v1_4 = {
    .offset_get_func = bcmptm_rm_tcam_prio_eid_entry_info_t_field_offset_get,
    .generic_size = sizeof(bcmptm_rm_tcam_prio_eid_entry_info_t),
    .field_count = 5,
    .fields = bcmissu_fields_bcmptm_rm_tcam_prio_eid_entry_info_t,
};

static const issu_field_t bcmissu_fields_bcmptm_rm_tcam_prio_eid_slice_info_t[] = {
    {
        .fid = 0x8f67f4ec,
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
};

static uint32_t bcmptm_rm_tcam_prio_eid_slice_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmptm_rm_tcam_prio_eid_slice_info_t var;

    switch (field_id) {
        case 0x8f67f4ec:
            return ((uint8_t *)&var.free_entries) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_bcmptm_rm_tcam_prio_eid_ha_bcmptm_rm_tcam_prio_eid_slice_info_t_v1_4 = {
    .offset_get_func = bcmptm_rm_tcam_prio_eid_slice_info_t_field_offset_get,
    .generic_size = sizeof(bcmptm_rm_tcam_prio_eid_slice_info_t),
    .field_count = 1,
    .fields = bcmissu_fields_bcmptm_rm_tcam_prio_eid_slice_info_t,
};
