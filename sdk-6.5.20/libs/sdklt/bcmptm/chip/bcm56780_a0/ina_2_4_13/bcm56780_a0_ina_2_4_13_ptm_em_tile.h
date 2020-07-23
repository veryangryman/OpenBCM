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
#ifndef BCM56780_A0_INA_2_4_13_PTM_EM_TILE_H
#define BCM56780_A0_INA_2_4_13_PTM_EM_TILE_H

typedef enum bcm56780_a0_ina_2_4_13_em_group_e {
    EFTA10_I1T_00_MODE0_GROUP0 = 0,
    EFTA10_I1T_01_MODE0_GROUP0 = 1,
    EFTA10_I1T_01_MODE1_GROUP0 = 2,
    EFTA10_I1T_02_MODE0_GROUP0 = 3,
    EFTA10_I1T_03_MODE0_GROUP0 = 4,
    EFTA20_I1T_00_MODE0_GROUP0 = 5,
    EFTA20_I1T_00_MODE1_GROUP0 = 6,
    EFTA20_I1T_01_MODE0_GROUP0 = 7,
    EFTA20_I1T_02_MODE0_GROUP0 = 8,
    EFTA20_I1T_02_MODE1_GROUP0 = 9,
    EFTA20_I1T_03_MODE0_GROUP0 = 10,
    EFTA20_I1T_03_MODE1_GROUP0 = 11,
    EFTA20_I1T_04_MODE0_GROUP0 = 12,
    EFTA20_I1T_05_MODE0_GROUP0 = 13,
    EFTA20_I1T_05_MODE1_GROUP0 = 14,
    EFTA30_E2T_00_MODE0_GROUP0 = 15,
    EFTA30_E2T_00_MODE1_GROUP0 = 16,
    IFTA130_I1T_00_MODE0_GROUP0 = 17,
    IFTA130_I1T_01_MODE0_GROUP0 = 18,
    IFTA130_I1T_01_MODE1_GROUP0 = 19,
    IFTA130_I1T_02_MODE0_GROUP0 = 20,
    IFTA130_I1T_03_MODE0_GROUP0 = 21,
    IFTA130_I1T_03_MODE1_GROUP0 = 22,
    IFTA30_E2T_00_MODE0_GROUP0 = 23,
    IFTA40_E2T_00_MODE0_GROUP0 = 24,
    IFTA40_E2T_00_MODE1_GROUP0 = 25,
    IFTA40_E2T_01_MODE0_GROUP0 = 26,
    IFTA40_T4T_00_MODE0_GROUP0 = 27,
    IFTA40_T4T_00_MODE0_GROUP1 = 28,
    IFTA40_T4T_00_MODE1_GROUP0 = 29,
    IFTA40_T4T_01_MODE0_GROUP0 = 30,
    IFTA40_T4T_01_MODE1_GROUP0 = 31,
    IFTA40_T4T_01_MODE1_GROUP1 = 32,
    IFTA80_E2T_00_MODE0_GROUP0 = 33,
    IFTA80_E2T_00_MODE0_GROUP1 = 34,
    IFTA80_E2T_00_MODE1_GROUP0 = 35,
    IFTA80_E2T_00_MODE2_GROUP0 = 36,
    IFTA80_E2T_00_MODE3_GROUP0 = 37,
    IFTA80_E2T_01_MODE2_GROUP0 = 38,
    IFTA80_E2T_01_MODE3_GROUP0 = 39,
    IFTA80_E2T_01_MODE4_GROUP0 = 40,
    IFTA80_E2T_01_MODE5_GROUP0 = 41,
    IFTA80_E2T_01_MODE5_GROUP1 = 42,
    IFTA80_E2T_02_MODE0_GROUP0 = 43,
    IFTA80_E2T_02_MODE1_GROUP0 = 44,
    IFTA80_E2T_02_MODE2_GROUP0 = 45,
    IFTA80_E2T_02_MODE5_GROUP0 = 46,
    IFTA80_E2T_02_MODE5_GROUP1 = 47,
    IFTA80_E2T_03_MODE0_GROUP0 = 48,
    IFTA80_E2T_03_MODE1_GROUP0 = 49,
    IFTA80_E2T_03_MODE2_GROUP0 = 50,
    IFTA80_E2T_03_MODE5_GROUP0 = 51,
    IFTA80_E2T_03_MODE5_GROUP1 = 52,
    IFTA80_T2T_00_MODE0_GROUP0 = 53,
    IFTA80_T2T_00_MODE0_GROUP1 = 54,
    IFTA80_T2T_00_MODE0_GROUP2 = 55,
    IFTA80_T2T_00_MODE1_GROUP0 = 56,
    IFTA80_T2T_00_MODE2_GROUP0 = 57,
    IFTA80_T2T_00_MODE2_GROUP1 = 58,
    IFTA80_T2T_00_MODE2_GROUP2 = 59,
    IFTA80_T2T_00_MODE2_GROUP3 = 60,
    IFTA80_T2T_00_MODE3_GROUP0 = 61,
    IFTA80_T2T_00_MODE3_GROUP1 = 62,
    IFTA80_T2T_00_MODE3_GROUP2 = 63,
    IFTA80_T2T_00_MODE3_GROUP3 = 64,
    IFTA80_T2T_00_MODE4_GROUP0 = 65,
    IFTA80_T2T_00_MODE4_GROUP1 = 66,
    IFTA80_T2T_00_MODE4_GROUP2 = 67,
    IFTA80_T2T_00_MODE4_GROUP3 = 68,
    IFTA80_T2T_00_MODE5_GROUP0 = 69,
    IFTA80_T2T_00_MODE5_GROUP1 = 70,
    IFTA80_T2T_00_MODE5_GROUP2 = 71,
    IFTA80_T2T_00_MODE5_GROUP3 = 72,
    IFTA80_T2T_00_MODE6_GROUP0 = 73,
    IFTA80_T2T_00_MODE6_GROUP1 = 74,
    IFTA80_T2T_00_MODE6_GROUP2 = 75,
    IFTA80_T2T_00_MODE6_GROUP3 = 76,
    IFTA80_T2T_00_MODE6_GROUP4 = 77,
    IFTA80_T2T_00_MODE7_GROUP0 = 78,
    IFTA80_T2T_00_MODE7_GROUP1 = 79,
    IFTA80_T2T_00_MODE7_GROUP2 = 80,
    IFTA80_T2T_00_MODE8_GROUP0 = 81,
    IFTA80_T2T_01_MODE0_GROUP0 = 82,
    IFTA80_T2T_01_MODE0_GROUP1 = 83,
    IFTA80_T2T_01_MODE0_GROUP2 = 84,
    IFTA80_T2T_01_MODE1_GROUP0 = 85,
    IFTA80_T2T_01_MODE2_GROUP0 = 86,
    IFTA80_T2T_01_MODE2_GROUP1 = 87,
    IFTA80_T2T_01_MODE2_GROUP2 = 88,
    IFTA80_T2T_01_MODE2_GROUP3 = 89,
    IFTA80_T2T_01_MODE3_GROUP0 = 90,
    IFTA80_T2T_01_MODE3_GROUP1 = 91,
    IFTA80_T2T_01_MODE3_GROUP2 = 92,
    IFTA80_T2T_01_MODE3_GROUP3 = 93,
    IFTA80_T2T_01_MODE4_GROUP0 = 94,
    IFTA80_T2T_01_MODE4_GROUP1 = 95,
    IFTA80_T2T_01_MODE4_GROUP2 = 96,
    IFTA80_T2T_01_MODE4_GROUP3 = 97,
    IFTA80_T2T_01_MODE5_GROUP0 = 98,
    IFTA80_T2T_01_MODE5_GROUP1 = 99,
    IFTA80_T2T_01_MODE5_GROUP2 = 100,
    IFTA80_T2T_01_MODE5_GROUP3 = 101,
    IFTA80_T2T_01_MODE6_GROUP0 = 102,
    IFTA80_T2T_01_MODE6_GROUP1 = 103,
    IFTA80_T2T_01_MODE6_GROUP2 = 104,
    IFTA80_T2T_01_MODE6_GROUP3 = 105,
    IFTA80_T2T_01_MODE6_GROUP4 = 106,
    IFTA80_T2T_01_MODE7_GROUP0 = 107,
    IFTA80_T2T_01_MODE7_GROUP1 = 108,
    IFTA80_T2T_01_MODE7_GROUP2 = 109,
    IFTA80_T2T_01_MODE8_GROUP0 = 110,
    IFTA90_E2T_00_MODE0_GROUP0 = 111,
    IFTA90_E2T_00_MODE0_GROUP1 = 112,
    IFTA90_E2T_00_MODE1_GROUP0 = 113,
    IFTA90_E2T_00_MODE1_GROUP1 = 114,
    IFTA90_E2T_00_MODE10_GROUP0 = 115,
    IFTA90_E2T_00_MODE10_GROUP1 = 116,
    IFTA90_E2T_00_MODE10_GROUP2 = 117,
    IFTA90_E2T_00_MODE10_GROUP3 = 118,
    IFTA90_E2T_00_MODE10_GROUP4 = 119,
    IFTA90_E2T_00_MODE11_GROUP0 = 120,
    IFTA90_E2T_00_MODE11_GROUP1 = 121,
    IFTA90_E2T_00_MODE11_GROUP2 = 122,
    IFTA90_E2T_00_MODE11_GROUP3 = 123,
    IFTA90_E2T_00_MODE11_GROUP4 = 124,
    IFTA90_E2T_00_MODE12_GROUP0 = 125,
    IFTA90_E2T_00_MODE12_GROUP1 = 126,
    IFTA90_E2T_00_MODE12_GROUP2 = 127,
    IFTA90_E2T_00_MODE12_GROUP3 = 128,
    IFTA90_E2T_00_MODE12_GROUP4 = 129,
    IFTA90_E2T_00_MODE12_GROUP5 = 130,
    IFTA90_E2T_00_MODE13_GROUP0 = 131,
    IFTA90_E2T_00_MODE13_GROUP1 = 132,
    IFTA90_E2T_00_MODE14_GROUP0 = 133,
    IFTA90_E2T_00_MODE14_GROUP1 = 134,
    IFTA90_E2T_00_MODE14_GROUP2 = 135,
    IFTA90_E2T_00_MODE14_GROUP3 = 136,
    IFTA90_E2T_00_MODE14_GROUP4 = 137,
    IFTA90_E2T_00_MODE14_GROUP5 = 138,
    IFTA90_E2T_00_MODE2_GROUP0 = 139,
    IFTA90_E2T_00_MODE2_GROUP1 = 140,
    IFTA90_E2T_00_MODE2_GROUP2 = 141,
    IFTA90_E2T_00_MODE2_GROUP3 = 142,
    IFTA90_E2T_00_MODE3_GROUP0 = 143,
    IFTA90_E2T_00_MODE3_GROUP1 = 144,
    IFTA90_E2T_00_MODE3_GROUP2 = 145,
    IFTA90_E2T_00_MODE3_GROUP3 = 146,
    IFTA90_E2T_00_MODE4_GROUP0 = 147,
    IFTA90_E2T_00_MODE5_GROUP0 = 148,
    IFTA90_E2T_00_MODE5_GROUP1 = 149,
    IFTA90_E2T_00_MODE5_GROUP2 = 150,
    IFTA90_E2T_00_MODE5_GROUP3 = 151,
    IFTA90_E2T_00_MODE6_GROUP0 = 152,
    IFTA90_E2T_00_MODE6_GROUP1 = 153,
    IFTA90_E2T_00_MODE6_GROUP2 = 154,
    IFTA90_E2T_00_MODE6_GROUP3 = 155,
    IFTA90_E2T_00_MODE7_GROUP0 = 156,
    IFTA90_E2T_00_MODE7_GROUP1 = 157,
    IFTA90_E2T_00_MODE7_GROUP2 = 158,
    IFTA90_E2T_00_MODE7_GROUP3 = 159,
    IFTA90_E2T_00_MODE7_GROUP4 = 160,
    IFTA90_E2T_00_MODE8_GROUP0 = 161,
    IFTA90_E2T_00_MODE8_GROUP1 = 162,
    IFTA90_E2T_00_MODE8_GROUP2 = 163,
    IFTA90_E2T_00_MODE8_GROUP3 = 164,
    IFTA90_E2T_00_MODE8_GROUP4 = 165,
    IFTA90_E2T_01_MODE0_GROUP0 = 166,
    IFTA90_E2T_01_MODE0_GROUP1 = 167,
    IFTA90_E2T_01_MODE1_GROUP0 = 168,
    IFTA90_E2T_01_MODE1_GROUP1 = 169,
    IFTA90_E2T_01_MODE10_GROUP0 = 170,
    IFTA90_E2T_01_MODE10_GROUP1 = 171,
    IFTA90_E2T_01_MODE10_GROUP2 = 172,
    IFTA90_E2T_01_MODE10_GROUP3 = 173,
    IFTA90_E2T_01_MODE10_GROUP4 = 174,
    IFTA90_E2T_01_MODE11_GROUP0 = 175,
    IFTA90_E2T_01_MODE11_GROUP1 = 176,
    IFTA90_E2T_01_MODE11_GROUP2 = 177,
    IFTA90_E2T_01_MODE11_GROUP3 = 178,
    IFTA90_E2T_01_MODE11_GROUP4 = 179,
    IFTA90_E2T_01_MODE12_GROUP0 = 180,
    IFTA90_E2T_01_MODE12_GROUP1 = 181,
    IFTA90_E2T_01_MODE12_GROUP2 = 182,
    IFTA90_E2T_01_MODE12_GROUP3 = 183,
    IFTA90_E2T_01_MODE12_GROUP4 = 184,
    IFTA90_E2T_01_MODE12_GROUP5 = 185,
    IFTA90_E2T_01_MODE13_GROUP0 = 186,
    IFTA90_E2T_01_MODE13_GROUP1 = 187,
    IFTA90_E2T_01_MODE14_GROUP0 = 188,
    IFTA90_E2T_01_MODE14_GROUP1 = 189,
    IFTA90_E2T_01_MODE14_GROUP2 = 190,
    IFTA90_E2T_01_MODE14_GROUP3 = 191,
    IFTA90_E2T_01_MODE14_GROUP4 = 192,
    IFTA90_E2T_01_MODE14_GROUP5 = 193,
    IFTA90_E2T_01_MODE2_GROUP0 = 194,
    IFTA90_E2T_01_MODE2_GROUP1 = 195,
    IFTA90_E2T_01_MODE2_GROUP2 = 196,
    IFTA90_E2T_01_MODE2_GROUP3 = 197,
    IFTA90_E2T_01_MODE3_GROUP0 = 198,
    IFTA90_E2T_01_MODE3_GROUP1 = 199,
    IFTA90_E2T_01_MODE3_GROUP2 = 200,
    IFTA90_E2T_01_MODE3_GROUP3 = 201,
    IFTA90_E2T_01_MODE4_GROUP0 = 202,
    IFTA90_E2T_01_MODE5_GROUP0 = 203,
    IFTA90_E2T_01_MODE5_GROUP1 = 204,
    IFTA90_E2T_01_MODE5_GROUP2 = 205,
    IFTA90_E2T_01_MODE5_GROUP3 = 206,
    IFTA90_E2T_01_MODE6_GROUP0 = 207,
    IFTA90_E2T_01_MODE6_GROUP1 = 208,
    IFTA90_E2T_01_MODE6_GROUP2 = 209,
    IFTA90_E2T_01_MODE6_GROUP3 = 210,
    IFTA90_E2T_01_MODE7_GROUP0 = 211,
    IFTA90_E2T_01_MODE7_GROUP1 = 212,
    IFTA90_E2T_01_MODE7_GROUP2 = 213,
    IFTA90_E2T_01_MODE7_GROUP3 = 214,
    IFTA90_E2T_01_MODE7_GROUP4 = 215,
    IFTA90_E2T_01_MODE8_GROUP0 = 216,
    IFTA90_E2T_01_MODE8_GROUP1 = 217,
    IFTA90_E2T_01_MODE8_GROUP2 = 218,
    IFTA90_E2T_01_MODE8_GROUP3 = 219,
    IFTA90_E2T_01_MODE8_GROUP4 = 220,
    IFTA90_E2T_02_MODE0_GROUP0 = 221,
    IFTA90_E2T_02_MODE0_GROUP1 = 222,
    IFTA90_E2T_02_MODE0_GROUP2 = 223,
    IFTA90_E2T_02_MODE0_GROUP3 = 224,
    IFTA90_E2T_02_MODE1_GROUP0 = 225,
    IFTA90_E2T_02_MODE1_GROUP1 = 226,
    IFTA90_E2T_02_MODE1_GROUP2 = 227,
    IFTA90_E2T_02_MODE1_GROUP3 = 228,
    IFTA90_E2T_02_MODE2_GROUP0 = 229,
    IFTA90_E2T_02_MODE2_GROUP1 = 230,
    IFTA90_E2T_02_MODE2_GROUP2 = 231,
    IFTA90_E2T_02_MODE2_GROUP3 = 232,
    IFTA90_E2T_03_MODE0_GROUP0 = 233,
    IFTA90_E2T_03_MODE0_GROUP1 = 234,
    IFTA90_E2T_03_MODE0_GROUP2 = 235,
    IFTA90_E2T_03_MODE0_GROUP3 = 236,
    IFTA90_E2T_03_MODE1_GROUP0 = 237,
    IFTA90_E2T_03_MODE1_GROUP1 = 238,
    IFTA90_E2T_03_MODE1_GROUP2 = 239,
    IFTA90_E2T_03_MODE1_GROUP3 = 240,
    IFTA90_E2T_03_MODE2_GROUP0 = 241,
    IFTA90_E2T_03_MODE2_GROUP1 = 242,
    IFTA90_E2T_03_MODE2_GROUP2 = 243,
    IFTA90_E2T_03_MODE2_GROUP3 = 244,
    UFT_MINI_TILE_MODE0_GROUP0 = 245,
    UFT_MTOP_ALPM_LEVEL1_MODE0_GROUP0 = 246,
    UFT_MTOP_ALPM_LEVEL1_MODE0_GROUP1 = 247,
    UFT_MTOP_ALPM_LEVEL1_MODE0_GROUP2 = 248,
    UFT_MTOP_ALPM_LEVEL1_MODE0_GROUP3 = 249,
    UFT_MTOP_ALPM_LEVEL2_MODE0_GROUP0 = 250,
    INVALID_GROUP = 251,
} bcm56780_a0_ina_2_4_13_em_group_t;

typedef enum bcm56780_a0_ina_2_4_13_tile_mode_e {
    EFTA10_I1T_00_MODE0 = 0,
    EFTA10_I1T_01_MODE0 = 1,
    EFTA10_I1T_01_MODE1 = 2,
    EFTA10_I1T_02_MODE0 = 3,
    EFTA10_I1T_03_MODE0 = 4,
    EFTA20_I1T_00_MODE0 = 5,
    EFTA20_I1T_00_MODE1 = 6,
    EFTA20_I1T_01_MODE0 = 7,
    EFTA20_I1T_02_MODE0 = 8,
    EFTA20_I1T_02_MODE1 = 9,
    EFTA20_I1T_03_MODE0 = 10,
    EFTA20_I1T_03_MODE1 = 11,
    EFTA20_I1T_04_MODE0 = 12,
    EFTA20_I1T_05_MODE0 = 13,
    EFTA20_I1T_05_MODE1 = 14,
    EFTA30_E2T_00_MODE0 = 15,
    EFTA30_E2T_00_MODE1 = 16,
    IFTA130_I1T_00_MODE0 = 17,
    IFTA130_I1T_01_MODE0 = 18,
    IFTA130_I1T_01_MODE1 = 19,
    IFTA130_I1T_02_MODE0 = 20,
    IFTA130_I1T_03_MODE0 = 21,
    IFTA130_I1T_03_MODE1 = 22,
    IFTA30_E2T_00_MODE0 = 23,
    IFTA40_E2T_00_MODE0 = 24,
    IFTA40_E2T_00_MODE1 = 25,
    IFTA40_E2T_01_MODE0 = 26,
    IFTA40_T4T_00_MODE0 = 27,
    IFTA40_T4T_00_MODE1 = 28,
    IFTA40_T4T_01_MODE0 = 29,
    IFTA40_T4T_01_MODE1 = 30,
    IFTA80_E2T_00_MODE0 = 31,
    IFTA80_E2T_00_MODE1 = 32,
    IFTA80_E2T_00_MODE2 = 33,
    IFTA80_E2T_00_MODE3 = 34,
    IFTA80_E2T_01_MODE2 = 35,
    IFTA80_E2T_01_MODE3 = 36,
    IFTA80_E2T_01_MODE4 = 37,
    IFTA80_E2T_01_MODE5 = 38,
    IFTA80_E2T_02_MODE0 = 39,
    IFTA80_E2T_02_MODE1 = 40,
    IFTA80_E2T_02_MODE2 = 41,
    IFTA80_E2T_02_MODE5 = 42,
    IFTA80_E2T_03_MODE0 = 43,
    IFTA80_E2T_03_MODE1 = 44,
    IFTA80_E2T_03_MODE2 = 45,
    IFTA80_E2T_03_MODE5 = 46,
    IFTA80_T2T_00_MODE0 = 47,
    IFTA80_T2T_00_MODE1 = 48,
    IFTA80_T2T_00_MODE2 = 49,
    IFTA80_T2T_00_MODE3 = 50,
    IFTA80_T2T_00_MODE4 = 51,
    IFTA80_T2T_00_MODE5 = 52,
    IFTA80_T2T_00_MODE6 = 53,
    IFTA80_T2T_00_MODE7 = 54,
    IFTA80_T2T_00_MODE8 = 55,
    IFTA80_T2T_01_MODE0 = 56,
    IFTA80_T2T_01_MODE1 = 57,
    IFTA80_T2T_01_MODE2 = 58,
    IFTA80_T2T_01_MODE3 = 59,
    IFTA80_T2T_01_MODE4 = 60,
    IFTA80_T2T_01_MODE5 = 61,
    IFTA80_T2T_01_MODE6 = 62,
    IFTA80_T2T_01_MODE7 = 63,
    IFTA80_T2T_01_MODE8 = 64,
    IFTA90_E2T_00_MODE0 = 65,
    IFTA90_E2T_00_MODE1 = 66,
    IFTA90_E2T_00_MODE10 = 67,
    IFTA90_E2T_00_MODE11 = 68,
    IFTA90_E2T_00_MODE12 = 69,
    IFTA90_E2T_00_MODE13 = 70,
    IFTA90_E2T_00_MODE14 = 71,
    IFTA90_E2T_00_MODE2 = 72,
    IFTA90_E2T_00_MODE3 = 73,
    IFTA90_E2T_00_MODE4 = 74,
    IFTA90_E2T_00_MODE5 = 75,
    IFTA90_E2T_00_MODE6 = 76,
    IFTA90_E2T_00_MODE7 = 77,
    IFTA90_E2T_00_MODE8 = 78,
    IFTA90_E2T_01_MODE0 = 79,
    IFTA90_E2T_01_MODE1 = 80,
    IFTA90_E2T_01_MODE10 = 81,
    IFTA90_E2T_01_MODE11 = 82,
    IFTA90_E2T_01_MODE12 = 83,
    IFTA90_E2T_01_MODE13 = 84,
    IFTA90_E2T_01_MODE14 = 85,
    IFTA90_E2T_01_MODE2 = 86,
    IFTA90_E2T_01_MODE3 = 87,
    IFTA90_E2T_01_MODE4 = 88,
    IFTA90_E2T_01_MODE5 = 89,
    IFTA90_E2T_01_MODE6 = 90,
    IFTA90_E2T_01_MODE7 = 91,
    IFTA90_E2T_01_MODE8 = 92,
    IFTA90_E2T_02_MODE0 = 93,
    IFTA90_E2T_02_MODE1 = 94,
    IFTA90_E2T_02_MODE2 = 95,
    IFTA90_E2T_03_MODE0 = 96,
    IFTA90_E2T_03_MODE1 = 97,
    IFTA90_E2T_03_MODE2 = 98,
    UFT_MINI_TILE_MODE0 = 99,
    UFT_MTOP_ALPM_LEVEL1_MODE0 = 100,
    UFT_MTOP_ALPM_LEVEL2_MODE0 = 101,
    TILE_MODE_DISABLED = 102,
    INVALID = 103,
} bcm56780_a0_ina_2_4_13_tile_mode_t;

typedef enum bcm56780_a0_ina_2_4_13_bank_id_e {
    EFTA10_I1T_00_BANK0 = 0,
    EFTA10_I1T_01_BANK0 = 1,
    EFTA10_I1T_01_BANK1 = 2,
    EFTA10_I1T_02_BANK0 = 3,
    EFTA10_I1T_03_BANK0 = 4,
    EFTA20_I1T_00_BANK0 = 5,
    EFTA20_I1T_01_BANK0 = 6,
    EFTA20_I1T_02_BANK0 = 7,
    EFTA20_I1T_03_BANK0 = 8,
    EFTA20_I1T_04_BANK0 = 9,
    EFTA20_I1T_05_BANK0 = 10,
    EFTA30_E2T_00_BANK0 = 11,
    EFTA30_E2T_00_BANK1 = 12,
    IFTA130_I1T_00_BANK0 = 13,
    IFTA130_I1T_00_BANK1 = 14,
    IFTA130_I1T_01_BANK0 = 15,
    IFTA130_I1T_01_BANK1 = 16,
    IFTA130_I1T_02_BANK0 = 17,
    IFTA30_E2T_00_BANK0 = 18,
    IFTA30_E2T_00_BANK1 = 19,
    IFTA40_E2T_00_BANK0 = 20,
    IFTA40_E2T_00_BANK1 = 21,
    IFTA40_E2T_01_BANK0 = 22,
    IFTA40_E2T_01_BANK1 = 23,
    IFTA40_T4T_00_BANK0 = 24,
    IFTA40_T4T_00_BANK1 = 25,
    IFTA40_T4T_00_BANK2 = 26,
    IFTA40_T4T_00_BANK3 = 27,
    IFTA40_T4T_01_BANK0 = 28,
    IFTA40_T4T_01_BANK1 = 29,
    IFTA40_T4T_01_BANK2 = 30,
    IFTA40_T4T_01_BANK3 = 31,
    IFTA80_E2T_00_BANK0 = 32,
    IFTA80_E2T_00_BANK1 = 33,
    IFTA80_E2T_01_BANK0 = 34,
    IFTA80_E2T_01_BANK1 = 35,
    IFTA80_E2T_02_BANK0 = 36,
    IFTA80_E2T_02_BANK1 = 37,
    IFTA80_E2T_03_BANK0 = 38,
    IFTA80_E2T_03_BANK1 = 39,
    IFTA80_T2T_00_BANK0 = 40,
    IFTA80_T2T_00_BANK1 = 41,
    IFTA80_T2T_00_BANK2 = 42,
    IFTA80_T2T_00_BANK3 = 43,
    IFTA80_T2T_00_BANK4 = 44,
    IFTA80_T2T_00_BANK5 = 45,
    IFTA80_T2T_00_BANK6 = 46,
    IFTA80_T2T_00_BANK7 = 47,
    IFTA80_T2T_01_BANK0 = 48,
    IFTA80_T2T_01_BANK1 = 49,
    IFTA80_T2T_01_BANK2 = 50,
    IFTA80_T2T_01_BANK3 = 51,
    IFTA80_T2T_01_BANK4 = 52,
    IFTA80_T2T_01_BANK5 = 53,
    IFTA80_T2T_01_BANK6 = 54,
    IFTA80_T2T_01_BANK7 = 55,
    IFTA90_E2T_00_BANK0 = 56,
    IFTA90_E2T_00_BANK1 = 57,
    IFTA90_E2T_00_BANK2 = 58,
    IFTA90_E2T_00_BANK3 = 59,
    IFTA90_E2T_01_BANK0 = 60,
    IFTA90_E2T_01_BANK1 = 61,
    IFTA90_E2T_01_BANK2 = 62,
    IFTA90_E2T_01_BANK3 = 63,
    IFTA90_E2T_02_BANK0 = 64,
    IFTA90_E2T_02_BANK1 = 65,
    IFTA90_E2T_02_BANK2 = 66,
    IFTA90_E2T_02_BANK3 = 67,
    IFTA90_E2T_03_BANK0 = 68,
    IFTA90_E2T_03_BANK1 = 69,
    IFTA90_E2T_03_BANK2 = 70,
    IFTA90_E2T_03_BANK3 = 71,
    UFT_MINI_TILE_BANK0 = 72,
    UFT_MINI_TILE_BANK1 = 73,
    UFT_MINI_TILE_BANK2 = 74,
    UFT_MINI_TILE_BANK3 = 75,
    UFT_MINI_TILE_BANK4 = 76,
    UFT_MINI_TILE_BANK5 = 77,
    UFT_MTOP_ALPM_LEVEL1_BANK0 = 78,
    UFT_MTOP_ALPM_LEVEL1_BANK1 = 79,
    UFT_MTOP_ALPM_LEVEL1_BANK10 = 80,
    UFT_MTOP_ALPM_LEVEL1_BANK11 = 81,
    UFT_MTOP_ALPM_LEVEL1_BANK12 = 82,
    UFT_MTOP_ALPM_LEVEL1_BANK13 = 83,
    UFT_MTOP_ALPM_LEVEL1_BANK14 = 84,
    UFT_MTOP_ALPM_LEVEL1_BANK15 = 85,
    UFT_MTOP_ALPM_LEVEL1_BANK2 = 86,
    UFT_MTOP_ALPM_LEVEL1_BANK3 = 87,
    UFT_MTOP_ALPM_LEVEL1_BANK4 = 88,
    UFT_MTOP_ALPM_LEVEL1_BANK5 = 89,
    UFT_MTOP_ALPM_LEVEL1_BANK6 = 90,
    UFT_MTOP_ALPM_LEVEL1_BANK7 = 91,
    UFT_MTOP_ALPM_LEVEL1_BANK8 = 92,
    UFT_MTOP_ALPM_LEVEL1_BANK9 = 93,
    UFT_MTOP_ALPM_LEVEL2_BANK0 = 94,
    UFT_MTOP_ALPM_LEVEL2_BANK1 = 95,
    UFT_MTOP_ALPM_LEVEL2_BANK2 = 96,
    UFT_MTOP_ALPM_LEVEL2_BANK3 = 97,
    UFT_MTOP_ALPM_LEVEL2_BANK4 = 98,
    UFT_MTOP_ALPM_LEVEL2_BANK5 = 99,
    INVALID_BANK = 100,
} bcm56780_a0_ina_2_4_13_bank_id_t;

typedef enum bcm56780_a0_ina_2_4_13_tile_id_e {
    EFTA10_I1T_00 = 0,
    EFTA10_I1T_01 = 1,
    EFTA10_I1T_02 = 2,
    EFTA10_I1T_03 = 3,
    EFTA20_I1T_00 = 4,
    EFTA20_I1T_01 = 5,
    EFTA20_I1T_02 = 6,
    EFTA20_I1T_03 = 7,
    EFTA20_I1T_04 = 8,
    EFTA20_I1T_05 = 9,
    EFTA30_E2T_00 = 10,
    IFTA130_I1T_00 = 11,
    IFTA130_I1T_01 = 12,
    IFTA130_I1T_02 = 13,
    IFTA130_I1T_03 = 14,
    IFTA30_E2T_00 = 15,
    IFTA40_E2T_00 = 16,
    IFTA40_E2T_01 = 17,
    IFTA40_T4T_00 = 18,
    IFTA40_T4T_01 = 19,
    IFTA80_E2T_00 = 20,
    IFTA80_E2T_01 = 21,
    IFTA80_E2T_02 = 22,
    IFTA80_E2T_03 = 23,
    IFTA80_T2T_00 = 24,
    IFTA80_T2T_01 = 25,
    IFTA90_E2T_00 = 26,
    IFTA90_E2T_01 = 27,
    IFTA90_E2T_02 = 28,
    IFTA90_E2T_03 = 29,
    UFT_MINI_TILE = 30,
    UFT_MTOP_ALPM_LEVEL1 = 31,
    UFT_MTOP_ALPM_LEVEL2 = 32,
} bcm56780_a0_ina_2_4_13_tile_id_t;


#endif /* BCM56780_A0_INA_2_4_13_PTM_EM_TILE_H */
