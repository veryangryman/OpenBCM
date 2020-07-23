#ifndef BCMPKT_FRAG_T_DEFS_H
#define BCMPKT_FRAG_T_DEFS_H
/*****************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by xfc_map_parser
 * from the NPL output file(s) header.yml.
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

/*!
 * \name FRAG_T field IDs.
 * \anchor BCMPKT_FRAG_T_XXX
 */
#define BCMPKT_FRAG_T_FRAG_INFO   0
#define BCMPKT_FRAG_T_RESERVED    1
#define BCMPKT_FRAG_T_NEXT_HEADER 2
#define BCMPKT_FRAG_T_ID          3

#define BCMPKT_FRAG_T_FID_INVALID        -1
#define BCMPKT_FRAG_T_FID_COUNT          4
#define BCMPKT_FRAG_T_FID_START          0
#define BCMPKT_FRAG_T_FID_END            (BCMPKT_FRAG_T_FID_COUNT - 1)

#define BCMPKT_FRAG_T_I_SUPPORT          0
#define BCMPKT_FRAG_T_I_FID_COUNT        1

#define BCMPKT_FRAG_T_FIELD_NAME_MAP_INIT \
    {"FRAG_INFO", BCMPKT_FRAG_T_FRAG_INFO},\
    {"RESERVED", BCMPKT_FRAG_T_RESERVED},\
    {"NEXT_HEADER", BCMPKT_FRAG_T_NEXT_HEADER},\
    {"ID", BCMPKT_FRAG_T_ID},\
    {"frag_t fid count", BCMPKT_FRAG_T_FID_COUNT}

#endif /* BCMPKT_FRAG_T_DEFS_H */
