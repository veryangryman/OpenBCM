/***********************************************************************************
 *                                                                                 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

/*****************************************************************************************
 *****************************************************************************************
 *                                                                                       *
 *  Revision      :   *
 *                                                                                       *
 *  Description   :  Functions used internally and available in debug shell only         *
 */

/** @file blackhawk7_v1l8p1_debug_functions.h
 * Functions used internally and available in debug shell only
 */
#ifdef __cplusplus
extern "C" {
#endif

#ifndef BLACKHAWK7_V1L8P1_DEBUG_FUNCTIONS_H
#define BLACKHAWK7_V1L8P1_DEBUG_FUNCTIONS_H

#include "blackhawk7_v1l8p1_ipconfig.h"
#include "common/srds_api_enum.h"
#include "common/srds_api_err_code.h"
#include "common/srds_api_uc_common.h"
#include "blackhawk7_v1l8p1_dependencies.h"
#include "blackhawk7_v1l8p1_types.h"
#include "blackhawk7_v1l8p1_usr_includes.h"

/** Print triage info
 * One function to collect all the triage info in case of errors.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] err_code error code ex. ERR_CODE_POLLING_TIMEOUT.
 * @param[in] print_header A flag to control header print.
 * @param[in] print_data A flag to control data print.
 * @param[in] line __LINE__.
 */
void blackhawk7_v1l8p1_INTERNAL_print_triage_info(srds_access_t *sa__, err_code_t err_code, uint8_t print_header, uint8_t print_data, uint16_t line);

/** Isolate Control pins.
 * Can be used for debug to avoid any interference from inputs coming through pins.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] enable Isolate pins enable (1 = Isolate pins; 0 = Pins not isolated).
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_isolate_ctrl_pins(srds_access_t *sa__, uint8_t enable);

/** Isolate Lane Control pins.
 * Can be used for debug to avoid any interference from inputs coming through pins.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] enable Isolate pins enable (1 = Isolate pins; 0 = Pins not isolated).
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_isolate_lane_ctrl_pins(srds_access_t *sa__, uint8_t enable);

/** Isolate Lane Control TX pins.
 * Can be used for debug to avoid any interference from inputs coming through pins.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] enable Isolate pins enable (1 = Isolate pins; 0 = Pins not isolated).
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_isolate_lane_ctrl_tx_pins(srds_access_t *sa__, uint8_t enable);

/** Isolate Lane Control RX pins.
 * Can be used for debug to avoid any interference from inputs coming through pins.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] enable Isolate pins enable (1 = Isolate pins; 0 = Pins not isolated).
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_isolate_lane_ctrl_rx_pins(srds_access_t *sa__, uint8_t enable);

/** Isolate Core Control pins.
 * Can be used for debug to avoid any interference from inputs coming through pins.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] enable Isolate pins enable (1 = Isolate pins; 0 = Pins not isolated).
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_isolate_core_ctrl_pins(srds_access_t *sa__, uint8_t enable);

/*-----------------------*/
/*  Stop/Resume uC Lane  */
/*-----------------------*/
/** Stop/Resume Micro operations on a Lane (Graceful Stop).
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] enable Enable micro lane stop (1 = Stop Micro opetarions on lane; 0 = Resume Micro operations on lane).
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_stop_uc_lane(srds_access_t *sa__, uint8_t enable);

/** Status of whether Micro is stopped on a lane.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[out] uc_lane_stopped Micro lane stopped status returned by API.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_stop_uc_lane_status(srds_access_t *sa__, uint8_t *uc_lane_stopped);

/** Write to lane user control disable startup function uC RAM variable.
 *  Note: This function should be used only during configuration under dp_reset.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] set_val Value to be written into lane user control disable startup function RAM variable.
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_set_usr_ctrl_disable_startup(srds_access_t *sa__, struct blackhawk7_v1l8p1_usr_ctrl_disable_functions_st set_val);

/** Write to lane user control disable startup dfe function uC RAM variable.
 *  Note: This function should be used only during configuration under dp_reset.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] set_val Value to be written into lane user control disable startup dfe function RAM variable.
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_set_usr_ctrl_disable_startup_dfe(srds_access_t *sa__, struct blackhawk7_v1l8p1_usr_ctrl_disable_dfe_functions_st set_val);

/** Write to lane user control disable steady-state function uC RAM variable.
 *  Note: This function should be used only during configuration under dp_reset.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] set_val Value to be written into lane user control disable  steady-state function RAM variable.
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_set_usr_ctrl_disable_steady_state(srds_access_t *sa__, struct blackhawk7_v1l8p1_usr_ctrl_disable_functions_st set_val);

/** Write to lane user control disable steady-state dfe function uC RAM variable.
 *  Note: This function should be used only during configuration under dp_reset.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] set_val Value to be written into lane user control disable  steady-state dfe function RAM variable.
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_set_usr_ctrl_disable_steady_state_dfe(srds_access_t *sa__, struct blackhawk7_v1l8p1_usr_ctrl_disable_dfe_functions_st set_val);

/** Read value of lane user control disable startup uC RAM variable.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[out] get_val Value read from lane user control disable startup RAM variable.
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_get_usr_ctrl_disable_startup(srds_access_t *sa__, struct blackhawk7_v1l8p1_usr_ctrl_disable_functions_st *get_val);

/** Read value of lane user control disable startup dfe uC RAM variable.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[out] get_val Value read from lane user control disable startup dfe RAM variable.
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_get_usr_ctrl_disable_startup_dfe(srds_access_t *sa__, struct blackhawk7_v1l8p1_usr_ctrl_disable_dfe_functions_st *get_val);

/** Read value of lane user control disable steady-state uC RAM variable.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[out] get_val Value read from lane user control disable steady-state RAM variable.
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_get_usr_ctrl_disable_steady_state(srds_access_t *sa__, struct blackhawk7_v1l8p1_usr_ctrl_disable_functions_st *get_val);

/** Read value of lane user control disable steady-state dfe uC RAM variable.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[out] get_val Value read from lane user control disable steady-state dfe RAM variable.
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_get_usr_ctrl_disable_steady_state_dfe(srds_access_t *sa__, struct blackhawk7_v1l8p1_usr_ctrl_disable_dfe_functions_st *get_val);

/*-------------------------------------------*/
/*  Registers and Core uC RAM Variable Dump  */
/*-------------------------------------------*/
#define SRDS_DUMP_BUF_SIZE      (250)
/** Display values of both Core level and (currently selected) Lane level Registers.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] core is current core number.
 * @param[in] lane is the current lane number.
 * @param[out] reg_buffer is a buffer passed through to device access functions. If buffer is NULL,
 *             register dump contents are printed instead of copied to buffer.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_reg_dump(srds_access_t *sa__, uint8_t core, uint8_t lane, char reg_buffer[][SRDS_DUMP_BUF_SIZE]);

/** Display values of all Core uC RAM Variables (Core RAM Variable Dump).
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] core is current core number.
 * @param[out] ram_buffer is a buffer passed through to device access functions. If buffer is NULL,
 *             core uC RAM dump contents are printed instead of copied to buffer.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_uc_core_var_dump(srds_access_t *sa__, uint8_t core, char ram_buffer[][SRDS_DUMP_BUF_SIZE]);

/*-------------------------------------------*/
/*  Micro uC RAM Variable Dump               */
/*-------------------------------------------*/
/** Display values of all Micro uC RAM Variables (Micro RAM Variable Dump).
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] core is current core number.
 * @param[in] lane is the current lane number.
 * @param[out] ram_buffer is a buffer passed through to device access functions. If buffer is NULL,
 *             micro uC RAM dump contents are printed instead of copied to buffer.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_uc_micro_var_dump(srds_access_t *sa__, uint8_t core, uint8_t lane, char ram_buffer[][SRDS_DUMP_BUF_SIZE]);
/*-----------------------------*/
/*  uC RAM Lane Variable Dump  */
/*-----------------------------*/
/** Display values of all Lane uC RAM Variables (Lane RAM Variable Dump).
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] core is current core number.
 * @param[in] lane is the current lane number.
 * @param[out] ram_buffer is a buffer passed through to device access functions. If buffer is NULL,
 *             lane uC RAM dump contents are printed instead of copied to buffer.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_uc_lane_var_dump(srds_access_t *sa__, uint8_t core, uint8_t lane, char ram_buffer[][SRDS_DUMP_BUF_SIZE]);


/*--------------------------*/
/*  TX_PI Jitter Generation */
/*--------------------------*/

/** Generate TX_PI Sinusoidal or Spread-Spectrum (SSC) jitter.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] enable Enable/Disable jitter generation (1 = Enable; 0 = Disable).
 * @param[in] freq_override_val Fixed Frequency Override value (-8192 to + 8192).
 * @param[in] jit_type Jitter generation mode.
 * @param[in] tx_pi_jit_freq_idx Jitter generation frequency index (0 to 63) [see spec for more details].
 * @param[in] tx_pi_jit_amp Jitter generation amplification factor (0 to 63) [max value of this register depends on tx_pi_jit_freq_idx and freq_override values].
 * @return Error Code generated by invalid TX_PI settings (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_tx_pi_jitt_gen(srds_access_t *sa__, uint8_t enable, int16_t freq_override_val, enum srds_tx_pi_freq_jit_gen_enum jit_type, uint8_t tx_pi_jit_freq_idx, uint8_t tx_pi_jit_amp);


/*-------------*/
/*  Event Log  */
/*-------------*/
/** Get Event Log from uC.
 * Dump uC events from core memory.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_read_event_log(srds_access_t *sa__);

/** Write to usr_ctrl_lane_event_log_level uC RAM variable.
 *  Note: This function should be used only during configuration under dp_reset.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] lane_event_log_level Value to be written into usr_ctrl_lane_event_log_level RAM variable.
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_set_usr_ctrl_lane_event_log_level(srds_access_t *sa__, uint8_t lane_event_log_level);

/** Read value of usr_ctrl_lane_event_log_level uC RAM variable.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[out] lane_event_log_level Value read from usr_ctrl_lane_event_log_level RAM variable.
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_get_usr_ctrl_lane_event_log_level(srds_access_t *sa__, uint8_t *lane_event_log_level);

/** Write to usr_ctrl_core_event_log_level uC RAM variable.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] core_event_log_level Value to be written into the usr_ctrl_core_event_log_level RAM variable.
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_set_usr_ctrl_core_event_log_level(srds_access_t *sa__, uint8_t core_event_log_level);

/** Read value of usr_ctrl_core_event_log_level uC RAM variable.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[out] core_event_log_level Value read from usr_ctrl_core_event_log_level RAM variable.
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_get_usr_ctrl_core_event_log_level(srds_access_t *sa__, uint8_t *core_event_log_level);

/*------------------*/
/*  Full PMD State  */
/*------------------*/

/** Reads current pmd lane status and populates the provided structure of type #blackhawk7_v1l8p1_detailed_lane_status_st.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[out] lane_st All (not including PRBS-related info) detailed lane info read and populated into this structure.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_log_full_pmd_state_noPRBS (srds_access_t *sa__, struct blackhawk7_v1l8p1_detailed_lane_status_st *lane_st);

/** Reads current pmd lane status and populates the provided structure of type #blackhawk7_v1l8p1_detailed_lane_status_st.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[out] lane_st All detailed (including PRBS-related info) lane info read and populated into this structure.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_log_full_pmd_state (srds_access_t *sa__, struct blackhawk7_v1l8p1_detailed_lane_status_st *lane_st);

/** Displays the lane status stored in the input struct of type #blackhawk7_v1l8p1_detailed_lane_status_st.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] lane_st  Lane struct to be displayed.
 * @param[in] num_lanes Number of lanes to be displayed.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_disp_full_pmd_state (srds_access_t *sa__, struct blackhawk7_v1l8p1_detailed_lane_status_st const * const lane_st, uint8_t num_lanes);

/** Reads rx dac4ck lms, phase, and data values
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[out] lms LMS value read from rx dac4ck lms register field.
 * @param[out] phase phase value read from rx dac4ck phase register field.
 * @param[out] data value read from rx dac4ck data register field.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_get_dac4ck(srds_access_t *sa__, int8_t *lms, int8_t *phase, int8_t *data);

#define BLACKHAWK7_V1L8P1_DAC4CK_MASK 0x10

#ifdef EXCLUDE_FOR_SWIG
extern const char* e2s_rx_pam_mode_enum[3];
#endif

/*-------------------------------*/
/*  Internal Loopback Functions  */
/*-------------------------------*/

/** Enable/Disable Internal Loopback (ILB).
 * After disabling ILB, a lane soft reset is toggled and user should re-configure
 * the lane for any new tests.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] enable Enable Internal Loopback (1 = Enable ILB; 0 = Disable ILB).
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_internal_lpbk(srds_access_t *sa__, uint8_t enable);

/*------------------------------*/
/*  Digital Loopback Functions  */
/*------------------------------*/

/** Enable/Disable Digital Loopback.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] enable Enable Digital Loopback (1 = Enable dig_lpbk; 0 = Disable dig_lpbk).
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_dig_lpbk(srds_access_t *sa__, uint8_t enable);


/*------------------------------------------*/
/*  PAM eye margin enable/disable function  */
/*------------------------------------------*/

/** Enable/Disable eye margin estimation in PAM mode.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] enable Enable PAM eye margin estimation (1 = Enable; 0 = Disable).
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_set_pam_eye_margin_usr_ctrl(srds_access_t *sa__, uint8_t enable);

/*---------------------------------------------*/
/*  Self clearing register bits test function  */
/*---------------------------------------------*/

/** Test if the chip shows self clearing register bit timing issue.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[out] fail_count is number of failures observed by micro - returned by API.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_v1l8p1_get_sc_reg_bit_test_fail_count(srds_access_t *sa__, uint16_t *fail_count);


#endif
#ifdef __cplusplus
}
#endif
