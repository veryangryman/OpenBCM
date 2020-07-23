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
#include "dlb_ha.h"

static const issu_field_t bcmissu_fields_bcmcth_dlb_ecmp_entry_info_t[] = {
    {
        .fid = 0x36a9c0dc,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x0eb0444d,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmcth_dlb_ecmp_entry_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmcth_dlb_ecmp_entry_info_t var;

    switch (field_id) {
        case 0x36a9c0dc:
            return ((uint8_t *)&var.flow_set_base_ptr) - (uint8_t *)&var;
        case 0x0eb0444d:
            return ((uint8_t *)&var.flow_set_size) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_dlb_ha_bcmcth_dlb_ecmp_entry_info_t_v1_3 = {
    .offset_get_func = bcmcth_dlb_ecmp_entry_info_t_field_offset_get,
    .generic_size = sizeof(bcmcth_dlb_ecmp_entry_info_t),
    .field_count = 2,
    .fields = bcmissu_fields_bcmcth_dlb_ecmp_entry_info_t,
};

static const issu_field_t bcmissu_fields_bcmcth_dlb_trunk_entry_info_t[] = {
    {
        .fid = 0x36a9c0dc,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x0eb0444d,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x2033ea23,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xf31e63e0,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x14cc1f8f,
        .width = sizeof(bool),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmcth_dlb_trunk_entry_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmcth_dlb_trunk_entry_info_t var;

    switch (field_id) {
        case 0x36a9c0dc:
            return ((uint8_t *)&var.flow_set_base_ptr) - (uint8_t *)&var;
        case 0x0eb0444d:
            return ((uint8_t *)&var.flow_set_size) - (uint8_t *)&var;
        case 0x2033ea23:
            return ((uint8_t *)&var.num_paths) - (uint8_t *)&var;
        case 0xf31e63e0:
            return ((uint8_t *)&var.num_alternate_paths) - (uint8_t *)&var;
        case 0x14cc1f8f:
            return ((uint8_t *)&var.group_enable) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_dlb_ha_bcmcth_dlb_trunk_entry_info_t_v1_3 = {
    .offset_get_func = bcmcth_dlb_trunk_entry_info_t_field_offset_get,
    .generic_size = sizeof(bcmcth_dlb_trunk_entry_info_t),
    .field_count = 5,
    .fields = bcmissu_fields_bcmcth_dlb_trunk_entry_info_t,
};

static const issu_field_t bcmissu_fields_bcmcth_dlb_trunk_entry_ha_blk_t[] = {
    {
        .fid = 0xac201fd2,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xce7d898e,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x6f86162e,
        .width = sizeof(bcmcth_dlb_trunk_entry_info_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = 0,
        .var_size_id = 0xce7d898e,
        .struct_id = 0x22fd54f24f2089f3,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmcth_dlb_trunk_entry_ha_blk_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmcth_dlb_trunk_entry_ha_blk_t var;

    switch (field_id) {
        case 0xac201fd2:
            return ((uint8_t *)&var.signature) - (uint8_t *)&var;
        case 0xce7d898e:
            return ((uint8_t *)&var.array_size) - (uint8_t *)&var;
        case 0x6f86162e:
            return ((uint8_t *)&var.dlb_trunk_ent_arr) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_dlb_ha_bcmcth_dlb_trunk_entry_ha_blk_t_v1_3 = {
    .offset_get_func = bcmcth_dlb_trunk_entry_ha_blk_t_field_offset_get,
    .generic_size = sizeof(bcmcth_dlb_trunk_entry_ha_blk_t),
    .field_count = 3,
    .fields = bcmissu_fields_bcmcth_dlb_trunk_entry_ha_blk_t,
};

static const issu_field_t bcmissu_fields_bcmcth_dlb_trunk_mbmp_ha_blk_t[] = {
    {
        .fid = 0xac201fd2,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xce7d898e,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x331976d1,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = true,
        .size = 0,
        .var_size_id = 0xce7d898e,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmcth_dlb_trunk_mbmp_ha_blk_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmcth_dlb_trunk_mbmp_ha_blk_t var;

    switch (field_id) {
        case 0xac201fd2:
            return ((uint8_t *)&var.signature) - (uint8_t *)&var;
        case 0xce7d898e:
            return ((uint8_t *)&var.array_size) - (uint8_t *)&var;
        case 0x331976d1:
            return ((uint8_t *)&var.mbmp) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_dlb_ha_bcmcth_dlb_trunk_mbmp_ha_blk_t_v1_3 = {
    .offset_get_func = bcmcth_dlb_trunk_mbmp_ha_blk_t_field_offset_get,
    .generic_size = sizeof(bcmcth_dlb_trunk_mbmp_ha_blk_t),
    .field_count = 3,
    .fields = bcmissu_fields_bcmcth_dlb_trunk_mbmp_ha_blk_t,
};

static const issu_field_t bcmissu_fields_bcmcth_dlb_ecmp_stats_entry_info_t[] = {
    {
        .fid = 0x9f7d0ee8,
        .width = sizeof(uint8_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x6e28c539,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0xe0f00b06,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
    {
        .fid = 0x92dd16d3,
        .width = sizeof(uint32_t),
        .ha_ptr = HA_PTR_NONE,
        .lt_attrib = HA_LT_NONE,
        .ltid_var_for_fid = ISSU_INVALID_FIELD_ID,
        .is_array = false,
        .var_size_id = ISSU_INVALID_FIELD_ID,
        .size = 0,
        .struct_id = ISSU_INVALID_STRUCT_ID,
        .enum_type_name = NULL,
    },
};

static uint32_t bcmcth_dlb_ecmp_stats_entry_info_t_field_offset_get (bcmissu_field_id_t field_id)
{
    bcmcth_dlb_ecmp_stats_entry_info_t var;

    switch (field_id) {
        case 0x9f7d0ee8:
            return ((uint8_t *)&var.valid) - (uint8_t *)&var;
        case 0x6e28c539:
            return ((uint8_t *)&var.fail_cnt) - (uint8_t *)&var;
        case 0xe0f00b06:
            return ((uint8_t *)&var.port_reassignment_cnt) - (uint8_t *)&var;
        case 0x92dd16d3:
            return ((uint8_t *)&var.member_reassignment_cnt) - (uint8_t *)&var;
        default:
            return ISSU_INVALID_FLD_OFFSET;
    }
}

const issu_struct_t bcmissu_struct_dlb_ha_bcmcth_dlb_ecmp_stats_entry_info_t_v1_3 = {
    .offset_get_func = bcmcth_dlb_ecmp_stats_entry_info_t_field_offset_get,
    .generic_size = sizeof(bcmcth_dlb_ecmp_stats_entry_info_t),
    .field_count = 4,
    .fields = bcmissu_fields_bcmcth_dlb_ecmp_stats_entry_info_t,
};
