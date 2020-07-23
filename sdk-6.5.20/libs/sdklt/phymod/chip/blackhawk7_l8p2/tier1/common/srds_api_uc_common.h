/*************************************************************************************
 *                                                                                   *
 * Copyright: (c) 2019 Broadcom.                                                     *
 * Broadcom Proprietary and Confidential. All rights reserved.                       *
 */

/**********************************************************************************
 **********************************************************************************
 *                                                                                *
 *  Revision      :  
 *                                                                                *
 *  Description   :  Defines and Enumerations required by Serdes ucode and API    *
 */

/** @file srds_api_uc_common.h
 * Defines and Enumerations shared by Serdes API and Microcode
 */

#ifndef SRDS_API_UC_COMMON_H
#define SRDS_API_UC_COMMON_H

/* Max, min, and abs functions for SERDES code. */
/* Warning:  These can evaluate a_ or b_ twice. */
#define SRDS_MAX(a_, b_) (((a_)>(b_)) ? (a_) : (b_))
#define SRDS_MIN(a_, b_) (((a_)<(b_)) ? (a_) : (b_))
#define SRDS_ABS(a_)     (((a_)>=0)   ? (a_) : (-(a_)))

/*-----------------------------*/
/*  Generic Serdes items first */
/*-----------------------------*/

/** DSC_STATES Enum */
/** These state values must match the dsc_state bitfield in the register map. **/
/** If these values change, then consider changing the test functions below.  **/


/** DSC_STATES Enum **/
enum srds_dsc_state_enum {
  DSC_STATE_UNKNOWN      = 255,
  DSC_STATE_RESET        = 0,
  DSC_STATE_RESTART      = 1,
  DSC_STATE_CONFIG       = 2,
  DSC_STATE_WAIT_FOR_SIG = 3,
  DSC_STATE_ACQ_CDR      = 4,
  DSC_STATE_CDR_SETTLE   = 5,
  DSC_STATE_HW_TUNE      = 6,
  DSC_STATE_UC_TUNE      = 7,
  DSC_STATE_MEASURE      = 8,
  DSC_STATE_DONE         = 9
};




/** Is the state between DSC_STATE_RESET and DSC_STATE_WAIT_FOR_SIG? **/
#define is_dsc_state_at_or_before_wait_for_sig(state) (state <= DSC_STATE_WAIT_FOR_SIG)


/** SERDES_PMD_UC_COMMANDS Enum */
enum srds_pmd_uc_cmd_enum {
  CMD_NULL                  =  0,
  CMD_UC_CTRL               =  1,
  CMD_HEYE_OFFSET           =  2,
  CMD_VEYE_OFFSET           =  3,
  CMD_UC_DBG                =  4,
  CMD_DIAG_EN               =  5,
  CMD_READ_UC_LANE_BYTE     =  6,
  CMD_WRITE_UC_LANE_BYTE    =  7,
  CMD_READ_UC_CORE_BYTE     =  8,
  CMD_WRITE_UC_CORE_BYTE    =  9,
  CMD_READ_UC_LANE_WORD     = 10,
  CMD_WRITE_UC_LANE_WORD    = 11,
  CMD_READ_UC_CORE_WORD     = 12,
  CMD_WRITE_UC_CORE_WORD    = 13,
  CMD_EVENT_LOG_CTRL        = 14,
  CMD_EVENT_LOG_READ        = 15,
  CMD_CAPTURE_BER_START     = 16,
  CMD_READ_DIAG_DATA_BYTE   = 17,
  CMD_READ_DIAG_DATA_WORD   = 18,
  CMD_CAPTURE_BER_END       = 19,
  CMD_CALC_CRC              = 20,
  CMD_FREEZE_STEADY_STATE   = 21,
  CMD_TDT_EN                = 22,
  CMD_UC_EMULATION          = 23,
  CMD_CHAR_ISI              = 24,
  CMD_INTERNAL_LPBK         = 25,
  CMD_RUN_SC_REG_BITS_TEST  = 26,
  CMD_CLK90_SCREEN_TEST     = 27,
  CMD_API_EVENT             = 28
};

/** SERDES_UC_CTRL_COMMANDS Enum */
enum srds_pmd_uc_ctrl_cmd_enum {
  CMD_UC_CTRL_STOP_GRACEFULLY   = 0,
  CMD_UC_CTRL_STOP_IMMEDIATE    = 1,
  CMD_UC_CTRL_RESUME            = 2
};

/** SERDES_UC_DIAG_COMMANDS Enum */
enum srds_pmd_uc_diag_cmd_enum {
  CMD_UC_DIAG_DISABLE         = 3,
  CMD_UC_DIAG_PASSIVE         = 1,
  CMD_UC_DIAG_DENSITY         = 2,
  CMD_UC_DIAG_START_VSCAN_EYE = 4,
  CMD_UC_DIAG_START_HSCAN_EYE = 5,
  CMD_UC_DIAG_GET_EYE_SAMPLE  = 6,
  CMD_UC_DIAG_START_EYE_SLICE = 7,
  CMD_UC_DIAG_START_INTR_EYE  = 8
};

/** SERDES_EVENT_LOG_READ Enum */
enum srds_pmd_event_rd_cmd_enum {
  CMD_EVENT_LOG_READ_START      = 0,
  CMD_EVENT_LOG_READ_NEXT       = 1,
  CMD_EVENT_LOG_READ_DONE       = 2
};

/** SERDES_UC_DBG_COMMANDS Enum */
enum srds_pmd_uc_dbg_cmd_enum {
  CMD_UC_DBG_DIE_TEMP        = 0,
  CMD_UC_DBG_TIMESTAMP       = 1,
  CMD_UC_DBG_LANE_IDX        = 2,
  CMD_UC_DBG_LANE_TIMER      = 3
};

/** SERDES_UC_EMULATION_COMMANDS Enum */
enum srds_pmd_uc_emulation_cmd_enum {
  CMD_UC_EMULATION_START      = 0,
  CMD_UC_EMULATION_STOP       = 1
};

/** SERDES_INTERNAL_LPBK_COMMANDS Enum */
enum srds_pmd_internal_lpbk_cmd_enum {
  CMD_INTERNAL_LPBK_DISABLE      = 0,
  CMD_INTERNAL_LPBK_ENABLE       = 1
};

/** Erroneous command completion codes to be placed in supp_info.           **
 ** Values 0-15 are allowed.  (See MAKE_UC_ERROR_SUPP_INFO below.)          **
 ** Please update serdes_INTERNAL_print_uc_dsc_error() in                   **
 ** serdes_api_internal.c when adding to or removing from this list.        **/
enum srds_pmd_uc_error_enum {
  UC_CMD_ERROR_INVALID_COMMAND              = 0x1,
  UC_CMD_ERROR_BUSY                         = 0x5,
  UC_CMD_ERROR_GET_EYE_SAMPLE_ERROR         = 0x6,
  UC_CMD_ERROR_PRBS_NOT_LOCKED              = 0x8,
  UC_CMD_ERROR_COMMAND_IN_PROGRESS          = 0xC,
  UC_CMD_ERROR_INVALID_MODE                 = 0xD
};

/** Macros for translating srds_pmd_uc_error_enum error codes    **
 ** into the supp_info field that is read by software, and back. **/
#define MAKE_UC_ERROR_SUPP_INFO(error_code, other_info) ((((error_code) & 0xF) << 4) | ((other_info) & 0xF))
#define SUPP_INFO_TO_ERROR_CODE(supp_info) (((supp_info) >> 4) & 0xF)
#define SUPP_INFO_TO_OTHER_INFO(supp_info) ((supp_info) & 0xF)

/** supp_info values used with successful command completion **/
enum srds_pmd_uc_success_enum {
  UC_CMD_SUCCESS               = 0x00,
  UC_CMD_SUCCESS_READ_COMPLETE = 0x01
};

/** Media type Enum */
enum srds_media_type_enum {
  MEDIA_TYPE_PCB_TRACE_BACKPLANE = 0,
  MEDIA_TYPE_COPPER_CABLE        = 1,
  MEDIA_TYPE_OPTICS              = 2,
  MEDIA_TYPE_OPTICS_ZR           = 3
};

/** DIAG_BER mode settings **/
enum srds_diag_ber_mode_enum {
    DIAG_BER_POS  = 0,
    DIAG_BER_NEG  = 1,
    DIAG_BER_VERT = 0,
    DIAG_BER_HORZ = 1<<1,
    DIAG_BER_PASS = 0,
    DIAG_BER_INTR = 1<<2,
    DIAG_BER_P1_NARROW = 1<<3,
    DIAG_BER_P1_WIDE = 0,
    DIAG_BER_FAST = 1<<6

};

/** DIAG EYE SCAN status macros **/
#define DIAG_EYE_SCAN_V_HALF        (1<<10)
#define DIAG_EYE_SCAN_H_FULL        (0<<11)
#define DIAG_EYE_SCAN_H_HALF        (1<<11)
#define DIAG_EYE_SCAN_INTR          (2<<11)
#define DIAG_EYE_SCAN_SLICE         (3<<11)
#define DIAG_EYE_SCAN_READ_FASTER   (1<<13)
#define DIAG_EYE_SCAN_WRITE_FASTER  (1<<14)
#define DIAG_EYE_SCAN_END           (1<<15)

/** DIAG EYE SCAN status mask macros **/
#define DIAG_EYE_SCAN_BUFFER_SIZE_MASK  (0xFF)
#define DIAG_EYE_SCAN_V_RANGE_MASK      (1<<10)
#define DIAG_EYE_SCAN_RANGE_MASK        (3<<11)
#define DIAG_EYE_SCAN_READ_MASK         (1<<13)
#define DIAG_EYE_SCAN_WRITE_MASK        (1<<14)
#define DIAG_EYE_SCAN_END_MASK          (1<<15)

#define EYE_SCAN_NRZ_VERTICAL_IDX_MAX   (62)
#define EYE_SCAN_NRZ_VERTICAL_STEP       (2)
#define EYE_SCAN_PAM_VERTICAL_IDX_MAX  (127)
#define EYE_SCAN_PAM_VERTICAL_STEP       (1)

#define EYE_SCAN_NRZ_HORIZONTAL_WIDTH  (128)
#define EYE_SCAN_NRZ_HORIZONTAL_STEP     (2)
#define EYE_SCAN_PAM_HORIZONTAL_WIDTH   (64)
#define EYE_SCAN_PAM_HORIZONTAL_STEP     (1)



typedef uint8_t float8_t;



/*****************************************************************************\
 * Information table found in code RAM                                       *
 *                                                                           *
 * It starts at this location:                                               *
\*                                                                           */
#define INFO_TABLE_RAM_BASE  (0x100)
/*                                                                           *\
 * The table is signified by this signature, "INF0", whose last character    *
 * is the version number.                                                    *
\*                                                                           */
#define INFO_TABLE_SIGNATURE (0x39464E49)
/*                                                                           *\
 * The table starts with the signature and various version fields at these   *
 * offsets:                                                                  *
\*                                                                           */
#define INFO_TABLE_OFFS_SIGNATURE            (0x00)
#define INFO_TABLE_OFFS_UC_VERSION           (0x04)
/*                                                                           *\
 * The table includes the trace and lane memory size:                        *
 *     (upper 16 bits is lane size; lower 16 bits is trace size)             *
\*                                                                           */
#define INFO_TABLE_OFFS_TRACE_LANE_MEM_SIZE  (0x08)
/*                                                                           *\
 * The table includes other sizes:                                           *
 *     Byte 0:  lane count                                                   *
 *     Byte 1:  core size, in bytes                                          *
 *     Byte 2:  icore size, in bytes                                         *
 *     Byte 3:  options:                                                     *
 *              Bit 0:  0 if trace memory is written with ascending          *
 *                           addresses.                                      *
 *                      1 if trace memory is written with descending         *
 *                           addresses.                                      *
\*                                                                           */
#define INFO_TABLE_OFFS_OTHER_SIZE           (0x0C)
/*                                                                           *\
 * The table includes RAM locations of various tables:                       *
\*                                                                           */
#define INFO_TABLE_OFFS_TRACE_MEM_PTR        (0x10)
#define INFO_TABLE_OFFS_CORE_MEM_PTR         (0x14)
#define INFO_TABLE_OFFS_ICORE_MEM_PTR        (0x18)
#define INFO_TABLE_OFFS_LANE_MEM_PTR         (0x1C)
#define INFO_TABLE_OFFS_MICRO_MEM_PTR        (0x64)
#define INFO_TABLE_OFFS_GROUP_RAM_SIZE       (0x68)
#define INFO_TABLE_OFFS_DIAG_LANE_MEM_SIZE   (0x6C)
#define INFO_TABLE_OFFS_DIAG_MEM_PTR         (0x70)
/*                                                                           *\
 * The table includes other sizes:                                           *
 *     Byte 0:  microcontroller count                                        *
\*                                                                           */
#define INFO_TABLE_OFFS_OTHER_SIZE_2         (0x60)


/* The offset just past the end of the table */
#define INFO_TABLE_END                       (0x78)

/*****************************************************************************/

#endif/*SRDS_API_UC_COMMON_H*/
