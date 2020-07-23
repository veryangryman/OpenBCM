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

#include <bcm_int/ltsw/mbcm/uft.h>
#include <bcm_int/ltsw/mbcm/mbcm.h>

#include <shr/shr_debug.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_UFT

/*!
 * \brief The Uft mbcm drivers.
 */
static mbcm_ltsw_uft_drv_t mbcm_ltsw_uft_drv[BCM_MAX_NUM_UNITS];

/******************************************************************************
 * Private functions
 */

/******************************************************************************
 * Public functions
 */

int
mbcm_ltsw_uft_drv_set(
    int unit,
    mbcm_ltsw_uft_drv_t *drv)
{
    mbcm_ltsw_uft_drv_t *local = &mbcm_ltsw_uft_drv[unit];

    SHR_FUNC_ENTER(unit);


    mbcm_ltsw_drv_init((mbcm_ltsw_drv_t *)local,
                       (mbcm_ltsw_drv_t *)drv,
                       sizeof(*local)/MBCM_LTSW_FNPTR_SZ);

    SHR_EXIT();

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_uft_db_get(
    int unit,
    bcmint_uft_db_t *uft_db)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_uft_drv[unit].uft_db_get(unit, uft_db));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_uft_init(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_uft_drv[unit].uft_init(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_uft_detach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_uft_drv[unit].uft_detach(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_uft_mode_get(
    int unit,
    bcmi_ltsw_uft_mode_t *uft_mode)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_uft_drv[unit].uft_mode_get(unit, uft_mode));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_uft_multi_move_depth_set(
    int unit,
    bcm_switch_control_t type,
    int arg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_uft_drv[unit].uft_multi_move_depth_set(unit, type, arg));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_uft_multi_move_depth_get(
    int unit,
    bcm_switch_control_t type,
    int *arg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_uft_drv[unit].uft_multi_move_depth_get(unit, type, arg));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_uft_bank_info_get(
    int unit,
    bcm_switch_hash_bank_info_t *bank_info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_uft_drv[unit].uft_bank_info_get(unit, bank_info));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_uft_bank_multi_get(
    int unit,
    bcm_switch_hash_table_t hash_table,
    int array_size,
    bcm_switch_hash_bank_t *bank_array,
    int *num_banks)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_uft_drv[unit].uft_bank_multi_get(unit, hash_table, array_size, bank_array, num_banks));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_uft_table_multi_get(
    int unit,
    bcm_switch_hash_bank_t bank_num,
    int array_size,
    bcm_switch_hash_table_t *table_array,
    int *num_tables)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_uft_drv[unit].uft_table_multi_get(unit, bank_num, array_size, table_array, num_tables));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_uft_bank_control_set(
    int unit,
    bcm_switch_hash_bank_control_t *bank_control)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_uft_drv[unit].uft_bank_control_set(unit, bank_control));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_uft_bank_control_get(
    int unit,
    bcm_switch_hash_bank_control_t *bank_control)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_uft_drv[unit].uft_bank_control_get(unit, bank_control));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_uft_bank_config_set(
    int unit,
    bcm_switch_hash_table_t hash_table,
    uint32_t bank_num,
    int hash_type,
    uint32_t hash_offset)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_uft_drv[unit].uft_bank_config_set(unit, hash_table, bank_num, hash_type, hash_offset));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_uft_bank_config_get(
    int unit,
    bcm_switch_hash_table_t hash_table,
    uint32_t bank_num,
    int *hash_type,
    uint32_t *hash_offset)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_uft_drv[unit].uft_bank_config_get(unit, hash_table, bank_num, hash_type, hash_offset));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_uft_bank_max_get(
    int unit,
    bcm_switch_hash_table_t hash_table,
    uint32_t *bank_count)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_uft_drv[unit].uft_bank_max_get(unit, hash_table, bank_count));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_uft_var_db_get(
    int unit,
    bcmint_uft_var_db_t **uft_var_db)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_uft_drv[unit].uft_var_db_get(unit, uft_var_db));

exit:
    SHR_FUNC_EXIT();
}

