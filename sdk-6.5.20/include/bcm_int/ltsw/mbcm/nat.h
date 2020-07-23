/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMINT_LTSW_MBCM_NAT_H
#define BCMINT_LTSW_MBCM_NAT_H

#include <bcm/nat.h>

#include <bcm_int/ltsw/nat_int.h>

#include <sal/sal_types.h>

/*!
 * \brief Initialize NAT module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*nat_init_f)(int unit);

/*!
 * \brief De-initialize NAT module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*nat_detach_f)(int unit);

/*!
 * \brief Get the public info of NAT module.
 *
 * \param [in] unit Unit Number.
 * \param [out] nat_pub Returned nat public info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*nat_pub_info_get_f)(
    int unit,
    bcmint_nat_pub_info_t *nat_pub);

/*!
 * \brief Add an egress NAT translation entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] nat_info Egress NAT object pointer.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*nat_egress_add_f)(
    int unit,
    bcm_l3_nat_egress_t *nat_info);

/*!
 * \brief Destroy the egress NAT translation entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] nat_info Egress NAT object pointer.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*nat_egress_destroy_f)(
    int unit,
    bcm_l3_nat_egress_t *nat_info);

/*!
 * \brief Get the egress NAT translation entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] nat_info Egress NAT object pointer.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*nat_egress_get_f)(
    int unit,
    bcm_l3_nat_egress_t *nat_info);

/*!
 * \brief Traverse valid egress NAT translations and call the callback.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags BCM_L3_NAT_EGRESS_XXX flags.
 * \param [in] cb User callback function, called once per egress NAT transltion entry.
 * \param [in] user_data Cookie.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*nat_egress_traverse_f)(
    int unit,
    uint32_t flags,
    bcm_l3_nat_egress_traverse_cb cb,
    void *user_data);

/*!
 * \brief Add an ingress NAT table entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] nat_info Ingress NAT object pointer.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*nat_ingress_add_f)(
    int unit,
    bcm_l3_nat_ingress_t *nat_info);

/*!
 * \brief Delete the ingress NAT table entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] nat_info Ingress NAT object pointer.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*nat_ingress_delete_f)(
    int unit,
    bcm_l3_nat_ingress_t *nat_info);

/*!
 * \brief Get the ingress NAT table entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] nat_info Ingress NAT object pointer.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*nat_ingress_find_f)(
    int unit,
    bcm_l3_nat_ingress_t *nat_info);

/*!
 * \brief Delete the ingress NAT table entries specified by flags.
 *
 * \param [in] unit Unit Number.
 * \param [in] nat_info Only flags field is valid.These are used to figure out which table to clear.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*nat_ingress_delete_all_f)(
    int unit,
    bcm_l3_nat_ingress_t *nat_info);

/*!
 * \brief Traverse valid ingress NAT entriess and call the callback.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags BCM_L3_NAT_INGRESS_XXX flags.
 * \param [in] cb User callback function, called once per ingress NAT table entry.
 * \param [in] user_data Cookie.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*nat_ingress_traverse_f)(
    int unit,
    uint32_t flags,
    bcm_l3_nat_ingress_traverse_cb cb,
    void *user_data);

/*!
 * \brief Nat driver structure.
 */
typedef struct mbcm_ltsw_nat_drv_s {

    /*! Initialize NAT module. */
    nat_init_f nat_init;

    /*! De-initialize NAT module. */
    nat_detach_f nat_detach;

    /*! Get the public info of NAT module. */
    nat_pub_info_get_f nat_pub_info_get;

    /*! Add an egress NAT translation entry. */
    nat_egress_add_f nat_egress_add;

    /*! Destroy the egress NAT translation entry. */
    nat_egress_destroy_f nat_egress_destroy;

    /*! Get the egress NAT translation entry. */
    nat_egress_get_f nat_egress_get;

    /*! Traverse valid egress NAT translations and call the callback. */
    nat_egress_traverse_f nat_egress_traverse;

    /*! Add an ingress NAT table entry. */
    nat_ingress_add_f nat_ingress_add;

    /*! Delete the ingress NAT table entry. */
    nat_ingress_delete_f nat_ingress_delete;

    /*! Get the ingress NAT table entry. */
    nat_ingress_find_f nat_ingress_find;

    /*! Delete the ingress NAT table entries specified by flags. */
    nat_ingress_delete_all_f nat_ingress_delete_all;

    /*! Traverse valid ingress NAT entriess and call the callback. */
    nat_ingress_traverse_f nat_ingress_traverse;

} mbcm_ltsw_nat_drv_t;

/*!
 * \brief Set the NAT driver of the device.
 *
 * \param [in] unit Unit Number.
 * \param [in] drv Nat driver to set.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_nat_drv_set(
    int unit,
    mbcm_ltsw_nat_drv_t *drv);

/*!
 * \brief Initialize NAT module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_nat_init(int unit);

/*!
 * \brief De-initialize NAT module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_nat_detach(int unit);

/*!
 * \brief Get the public info of NAT module.
 *
 * \param [in] unit Unit Number.
 * \param [out] nat_pub Returned nat public info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_nat_pub_info_get(
    int unit,
    bcmint_nat_pub_info_t *nat_pub);

/*!
 * \brief Add an egress NAT translation entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] nat_info Egress NAT object pointer.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_nat_egress_add(
    int unit,
    bcm_l3_nat_egress_t *nat_info);

/*!
 * \brief Destroy the egress NAT translation entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] nat_info Egress NAT object pointer.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_nat_egress_destroy(
    int unit,
    bcm_l3_nat_egress_t *nat_info);

/*!
 * \brief Get the egress NAT translation entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] nat_info Egress NAT object pointer.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_nat_egress_get(
    int unit,
    bcm_l3_nat_egress_t *nat_info);

/*!
 * \brief Traverse valid egress NAT translations and call the callback.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags BCM_L3_NAT_EGRESS_XXX flags.
 * \param [in] cb User callback function, called once per egress NAT transltion entry.
 * \param [in] user_data Cookie.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_nat_egress_traverse(
    int unit,
    uint32_t flags,
    bcm_l3_nat_egress_traverse_cb cb,
    void *user_data);

/*!
 * \brief Add an ingress NAT table entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] nat_info Ingress NAT object pointer.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_nat_ingress_add(
    int unit,
    bcm_l3_nat_ingress_t *nat_info);

/*!
 * \brief Delete the ingress NAT table entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] nat_info Ingress NAT object pointer.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_nat_ingress_delete(
    int unit,
    bcm_l3_nat_ingress_t *nat_info);

/*!
 * \brief Get the ingress NAT table entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] nat_info Ingress NAT object pointer.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_nat_ingress_find(
    int unit,
    bcm_l3_nat_ingress_t *nat_info);

/*!
 * \brief Delete the ingress NAT table entries specified by flags.
 *
 * \param [in] unit Unit Number.
 * \param [in] nat_info Only flags field is valid.These are used to figure out which table to clear.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_nat_ingress_delete_all(
    int unit,
    bcm_l3_nat_ingress_t *nat_info);

/*!
 * \brief Traverse valid ingress NAT entriess and call the callback.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags BCM_L3_NAT_INGRESS_XXX flags.
 * \param [in] cb User callback function, called once per ingress NAT table entry.
 * \param [in] user_data Cookie.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_nat_ingress_traverse(
    int unit,
    uint32_t flags,
    bcm_l3_nat_ingress_traverse_cb cb,
    void *user_data);

#endif /* BCMINT_LTSW_MBCM_NAT_H */
