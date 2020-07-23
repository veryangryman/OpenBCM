/*
 *         
 * 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 *         
 *     
 * DO NOT EDIT THIS FILE!
 */

#include <soc/types.h>
#include <soc/error.h>
#include <soc/cprimod/cprimod_internal.h>
#include <soc/cprimod/cprimod.h>
#include <soc/cprimod/cprimod_dispatch.h>

#ifdef CPRIMOD_CPRI_FALCON_SUPPORT

#include <soc/cprimod/cprif.h>


__cprimod__dispatch__t__ cprimod_cprif_driver = {

    cprif_test_api_dispatch,
    cprif_basic_frame_parser_active_table_set,
    cprif_basic_frame_parser_active_table_get,
    cprif_basic_frame_parser_table_num_entries_set,
    cprif_basic_frame_parser_table_num_entries_get,
    cprif_basic_frame_assembly_active_table_set,
    cprif_basic_frame_assembly_active_table_get,
    cprif_basic_frame_assembly_table_num_entries_set,
    cprif_basic_frame_assembly_table_num_entries_get,
    cprif_basic_frame_parser_switch_active_table,
    cprif_basic_frame_assembly_switch_active_table,
    cprif_rx_axc_basic_frame_add,
    cprif_rx_axc_basic_frame_delete,
    cprif_rx_axc_basic_frame_clear,
    cprif_rx_axc_basic_frame_get,
    cprif_tx_axc_basic_frame_add,
    cprif_tx_axc_basic_frame_delete,
    cprif_tx_axc_basic_frame_clear,
    cprif_tx_axc_basic_frame_get,
    cprif_basic_frame_debug,
    cprif_cpri_rx_axc_container_config_set,
    cprif_cpri_rx_axc_container_config_get,
    cprif_cpri_rx_axc_container_config_clear,
    cprif_cpri_tx_axc_container_config_set,
    cprif_cpri_tx_axc_container_config_get,
    cprif_cpri_tx_axc_container_config_clear,
    cprif_rsvd4_rx_axc_container_config_set,
    cprif_rsvd4_rx_axc_container_config_get,
    cprif_rsvd4_rx_axc_container_config_clear,
    cprif_rsvd4_tx_axc_container_config_set,
    cprif_rsvd4_tx_axc_container_config_get,
    cprif_rsvd4_tx_axc_container_config_clear,
    cprif_rx_roe_payload_size_set,
    cprif_rx_roe_payload_size_get,
    cprif_tx_roe_payload_size_set,
    cprif_tx_roe_payload_size_get,
    cprif_cpri_encap_data_config_set,
    cprif_cpri_encap_data_config_get,
    cprif_cpri_decap_data_config_set,
    cprif_cpri_decap_data_config_get,
    cprif_rsvd4_encap_data_config_set,
    cprif_rsvd4_encap_data_config_get,
    cprif_rsvd4_decap_data_config_set,
    cprif_rsvd4_decap_data_config_get,
    cprif_encap_header_config_set,
    cprif_encap_header_config_get,
    cprif_rx_rsvd4_gsm_tsn_bitmap_set,
    cprif_rx_rsvd4_gsm_tsn_bitmap_get,
    cprif_encap_ordering_info_entry_set,
    cprif_encap_ordering_info_entry_get,
    cprif_decap_ordering_info_entry_set,
    cprif_decap_ordering_info_entry_get,
    cprif_encap_ordering_info_sequence_offset_set,
    cprif_encap_ordering_info_sequence_offset_get,
    cprif_decap_ordering_info_sequence_offset_set,
    cprif_decap_ordering_info_sequence_offset_get,
    cprif_encap_mac_da_entry_set,
    cprif_encap_mac_da_entry_get,
    cprif_encap_mac_sa_entry_set,
    cprif_encap_mac_sa_entry_get,
    cprif_encap_vlan_id_entry_set,
    cprif_encap_vlan_id_entry_get,
    cprif_decap_ethertype_config_set,
    cprif_decap_ethertype_config_get,
    cprif_encap_ethertype_config_set,
    cprif_encap_ethertype_config_get,
    cprif_encap_memory_clear,
    cprif_cpri_rx_framer_state_clear,
    cprif_decap_memory_clear,
    cprif_cpri_tx_framer_state_clear,
    cprif_decap_flow_classification_config_set,
    cprif_decap_flow_classification_config_get,
    cprif_decap_flow_classification_config_clear,
    cprif_decap_flow_to_queue_mapping_set,
    cprif_decap_flow_to_queue_mapping_get,
    cprif_decap_flow_to_queue_mapping_clear,
    cprif_decap_queue_to_ordering_info_index_mapping_set,
    cprif_decap_queue_to_ordering_info_index_mapping_get,
    cprif_tx_framer_tgen_tick_set,
    cprif_tx_framer_tgen_tick_get,
    cprif_tx_framer_tgen_enable,
    cprif_tx_framer_tgen_offset_set,
    cprif_tx_framer_tgen_offset_get,
    cprif_tx_framer_tgen_next_bfn_config_set,
    cprif_tx_framer_tgen_next_bfn_config_get,
    cprif_tx_framer_tgen_next_hfn_config_set,
    cprif_tx_framer_tgen_next_hfn_config_get,
    cprif_tx_framer_next_bfn_get,
    cprif_tx_framer_next_hfn_get,
    cprif_tx_framer_tgen_select_counter_set,
    cprif_tx_framer_tgen_select_counter_get,
    cprif_header_compare_entry_add,
    cprif_header_compare_entry_delete,
    cprif_header_compare_entry_for_flow_delete,
    cprif_modulo_rule_entry_set,
    cprif_modulo_rule_entry_get,
    cprif_modulo_rule_flow_enable_set,
    cprif_modulo_rule_flow_enable_get,
    cprif_dual_bitmap_rule_entry_set,
    cprif_dual_bitmap_rule_entry_get,
    cprif_secondary_dual_bitmap_rule_entry_set,
    cprif_secondary_dual_bitmap_rule_entry_get,
    cprif_dbm_position_entry_set,
    cprif_dbm_position_entry_get,
    cprif_dbm_position_flow_enable_set,
    cprif_dbm_position_flow_enable_get,
    cprif_port_rx_interface_config_set,
    cprif_port_rx_interface_config_get,
    cprif_port_tx_interface_config_set,
    cprif_port_tx_interface_config_get,
    NULL, /* cprimod_port_rsvd4_rx_config_set */
    NULL, /* cprimod_port_rsvd4_rx_config_get */
    NULL, /* cprimod_port_rsvd4_tx_config_set */
    NULL, /* cprimod_port_rsvd4_tx_config_get */
    cprif_port_rx_frame_optional_config_set,
    cprif_port_rx_frame_optional_config_get,
    cprif_port_tx_frame_optional_config_set,
    cprif_port_tx_frame_optional_config_get,
    cprif_port_rsvd4_rx_frame_optional_config_set,
    cprif_port_rsvd4_rx_frame_optional_config_get,
    cprif_port_rsvd4_rx_speed_set,
    cprif_port_rsvd4_rx_speed_get,
    cprif_port_rsvd4_tx_speed_set,
    cprif_port_rsvd4_tx_speed_get,
    cprif_port_rsvd4_rx_fsm_state_set,
    cprif_port_rsvd4_rx_fsm_state_get,
    cprif_port_rsvd4_rx_overide_set,
    cprif_port_rsvd4_rx_overide_get,
    cprif_port_rsvd4_tx_frame_optional_config_set,
    cprif_port_rsvd4_tx_frame_optional_config_get,
    cprif_port_rsvd4_tx_fsm_state_set,
    cprif_port_rsvd4_tx_fsm_state_get,
    cprif_port_rsvd4_tx_overide_set,
    cprif_port_rsvd4_tx_overide_get,
    cprif_port_rx_pcs_status_get,
    cprif_core_init,
    cprif_port_init,
    cprif_rsvd4_rx_master_frame_sync_config_set,
    cprif_rsvd4_rx_master_frame_sync_config_get,
    cprif_cpri_rx_control_word_sync_info_get,
    cprif_cpri_rx_control_word_l1_inband_info_get,
    cprif_cpri_rx_control_word_l1_signal_signal_protection_set,
    cprif_cpri_rx_control_word_l1_signal_signal_protection_get,
    cprif_cpri_port_cw_slow_hdlc_config_set,
    cprif_cpri_port_cw_slow_hdlc_config_get,
    cprif_cpri_port_cw_fast_eth_config_set,
    cprif_cpri_port_cw_fast_eth_config_get,
    cprif_cpri_port_rx_vsd_cw_config_set,
    cprif_cpri_port_rx_vsd_cw_config_get,
    cprif_cpri_port_rx_vsd_ctrl_flow_add,
    cprif_cpri_port_rx_vsd_ctrl_flow_delete,
    cprif_cpri_port_rx_vsd_ctrl_flow_get,
    cprif_encap_control_queue_tag_to_flow_id_map_set,
    cprif_encap_control_queue_tag_to_flow_id_map_get,
    cprif_cpri_port_tx_vsd_cw_config_set,
    cprif_cpri_port_tx_vsd_cw_config_get,
    cprif_cpri_port_tx_vsd_ctrl_flow_add,
    cprif_cpri_port_tx_vsd_ctrl_flow_delete,
    cprif_cpri_port_tx_vsd_ctrl_flow_get,
    cprif_cpri_port_rx_vsd_raw_config_set,
    cprif_cpri_port_rx_vsd_raw_config_get,
    cprif_cpri_port_tx_vsd_raw_config_set,
    cprif_cpri_port_tx_vsd_raw_config_get,
    cprif_cpri_port_tx_vsd_raw_filter_set,
    cprif_cpri_port_tx_vsd_raw_filter_get,
    cprif_cpri_port_rx_brcm_rsvd5_control_config_set,
    cprif_cpri_port_rx_brcm_rsvd5_control_config_get,
    cprif_cpri_port_tx_brcm_rsvd5_control_config_set,
    cprif_cpri_port_tx_brcm_rsvd5_control_config_get,
    cprif_cpri_port_rx_gcw_config_set,
    cprif_cpri_port_rx_gcw_config_get,
    cprif_cpri_port_tx_gcw_config_set,
    cprif_cpri_port_tx_gcw_config_get,
    cprif_cpri_port_tx_gcw_filter_set,
    cprif_cpri_port_tx_gcw_filter_get,
    cprif_cpri_tx_control_word_l1_inband_info_set,
    cprif_cpri_tx_control_word_l1_inband_info_get,
    cprif_rsvd4_rx_control_message_config_set,
    cprif_rsvd4_rx_control_flow_config_set,
    cprif_rsvd4_rx_control_flow_config_get,
    cprif_rsvd4_rx_sync_profile_entry_set,
    cprif_rsvd4_rx_sync_profile_entry_get,
    cprif_rx_tag_config_set,
    cprif_rx_tag_gen_entry_add,
    cprif_rx_tag_gen_entry_delete,
    cprif_rx_control_flow_tag_option_set,
    cprif_rsvd4_tx_control_flow_group_member_add,
    cprif_rsvd4_tx_control_flow_group_member_delete,
    cprif_rsvd4_tx_eth_message_config_set,
    cprif_rsvd4_tx_single_raw_message_config_set,
    cprif_rsvd4_tx_single_tunnel_message_config_set,
    cprif_rsvd4_tx_control_flow_config_set,
    cprif_rsvd4_tx_control_flow_config_get,
    cprif_rsvd4_tx_control_flow_header_index_set,
    cprif_rsvd4_tx_control_flow_header_index_get,
    cprif_rsvd4_tx_control_header_entry_set,
    cprif_rsvd4_tx_control_header_entry_get,
    cprif_rsvd4_fast_eth_config_set,
    cprif_cpri_or_enet_port_set,
    cprif_cpri_or_enet_port_get,
    cprif_cpri_port_rx_enable_set,
    cprif_cpri_port_rx_enable_get,
    cprif_cpri_port_tx_enable_set,
    cprif_cpri_port_tx_enable_get,
    cprif_cpri_port_interrupt_link_status_get,
    cprif_cpri_port_interrupt_enable_set,
    cprif_cpri_port_interrupt_enable_get,
    cprif_cpri_port_interrupt_process,
    cprif_fast_clk_bit_time_period_set,
    cprif_fast_clk_bit_time_period_get,
    cprif_1588_bit_time_period_set,
    cprif_1588_bit_time_period_get,
    cprif_1588_timestamp_capture_config_set,
    cprif_1588_timestamp_capture_config_get,
    cprif_1588_captured_timestamp_get,
    cprif_1588_timestamp_adjust_set,
    cprif_1588_timestamp_adjust_get,
    cprif_1588_timestamp_fifo_config_set,
    cprif_1588_timestamp_fifo_config_get,
    cprif_1588_timestamp_cmic_config_set,
    cprif_1588_timestamp_cmic_config_get,
    cprif_cpri_basic_frame_info_get,
    cprif_cpri_agnostic_mode_basic_frame_config_set,
    cprif_cpri_interface_bus_width_get,
    cprif_cpri_tunnel_mode_basic_frame_config_set,
    cprif_rsvd4_agnostic_mode_basic_frame_config_set,
    cprif_encap_presentation_time_enable_set,
    cprif_encap_presentation_time_enable_get,
    cprif_encap_presentation_time_config_set,
    cprif_encap_presentation_time_config_get,
    cprif_encap_presentation_time_adjust_set,
    cprif_encap_presentation_time_adjust_get,
    cprif_encap_presentation_time_approximate_increment_set,
    cprif_encap_presentation_time_approximate_increment_get,
    cprif_decap_agnostic_mode_enable_set,
    cprif_decap_agnostic_mode_enable_get,
    cprif_decap_agnostic_mode_config_set,
    cprif_decap_agnostic_mode_config_get,
    cprif_decap_presentation_time_config_set,
    cprif_decap_presentation_time_config_get,
    cprif_compression_lookup_table_set,
    cprif_compression_lookup_table_get,
    cprif_decompression_lookup_table_set,
    cprif_decompression_lookup_table_get,
    cprif_cpri_port_decap_queue_flow_control_set,
    cprif_cpri_port_decap_queue_flow_control_get,
    cprif_cpri_port_fec_enable_set,
    cprif_cpri_port_fec_enable_get,
    cprif_cpri_port_fec_timestamp_config_set,
    cprif_cpri_port_fec_timestamp_config_get,
    cprif_cpri_port_fec_aux_config_set,
    cprif_cpri_port_fec_aux_config_get,
#ifdef CPRIMOD_SUPPORT
    cprif_cpri_port_fec_stat_get,
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    cprif_cpri_port_ecc_interrupt_enable_set,
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    cprif_cpri_port_ecc_interrupt_status_get,
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT_ECC_INJECT
    cprif_cpri_port_ecc_interrupt_test,
#endif /* CPRIMOD_SUPPORT_ECC_INJECT */
    cprif_cpri_pll_status_get,
    cprif_cpri_port_reset_set,
    cprif_cpri_port_reset_get,
    cprif_cpri_init,
    cprif_cpri_port_rx_gcw_word_get,
    cprif_cpri_port_tx_gcw_word_set,
    cprif_cpri_mac_drain_start,
    cprif_cpri_mac_drain_stop,
    cprif_cpri_mac_credit_reset_set,
    cprif_cpri_mac_credit_reset_get,
    cprif_cpri_port_link_up_event,
    cprif_cpri_port_link_down_event,
    cprif_cpri_port_rx_tunnel_mode_set,
    cprif_cpri_port_rx_tunnel_mode_get,
    cprif_cpri_port_tx_agnostic_mode_set,
    cprif_cpri_port_tx_agnostic_mode_get,
    cprif_cpri_port_rx_agnostic_mode_get,
    cprif_port_pmd_status_get,
    cprif_cpri_port_link_get,
#ifdef CPRIMOD_SUPPORT
    cprif_cpri_encap_header_field_mapping_set,
    cprif_cpri_encap_header_field_mapping_get,
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    cprif_cpri_decap_header_field_mapping_set,
    cprif_cpri_decap_header_field_mapping_get,
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    cprif_cpri_header_field_adjustment_config_set,
    cprif_cpri_header_field_adjustment_config_get,
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    cprif_cpri_decap_header_field_mask_set,
    cprif_cpri_decap_header_field_mask_get,
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    cprif_cpri_port_compression_saturation_config_set,
    cprif_cpri_port_compression_saturation_config_get,
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    cprif_cpri_port_decompression_saturation_config_set,
    cprif_cpri_port_decompression_saturation_config_get,
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    cprif_rsvd4_tx_padding_size_set,
    cprif_rsvd4_tx_padding_size_get,
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    cprif_cpri_rx_datapath_reset,
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    cprif_cpri_tx_datapath_reset,
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    cprif_cpri_port_rx_pipeline_clear,
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    cprif_cpri_port_tx_pipeline_clear,
#endif /* CPRIMOD_SUPPORT */
#ifdef CPRIMOD_SUPPORT
    cprif_cpri_port_speed_set,
#endif /* CPRIMOD_SUPPORT */
    cprif_cpri_tx_framer_tgen_tick_config_set,
    cprif_rsvd4_tx_framer_tgen_tick_config_set,
    cprif_cpri_port_debug_set,
    cprif_cpri_port_debug_get,
    cprif_cpri_port_debug_clear,
};

#endif /* CPRIMOD_CPRI_FALCON_SUPPORT */
