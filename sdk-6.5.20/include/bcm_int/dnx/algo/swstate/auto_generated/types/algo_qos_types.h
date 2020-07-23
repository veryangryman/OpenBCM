/** \file algo/swstate/auto_generated/types/algo_qos_types.h
 *
 * sw state types (structs/enums/typedefs)
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef __ALGO_QOS_TYPES_H__
#define __ALGO_QOS_TYPES_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <bcm_int/dnx/algo/qos/algo_qos.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr_internal.h>
/*
 * STRUCTs
 */

/**
 * The template of each Propagation profile has 4 fields  PHB, REMARK, ECN and TTL describing the the proparation profile  type for the specific app type;  00 -  Pipe, 01 - Uniform, 10 - Stuck, 11 - Stuck Strong  This is 1:1 mappimg to dbal_enum_value_field_qos_propag_profile_e,  use uint8 to keep the structure at 32 bits size and not 128 bits.
 */
typedef struct {
    uint8 phb;
    uint8 remark;
    uint8 ecn;
    uint8 ttl;
} qos_propagation_profile_template_t;

/**
 * The template of each newtork_qos profile has 3 fields  network_qos_pipe for current layer network_qos, network_qos_pipe_mapped for next layer network_qos  and dp_pipe_mapped for next layer DP
 */
typedef struct {
    uint8 network_qos_pipe;
    uint8 network_qos_pipe_mapped;
    uint8 dp_pipe_mapped;
} qos_pipe_profile_template_t;

/**
 * QOS related sw state
 */
typedef struct {
    /**
     * INGRESS QOS
     */
    dnx_algo_res_t ingress_qos;
    /**
     * INGRESS QOS ECN
     */
    dnx_algo_res_t ingress_qos_ecn;
    /**
     * INGRESS QOS PHB OPCODE
     */
    dnx_algo_res_t ingress_qos_phb_opcode;
    /**
     * INGRESS QOS REMARK_OPCODE
     */
    dnx_algo_res_t ingress_qos_remark_opcode;
    /**
     * INGRESS QOS ECN OPCODE
     */
    dnx_algo_res_t ingress_qos_ecn_opcode;
    /**
     * INGRESS QOS POLICER
     */
    dnx_algo_res_t ingress_qos_policer;
    /**
     * INGRESS QOS VLAN PCP
     */
    dnx_algo_res_t ingress_qos_vlan_pcp;
    /**
     * EGRESS QOS
     */
    dnx_algo_res_t egress_qos;
    /**
     * EGRESS QOS OPCODE
     */
    dnx_algo_res_t egress_qos_opcode;
    /**
     * EGRESS QOS MPLS PHP
     */
    dnx_algo_res_t egress_qos_mpls_php;
    /**
     * EGRESS QOS PHP OPCODE
     */
    dnx_algo_res_t egress_qos_php_opcode;
    /**
     * EGRESS QOS POLICER
     */
    dnx_algo_res_t egress_qos_policer;
    /**
     * EGRESS QOS OAM PRIORITY MAP
     */
    dnx_algo_res_t egress_qos_oam_pcp_map;
    /**
     * EGRESS QOS TTL PIPE PROFILE TEMPLATE
     */
    dnx_algo_template_t qos_egress_ttl_pipe_profile;
    /**
     * INGRESS PROPAGATION PROFILE TEMPLATE
     */
    dnx_algo_template_t qos_ingress_propagation_profile;
    /**
     * EGRESS NETWORK_QOS PROFILE TEMPLATE
     */
    dnx_algo_template_t qos_egress_network_qos_profile;
    /**
     * QOS EGRESS COS PROFILE
     */
    dnx_algo_res_t egress_cos_profile;
} algo_qos_sw_state_t;


#endif /* __ALGO_QOS_TYPES_H__ */
