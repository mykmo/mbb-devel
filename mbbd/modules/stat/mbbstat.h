/* Copyright (C) 2010 Mikhail Osipov <mike.osipov@gmail.com> */
/* Published under the GNU General Public License V.2, see file COPYING */

#ifndef MBB_STAT_H
#define MBB_STAT_H

#include <glib.h>
#include <time.h>

#include "entry.h"
#include "inet.h"

struct mbb_stat_pool;

struct mbb_stat_pool *mbb_stat_pool_new(void);
gboolean mbb_stat_pool_init(void);
void mbb_stat_pool_save(struct mbb_stat_pool *pool);
void mbb_stat_pool_free(struct mbb_stat_pool *pool);

gboolean mbb_stat_db_wipe(time_t start, time_t end, GError **error);
void mbb_stat_feed(struct mbb_stat_pool *pool, struct mbb_stat_entry *entry);

static inline time_t mbb_stat_extract_hour(time_t t)
{
	return t - t % 3600;
}

#endif
