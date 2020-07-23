/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm_int/ltsw/mbcm/dev_misc.h>
#include <bcm_int/ltsw/chip/bcm56780_a0/variant_dispatch.h>

#include <shr/shr_debug.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_COMMON

/******************************************************************************
 * Private functions
 */

/*!
 * \brief Dev_misc driver function variable for bcm56780_a0 device.
 */
static mbcm_ltsw_dev_misc_drv_t bcm56780_a0_ltsw_dev_misc_drv = {
    NULL
};

/******************************************************************************
 * Public functions
 */

int
bcm56780_a0_ltsw_dev_misc_drv_attach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_dev_misc_drv_set(unit, &bcm56780_a0_ltsw_dev_misc_drv));

    SHR_IF_ERR_VERBOSE_EXIT
        (bcm56780_a0_ltsw_variant_drv_attach(unit, BCM56780_A0_LTSW_VARIANT_DEV_MISC));
exit:
    SHR_FUNC_EXIT();
}

