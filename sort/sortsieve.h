/* $Id$ 

 Copyright (C) 2004 Aaron Stone aaron at serendipity dot cx

 This program is free software; you can redistribute it and/or 
 modify it under the terms of the GNU General Public License 
 as published by the Free Software Foundation; either 
 version 2 of the License, or (at your option) any later 
 version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software

 * Headers for sieve.c */

#ifndef _SIEVE_H
#define _SIEVE_H

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "sort.h"
#include "dbmailtypes.h"
#include <sieve2_interface.h>

#define MAX_SIEVE_SCRIPTNAME 100

int sortsieve_msgsort(u64_t useridnr, char *header, u64_t headersize,
		      u64_t messagesize, struct list *actions);
int sortsieve_unroll_action(sieve2_action_t * a, struct list *actions);
int sortsieve_script_validate(char *script, char **errmsg);

#endif
