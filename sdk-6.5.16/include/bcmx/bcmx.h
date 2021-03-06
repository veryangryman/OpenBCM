/*
 * 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */

#ifndef __BCMX_BCMX_H__
#define __BCMX_BCMX_H__

#include <bcmx/types.h>
#include <bcmx/lport.h>
#include <bcmx/debug.h>

/* bcmx_unit_count */
extern int bcmx_unit_count;

extern int bcmx_init(void);

extern int bcmx_device_attach(
    int unit);

extern int bcmx_device_detach(
    int unit);

extern int bcmx_uport_create_callback_set(
    bcmx_uport_create_f create_callback);

#endif /* __BCMX_BCMX_H__ */
