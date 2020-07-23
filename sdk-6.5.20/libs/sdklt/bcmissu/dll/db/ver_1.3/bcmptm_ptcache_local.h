/**************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by HA parser from YAML formated file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: bcmha/scripts/ha_yml_parser.py
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#ifndef BCMPTM_PTCACHE_LOCAL_H
#define BCMPTM_PTCACHE_LOCAL_H

#include <shr/shr_ha.h>

/*!
 * Info to be stored for every physical SID.
 */
typedef struct {
   /*! Index into seds/cwme array for SE/ME PTs.  cci_map_id for CCI_ONLY type PTs. */
   uint32_t cw_index;
   /*! Ignore index in pt_dyn_info when en = FALSE. */
   bool index_en;
   /*! Ignore tbl_inst in pt_dyn_info when en = FALSE. */
   bool tbl_inst_en;
   /*! Identifies type of PT. */
   uint8_t ptcache_type;
} bcmptm_ptcache_sinfo_t;

#define BCMPTM_PTCACHE_SINFO_T_ID 0x0d5b73f2c7d8f81d

/*!
 * Info to be stored for every physical table (PT) group.
 */
typedef struct {
   /*! Number of banks in pt_group. Not applicable for group_0. */
   uint32_t num_banks;
   /*! Start bank. For group_0, Not applicable for group_0. */
   uint32_t start_bank;
   /*! Number of words in valid_seg (vinfo_array). */
   uint32_t valid_seg_word_count;
   /*! Number of words in vinfo_array.data_seg. */
   uint32_t data_seg_word_count;
   /*! Number of words in vinfo_array.dfid_seg. */
   uint32_t dfid_seg_word_count;
   /*! Number of words in vinfo_array.info_seg. */
   uint32_t info_seg_word_count;
   /*! Number of words in vinfo_array.tc_seg. */
   uint32_t tc_seg_word_count;
   /*! Number of words in ltid_seg. */
   uint32_t ltid_seg_word_count;
} bcmptm_ptcache_pt_group_info_t;

#define BCMPTM_PTCACHE_PT_GROUP_INFO_T_ID 0xbf428092738dbc6b

/*!
 * Extended info for every physical SID with multiple entries..
 */
typedef struct {
   /*! TRUE => data_seg avail. */
   bool data_seg_en;
   /*! TRUE => info_seg avail. */
   bool info_seg_en;
   /*! TRUE => tcam_corrupt_seg avail. */
   bool tc_seg_en;
   /*! 0 means no dfid_seg. 1,2 specify number of bytes per dfid. */
   uint8_t dfid_seg_en;
   /*! TRUE => ltid_seg avail. */
   bool ltid_seg_en;
   /*! non-zero => is overlay (narrow view) of another (wider view) sid and implies there is no 'explicit' data_seg for this sid. Instead, we implicitly have data_seg to store overlay_info_words. */
   uint8_t overlay_mode;
   /*! Number of wide_entry field words in data_seg. */
   uint8_t num_we_field;
   /*! Support up to 256 PT groups. 0 is the DEFAULT (fixed) group. */
   uint8_t pt_group;
} bcmptm_ptcache_xinfo_t;

#define BCMPTM_PTCACHE_XINFO_T_ID 0x86d400db27b017cb

/*!
 * Control word for PTs with multiple entries.
 */
typedef struct {
   /*! Extended info. */
   bcmptm_ptcache_xinfo_t xinfo;
   /*! Points to 1st word in valid_seg. */
   uint32_t vs_base;
   /*! Points to 1st word in data_seg. */
   uint32_t ds_base;
   /*! Points to 1st word in dfid_seg. */
   uint32_t dfs_base;
   /*! Points to 1st word in info_seg. */
   uint32_t is_base;
   /*! Points to 1st word in tcam_corrupt_seg. */
   uint32_t tcs_base;
   /*! Points to 1st word in ltid_seg. */
   uint32_t ls_base;
   /*! index_count for one instance of multi-entry mem. */
   uint32_t pt_index_count;
   /*! index_min. */
   uint32_t pt_index_min;
   /*! Last instance for tables with multiple instances. */
   int16_t tbl_inst_max;
} bcmptm_ptcache_cwme_t;

#define BCMPTM_PTCACHE_CWME_T_ID 0x7b57c83f10cf0598

#endif /* BCMPTM_PTCACHE_LOCAL_H */
