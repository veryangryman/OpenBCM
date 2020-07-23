/***********************************************************************************
 *                                                                                 *
 * Copyright: (c) 2020 Broadcom.                                                   *
 * Broadcom Proprietary and Confidential. All rights reserved.                     *
 */

/**************************************************************************************
 **************************************************************************************
 *  File Name     :  blackhawk7_l8p2_field_access.h                                        *
 *  Created On    :  29/04/2013                                                       *
 *  Created By    :  Kiran Divakar                                                    *
 *  Description   :  Serdes IP Register and Field access APIs                         *
 *  Revision      :                                                               *
 */

/** @file blackhawk7_l8p2_field_access.h
 * Registers and field access
 */
#ifdef __cplusplus
extern "C" {
#endif

#ifndef BLACKHAWK7_L8P2_API_FIELD_ACCESS_H
#define BLACKHAWK7_L8P2_API_FIELD_ACCESS_H

#include "blackhawk7_l8p2_ipconfig.h"
#include "common/srds_api_err_code.h"
#include "blackhawk7_l8p2_dependencies.h"

/* Extract a bitfield from a register value. */
#define extract_field(reg_value,msb,lsb) (((uint16_t)(reg_value) & ((1 << ((msb) + 1)) - 1)) >> (lsb))

/* Extract a signed bitfield from a register value. */
#define extract_field_signed(reg_value,msb,lsb) \
    (((int16_t)( (reg_value) << (15-(msb)) )) >> (15-(msb)+(lsb)))


/*-------------------------------*/
/* Byte Write and Read Functions */
/*-------------------------------*/

/** Write a contiguous bit field in a register.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] addr 16-bit register address.
 * @param[in] mask 16-bit mask indicating the position of the field with bits of 1s.
 * @param[in] lsb  LSB of the field, the width of the field is implied by mask.
 * @param[in] valu8  8bit value to write into the field.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_acc_mwr_reg_u8(srds_access_t *sa__, uint16_t addr, uint16_t mask, uint8_t lsb, uint8_t valu8);

/** Read a register.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] addr 16-bit register address.
 * @param[out] err_code_p error code returned through pointer.
 * @return 16-bit value read from the register.
 */
uint16_t blackhawk7_l8p2_acc_rde_reg(srds_access_t *sa__, uint16_t addr, err_code_t *err_code_p);

/** Read a register field as an unsigned value.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] addr 16-bit register address.
 * @param[in] shift_left  Number of bits sign_bit should be moved to the left [shift_left  = (15 - msb)].
 * @param[in] shift_right Number of right shifts to move field to bit0        [shift_right = (15 - msb + lsb)].
 * @param[out] err_code_p error code returned through pointer.
 * @return 16-bit unsigned value read from the field.
 */
uint16_t blackhawk7_l8p2_acc_rde_field_u16(srds_access_t *sa__, uint16_t addr, uint8_t shift_left, uint8_t shift_right, err_code_t *err_code_p);

/** Read a register field as a signed value.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] addr 16-bit register address.
 * @param[in] shift_left  Number of bits sign_bit should be moved to the left [shift_left  = (15 - msb)].
 * @param[in] shift_right Number of right shifts with sign extension          [shift_right = (15 - msb + lsb)].
 * @param[out] err_code_p error code returned through pointer.
 * @return 16-bit signed value read from the field.
 */
int16_t  blackhawk7_l8p2_acc_rde_field_s16(srds_access_t *sa__, uint16_t addr, uint8_t shift_left, uint8_t shift_right, err_code_t *err_code_p);

/** Read a bit field as an unsigned value.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] addr 16-bit register address.
 * @param[in] shift_left  Number of bits sign_bit should be moved to the left [shift_left  = (15 - msb)].
 * @param[in] shift_right Number of right shifts to move field to bit0        [shift_right = (15 - msb + lsb)].
 * @param[out] err_code_p error code returned through pointer.
 * @return 8-bit unsigned value read from the field.
 */
uint8_t blackhawk7_l8p2_acc_rde_field_u8(srds_access_t *sa__, uint16_t addr, uint8_t shift_left, uint8_t shift_right, err_code_t *err_code_p);

/** Read a bit field as a signed value.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] addr 16-bit register address.
 * @param[in] shift_left  Number of bits sign bit should be moved to the left [shift_left  = (15 - msb)].
 * @param[in] shift_right Number of right shifts with sign extension          [shift_right = (15 - msb + lsb)].
 * @param[out] err_code_p error code returned through pointer.
 * @return 8-bit signed value read from the field.
 */
int8_t  blackhawk7_l8p2_acc_rde_field_s8(srds_access_t *sa__, uint16_t addr, uint8_t shift_left, uint8_t shift_right, err_code_t *err_code_p);


/*---------------------------------------------------------------------------------------------------*/
/* "Serdes ACCess" (_acc_) API dependency "wrapper" functions for blackhawk7_l8p2_dependencies.c          */
/* These trap unknown error codes from Dependency functions, and return a known API error code.      */
/*---------------------------------------------------------------------------------------------------*/

/** Read a register from the currently selected Serdes IP Lane.
 * NOTE: This should be used instead of the API Dedendency function blackhawk7_l8p2_pmd_rdt_reg().
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] addr 16-bit register address.
 * @param[out] valu16_p 16-bit unsigned value read from the register.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_acc_rdt_reg(srds_access_t *sa__, uint16_t addr, uint16_t *valu16_p);

/** Write to a register from the currently selected Serdes IP Lane.
 * NOTE: This should be used instead of the API Dedendency function blackhawk7_l8p2_pmd_wr_reg().
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] addr 16-bit register address of register to be written.
 * @param[in] valu16 16-bit unsigned value to be written to the register.
 * @return Error code generated by write function (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_acc_wr_reg(srds_access_t *sa__, uint16_t addr, uint16_t valu16);

/** Masked Register Write to the currently selected Serdes IP core/lane.
 * NOTE: This should be used instead of the API Dedendency function blackhawk7_l8p2_pmd_mwr_reg().
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] addr 16-bit address of register to be written.
 * @param[in] mask 16-bit mask indicating the position of the field with bits of 1s.
 * @param[in] lsb  LSB of the field.
 * @param[in] valu16  16-bit value to be written.
 * @return Error code generated by write function (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_acc_mwr_reg(srds_access_t *sa__, uint16_t addr, uint16_t mask, uint8_t lsb, uint16_t valu16);


/*---------------------------------------------------------------------------------------------------*/
/* Additional "Serdes ACCess" (_acc_) API dependency wrapper functions for blackhawk7_l8p2_dependencies.c */
/* If the function does not return an error code, the wrapper is here for naming consistency.        */
/*---------------------------------------------------------------------------------------------------*/

/** Write to a PRAM location for the currently selected Serdes IP Core.
 *  The address is auto-incrementing, per the PRAM interface specification.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] val Value to be written.
 * @return Error code generated by write function (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_acc_wr_pram(srds_access_t *sa__, uint8_t val);

/** Delay the execution of the code for atleast specified amount of time in nanoseconds.
 * This function is used ONLY for delays less than 1 microsecond, non-zero error code may be returned otherwise.
 * The user can implement this as an empty function if their register access latency exceeds 1 microsecond.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] delay_ns Delay in nanoseconds.
 * @return Error code generated by delay function (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_acc_delay_ns(srds_access_t *sa__, uint16_t delay_ns);

/** Delay the execution of the code for atleast specified amount of time in microseconds.
 * For longer delays, accuracy is required. When requested delay is > 100ms, the implemented delay is assumed
 * to be < 10% bigger than requested.
 * This function is used ONLY for delays greater than or equal to 1 microsecond.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] delay_us Delay in microseconds.
 * @return Error code generated by delay function (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_acc_delay_us(srds_access_t *sa__, uint32_t delay_us);

/** Delay the execution of the code for atleast specified amount of time in milliseconds.
 * For longer delays, accuracy is required. When requested delay is > 100ms, the implemented delay is assumed
 * to be < 10% bigger than requested.
 * This function is used ONLY for delays greater than or equal to 1 millisecond.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] delay_ms Delay in milliseconds.
 * @return Error code generated by delay function (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_acc_delay_ms(srds_access_t *sa__, uint32_t delay_ms);

/** Return the address of current selected Serdes IP Core.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return the IP level address of the current core.
 */
uint8_t blackhawk7_l8p2_acc_get_core(srds_access_t *sa__);

/** Return the logical address of current selected Serdes IP lane.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return the IP level address of the current lane. 0 to N-1, for an N lane IP.
 */
uint8_t blackhawk7_l8p2_acc_get_lane(srds_access_t *sa__);

#define blackhawk7_l8p2_acc_get_physical_lane blackhawk7_l8p2_acc_get_lane

/** Set the logical address of current selected Serdes IP lane.  Used in diagnostic
 * and core-level management functions.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] lane_index is the lane index.
 * @return Any error code generated during execution; ERR_CODE NONE otherwise.
 */
err_code_t blackhawk7_l8p2_acc_set_lane(srds_access_t *sa__, uint8_t lane_index);

#define blackhawk7_l8p2_acc_set_physical_lane blackhawk7_l8p2_acc_set_lane

/** Return the address of current selected Serdes IP PLL.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return the IP level address of the current PLL. 0 to N-1, for an N-PLL IP.
 */
uint8_t blackhawk7_l8p2_acc_get_pll_idx(srds_access_t *sa__);

/** Set the address of current selected Serdes IP PLL. Its purpose is to select which
 * PLL's registers is accessed when accessing AMS_PLL_COM, CORE_PLL_COM, & PLL_CAL_COM.
 * This is a selection similar to selecting lane registers.
 * Used in diagnostic and core-level management functions.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] pll_index is the PLL index.
 * @return Any error code generated during execution; ERR_CODE NONE otherwise.
 */
err_code_t blackhawk7_l8p2_acc_set_pll_idx(srds_access_t *sa__, uint8_t pll_index);

/** Return the index of current selected Serdes IP micro.
 * NOTE: The micro_idx is selected using same bits as PLL selection in AER or PMI address.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return the IP level index of the current micro. 0 to N-1, for an N-micro IP.
 */
uint8_t blackhawk7_l8p2_acc_get_micro_idx(srds_access_t *sa__);

/** Set the index of current selected Serdes IP micro. Its purpose is to select which
 * micro's registers is accessed when accessing MICRO_E_COM.This is a selection similar to
 * selecting lane registers.
 * Used in diagnostic and core-level management functions.
 * NOTE: The micro_idx is selected using same bits as PLL selection in AER or PMI address.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] micro_index is the micro index.
 * @return Any error code generated during execution; ERR_CODE NONE otherwise.
 */
err_code_t blackhawk7_l8p2_acc_set_micro_idx(srds_access_t *sa__, uint8_t micro_index);

#if defined(SERDES_EXTERNAL_INFO_TABLE_EN)
/** Returns address of blackhawk7_l8p2 info table stored in upper level software.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return Returns a pointer to the blackhawk7_l8p2 info table.
 */
srds_info_t *blackhawk7_l8p2_acc_get_info_table_address(srds_access_t *sa__);
#endif

#endif /* _API_FIELD_ACCESS_H_ */
#ifdef __cplusplus
}
#endif
