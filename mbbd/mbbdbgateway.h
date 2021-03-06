/* Copyright (C) 2010 Mikhail Osipov <mike.osipov@gmail.com> */
/* Published under the GNU General Public License V.2, see file COPYING */

#ifndef MBB_DB_GATEWAY_H
#define MBB_DB_GATEWAY_H

#include <glib.h>

#include "inet.h"

gint mbb_db_gateway_add(gchar *name, ipv4_t ip, GError **error);
gboolean mbb_db_gateway_mod_name(gint id, gchar *name, GError **error);
gboolean mbb_db_gateway_drop(gint id, GError **error);

#endif
