/*****************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by xfc_map_parser
 * from the NPL output file(s) header.yml
 * for device bcm56880_a0 and variant dna_4_6_6.
 * Edits to this file will be lost when it is regenerated.
 *
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * All Rights Reserved.$
 *
 * Tool Path: $SDK/INTERNAL/fltg/xfc_map_parser
 */

#include <sal/sal_types.h>
#include <shr/shr_error.h>
#include <bsl/bsl.h>
#include <bcmpkt/flexhdr/bcmpkt_hg3_base_t.h>
#include <bcmpkt/flexhdr/bcmpkt_hg3_base_t_internal.h>

#define MASK(_bn) (((uint32_t)0x1<<(_bn))-1)
#define WORD_FIELD_GET(_d,_s,_l) (((_d) >> (_s)) & MASK(_l))
#define WORD_FIELD_SET(_d,_s,_l,_v) (_d)=(((_d) & ~(MASK(_l) << (_s))) | (((_v) & MASK(_l)) << (_s)))
#define WORD_FIELD_MASK(_d,_s,_l) (_d)=((_d) | (MASK(_l) << (_s)))

static uint32_t bcmpkt_hg3_base_t_system_source_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[1], 16, 15);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_HG3_BASE_T_SYSTEM_SOURCE with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_hg3_base_t_system_source_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_HG3_BASE_T_SYSTEM_SOURCE with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    WORD_FIELD_SET(data[1], 16, 15, val);
}

static uint32_t bcmpkt_hg3_base_t_ext_hdr_present_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 18, 2);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_HG3_BASE_T_EXT_HDR_PRESENT with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_hg3_base_t_ext_hdr_present_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_HG3_BASE_T_EXT_HDR_PRESENT with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    WORD_FIELD_SET(data[0], 18, 2, val);
}

static uint32_t bcmpkt_hg3_base_t_cn_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[1], 4, 2);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_HG3_BASE_T_CN with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_hg3_base_t_cn_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_HG3_BASE_T_CN with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    WORD_FIELD_SET(data[1], 4, 2, val);
}

static uint32_t bcmpkt_hg3_base_t_hg3_reserved_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 17, 1);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_HG3_BASE_T_HG3_RESERVED with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_hg3_base_t_hg3_reserved_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_HG3_BASE_T_HG3_RESERVED with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    WORD_FIELD_SET(data[0], 17, 1, val);
}

static uint32_t bcmpkt_hg3_base_t_mirror_copy_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 16, 1);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_HG3_BASE_T_MIRROR_COPY with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_hg3_base_t_mirror_copy_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_HG3_BASE_T_MIRROR_COPY with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    WORD_FIELD_SET(data[0], 16, 1, val);
}

static uint32_t bcmpkt_hg3_base_t_l3_routed_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[1], 31, 1);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_HG3_BASE_T_L3_ROUTED with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_hg3_base_t_l3_routed_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_HG3_BASE_T_L3_ROUTED with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    WORD_FIELD_SET(data[1], 31, 1, val);
}

static uint32_t bcmpkt_hg3_base_t_cng_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[1], 6, 2);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_HG3_BASE_T_CNG with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_hg3_base_t_cng_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_HG3_BASE_T_CNG with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    WORD_FIELD_SET(data[1], 6, 2, val);
}

static uint32_t bcmpkt_hg3_base_t_reserved_etype_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 22, 10);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_HG3_BASE_T_RESERVED_ETYPE with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_hg3_base_t_reserved_etype_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_HG3_BASE_T_RESERVED_ETYPE with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    WORD_FIELD_SET(data[0], 22, 10, val);
}

static uint32_t bcmpkt_hg3_base_t_version_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 20, 2);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_HG3_BASE_T_VERSION with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_hg3_base_t_version_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_HG3_BASE_T_VERSION with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    WORD_FIELD_SET(data[0], 20, 2, val);
}

static uint32_t bcmpkt_hg3_base_t_system_destination_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 0, 15);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_HG3_BASE_T_SYSTEM_DESTINATION with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_hg3_base_t_system_destination_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_HG3_BASE_T_SYSTEM_DESTINATION with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    WORD_FIELD_SET(data[0], 0, 15, val);
}

static uint32_t bcmpkt_hg3_base_t_entropy_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[1], 8, 8);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_HG3_BASE_T_ENTROPY with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_hg3_base_t_entropy_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_HG3_BASE_T_ENTROPY with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    WORD_FIELD_SET(data[1], 8, 8, val);
}

static uint32_t bcmpkt_hg3_base_t_tc_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[1], 0, 4);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_HG3_BASE_T_TC with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_hg3_base_t_tc_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_HG3_BASE_T_TC with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    WORD_FIELD_SET(data[1], 0, 4, val);
}

static uint32_t bcmpkt_hg3_base_t_system_destination_type_get(uint32_t *data) {
    uint32_t val;

    val = WORD_FIELD_GET(data[0], 15, 1);
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_HG3_BASE_T_SYSTEM_DESTINATION_TYPE with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    return val;
}

static void bcmpkt_hg3_base_t_system_destination_type_set(uint32_t *data, uint32_t val) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Set field BCMPKT_HG3_BASE_T_SYSTEM_DESTINATION_TYPE with value %u on device BCM56880_A0_DNA_4_6_6\n"), val));

    WORD_FIELD_SET(data[0], 15, 1, val);
}

static uint32_t bcmpkt_hg3_base_t_i_support_get(uint32_t *data, uint32_t **addr) {
    LOG_DEBUG(BSL_LS_BCMPKT_FLEX_HDR,
        (BSL_META("Get field BCMPKT_HG3_BASE_T_I_SUPPORT on device BCM56880_A0_DNA_4_6_6\n")));
    return true;
}

const bcmpkt_hg3_base_t_fget_t bcm56880_a0_dna_4_6_6_hg3_base_t_fget = {
    {
        bcmpkt_hg3_base_t_system_source_get,
        bcmpkt_hg3_base_t_ext_hdr_present_get,
        bcmpkt_hg3_base_t_cn_get,
        bcmpkt_hg3_base_t_hg3_reserved_get,
        bcmpkt_hg3_base_t_mirror_copy_get,
        bcmpkt_hg3_base_t_l3_routed_get,
        bcmpkt_hg3_base_t_cng_get,
        bcmpkt_hg3_base_t_reserved_etype_get,
        bcmpkt_hg3_base_t_version_get,
        bcmpkt_hg3_base_t_system_destination_get,
        bcmpkt_hg3_base_t_entropy_get,
        bcmpkt_hg3_base_t_tc_get,
        bcmpkt_hg3_base_t_system_destination_type_get,
    }
};

const bcmpkt_hg3_base_t_fset_t bcm56880_a0_dna_4_6_6_hg3_base_t_fset = {
    {
        bcmpkt_hg3_base_t_system_source_set,
        bcmpkt_hg3_base_t_ext_hdr_present_set,
        bcmpkt_hg3_base_t_cn_set,
        bcmpkt_hg3_base_t_hg3_reserved_set,
        bcmpkt_hg3_base_t_mirror_copy_set,
        bcmpkt_hg3_base_t_l3_routed_set,
        bcmpkt_hg3_base_t_cng_set,
        bcmpkt_hg3_base_t_reserved_etype_set,
        bcmpkt_hg3_base_t_version_set,
        bcmpkt_hg3_base_t_system_destination_set,
        bcmpkt_hg3_base_t_entropy_set,
        bcmpkt_hg3_base_t_tc_set,
        bcmpkt_hg3_base_t_system_destination_type_set,
    }
};


const bcmpkt_hg3_base_t_figet_t bcm56880_a0_dna_4_6_6_hg3_base_t_figet = {
    {
        bcmpkt_hg3_base_t_i_support_get
    }
};

static shr_enum_map_t bcm56880_a0_dna_4_6_6_hg3_base_t_view_types[] = {
    {NULL, -1},
};

/* -2: unsupported, -1: global, others: view's value */
static int bcm56880_a0_dna_4_6_6_hg3_base_t_view_infos[BCMPKT_HG3_BASE_T_FID_COUNT] = {
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
    -1,
};

void bcm56880_a0_dna_4_6_6_hg3_base_t_view_info_get(bcmpkt_pmd_view_info_t *info)
{
    info->view_infos = bcm56880_a0_dna_4_6_6_hg3_base_t_view_infos;
    info->view_types = bcm56880_a0_dna_4_6_6_hg3_base_t_view_types;
    info->view_type_get = NULL;
}
