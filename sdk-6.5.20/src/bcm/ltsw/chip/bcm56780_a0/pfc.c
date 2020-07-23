/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm_int/control.h>

#include <bcm_int/ltsw/mbcm/pfc.h>

#include <bcm_int/ltsw/tm/pfc.h>
#include <shr/shr_debug.h>
#include <sal/sal_libc.h>
#include <sal/sal_mutex.h>
#include <bcmltd/chip/bcmltd_str.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_COSQ

/******************************************************************************
 * Private functions
 */


static int
cosq_pfc_recovery_action_get(
    int unit,
    int *action,
    const char **sym_val,
    bool get_sym)
{
    if (get_sym) {
        *sym_val = (*action == 0) ? TRANSMITs : DISCARDs;
    } else {
        if (sal_strcasecmp(*sym_val, TRANSMITs) == 0) {
            *action = 0;
        } else {
            *action = 1;
        }
    }

    return SHR_E_NONE;
}

static int
cosq_pfc_detection_timer_get(
    int unit,
    int *timer,
    const char **sym_val,
    bool get_sym)
{
    if (get_sym) {
        *sym_val = (*timer == 0) ? TIME_1_MSs :
                   ((*timer == 1) ? TIME_10_MSs : TIME_100_MSs);
    } else {
        if (sal_strcasecmp(*sym_val, TIME_1_MSs) == 0) {
            *timer = 0;
        } else if (sal_strcasecmp(*sym_val, TIME_10_MSs) == 0) {
            *timer = 1;
        } else {
            /* TIME_100_MSs */
            *timer = 2;
        }
    }

    return SHR_E_NONE;
}


static int
bcm56780_a0_ltsw_pfc_class_config_profile_get(
    int unit,
    int profile_id,
    int max_count,
    bcm_cosq_pfc_class_map_config_t *config_array,
    int *count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_pfc_class_config_profile_get(unit, profile_id, max_count,
                                              config_array, count));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_pfc_class_config_profile_set(
    int unit,
    int profile_id,
    int count,
    bcm_cosq_pfc_class_map_config_t *config_array)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_pfc_class_config_profile_set(unit, profile_id, count,
                                              config_array));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_pfc_priority_mapping_profile_get(
    int unit,
    int profile_id,
    int array_max,
    int *pg_array,
    int *array_count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_pfc_priority_mapping_profile_get(unit, profile_id, array_max,
                                                  pg_array, array_count));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_pfc_priority_mapping_profile_set(
    int unit,
    int profile_id,
    int array_count,
    int *pg_array)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_pfc_priority_mapping_profile_set(unit, profile_id, array_count,
                                                  pg_array));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_pfc_group_num_get(
    int unit,
    int port,
    int *arg)
{
    return SHR_E_UNAVAIL;
}

static int
bcm56780_a0_ltsw_pfc_init(int unit)
{
    static tm_ltsw_pfc_chip_driver_t bcm56780_a0_pfc_drv_cb = {
        .cosq_pfc_recovery_action_get = cosq_pfc_recovery_action_get,
        .cosq_pfc_detection_timer_get = cosq_pfc_detection_timer_get,
    };

    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_pfc_chip_driver_register(unit, &bcm56780_a0_pfc_drv_cb));

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_pfc_init(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_pfc_detach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_pfc_detach(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_pfc_rx_config_set(
    int unit,
    int lport,
    int pfc_enable)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_pfc_rx_config_set(unit, lport, pfc_enable));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_pfc_tx_config_set(
    int unit,
    int lport,
    int pfc_enable)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_pfc_tx_config_set(unit, lport, pfc_enable));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_pfc_port_pg_pfc_set(
    int unit,
    bcm_port_t port,
    int pg,
    int pfc_enable)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_pfc_port_pg_pfc_set(unit, port, pg, pfc_enable));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_pfc_port_pg_pfc_get(
    int unit,
    bcm_port_t port,
    int pg,
    int *pfc_enable)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_pfc_port_pg_pfc_get(unit, port, pg, pfc_enable));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_pfc_config_profile_id_set(
    int unit,
    int lport,
    int profile_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_pfc_config_profile_id_set(unit, lport, profile_id));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_pfc_deadlock_recovery_action_set(
    int unit,
    int action)
{
    SHR_FUNC_ENTER(unit);

    if(action < 0 || action > 1) {
        SHR_IF_ERR_VERBOSE_EXIT(SHR_E_PARAM);
    }

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_pfc_deadlock_recovery_action_set(unit, action));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_pfc_deadlock_recovery_action_get(
    int unit,
    int *action)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_pfc_deadlock_recovery_action_get(unit, action));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_pfc_deadlock_control_get(
    int unit,
    bcm_port_t port,
    int pfc_priority,
    bcm_cosq_pfc_deadlock_control_t type,
    int *arg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_pfc_deadlock_control_get(unit, port, pfc_priority, type, arg));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_pfc_deadlock_control_set(
    int unit,
    bcm_port_t port,
    int pfc_priority,
    bcm_cosq_pfc_deadlock_control_t type,
    int arg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_pfc_deadlock_control_set(unit, port, pfc_priority, type, arg));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_pfc_deadlock_info_get(
    int unit,
    int pfc_priority,
    bcm_cosq_pfc_deadlock_info_t *pfc_deadlock_info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_pfc_deadlock_info_get(unit, pfc_priority, pfc_deadlock_info));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_pfc_deadlock_queue_status_get(
    int unit,
    bcm_gport_t gport,
    uint8_t *deadlock_status)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_pfc_deadlock_queue_status_get(unit, gport, deadlock_status));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_pfc_deadlock_recovery_event_register(
    int unit,
    bcm_cosq_pfc_deadlock_recovery_event_cb_t callback,
    void *userdata)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_pfc_deadlock_recovery_event_register(unit, callback, userdata));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_ltsw_pfc_deadlock_recovery_event_unregister(
    int unit,
    bcm_cosq_pfc_deadlock_recovery_event_cb_t callback,
    void *userdata)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_pfc_deadlock_recovery_event_unregister(unit, callback, userdata));

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Pfc driver function variable for bcm56780_a0 device.
 */
static mbcm_ltsw_pfc_drv_t bcm56780_a0_ltsw_pfc_drv = {
    .pfc_class_config_profile_get = bcm56780_a0_ltsw_pfc_class_config_profile_get,
    .pfc_class_config_profile_set = bcm56780_a0_ltsw_pfc_class_config_profile_set,
    .pfc_priority_mapping_profile_get = bcm56780_a0_ltsw_pfc_priority_mapping_profile_get,
    .pfc_priority_mapping_profile_set = bcm56780_a0_ltsw_pfc_priority_mapping_profile_set,
    .pfc_group_num_get = bcm56780_a0_ltsw_pfc_group_num_get,
    .pfc_init = bcm56780_a0_ltsw_pfc_init,
    .pfc_detach = bcm56780_a0_ltsw_pfc_detach,
    .pfc_rx_config_set = bcm56780_a0_ltsw_pfc_rx_config_set,
    .pfc_tx_config_set = bcm56780_a0_ltsw_pfc_tx_config_set,
    .pfc_port_pg_pfc_set = bcm56780_a0_ltsw_pfc_port_pg_pfc_set,
    .pfc_port_pg_pfc_get = bcm56780_a0_ltsw_pfc_port_pg_pfc_get,
    .pfc_config_profile_id_set = bcm56780_a0_ltsw_pfc_config_profile_id_set,
    .pfc_deadlock_recovery_action_set = bcm56780_a0_ltsw_pfc_deadlock_recovery_action_set,
    .pfc_deadlock_recovery_action_get = bcm56780_a0_ltsw_pfc_deadlock_recovery_action_get,
    .pfc_deadlock_control_get = bcm56780_a0_ltsw_pfc_deadlock_control_get,
    .pfc_deadlock_control_set = bcm56780_a0_ltsw_pfc_deadlock_control_set,
    .pfc_deadlock_info_get = bcm56780_a0_ltsw_pfc_deadlock_info_get,
    .pfc_deadlock_queue_status_get = bcm56780_a0_ltsw_pfc_deadlock_queue_status_get,
    .pfc_deadlock_recovery_event_register = bcm56780_a0_ltsw_pfc_deadlock_recovery_event_register,
    .pfc_deadlock_recovery_event_unregister = bcm56780_a0_ltsw_pfc_deadlock_recovery_event_unregister
};

/******************************************************************************
 * Public functions
 */

int
bcm56780_a0_ltsw_pfc_drv_attach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_pfc_drv_set(unit, &bcm56780_a0_ltsw_pfc_drv));

exit:
    SHR_FUNC_EXIT();
}

