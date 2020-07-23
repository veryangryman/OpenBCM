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
#ifndef BCMCFG_HA_CONFIG_H
#define BCMCFG_HA_CONFIG_H

#include <shr/shr_ha.h>

/*!
 * Header data of HA block.
 */
typedef struct {
   /*! HA signature */
   uint32_t signature;
   /*! Size of HA block */
   uint32_t size;
} bcmcfg_ha_header_t;

#define BCMCFG_HA_HEADER_T_ID 0x1f7211f34175574f

/*!
 * A tuple data for LT config.
 */
typedef struct {
   /*! LT ID */
   uint32_t sid;
   /*! LT field ID */
   uint32_t fid;
   /*! Field index to the array field. */
   uint32_t fidx;
   /*! Field value */
   uint64_t val;
   /*! Source type */
   uint32_t src_type;
   /*! Reserved */
   uint32_t rsvd;
} bcmcfg_basic_tuple_t;

#define BCMCFG_BASIC_TUPLE_T_ID 0x7758b7e0e632a9c9

#endif /* BCMCFG_HA_CONFIG_H */
