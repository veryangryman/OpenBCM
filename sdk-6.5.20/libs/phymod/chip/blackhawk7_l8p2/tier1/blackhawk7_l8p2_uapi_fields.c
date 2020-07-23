
/***********************************************************************************
 *                                                                                 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

/***********************************************************************************
 ***********************************************************************************
 *                                                                                 *
 *  Revision      :                                                            *
 *                                                                                 *
 *  Description   :  This file contains Unified API jump tables                    *
 */

/* THIS FILE IS GENERATED USING AN AUTOMATED SCRIPT.DO NOT EDIT THIS FILE DIRECTLY! */

#include "blackhawk7_l8p2_uapi_fields.h"
#include "blackhawk7_l8p2_select_defns.h"
#include "blackhawk7_l8p2_internal.h"
#include "blackhawk7_l8p2_functions.h"

err_code_t blackhawk7_l8p2_wr_uapi_ams_pll_i_clkchnl_2(srds_access_t *sa__, uint8_t wr_val) {
    BLACKHAWK7_L8P2_UAPI_INIT
    err_code_t failcode = ERR_CODE_NONE;
    switch(BLACKHAWK7_L8P2_UAPI_SWITCH) {
        case(BLACKHAWK7_L8P2_UAPI_CASE0):
            failcode = blackhawk7_l8p2_acc_mwr_reg_u8(sa__, 0xd113, 0x3800, 11, wr_val);
            break;
        default:
            EFUN_PRINTF(("ERROR: Invalid BLACKHAWK7_L8P2_UAPI_SWITCH value of '%d' for blackhawk7_l8p2_wr_uapi_ams_pll_i_clkchnl_2(..)\n", BLACKHAWK7_L8P2_UAPI_SWITCH)); 
            failcode = ERR_CODE_INVALID_UAPI_CASE;
    }
    BLACKHAWK7_L8P2_UAPI_TERMINATE
    return failcode;
}

uint8_t blackhawk7_l8p2_rd_uapi_ams_pll_i_clkchnl_2(srds_access_t *sa__, err_code_t *err_code_p) {
    BLACKHAWK7_L8P2_UAPI_INIT
    uint8_t rd_val = 0;
    switch(BLACKHAWK7_L8P2_UAPI_SWITCH) {
        case(BLACKHAWK7_L8P2_UAPI_CASE0):
            rd_val = blackhawk7_l8p2_acc_rde_field_u8(sa__, 0xd113, 2, 13, err_code_p);
            break;
        default:
            *err_code_p = ERR_CODE_INVALID_UAPI_CASE;
            EFUN_PRINTF(("ERROR: Invalid BLACKHAWK7_L8P2_UAPI_SWITCH value of '%d' for blackhawk7_l8p2_rd_uapi_ams_pll_i_clkchnl_2(..)\n", BLACKHAWK7_L8P2_UAPI_SWITCH)); 
    }
    BLACKHAWK7_L8P2_UAPI_TERMINATE
    return rd_val;
}

err_code_t blackhawk7_l8p2_wr_uapi_ams_pll_swind_clkchnl_2(srds_access_t *sa__, uint8_t wr_val) {
    BLACKHAWK7_L8P2_UAPI_INIT
    err_code_t failcode = ERR_CODE_NONE;
    switch(BLACKHAWK7_L8P2_UAPI_SWITCH) {
        case(BLACKHAWK7_L8P2_UAPI_CASE0):
            failcode = blackhawk7_l8p2_acc_mwr_reg_u8(sa__, 0xd113, 0x0080, 7, wr_val);
            break;
        default:
            EFUN_PRINTF(("ERROR: Invalid BLACKHAWK7_L8P2_UAPI_SWITCH value of '%d' for blackhawk7_l8p2_wr_uapi_ams_pll_swind_clkchnl_2(..)\n", BLACKHAWK7_L8P2_UAPI_SWITCH)); 
            failcode = ERR_CODE_INVALID_UAPI_CASE;
    }
    BLACKHAWK7_L8P2_UAPI_TERMINATE
    return failcode;
}

uint8_t blackhawk7_l8p2_rd_uapi_ams_pll_swind_clkchnl_2(srds_access_t *sa__, err_code_t *err_code_p) {
    BLACKHAWK7_L8P2_UAPI_INIT
    uint8_t rd_val = 0;
    switch(BLACKHAWK7_L8P2_UAPI_SWITCH) {
        case(BLACKHAWK7_L8P2_UAPI_CASE0):
            rd_val = blackhawk7_l8p2_acc_rde_field_u8(sa__, 0xd113, 8, 15, err_code_p);
            break;
        default:
            *err_code_p = ERR_CODE_INVALID_UAPI_CASE;
            EFUN_PRINTF(("ERROR: Invalid BLACKHAWK7_L8P2_UAPI_SWITCH value of '%d' for blackhawk7_l8p2_rd_uapi_ams_pll_swind_clkchnl_2(..)\n", BLACKHAWK7_L8P2_UAPI_SWITCH)); 
    }
    BLACKHAWK7_L8P2_UAPI_TERMINATE
    return rd_val;
}

err_code_t blackhawk7_l8p2_wr_uapi_ams_rx_ibias_pibuf(srds_access_t *sa__, uint8_t wr_val) {
    BLACKHAWK7_L8P2_UAPI_INIT
    err_code_t failcode = ERR_CODE_NONE;
    switch(BLACKHAWK7_L8P2_UAPI_SWITCH) {
        case(BLACKHAWK7_L8P2_UAPI_CASE0):
            failcode = blackhawk7_l8p2_acc_mwr_reg_u8(sa__, 0xd0c9, 0x0070, 4, wr_val);
            break;
        case(BLACKHAWK7_L8P2_UAPI_CASE1):
            failcode = blackhawk7_l8p2_acc_mwr_reg_u8(sa__, 0xd0c9, 0x0030, 4, wr_val);
            break;
        default:
            EFUN_PRINTF(("ERROR: Invalid BLACKHAWK7_L8P2_UAPI_SWITCH value of '%d' for blackhawk7_l8p2_wr_uapi_ams_rx_ibias_pibuf(..)\n", BLACKHAWK7_L8P2_UAPI_SWITCH)); 
            failcode = ERR_CODE_INVALID_UAPI_CASE;
    }
    BLACKHAWK7_L8P2_UAPI_TERMINATE
    return failcode;
}

uint8_t blackhawk7_l8p2_rd_uapi_ams_rx_ibias_pibuf(srds_access_t *sa__, err_code_t *err_code_p) {
    BLACKHAWK7_L8P2_UAPI_INIT
    uint8_t rd_val = 0;
    switch(BLACKHAWK7_L8P2_UAPI_SWITCH) {
        case(BLACKHAWK7_L8P2_UAPI_CASE0):
            rd_val = blackhawk7_l8p2_acc_rde_field_u8(sa__, 0xd0c9, 9, 13, err_code_p);
            break;
        case(BLACKHAWK7_L8P2_UAPI_CASE1):
            rd_val = blackhawk7_l8p2_acc_rde_field_u8(sa__, 0xd0c9, 10, 14, err_code_p);
            break;
        default:
            *err_code_p = ERR_CODE_INVALID_UAPI_CASE;
            EFUN_PRINTF(("ERROR: Invalid BLACKHAWK7_L8P2_UAPI_SWITCH value of '%d' for blackhawk7_l8p2_rd_uapi_ams_rx_ibias_pibuf(..)\n", BLACKHAWK7_L8P2_UAPI_SWITCH)); 
    }
    BLACKHAWK7_L8P2_UAPI_TERMINATE
    return rd_val;
}

err_code_t blackhawk7_l8p2_wr_uapi_ams_pll_cap_clkchnl_1(srds_access_t *sa__, uint8_t wr_val) {
    BLACKHAWK7_L8P2_UAPI_INIT
    err_code_t failcode = ERR_CODE_NONE;
    switch(BLACKHAWK7_L8P2_UAPI_SWITCH) {
        case(BLACKHAWK7_L8P2_UAPI_CASE1):
            failcode = blackhawk7_l8p2_acc_mwr_reg_u8(sa__, 0xd113, 0x3800, 11, wr_val);
            break;
        default:
            EFUN_PRINTF(("ERROR: Invalid BLACKHAWK7_L8P2_UAPI_SWITCH value of '%d' for blackhawk7_l8p2_wr_uapi_ams_pll_cap_clkchnl_1(..)\n", BLACKHAWK7_L8P2_UAPI_SWITCH)); 
            failcode = ERR_CODE_INVALID_UAPI_CASE;
    }
    BLACKHAWK7_L8P2_UAPI_TERMINATE
    return failcode;
}

uint8_t blackhawk7_l8p2_rd_uapi_ams_pll_cap_clkchnl_1(srds_access_t *sa__, err_code_t *err_code_p) {
    BLACKHAWK7_L8P2_UAPI_INIT
    uint8_t rd_val = 0;
    switch(BLACKHAWK7_L8P2_UAPI_SWITCH) {
        case(BLACKHAWK7_L8P2_UAPI_CASE1):
            rd_val = blackhawk7_l8p2_acc_rde_field_u8(sa__, 0xd113, 2, 13, err_code_p);
            break;
        default:
            *err_code_p = ERR_CODE_INVALID_UAPI_CASE;
            EFUN_PRINTF(("ERROR: Invalid BLACKHAWK7_L8P2_UAPI_SWITCH value of '%d' for blackhawk7_l8p2_rd_uapi_ams_pll_cap_clkchnl_1(..)\n", BLACKHAWK7_L8P2_UAPI_SWITCH)); 
    }
    BLACKHAWK7_L8P2_UAPI_TERMINATE
    return rd_val;
}

err_code_t blackhawk7_l8p2_wr_uapi_ams_pll_cap_clkchnl_1_3(srds_access_t *sa__, uint8_t wr_val) {
    BLACKHAWK7_L8P2_UAPI_INIT
    err_code_t failcode = ERR_CODE_NONE;
    switch(BLACKHAWK7_L8P2_UAPI_SWITCH) {
        case(BLACKHAWK7_L8P2_UAPI_CASE1):
            failcode = blackhawk7_l8p2_acc_mwr_reg_u8(sa__, 0xd113, 0x0080, 7, wr_val);
            break;
        default:
            EFUN_PRINTF(("ERROR: Invalid BLACKHAWK7_L8P2_UAPI_SWITCH value of '%d' for blackhawk7_l8p2_wr_uapi_ams_pll_cap_clkchnl_1_3(..)\n", BLACKHAWK7_L8P2_UAPI_SWITCH)); 
            failcode = ERR_CODE_INVALID_UAPI_CASE;
    }
    BLACKHAWK7_L8P2_UAPI_TERMINATE
    return failcode;
}

uint8_t blackhawk7_l8p2_rd_uapi_ams_pll_cap_clkchnl_1_3(srds_access_t *sa__, err_code_t *err_code_p) {
    BLACKHAWK7_L8P2_UAPI_INIT
    uint8_t rd_val = 0;
    switch(BLACKHAWK7_L8P2_UAPI_SWITCH) {
        case(BLACKHAWK7_L8P2_UAPI_CASE1):
            rd_val = blackhawk7_l8p2_acc_rde_field_u8(sa__, 0xd113, 8, 15, err_code_p);
            break;
        default:
            *err_code_p = ERR_CODE_INVALID_UAPI_CASE;
            EFUN_PRINTF(("ERROR: Invalid BLACKHAWK7_L8P2_UAPI_SWITCH value of '%d' for blackhawk7_l8p2_rd_uapi_ams_pll_cap_clkchnl_1_3(..)\n", BLACKHAWK7_L8P2_UAPI_SWITCH)); 
    }
    BLACKHAWK7_L8P2_UAPI_TERMINATE
    return rd_val;
}

err_code_t blackhawk7_l8p2_wr_uapi_ams_rx_eq2_ctrl4(srds_access_t *sa__, uint8_t wr_val) {
    BLACKHAWK7_L8P2_UAPI_INIT
    err_code_t failcode = ERR_CODE_NONE;
    switch(BLACKHAWK7_L8P2_UAPI_SWITCH) {
        case(BLACKHAWK7_L8P2_UAPI_CASE1):
            failcode = blackhawk7_l8p2_acc_mwr_reg_u8(sa__, 0xd0c7, 0x0001, 0, wr_val);
            break;
        default:
            EFUN_PRINTF(("ERROR: Invalid BLACKHAWK7_L8P2_UAPI_SWITCH value of '%d' for blackhawk7_l8p2_wr_uapi_ams_rx_eq2_ctrl4(..)\n", BLACKHAWK7_L8P2_UAPI_SWITCH)); 
            failcode = ERR_CODE_INVALID_UAPI_CASE;
    }
    BLACKHAWK7_L8P2_UAPI_TERMINATE
    return failcode;
}

uint8_t blackhawk7_l8p2_rd_uapi_ams_rx_eq2_ctrl4(srds_access_t *sa__, err_code_t *err_code_p) {
    BLACKHAWK7_L8P2_UAPI_INIT
    uint8_t rd_val = 0;
    switch(BLACKHAWK7_L8P2_UAPI_SWITCH) {
        case(BLACKHAWK7_L8P2_UAPI_CASE1):
            rd_val = blackhawk7_l8p2_acc_rde_field_u8(sa__, 0xd0c7, 15, 15, err_code_p);
            break;
        default:
            *err_code_p = ERR_CODE_INVALID_UAPI_CASE;
            EFUN_PRINTF(("ERROR: Invalid BLACKHAWK7_L8P2_UAPI_SWITCH value of '%d' for blackhawk7_l8p2_rd_uapi_ams_rx_eq2_ctrl4(..)\n", BLACKHAWK7_L8P2_UAPI_SWITCH)); 
    }
    BLACKHAWK7_L8P2_UAPI_TERMINATE
    return rd_val;
}

