/* OpenVAS
* $Id$
* Description: plugs_req.c header.
*
* Authors: 
* Renaud Deraison <deraison@nessus.org> (Original pre-fork development)
* Tim Brown (Initial fork)
* Laban Mwangi (Renaming work)
* Tarik El-Yassem (Headers section)
*
* Copyright:
* Portions Copyright (C) 2006 Software in the Public Interest, Inc.
* Based on work Copyright (C) 1998 - 2006 Tenable Network Security, Inc.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2,
* as published by the Free Software Foundation
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef PLUGINS_REQUIREMENTS_H__
#define PLUGINS_REQUIREMENTS_H__

#include <gvm/util/kb.h>             /* for struct kb_item */

char *requirements_plugin (kb_t, nvti_t *);

int mandatory_requirements_met (kb_t, nvti_t *);

#endif
