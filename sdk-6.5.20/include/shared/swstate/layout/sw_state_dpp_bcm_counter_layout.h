/* 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
*/
#ifndef _SHR_sw_state_dpp_bcm_counter_H_
#define _SHR_sw_state_dpp_bcm_counter_H_


#define SW_STATE_DPP_BCM_COUNTER_CUNIT_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_SAMPLING_INTERVAL_CONFIGURED_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_NUM_COUNTER_PROCS_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_BACKGROUND_DEFER_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_BACKGROUND_ACTIVE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_BACKGROUND_DISABLE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_FOREGROUND_HIT_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_DIAG_FIFO_READ_BACKGROUND_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_DIAG_FIFO_READ_DEFERRED_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_DIAG_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_BCM_COUNTER_DIAG_FIFO_READ_BACKGROUND_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_DIAG_FIFO_READ_DEFERRED_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_VALID_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_PROC_ID_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_MODE_SRC_TYPE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_MODE_SRC_CORE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_MODE_COMMAND_ID_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_MODE_MODE_STATISTICS_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_MODE_MODE_EG_RESOLUTION_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_MODE_MODE_EG_TYPE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_MODE_MODE_EG_BASE_VAL_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_MODE_MODE_EG_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_BCM_COUNTER_PROC_MODE_MODE_EG_RESOLUTION_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_MODE_MODE_EG_TYPE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_MODE_MODE_EG_BASE_VAL_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_MODE_Q_SET_SIZE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_MODE_STAG_LSB_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_MODE_FORMAT_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_MODE_WE_VAL_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_MODE_CUSTOM_MODE_PARAMS_ENTRIES_BMAPS_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_MODE_CUSTOM_MODE_PARAMS_SET_SIZE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_MODE_CUSTOM_MODE_PARAMS_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_BCM_COUNTER_PROC_MODE_CUSTOM_MODE_PARAMS_ENTRIES_BMAPS_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_MODE_CUSTOM_MODE_PARAMS_SET_SIZE_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_MODE_NUM_COUNTERS_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_MODE_NUM_SETS_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_MODE_MULTIPLE_SOURCES_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_MODE_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_BCM_COUNTER_PROC_MODE_SRC_TYPE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_MODE_SRC_CORE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_MODE_COMMAND_ID_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_MODE_MODE_STATISTICS_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_MODE_MODE_EG_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_MODE_Q_SET_SIZE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_MODE_STAG_LSB_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_MODE_FORMAT_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_MODE_WE_VAL_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_MODE_CUSTOM_MODE_PARAMS_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_MODE_NUM_COUNTERS_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_MODE_NUM_SETS_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_MODE_MULTIPLE_SOURCES_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_NATIVE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_AVAIL_OFFSETS_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_DIAG_DIRECT_READ_PASSES_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_DIAG_DIRECT_READ_FAILS_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_DIAG_CACHE_UPDATES_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_DIAG_CACHE_READS_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_DIAG_CACHE_WRITES_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_DIAG_API_READS_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_DIAG_API_WRITES_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_DIAG_API_MISS_READS_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_DIAG_API_MISS_WRITES_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_DIAG_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_BCM_COUNTER_PROC_DIAG_DIRECT_READ_PASSES_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_DIAG_DIRECT_READ_FAILS_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_DIAG_CACHE_UPDATES_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_DIAG_CACHE_READS_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_DIAG_CACHE_WRITES_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_DIAG_API_READS_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_DIAG_API_WRITES_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_DIAG_API_MISS_READS_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_DIAG_API_MISS_WRITES_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_FIELD_ALLOCATED_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_FIELD_INUSE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_FIELD_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_BCM_COUNTER_PROC_FIELD_ALLOCATED_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_FIELD_INUSE_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_BCM_COUNTER_PROC_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_BCM_COUNTER_PROC_VALID_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_PROC_ID_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_MODE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_NATIVE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_AVAIL_OFFSETS_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_DIAG_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_FIELD_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_BCM_COUNTER_COUNTER_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_FIFO_FIFO_READ_PASSES_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_FIFO_FIFO_READ_FAILS_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_FIFO_FIFO_READ_ITEMS_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_FIFO_FIFO_READ_MAX_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_FIFO_FIFO_READ_LAST_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_FIFO_REF_COUNT_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_FIFO_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_BCM_COUNTER_FIFO_FIFO_READ_PASSES_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_FIFO_FIFO_READ_FAILS_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_FIFO_FIFO_READ_ITEMS_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_FIFO_FIFO_READ_MAX_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_FIFO_FIFO_READ_LAST_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_FIFO_REF_COUNT_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_BCM_COUNTER_GLOBAL_INFO_HAVESTATTAG_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_GLOBAL_INFO_CACHE_ONLY_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_GLOBAL_INFO_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_BCM_COUNTER_GLOBAL_INFO_HAVESTATTAG_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_GLOBAL_INFO_CACHE_ONLY_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_BCM_COUNTER_LIF_RANGES_COUNTING_PROFILE_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_LIF_RANGES_LIF_STACK_PRIORITY_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_LIF_RANGES_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_BCM_COUNTER_LIF_RANGES_COUNTING_PROFILE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_LIF_RANGES_LIF_STACK_PRIORITY_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_BCM_COUNTER_EGRESS_RECEIVE_TM_POINTER_FORMAT_QUEUE_PAIR_MASK_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_EGRESS_RECEIVE_TM_POINTER_FORMAT_TRAFFIC_CLASS_MASK_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_EGRESS_RECEIVE_TM_POINTER_FORMAT_CAST_MASK_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_EGRESS_RECEIVE_TM_POINTER_FORMAT_QUEUE_PAIR_SHIFT_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_EGRESS_RECEIVE_TM_POINTER_FORMAT_TRAFFIC_CLASS_SHIFT_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_EGRESS_RECEIVE_TM_POINTER_FORMAT_CAST_SHIFT_LAYOUT_NOF_MAX_LAYOUT_NODES (1) 
#define SW_STATE_DPP_BCM_COUNTER_EGRESS_RECEIVE_TM_POINTER_FORMAT_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_BCM_COUNTER_EGRESS_RECEIVE_TM_POINTER_FORMAT_QUEUE_PAIR_MASK_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_EGRESS_RECEIVE_TM_POINTER_FORMAT_TRAFFIC_CLASS_MASK_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_EGRESS_RECEIVE_TM_POINTER_FORMAT_CAST_MASK_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_EGRESS_RECEIVE_TM_POINTER_FORMAT_QUEUE_PAIR_SHIFT_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_EGRESS_RECEIVE_TM_POINTER_FORMAT_TRAFFIC_CLASS_SHIFT_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_EGRESS_RECEIVE_TM_POINTER_FORMAT_CAST_SHIFT_LAYOUT_NOF_MAX_LAYOUT_NODES) 
#define SW_STATE_DPP_BCM_COUNTER_LAYOUT_NOF_MAX_LAYOUT_NODES (1 + SW_STATE_DPP_BCM_COUNTER_CUNIT_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_SAMPLING_INTERVAL_CONFIGURED_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_NUM_COUNTER_PROCS_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_BACKGROUND_DEFER_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_BACKGROUND_ACTIVE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_BACKGROUND_DISABLE_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_FOREGROUND_HIT_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_DIAG_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_PROC_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_COUNTER_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_FIFO_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_GLOBAL_INFO_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_LIF_RANGES_LAYOUT_NOF_MAX_LAYOUT_NODES + SW_STATE_DPP_BCM_COUNTER_EGRESS_RECEIVE_TM_POINTER_FORMAT_LAYOUT_NOF_MAX_LAYOUT_NODES) 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_cunit_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_sampling_interval_configured_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_num_counter_procs_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_background_defer_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_background_active_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_background_disable_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_foreground_hit_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_diag_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_diag_fifo_read_background_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_diag_fifo_read_deferred_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_valid_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_proc_id_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_mode_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_mode_src_type_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_mode_src_core_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_mode_command_id_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_mode_mode_statistics_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_mode_mode_eg_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_mode_mode_eg_resolution_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_mode_mode_eg_type_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_mode_mode_eg_base_val_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_mode_q_set_size_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_mode_stag_lsb_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_mode_format_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_mode_we_val_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_mode_custom_mode_params_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_mode_custom_mode_params_entries_bmaps_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_mode_custom_mode_params_set_size_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_mode_num_counters_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_mode_num_sets_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_mode_multiple_sources_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_native_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_avail_offsets_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_diag_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_diag_direct_read_passes_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_diag_direct_read_fails_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_diag_cache_updates_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_diag_cache_reads_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_diag_cache_writes_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_diag_api_reads_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_diag_api_writes_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_diag_api_miss_reads_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_diag_api_miss_writes_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_field_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_field_allocated_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_proc_field_inUse_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_counter_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_fifo_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_fifo_fifo_read_passes_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_fifo_fifo_read_fails_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_fifo_fifo_read_items_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_fifo_fifo_read_max_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_fifo_fifo_read_last_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_fifo_ref_count_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_global_info_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_global_info_haveStatTag_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_global_info_cache_only_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_lif_ranges_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_lif_ranges_counting_profile_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_lif_ranges_lif_stack_priority_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_egress_receive_tm_pointer_format_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_egress_receive_tm_pointer_format_queue_pair_mask_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_egress_receive_tm_pointer_format_traffic_class_mask_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_egress_receive_tm_pointer_format_cast_mask_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_egress_receive_tm_pointer_format_queue_pair_shift_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_egress_receive_tm_pointer_format_traffic_class_shift_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
int sw_state_dpp_bcm_counter_egress_receive_tm_pointer_format_cast_shift_layout_node_create(int unit, int* root_node_id, uint32* next_free_node_id);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#endif /* _SHR_sw_state_dpp_bcm_counter_H_ */
