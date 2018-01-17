/* Copyright (c) 2013-2018, Linaro Limited
 * All rights reserved.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 */

#include "config.h"

#include <odp/api/plat/ticketlock_inlines.h>
#include <odp/api/spec/ticketlock.h>

void odp_ticketlock_init(odp_ticketlock_t *ticketlock)
{
	odp_atomic_init_u32(&ticketlock->next_ticket, 0);
	odp_atomic_init_u32(&ticketlock->cur_ticket, 0);
}

/* Include non-inlined versions of API functions */
#if ODP_ABI_COMPAT == 1
#include <odp/api/plat/ticketlock_inlines_api.h>
#endif
