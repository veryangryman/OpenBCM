/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by xfcr from NPL files files.
 *
 * Tool: $SDK/INTERNAL/fltg/bin/xfcr
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#ifndef BCM56880_A0_DNA_4_6_6_PTM_EM_H
#define BCM56880_A0_DNA_4_6_6_PTM_EM_H
static const bcmdrd_sid_t bcm56880_a0_dna_4_6_6_bank_ptid[100];
static const bcmdrd_sid_t bcm56880_a0_dna_4_6_6_alpm_ptid[100];
static const uint32_t bcm56880_a0_dna_4_6_6_bank_tile_id[100];

#include "bcm56880_a0_dna_4_6_6_ptm_em_tile.h"

#include "bcm56880_a0_dna_4_6_6_ptm_em.ptrm.data.h"

#define BCM56880_A0_DNA_4_6_6_UFT_MODE_CNT (0)

#define BCM56880_A0_DNA_4_6_6_EM_BANK_CNT ((int)(sizeof(bcm56880_a0_dna_4_6_6_em_bank_info)/sizeof(em_bank_info_t)))

#define BCM56880_A0_DNA_4_6_6_EM_TILE_CNT ((int)(sizeof(bcm56880_a0_dna_4_6_6_em_tile_info)/sizeof(em_tile_info_t)))

#define BCM56880_A0_DNA_4_6_6_EM_GRP_CNT ((int)(sizeof(bcm56880_a0_dna_4_6_6_em_mode_grp)/sizeof(em_grp_info_t*)))

#define BCM56880_A0_DNA_4_6_6_EM_TILE_MODE_CNT ((int)(sizeof(bcm56880_a0_dna_4_6_6_em_tile_mode)/sizeof(em_tile_mode_info_t*)))

#define BCM56880_A0_DNA_4_6_6_EM_LT_INFO_CNT ((int)(sizeof(bcm56880_a0_dna_4_6_6_em_lt_info)/sizeof(em_lt_info_t)))

#define DEV_EM_GRP_CNT (BCM56880_A0_DNA_4_6_6_EM_GRP_CNT)

#define DEV_EM_GRP_MAX (BCM56880_A0_DNA_4_6_6_EM_GRP_CNT + 1)

#define DEV_EM_BANK_CNT (BCM56880_A0_DNA_4_6_6_EM_BANK_CNT)

#define DEV_UFT_PHY_BANKS_MAX (BCM56880_A0_DNA_4_6_6_EM_BANK_CNT)

#define DEV_UFT_TILE_MAX (BCM56880_A0_DNA_4_6_6_EM_TILE_CNT)

#define DEV_UFT_MODE_CNT (BCM56880_A0_DNA_4_6_6_UFT_MODE_CNT)

#define DEV_UFT_FIRST_BANK (IFTA90_E2T_00_BANK0)

#define DEV_UFT_BANKS_CNT (8)

static const bcmdrd_sid_t bcm56880_a0_dna_4_6_6_bank_ptid[100] = {
    MEMDB_EFTA10_MEM0m,
    MEMDB_EFTA10_MEM1m,
    MEMDB_EFTA10_MEM2m,
    MEMDB_EFTA10_MEM3m,
    MEMDB_EFTA10_MEM4m,
    MEMDB_EFTA10_MEM5m,
    MEMDB_EFTA10_MEM6_MEM7m,
    MEMDB_EFTA20_MEM0m,
    MEMDB_EFTA20_MEM1m,
    MEMDB_EFTA20_MEM2m,
    MEMDB_EFTA20_MEM3m,
    MEMDB_EFTA20_MEM4_MEM5m,
    MEMDB_EFTA20_MEM4_MEM5m,
    MEMDB_EFTA20_MEM6_MEM7m,
    MEMDB_EFTA20_MEM6_MEM7m,
    MEMDB_EFTA20_MEM8m,
    MEMDB_EFTA20_MEM9m,
    MEMDB_EFTA20_MEM10m,
    MEMDB_EFTA20_MEM11m,
    EFTA30_E2T_00_B0_QUADm,
    EFTA30_E2T_00_B1_QUADm,
    MEMDB_IFTA10_MEM0m,
    MEMDB_IFTA10_MEM1m,
    MEMDB_IFTA120_MEM4_MEM5m,
    MEMDB_IFTA120_MEM6_MEM7m,
    MEMDB_IFTA130_MEM0m,
    MEMDB_IFTA130_MEM1m,
    MEMDB_IFTA130_MEM2m,
    MEMDB_IFTA130_MEM3m,
    MEMDB_IFTA130_MEM4m,
    MEMDB_IFTA130_MEM5m,
    MEMDB_IFTA130_MEM6m,
    MEMDB_IFTA130_MEM7m,
    MEMDB_IFTA140_MEM0m,
    MEMDB_IFTA140_MEM1m,
    MEMDB_IFTA20_MEM0_MEM1m,
    IFTA30_E2T_00_B0_QUADm,
    IFTA30_E2T_00_B1_QUADm,
    IFTA40_E2T_00_B0_QUADm,
    IFTA40_E2T_00_B1_QUADm,
    IFTA40_E2T_01_B0_QUADm,
    IFTA40_E2T_01_B1_QUADm,
    MEMDB_TCAM_IFTA40_MEM0_0_ONLYm,
    MEMDB_TCAM_IFTA40_MEM0_1_ONLYm,
    MEMDB_TCAM_IFTA40_MEM0_2_ONLYm,
    MEMDB_TCAM_IFTA40_MEM0_3_ONLYm,
    MEMDB_TCAM_IFTA40_MEM1_0_ONLYm,
    MEMDB_TCAM_IFTA40_MEM1_1_ONLYm,
    MEMDB_TCAM_IFTA40_MEM1_2_ONLYm,
    MEMDB_TCAM_IFTA40_MEM1_3_ONLYm,
    MEMDB_IFTA50_MEM0m,
    MEMDB_IFTA50_MEM1m,
    MEMDB_IFTA50_MEM2m,
    MEMDB_IFTA50_MEM3m,
    MEMDB_IFTA60_MEM0m,
    MEMDB_IFTA60_MEM1m,
    MEMDB_IFTA60_MEM2m,
    MEMDB_IFTA60_MEM3m,
    MEMDB_IFTA60_MEM4m,
    MEMDB_IFTA60_MEM5m,
    MEMDB_IFTA70_MEM0m,
    MEMDB_IFTA70_MEM2m,
    IFTA80_E2T_00_B0_QUADm,
    IFTA80_E2T_00_B1_QUADm,
    IFTA80_E2T_01_B0_QUADm,
    IFTA80_E2T_01_B1_QUADm,
    IFTA80_E2T_02_B0_QUADm,
    IFTA80_E2T_02_B1_QUADm,
    IFTA80_E2T_03_B0_QUADm,
    IFTA80_E2T_03_B1_QUADm,
    MEMDB_TCAM_IFTA80_MEM0_0m,
    MEMDB_TCAM_IFTA80_MEM0_1m,
    MEMDB_TCAM_IFTA80_MEM1_0m,
    MEMDB_TCAM_IFTA80_MEM1_1m,
    MEMDB_TCAM_IFTA80_MEM2_0m,
    MEMDB_TCAM_IFTA80_MEM2_1m,
    MEMDB_TCAM_IFTA80_MEM3_0m,
    MEMDB_TCAM_IFTA80_MEM3_1m,
    MEMDB_TCAM_IFTA80_MEM4_0m,
    MEMDB_TCAM_IFTA80_MEM4_1m,
    MEMDB_TCAM_IFTA80_MEM5_0m,
    MEMDB_TCAM_IFTA80_MEM5_1m,
    MEMDB_TCAM_IFTA80_MEM6_0m,
    MEMDB_TCAM_IFTA80_MEM6_1m,
    MEMDB_TCAM_IFTA80_MEM7_0m,
    MEMDB_TCAM_IFTA80_MEM7_1m,
    IFTA90_E2T_00_B0_QUADm,
    IFTA90_E2T_00_B1_QUADm,
    IFTA90_E2T_01_B0_QUADm,
    IFTA90_E2T_01_B1_QUADm,
    IFTA90_E2T_02_B0_QUADm,
    IFTA90_E2T_02_B1_QUADm,
    IFTA90_E2T_03_B0_QUADm,
    IFTA90_E2T_03_B1_QUADm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
};

static const bcmdrd_sid_t bcm56880_a0_dna_4_6_6_alpm_ptid[100] = {
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    MEMDB_TCAM_IFTA40_MEM0_0_ONLYm,
    MEMDB_TCAM_IFTA40_MEM0_1_ONLYm,
    MEMDB_TCAM_IFTA40_MEM0_2_ONLYm,
    MEMDB_TCAM_IFTA40_MEM0_3_ONLYm,
    MEMDB_TCAM_IFTA40_MEM1_0_ONLYm,
    MEMDB_TCAM_IFTA40_MEM1_1_ONLYm,
    MEMDB_TCAM_IFTA40_MEM1_2_ONLYm,
    MEMDB_TCAM_IFTA40_MEM1_3_ONLYm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    INVALIDm,
    MEMDB_TCAM_IFTA80_MEM0_0m,
    MEMDB_TCAM_IFTA80_MEM0_1m,
    MEMDB_TCAM_IFTA80_MEM1_0m,
    MEMDB_TCAM_IFTA80_MEM1_1m,
    MEMDB_TCAM_IFTA80_MEM2_0m,
    MEMDB_TCAM_IFTA80_MEM2_1m,
    MEMDB_TCAM_IFTA80_MEM3_0m,
    MEMDB_TCAM_IFTA80_MEM3_1m,
    MEMDB_TCAM_IFTA80_MEM4_0m,
    MEMDB_TCAM_IFTA80_MEM4_1m,
    MEMDB_TCAM_IFTA80_MEM5_0m,
    MEMDB_TCAM_IFTA80_MEM5_1m,
    MEMDB_TCAM_IFTA80_MEM6_0m,
    MEMDB_TCAM_IFTA80_MEM6_1m,
    MEMDB_TCAM_IFTA80_MEM7_0m,
    MEMDB_TCAM_IFTA80_MEM7_1m,
    L3_DEFIP_ALPM_LEVEL3_B0m,
    L3_DEFIP_ALPM_LEVEL3_B1m,
    L3_DEFIP_ALPM_LEVEL3_B2m,
    L3_DEFIP_ALPM_LEVEL3_B3m,
    L3_DEFIP_ALPM_LEVEL3_B4m,
    L3_DEFIP_ALPM_LEVEL3_B5m,
    L3_DEFIP_ALPM_LEVEL3_B6m,
    L3_DEFIP_ALPM_LEVEL3_B7m,
    L3_DEFIP_ALPM_LEVEL2_B0m,
    L3_DEFIP_ALPM_LEVEL2_B1m,
    L3_DEFIP_ALPM_LEVEL2_B2m,
    L3_DEFIP_ALPM_LEVEL2_B3m,
    L3_DEFIP_ALPM_LEVEL2_B4m,
    L3_DEFIP_ALPM_LEVEL2_B5m,
};

static const uint32_t bcm56880_a0_dna_4_6_6_bank_tile_id[100] = {
    EFTA10_I1T_00,
    EFTA10_I1T_00,
    EFTA10_I1T_01,
    EFTA10_I1T_01,
    EFTA10_I1T_02,
    EFTA10_I1T_02,
    EFTA10_I1T_03,
    EFTA20_I1T_00,
    EFTA20_I1T_00,
    EFTA20_I1T_01,
    EFTA20_I1T_01,
    EFTA20_I1T_02,
    EFTA20_I1T_02,
    EFTA20_I1T_03,
    EFTA20_I1T_03,
    EFTA20_I1T_04,
    EFTA20_I1T_04,
    EFTA20_I1T_05,
    EFTA20_I1T_05,
    EFTA30_E2T_00,
    EFTA30_E2T_00,
    IFTA10_I1T_00,
    IFTA10_I1T_00,
    IFTA120_I1T_02,
    IFTA120_I1T_03,
    IFTA130_I1T_00,
    IFTA130_I1T_00,
    IFTA130_I1T_01,
    IFTA130_I1T_01,
    IFTA130_I1T_02,
    IFTA130_I1T_02,
    IFTA130_I1T_03,
    IFTA130_I1T_03,
    IFTA140_I1T_00,
    IFTA140_I1T_00,
    IFTA20_I1T_00,
    IFTA30_E2T_00,
    IFTA30_E2T_00,
    IFTA40_E2T_00,
    IFTA40_E2T_00,
    IFTA40_E2T_01,
    IFTA40_E2T_01,
    IFTA40_T4T_00,
    IFTA40_T4T_00,
    IFTA40_T4T_00,
    IFTA40_T4T_00,
    IFTA40_T4T_01,
    IFTA40_T4T_01,
    IFTA40_T4T_01,
    IFTA40_T4T_01,
    IFTA50_I1T_00,
    IFTA50_I1T_00,
    IFTA50_I1T_01,
    IFTA50_I1T_01,
    IFTA60_I1T_00,
    IFTA60_I1T_00,
    IFTA60_I1T_01,
    IFTA60_I1T_01,
    IFTA60_I1T_02,
    IFTA60_I1T_02,
    IFTA70_I1T_00,
    IFTA70_I1T_01,
    IFTA80_E2T_00,
    IFTA80_E2T_00,
    IFTA80_E2T_01,
    IFTA80_E2T_01,
    IFTA80_E2T_02,
    IFTA80_E2T_02,
    IFTA80_E2T_03,
    IFTA80_E2T_03,
    IFTA80_T2T_00,
    IFTA80_T2T_00,
    IFTA80_T2T_00,
    IFTA80_T2T_00,
    IFTA80_T2T_00,
    IFTA80_T2T_00,
    IFTA80_T2T_00,
    IFTA80_T2T_00,
    IFTA80_T2T_01,
    IFTA80_T2T_01,
    IFTA80_T2T_01,
    IFTA80_T2T_01,
    IFTA80_T2T_01,
    IFTA80_T2T_01,
    IFTA80_T2T_01,
    IFTA80_T2T_01,
    IFTA90_E2T_00,
    IFTA90_E2T_00,
    IFTA90_E2T_01,
    IFTA90_E2T_01,
    IFTA90_E2T_02,
    IFTA90_E2T_02,
    IFTA90_E2T_03,
    IFTA90_E2T_03,
    UFT_MINI_TILE,
    UFT_MINI_TILE,
    UFT_MINI_TILE,
    UFT_MINI_TILE,
    UFT_MINI_TILE,
    UFT_MINI_TILE,
};


#endif /* BCM56880_A0_DNA_4_6_6_PTM_EM_H */
