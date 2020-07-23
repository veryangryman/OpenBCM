/*****************************************************************************************
 *****************************************************************************************
 *                                                                                       *
 *  Revision      :   *
 *                                                                                       *
 *  Description   :  Functions used internally and available in debug shell only         *
 *                                                                                       *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.                                                                 *
 *  No portions of this material may be reproduced in any form without                   *
 *  the written permission of:                                                           *
 *      Broadcom Corporation                                                             *
 *      5300 California Avenue                                                           *
 *      Irvine, CA  92617                                                                *
 *                                                                                       *
 *  All information contained in this document is Broadcom Corporation                   *
 *  company private proprietary, and trade secret.                                       *
 */

/** @file blackhawk_tsc_debug_functions.h
 * Functions used internally and available in debug shell only
 */

#ifndef BLACKHAWK_TSC_DEBUG_FUNCTIONS_H
#define BLACKHAWK_TSC_DEBUG_FUNCTIONS_H

#include "blackhawk_tsc_ipconfig.h"
#include "common/srds_api_enum.h"
#include "common/srds_api_err_code.h"
#include "common/srds_api_uc_common.h"
#include "blackhawk_tsc_dependencies.h"
#include "blackhawk_tsc_types.h"
#include "blackhawk_tsc_usr_includes.h"

/** Print triage info
 * One function to collect all the triage info in case of errors.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param err_code error code ex. ERR_CODE_POLLING_TIMEOUT
 * @param print_header A flag to control header print.
 * @param print_data A flag to control data print
 * @param line __LINE__
 */
void blackhawk_tsc_INTERNAL_print_triage_info(srds_access_t *sa__, err_code_t err_code, uint8_t print_header, uint8_t print_data, uint16_t line);

/** Isolate Control pins.
 * Can be used for debug to avoid any interference from inputs coming through pins.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param enable Isolate pins enable (1 = Isolate pins; 0 = Pins not isolated)
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_isolate_ctrl_pins(srds_access_t *sa__, uint8_t enable);

/** Isolate Lane Control pins.
 * Can be used for debug to avoid any interference from inputs coming through pins.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param enable Isolate pins enable (1 = Isolate pins; 0 = Pins not isolated)
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_isolate_lane_ctrl_pins(srds_access_t *sa__, uint8_t enable);

/** Isolate Core Control pins.
 * Can be used for debug to avoid any interference from inputs coming through pins.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param enable Isolate pins enable (1 = Isolate pins; 0 = Pins not isolated)
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_isolate_core_ctrl_pins(srds_access_t *sa__, uint8_t enable);

/*-----------------------*/
/*  Stop/Resume uC Lane  */
/*-----------------------*/
/** Stop/Resume Micro operations on a Lane (Graceful Stop).
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param enable Enable micro lane stop (1 = Stop Micro opetarions on lane; 0 = Resume Micro operations on lane)
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_stop_uc_lane(srds_access_t *sa__, uint8_t enable);

/** Status of whether Micro is stopped on a lane.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param *uc_lane_stopped Micro lane stopped status returned by API
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_stop_uc_lane_status(srds_access_t *sa__, uint8_t *uc_lane_stopped);

/** Write to lane user control disable startup function uC RAM variable.
 *  Note: This function should be used only during configuration under dp_reset.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param set_val Value to be written into lane user control disable startup function RAM variable
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_set_usr_ctrl_disable_startup(srds_access_t *sa__, struct blackhawk_tsc_usr_ctrl_disable_functions_st set_val);

/** Write to lane user control disable startup dfe function uC RAM variable.
 *  Note: This function should be used only during configuration under dp_reset.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param set_val Value to be written into lane user control disable startup dfe function RAM variable
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_set_usr_ctrl_disable_startup_dfe(srds_access_t *sa__, struct blackhawk_tsc_usr_ctrl_disable_dfe_functions_st set_val);

/** Write to lane user control disable steady-state function uC RAM variable.
 *  Note: This function should be used only during configuration under dp_reset.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param set_val Value to be written into lane user control disable  steady-state function RAM variable
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_set_usr_ctrl_disable_steady_state(srds_access_t *sa__, struct blackhawk_tsc_usr_ctrl_disable_functions_st set_val);

/** Write to lane user control disable steady-state dfe function uC RAM variable.
 *  Note: This function should be used only during configuration under dp_reset.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param set_val Value to be written into lane user control disable  steady-state dfe function RAM variable
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_set_usr_ctrl_disable_steady_state_dfe(srds_access_t *sa__, struct blackhawk_tsc_usr_ctrl_disable_dfe_functions_st set_val);

/** Read value of lane user control disable startup uC RAM variable.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param *get_val Value read from lane user control disable startup RAM variable
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_get_usr_ctrl_disable_startup(srds_access_t *sa__, struct blackhawk_tsc_usr_ctrl_disable_functions_st *get_val);

/** Read value of lane user control disable startup dfe uC RAM variable.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param *get_val Value read from lane user control disable startup dfe RAM variable
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_get_usr_ctrl_disable_startup_dfe(srds_access_t *sa__, struct blackhawk_tsc_usr_ctrl_disable_dfe_functions_st *get_val);

/** Read value of lane user control disable steady-state uC RAM variable.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param *get_val Value read from lane user control disable steady-state RAM variable
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_get_usr_ctrl_disable_steady_state(srds_access_t *sa__, struct blackhawk_tsc_usr_ctrl_disable_functions_st *get_val);

/** Read value of lane user control disable steady-state dfe uC RAM variable.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param *get_val Value read from lane user control disable steady-state dfe RAM variable
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_get_usr_ctrl_disable_steady_state_dfe(srds_access_t *sa__, struct blackhawk_tsc_usr_ctrl_disable_dfe_functions_st *get_val);

/*-------------------------------------------*/
/*  Registers and Core uC RAM Variable Dump  */
/*-------------------------------------------*/
/** Display values of both Core level and (currently selected) Lane level Registers.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param core is current core number.
 * @param lane is the current lane number.
 * @param reg_buffer is a buffer passed through to device access functions.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_reg_dump(srds_access_t *sa__, uint8_t core, uint8_t lane, char reg_buffer[][250]);

/** Display values of all Core uC RAM Variables (Core RAM Variable Dump).
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param core is current core number.
 * @param ram_buffer is a buffer passed through to device access functions.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_uc_core_var_dump(srds_access_t *sa__, uint8_t core, char ram_buffer[][250]);

/*-------------------------------------------*/
/*  Micro uC RAM Variable Dump               */
/*-------------------------------------------*/
/** Display values of all Micro uC RAM Variables (Micro RAM Variable Dump).
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param core is current core number.
 * @param lane is the current lane number.
 * @param ram_buffer is a buffer passed through to device access functions.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_uc_micro_var_dump(srds_access_t *sa__, uint8_t core, uint8_t lane, char ram_buffer[][250]);

/*-----------------------------*/
/*  uC RAM Lane Variable Dump  */
/*-----------------------------*/
/** Display values of all Lane uC RAM Variables (Lane RAM Variable Dump).
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param core is current core number.
 * @param lane is the current lane number.
 * @param ram_buffer is a buffer passed through to device access functions.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_uc_lane_var_dump(srds_access_t *sa__, uint8_t core, uint8_t lane, char ram_buffer[][250]);


/*--------------------------*/
/*  TX_PI Jitter Generation */
/*--------------------------*/

/** Generate TX_PI Sinusoidal or Spread-Spectrum (SSC) jitter.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param enable Enable/Disable jitter generation (1 = Enable; 0 = Disable)
 * @param freq_override_val Fixed Frequency Override value (-8192 to + 8192)
 * @param jit_type Jitter generation mode
 * @param tx_pi_jit_freq_idx Jitter generation frequency index (0 to 63) [see spec for more details]
 * @param tx_pi_jit_amp Jitter generation amplification factor (0 to 63) [max value of this register depends on tx_pi_jit_freq_idx and freq_override values]
 * @return Error Code generated by invalid TX_PI settings (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_tx_pi_jitt_gen(srds_access_t *sa__, uint8_t enable, int16_t freq_override_val, enum srds_tx_pi_freq_jit_gen_enum jit_type, uint8_t tx_pi_jit_freq_idx, uint8_t tx_pi_jit_amp);


/*-------------*/
/*  Event Log  */
/*-------------*/
/** Get Event Log from uC.
 * Dump uC events from core memory.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_read_event_log(srds_access_t *sa__);

/** Write to usr_ctrl_lane_event_log_level uC RAM variable.
 *  Note: This function should be used only during configuration under dp_reset.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param lane_event_log_level Value to be written into usr_ctrl_lane_event_log_level RAM variable
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_set_usr_ctrl_lane_event_log_level(srds_access_t *sa__, uint8_t lane_event_log_level);

/** Read value of usr_ctrl_lane_event_log_level uC RAM variable.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param *lane_event_log_level Value read from usr_ctrl_lane_event_log_level RAM variable
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_get_usr_ctrl_lane_event_log_level(srds_access_t *sa__, uint8_t *lane_event_log_level);

/** Write to usr_ctrl_core_event_log_level uC RAM variable.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param core_event_log_level Value to be written into the usr_ctrl_core_event_log_level RAM variable
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_set_usr_ctrl_core_event_log_level(srds_access_t *sa__, uint8_t core_event_log_level);

/** Read value of usr_ctrl_core_event_log_level uC RAM variable.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param *core_event_log_level Value read from usr_ctrl_core_event_log_level RAM variable
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_get_usr_ctrl_core_event_log_level(srds_access_t *sa__, uint8_t *core_event_log_level);

    extern const char* e2s_rx_pam_mode_enum[3];

/*------------------*/
/*  Full PMD State  */
/*------------------*/

/** Reads current pmd lane status and populates the provided structure of type #blackhawk_tsc_detailed_lane_status_st.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param *lane_st All (not including PRBS-related info) detailed lane info read and populated into this structure
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_log_full_pmd_state_noPRBS (srds_access_t *sa__, struct blackhawk_tsc_detailed_lane_status_st *lane_st);

/** Reads current pmd lane status and populates the provided structure of type #blackhawk_tsc_detailed_lane_status_st.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param *lane_st All detailed (including PRBS-related info) lane info read and populated into this structure
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_log_full_pmd_state (srds_access_t *sa__, struct blackhawk_tsc_detailed_lane_status_st *lane_st);

/** Displays the lane status stored in the input struct of type #blackhawk_tsc_detailed_lane_status_st.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param *lane_st  Lane struct to be diplayed
 * @param num_lanes Number of lanes
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_disp_full_pmd_state (srds_access_t *sa__, struct blackhawk_tsc_detailed_lane_status_st const * const lane_st, uint8_t num_lanes);

/*------------------------------*/
/*  Digital Loopback Functions  */
/*------------------------------*/

/** Enable/Disable Digital Loopback.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param enable Enable Digital Loopback (1 = Enable dig_lpbk; 0 = Disable dig_lpbk)
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_dig_lpbk(srds_access_t *sa__, uint8_t enable);


/*------------------------------------------*/
/*  PAM eye margin enable/disable function  */
/*------------------------------------------*/

/** Enable/Disable eye margin estimation in PAM mode.
 * @param sa__ is an opaque state vector passed through to device access functions.
 * @param enable Enable Digital Loopback (1 = Enable dig_lpbk; 0 = Disable dig_lpbk)
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk_tsc_set_pam_eye_margin_usr_ctrl(srds_access_t *sa__, uint8_t enable);

#endif
