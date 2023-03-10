/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2016 MediaTek Inc.
 */

#ifndef __SSPM_EXCEP_H__
#define __SSPM_EXCEP_H__

#include <linux/types.h>

enum sspm_excep_id {
	SSPM_NR_EXCEP,
};

extern void sspm_log_coredump_recv(unsigned int exists);
extern void sspm_aed(enum sspm_excep_id type);
extern unsigned int __init sspm_coredump_init(phys_addr_t start,
	phys_addr_t limit);
extern int __init sspm_coredump_init_done(void);
extern int sspm_excep_init(void);

#endif
