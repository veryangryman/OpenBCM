/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm/types.h>

#include <bcm_int/ltsw/mbcm/dlb.h>
#include <bcm_int/ltsw/mbcm/mbcm.h>

#include <shr/shr_debug.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_DLB

/*!
 * \brief The Dlb mbcm drivers.
 */
static mbcm_ltsw_dlb_drv_t mbcm_ltsw_dlb_drv[BCM_MAX_NUM_UNITS];

/******************************************************************************
 * Private functions
 */

/******************************************************************************
 * Public functions
 */

int
mbcm_ltsw_dlb_drv_set(
    int unit,
    mbcm_ltsw_dlb_drv_t *drv)
{
    mbcm_ltsw_dlb_drv_t *local = &mbcm_ltsw_dlb_drv[unit];

    SHR_FUNC_ENTER(unit);


    mbcm_ltsw_drv_init((mbcm_ltsw_drv_t *)local,
                       (mbcm_ltsw_drv_t *)drv,
                       sizeof(*local)/MBCM_LTSW_FNPTR_SZ);

    SHR_EXIT();

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_feature_get(
    int unit,
    uint32_t *features)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_feature_get(unit, features));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_capability_get(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    bcmi_ltsw_dlb_capability_t *cap)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_capability_get(unit, dlb_type, cap));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_init(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_init(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_deinit(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_deinit(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_type_init(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_type_init(unit, dlb_type));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_type_deinit(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_type_deinit(unit, dlb_type));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_config_validate(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    bcmi_ltsw_dlb_config_t *dlb_config)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_config_validate(unit, dlb_type, dlb_config));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_config_set(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    bcmi_ltsw_dlb_id_t dlb_id,
    bcmi_ltsw_dlb_config_t *dlb_config)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_config_set(unit, dlb_type, dlb_id, dlb_config));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_config_get(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    bcmi_ltsw_dlb_id_t dlb_id,
    bcmi_ltsw_dlb_config_t *dlb_config)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_config_get(unit, dlb_type, dlb_id, dlb_config));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_config_clear(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    bcmi_ltsw_dlb_id_t dlb_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_config_clear(unit, dlb_type, dlb_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_monitor_validate(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    bcmi_ltsw_dlb_monitor_t *monitor)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_monitor_validate(unit, dlb_type, monitor));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_monitor_set(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    bcmi_ltsw_dlb_id_t dlb_id,
    bcmi_ltsw_dlb_monitor_t *monitor)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_monitor_set(unit, dlb_type, dlb_id, monitor));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_monitor_get(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    bcmi_ltsw_dlb_id_t dlb_id,
    bcmi_ltsw_dlb_monitor_t *monitor)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_monitor_get(unit, dlb_type, dlb_id, monitor));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_monitor_clear(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    bcmi_ltsw_dlb_id_t dlb_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_monitor_clear(unit, dlb_type, dlb_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_member_quality_map_profile_format(
    int unit,
    bcmint_dlb_quality_map_profile_t *quality_map_profile,
    uint32_t *quality_map_profile_format)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_member_quality_map_profile_format(unit, quality_map_profile, quality_map_profile_format));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_member_quality_map_profile2id(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    int quality_map_profile_count,
    bcmint_dlb_quality_map_profile_t *quality_map_profile,
    int profile_index,
    int *quality_map_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_member_quality_map_profile2id(unit, dlb_type, quality_map_profile_count, quality_map_profile, profile_index, quality_map_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_member_quality_map_id2profile(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    int quality_map_profile_count,
    bcmint_dlb_quality_map_profile_t *quality_map_profile,
    int quality_map_id,
    int *profile_index)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_member_quality_map_id2profile(unit, dlb_type, quality_map_profile_count, quality_map_profile, quality_map_id, profile_index));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_member_quality_map_set(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    int quality_map_id,
    int load_percent,
    int qsize_percent)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_member_quality_map_set(unit, dlb_type, quality_map_id, load_percent, qsize_percent));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_member_quality_map_clear(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    int quality_map_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_member_quality_map_clear(unit, dlb_type, quality_map_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_member_pbmp_get(
    int unit,
    bcm_pbmp_t *pbmp)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_member_pbmp_get(unit, pbmp));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_member_attribute_validate(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    bcmi_ltsw_dlb_member_attribute_t *attribute)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_member_attribute_validate(unit, dlb_type, attribute));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_member_attribute_set(
    int unit,
    bcm_port_t port,
    bcmi_ltsw_dlb_type_t dlb_type,
    int scaling_factor,
    int quality_map_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_member_attribute_set(unit, port, dlb_type, scaling_factor, quality_map_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_member_attribute_get(
    int unit,
    bcm_port_t port,
    bcmi_ltsw_dlb_type_t dlb_type,
    int *scaling_factor,
    int *quality_map_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_member_attribute_get(unit, port, dlb_type, scaling_factor, quality_map_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_member_attribute_clear(
    int unit,
    bcm_port_t port,
    bcmi_ltsw_dlb_type_t dlb_type)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_member_attribute_clear(unit, port, dlb_type));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_member_status_set(
    int unit,
    bcm_port_t port,
    bcmi_ltsw_dlb_type_t dlb_type,
    int status)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_member_status_set(unit, port, dlb_type, status));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_member_status_get(
    int unit,
    bcm_port_t port,
    bcmi_ltsw_dlb_type_t dlb_type,
    int *status)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_member_status_get(unit, port, dlb_type, status));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_ethertype_set(
    int unit,
    uint32_t flags,
    int ethertype_count,
    int *ethertype_array)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_ethertype_set(unit, flags, ethertype_count, ethertype_array));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_ethertype_get(
    int unit,
    int ethertype_count_max,
    uint32_t *flags,
    int *ethertype_array,
    int *ethertype_count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_ethertype_get(unit, ethertype_count_max, flags, ethertype_array, ethertype_count));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_control_info_value_validate(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    bcmint_dlb_ctrl_info_t **ctrl_info,
    bcmi_ltsw_dlb_control_type_t type,
    uint64_t value)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_control_info_value_validate(unit, dlb_type, ctrl_info, type, value));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_control_info_set(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    bcmint_dlb_ctrl_info_t **ctrl_info,
    bcmi_ltsw_dlb_control_type_t type,
    uint64_t value)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_control_info_set(unit, dlb_type, ctrl_info, type, value));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_control_info_get(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    bcmint_dlb_ctrl_info_t **ctrl_info,
    bcmi_ltsw_dlb_control_type_t type,
    uint64_t *value)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_control_info_get(unit, dlb_type, ctrl_info, type, value));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_control_type_validate(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    bcmi_ltsw_dlb_control_type_t type)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_control_type_validate(unit, dlb_type, type));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_control_value_validate(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    bcmi_ltsw_dlb_control_type_t type,
    uint64_t value)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_control_value_validate(unit, dlb_type, type, value));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_control_set(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    bcmi_ltsw_dlb_control_type_t type,
    uint64_t value)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_control_set(unit, dlb_type, type, value));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_control_get(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    bcmi_ltsw_dlb_control_type_t type,
    uint64_t *value)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_control_get(unit, dlb_type, type, value));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_stat_set(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    bcmi_ltsw_dlb_id_t dlb_id,
    bcmi_ltsw_dlb_stat_t *stat)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_stat_set(unit, dlb_type, dlb_id, stat));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_dlb_stat_get(
    int unit,
    bcmi_ltsw_dlb_type_t dlb_type,
    bcmi_ltsw_dlb_id_t dlb_id,
    bool sync_mode,
    bcmi_ltsw_dlb_stat_t *stat)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dlb_drv[unit].dlb_stat_get(unit, dlb_type, dlb_id, sync_mode, stat));

exit:
    SHR_FUNC_EXIT();
}

