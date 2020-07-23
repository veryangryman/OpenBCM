/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm_int/ltsw/mbcm/nat.h>
#include <bcm_int/ltsw/xgs/nat.h>

#include <shr/shr_debug.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_L3

/******************************************************************************
 * Private functions
 */

static int
bcm56990_a0_ltsw_nat_init(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_nat_init(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_nat_detach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_nat_detach(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_nat_pub_info_get(
    int unit,
    bcmint_nat_pub_info_t *nat_pub)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_nat_pub_info_get(unit, nat_pub));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_nat_egress_add(
    int unit,
    bcm_l3_nat_egress_t *nat_info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_nat_egress_add(unit, nat_info));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_nat_egress_destroy(
    int unit,
    bcm_l3_nat_egress_t *nat_info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_nat_egress_destroy(unit, nat_info));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_nat_egress_get(
    int unit,
    bcm_l3_nat_egress_t *nat_info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_nat_egress_get(unit, nat_info));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_nat_egress_traverse(
    int unit,
    uint32_t flags,
    bcm_l3_nat_egress_traverse_cb cb,
    void *user_data)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_nat_egress_traverse(unit, flags, cb, user_data));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_nat_ingress_add(
    int unit,
    bcm_l3_nat_ingress_t *nat_info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_nat_ingress_add(unit, nat_info));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_nat_ingress_delete(
    int unit,
    bcm_l3_nat_ingress_t *nat_info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_nat_ingress_delete(unit, nat_info));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_nat_ingress_find(
    int unit,
    bcm_l3_nat_ingress_t *nat_info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_nat_ingress_find(unit, nat_info));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_nat_ingress_delete_all(
    int unit,
    bcm_l3_nat_ingress_t *nat_info)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_nat_ingress_delete_all(unit, nat_info));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_nat_ingress_traverse(
    int unit,
    uint32_t flags,
    bcm_l3_nat_ingress_traverse_cb cb,
    void *user_data)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (xgs_ltsw_nat_ingress_traverse(unit, flags, cb, user_data));

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Nat driver function variable for bcm56990_a0 device.
 */
static mbcm_ltsw_nat_drv_t bcm56990_a0_ltsw_nat_drv = {
    .nat_init = bcm56990_a0_ltsw_nat_init,
    .nat_detach = bcm56990_a0_ltsw_nat_detach,
    .nat_pub_info_get = bcm56990_a0_ltsw_nat_pub_info_get,
    .nat_egress_add = bcm56990_a0_ltsw_nat_egress_add,
    .nat_egress_destroy = bcm56990_a0_ltsw_nat_egress_destroy,
    .nat_egress_get = bcm56990_a0_ltsw_nat_egress_get,
    .nat_egress_traverse = bcm56990_a0_ltsw_nat_egress_traverse,
    .nat_ingress_add = bcm56990_a0_ltsw_nat_ingress_add,
    .nat_ingress_delete = bcm56990_a0_ltsw_nat_ingress_delete,
    .nat_ingress_find = bcm56990_a0_ltsw_nat_ingress_find,
    .nat_ingress_delete_all = bcm56990_a0_ltsw_nat_ingress_delete_all,
    .nat_ingress_traverse = bcm56990_a0_ltsw_nat_ingress_traverse
};

/******************************************************************************
 * Public functions
 */

int
bcm56990_a0_ltsw_nat_drv_attach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_nat_drv_set(unit, &bcm56990_a0_ltsw_nat_drv));

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Attach functions for other members.
 */
#define BCM56990_A0_DRV_ATTACH_ENTRY(_dn,_vn,_pf,_pd,_r0) \
int _vn##_ltsw_nat_drv_attach(int unit) \
{ \
    SHR_FUNC_ENTER(unit); \
    SHR_IF_ERR_VERBOSE_EXIT \
        (mbcm_ltsw_nat_drv_set(unit, &bcm56990_a0_ltsw_nat_drv)); \
exit: \
    SHR_FUNC_EXIT(); \
}
#include "sub_devlist.h"
