/***********************************************************************************
 *                                                                                 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

/***********************************************************************************
 ***********************************************************************************
 *                                                                                 *
 *  Revision    :       *
 *                                                                                 *
 *  Description :  Diagnostic functions provided to IP User                        *
 */

/** @file blackhawk7_l8p2_diag.h
 * Diagnostic functions provided to IP User
 */

#ifdef __cplusplus
extern "C" {
#endif

#ifndef BLACKHAWK7_L8P2_API_DIAG_H
#define BLACKHAWK7_L8P2_API_DIAG_H

#include "blackhawk7_l8p2_internal.h"
#include "blackhawk7_l8p2_ipconfig.h"
#include "common/srds_api_enum.h"
#include "common/srds_api_err_code.h"
#include "common/srds_api_uc_common.h"
#include "blackhawk7_l8p2_dependencies.h"
#include "blackhawk7_l8p2_usr_includes.h"

#ifndef DIAG_VERBOSE
#define DIAG_VERBOSE (0)
#endif

#define NUM_LANES_MAX    (8)
#define DB_STOPPED       (0x40)
#define DIAG_POLL_TIMEOUT (400)

/** Eyescan Options Struct */
struct blackhawk7_l8p2_eyescan_options_st {
   uint32_t linerate_in_khz;
   uint16_t timeout_in_milliseconds;
   int8_t horz_max;
   int8_t horz_min;
   int8_t hstep;
   int8_t vert_max;
   int8_t vert_min;
   int8_t vstep;
   int8_t mode;
};


/*----------------------------------------*/
/*  Display Core Config and Debug Status  */
/*----------------------------------------*/
/** Display Core configurations (RAM config variables and config register fields).
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_display_core_config(srds_access_t *sa__);

/** Display current Core state. Read and displays core status variables and fields.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_display_core_state(srds_access_t *sa__);

/** Column definition header for blackhawk7_l8p2_display_core_state() API output.
 * To be called before blackhawk7_l8p2_display_core_state_line() API.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_display_core_state_hdr(srds_access_t *sa__);

/** Display current Core state in single line. Read and displays core status variables and fields.
 * Call blackhawk7_l8p2_display_core_state_hdr() API before and blackhawk7_l8p2_display_core_state_legend() after
 * calling this API to get a formatted core state display with legend.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_display_core_state_line(srds_access_t *sa__);

/** Detailed description of each column in blackhawk7_l8p2_display_core_state_line() API output.
 * To be called after blackhawk7_l8p2_display_core_state_line() API to display the legends.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
err_code_t blackhawk7_l8p2_display_core_state_legend(srds_access_t *sa__);

/*! @brief This function logs an API event with the user provided event_id and 2 byte supplemental info.
 *  @public
 * @param[in] sa__  an structure pointer variable of type srds_access_t.
 * @param[in] event_id   ID of the event.
 * @param[in] data1      First byte of supplemental data if required.
 * @param[in] data2      Second byte of supplemental data if required.
 *
 * @b Example
 * @code
        srds_access_t *sa__ ;
        uint8_t event_id;
        uint8_t data1;
        uint8_t data2;
        supp_info = 2; data1 = 5; data2 = 6;
        blackhawk7_l8p2_log_api_event(sa__, event_id, data1, data2);

 * @endcode
 *
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_log_api_event(srds_access_t *sa__,uint8_t event_id, uint8_t data1, uint8_t data2);
/*-----------------------*/
/*  Temperature forcing  */
/*-----------------------*/

/** Forces die temperature in degrees Celsius (as integer).
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] die_temp  Die temperature in degrees Celsius. (-255 will disable a previously forced value).
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_force_die_temperature (srds_access_t *sa__, int16_t die_temp);

/*-----------------------------------------------*/
/*  Envelope functions requested by Switch team  */
/*-----------------------------------------------*/

/** Display current Core and Lane state.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_display_state (srds_access_t *sa__);

/** Display current Core and Lane config.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return Error Code, if generated (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_display_config (srds_access_t *sa__);

/**************************************************/
/* LANE Based APIs - Required to be used per Lane */
/**************************************************/

/** Uses timestamps in uCode to check if heartbeat timer is programmed correctly 
 *  for the COMCLK frequency it is running at.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return Error Code if timestamp check fails (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_test_uc_timestamp(srds_access_t *sa__);

/*-------------------*/
/* Display Eye Scan  */
/*-------------------*/

#define EYE_SCAN_DISPLAY_SRIPE_SIZE 64

/** Displays Passive Eye Scan from -0.5 UI to 0.5UI to BER 1e-7.
 *  Function uses uC to acquire data.
 *  It also retrieves the data and displays it in ASCII-art style, where number N corresponds to 1e-N.
 *
 * This function retrieves the data from uC in horizontal stripe fashion.
 *
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return Error Code during data collection (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_display_eye_scan(srds_access_t *sa__);


/** Start uC controller eye scan Function.
 * Eye scan function provides a stripe of data at a time either vertical or horizontal.
 * This function only initiates the processor actions. User must use blackhawk7_l8p2_read_eye_scan_stripe() function
 * to get the data from uC.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] direction specifies either EYE_SCAN_VERTICAL or EYE_SCAN_HORIZ striping.
 * @return Error Code during data collection (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_meas_eye_scan_start(srds_access_t *sa__, uint8_t direction);

/** Read a Stripe of eye scan data from uC.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[out] buffer must be of size 64.
 * @param[out] status returns a status word.             \n
 *    bit 15 - indicates the ey scan is complete.        \n
 *    bit 14 - indicates uC is slower than read access.  \n
 *    bit 13 - indicates uC is faster than read access.  \n
 *    bit 12-8 - reserved.                               \n
 *    bit 7-0 - indicates amount of data in the uC buffer.
 *
 * @return Error Code during data collection (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_read_eye_scan_stripe(srds_access_t *sa__, uint32_t *buffer, uint16_t *status);

/** Display Stripe of eye scan data to stdout and log.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] y is the vertical step 124 to -124.
 * @param[in] buffer must be of size 64.
 * @return Error Code during data collection (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_display_eye_scan_stripe(srds_access_t *sa__, int16_t y, uint32_t *buffer);

/** Display Eye scan header to stdout and log.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] i indicates the number of headers to display for parallel eye scan.
 * @return Error Code during data collection (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_display_eye_scan_header(srds_access_t *sa__, int8_t i);

/** Display Eye scan footer to stdout and log.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] i indicates the number of footers to display for parallel eye scan.
 * @return Error Code during data collection (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_display_eye_scan_footer(srds_access_t *sa__, int8_t i);

/** Check status of eye scan operation in uC.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[out] status returns a status word.              \n
 *    bit  15  - indicates the eye scan is complete.      \n
 *    bit  14  - indicates uC is slower than read access. \n
 *    bit  13  - indicates uC is faster than read access. \n
 *    bit 12:8 - reserved.                                \n
 *    bit  7:0 - indicates amount of data in the uC buffer.
 *
 * @return Error Code during data collection (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_read_eye_scan_status(srds_access_t *sa__, uint16_t *status);

/** Restores uC after running diagnostic eye scans.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return Error Code during data collection (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_meas_eye_scan_done(srds_access_t *sa__);

/** Start a uC controlled BER scan function.
 * This will tell the uC to make a number of BER measurements at different offsets
 * and provide data back to API as a block of data. Several types of tests can be
 * made including Passive (which can be run on any data pattern and does not affect
 * datapath) or Intrusive (which can be run only when PRBS pattern is being used
 * and will cause errors to occur).  Intrusive test has a limited vertical range!
 *
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] ber_scan_mode configures the type of test (use #srds_diag_ber_mode_enum).         \n
 * \verbatim
  bit  7  - reserved.
  bit  6  - 1 = BER FAST scan mode (reduce minimum sample time from 0.1sec to 0.02sec.
  bit 5:4 - used for vertical intrusive test only (not recommended).
              00 = move 1 slicer in direction bit0 (slicer selected for max range).
              11 = move both, independent direction(not depend on bit0) legacy 40nm mode.
              01 = move only odd(depends on bit0).
              10 = move only even(depends on bit0).
  bit  3  - 1 = set passive scan to narrow vertical range(150mV); 0 = full range(250mV).
  bit  2  - 1 = intrusive eye scan; 0 = passive.
  bit  1  - 1 = scan horizontal direction; 0 = scan vertical.
  bit  0  - 1 = scan negative portion of eye to center; 1 = scan positive  \endverbatim.
 * @param[in] timer_control sets the total test time in units of ~1.31 seconds.
 * @param[in] max_error_control sets the error threshold for test in units of 16.(4=64 error threshold).
 * @return Error Code during data collection (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_start_ber_scan_test(srds_access_t *sa__, uint8_t ber_scan_mode, uint8_t timer_control, uint8_t max_error_control);

/** Reads the BER scan data from uC after test has completed.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[out] errors is pointer to 32 element array of uint32 which will contain error data.
 * @param[out] timer_values is pointer to 32 element array of uint32 which will contain time data.
 * @param[out] cnt returns the number of samples.
 * @param[in] timeout value in milliseconds for polling data from uC (typically 2000).
 * @return Error Code during data collection (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_read_ber_scan_data(srds_access_t *sa__, uint32_t *errors, uint32_t *timer_values, uint8_t *cnt, uint32_t timeout);

/** Extrapolate BER and display margin information.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] rate specifies the data rate in Hz.
 * @param[in] ber_scan_mode the type of test used to take the data(use #srds_diag_ber_mode_enum).
 * @param[in] total_errs is pointer to 32 element array of uint32 containing the error data.
 * @param[in] total_time is pointer to 32 element array of uint32 containing the time data.
 * @param[in] max_offset is the maximum offset setting which is present in data (usually 31).
 * @return Error Code during data collection (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_display_ber_scan_data (srds_access_t *sa__, USR_DOUBLE rate, uint8_t ber_scan_mode, uint32_t *total_errs, uint32_t *total_time, uint8_t max_offset);

/** Example eye margin projection API.
 * This is an example function which uses the following API's to measure and display BER margin projections.
 * blackhawk7_l8p2_start_ber_scan_test(), blackhawk7_l8p2_read_ber_scan_data(), blackhawk7_l8p2_display_ber_scan_data().
 *
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] rate specifies the data rate in Hz.
 * @param[in] ber_scan_mode the type of test used to take the data(use #srds_diag_ber_mode_enum).
 * @param[in] timer_control sets the total test time in units of ~1.31 seconds.
 * @param[in] max_error_control sets the error threshold for test in units of 16.(4=64 errors).
 * @return Error Code during data collection (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_eye_margin_proj(srds_access_t *sa__, USR_DOUBLE rate, uint8_t ber_scan_mode, uint8_t timer_control, uint8_t max_error_control);
err_code_t blackhawk7_l8p2_eye_margin_proj_with_data(srds_access_t *sa__, USR_DOUBLE rate, uint8_t ber_scan_mode, uint8_t timer_control, uint8_t max_error_control);
/*-----------------------------------------------*/
/*  Display Serdes Lane Config and Debug Status  */
/*-----------------------------------------------*/
/** Display current lane configuration.
 * Reads and displays all important lane configuration RAM variables and register fields.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_display_lane_config(srds_access_t *sa__);

/** Display current lane debug status.
 * Reads and displays all vital lane user status and debug status.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_display_lane_debug_status(srds_access_t *sa__);


/*-----------------------------*/
/*  Display Serdes Lane State  */
/*-----------------------------*/
/** Display current lane state.
 * Reads and displays all important lane state values in a single line.
 * \n Note: Call functions blackhawk7_l8p2_display_lane_state_hdr(sa__) before and blackhawk7_l8p2_display_lane_state_legend() after
 * to get a formatted lane state display with legend.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_display_lane_state(srds_access_t *sa__);

/** Column definition header for blackhawk7_l8p2 display state.
 * To be called before blackhawk7_l8p2_display_lane_state() function.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_display_lane_state_hdr(srds_access_t *sa__);

/** Detailed explanation of each column in blackhawk7_l8p2 display state.
 * To be called after blackhawk7_l8p2_display_lane_state() function to display the legends.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_display_lane_state_legend(srds_access_t *sa__);

/*---------------------------------------*/
/*  Required Serdes Diag/Debug routines  */
/*---------------------------------------*/
/** Parameterized diagnostic function which provides comprehensive diagnostic and debug information.
 * This function is required to be implemented by upper level software to enable blackhawk7_l8p2 support.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] diag_level is a MASK style parameter to enable variable level of display.
 *     enum #srds_diag_level_enum can be used to help set the diag_level. \n
 * \verbatim
  bit  0 - 1 = display extended lane state similar to existing falcon ext lane state.
           0 = standard display lane state.
  bit  1 - display core state.
  bit  2 - event log.
  bit  3 - display fast eye scan.
  bit  4 - dump reg_dump 1 (core level registers).
  bit  5 - dump reg_dump 2 (lane level registers).
  bit  6 - dump core uC vars.
  bit  7 - dump lane uC vars.
  bit  8 - display lane debug state.
  bit  9 - display data for ber projection vertical.
  bit 10 - display data for ber projection horzontal.
  bit 11 - event log (safe), which does not involve micro for read.  \endverbatim
 *
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
 */
err_code_t blackhawk7_l8p2_display_diag_data(srds_access_t *sa__, uint16_t diag_level);

/** Parameterized diagnostic function which provides access to all blackhawk7_l8p2 control and status bits
 * This function is required to be implemented by upper level software to enable blackhawk7_l8p2 support.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] type controls the type of access requested specified through enum #srds_diag_access_enum. \n
 * \verbatim
 type =  0 - Register Read (param becomes count).
 type =  1 - Register Read-Modify-Write (param becomes mask).
 type =  2 - CORE RAM Read byte  (data becomes count).
 type =  3 - CORE RAM Read-Modify-Write byte (param becomes mask).
 type =  4 - CORE RAM Read word  (data becomes count).
 type =  5 - CORE RAM Read-Modify-Write word (param becomes mask).
 type =  6 - LANE RAM Read byte    (data becomes count).
 type =  7 - LANE RAM Read-Modify-Write byte (param becomes mask).
 type =  8 - LANE RAM Read word  (data becomes count).
 type =  9 - LANE RAM Read-Modify-Write word (param becomes mask).
 type = 10 - Global RAM Read byte  (data becomes count).
 type = 11 - Global RAM Read-Modify-Write byte (param becomes mask).
 type = 12 - Global RAM Read word  (data becomes count).
 type = 13 - Global RAM Read-Modify-Write word (param becomes mask).
 type = 14 - Program RAM Read byte (data becomes count).
 type = 15 - Program RAM Read word (data becomes count).
 type = 16 - uC Command (addr becomes command; param becomes supp_info).
               See microcode for available commands and further information.
 type = 17 - Enable Breakpoint (addr becomes breakpoint #).
 type = 18 - Next or Goto Breakpoint (addr becomes breakpoint #).
 type = 19 - Read Breakpoint.
 type = 20 - Disable Breakpoint.
 type = 21 - Gather BER projection data (addr becomes ber_mode;data becomes max time;param becomes error threshold).
 
 Note: Global RAM access will ONLY WORK on Cores with direct RAM access. \endverbatim
 *
 * @param[in] addr in most cases is the address of the register or RAM location.
 * @param[in] data in most cases is the data to be written.
 * @param[in] param is the multipurpose parameter and can be mask or other data.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors).
*/
 err_code_t blackhawk7_l8p2_diag_access(srds_access_t *sa__, enum srds_diag_access_enum type, uint32_t addr, uint32_t data, uint16_t param);


/** FOR INTERNAL use only!
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @param[in] blackhawk7_l8p2_info_ptr Used for retrieving the diag mem RAM_size.
 * @param[out] status Returns read value of  usr diag status.
 * @param[out] diag_rd_ptr Returns read value of usr diag read pointer.
 * @param[in] byte_count The number of bytes to be read from diag mem.
 * @param[in] timeout_ms Time in milliseconds to wait for sufficient diag data.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */

err_code_t blackhawk7_l8p2_INTERNAL_poll_diag_data(srds_access_t *sa__, const srds_info_t *blackhawk7_l8p2_info_ptr, uint16_t *status, uint8_t *diag_rd_ptr, uint8_t byte_count, uint32_t timeout_ms);

/*---------------------*/
/*   CL72/CL93 Status  */
/*---------------------*/
/** Display CL93n72 Status of current lane.
 * @param[in] sa__ is an opaque state vector passed through to device access functions.
 * @return Error Code generated by API (returns ERR_CODE_NONE if no errors)
 */
  err_code_t blackhawk7_l8p2_display_linktrn_status(srds_access_t *sa__);


#endif
#ifdef __cplusplus
}
#endif
