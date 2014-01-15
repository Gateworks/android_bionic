/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _LINUX_FSCACHE_H
#define _LINUX_FSCACHE_H
#include <linux/fs.h>
#include <linux/list.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/pagemap.h>
#include <linux/pagevec.h>
#define fscache_available() (0)
#define fscache_cookie_valid(cookie) (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PageFsCache(page) PagePrivate2((page))
#define SetPageFsCache(page) SetPagePrivate2((page))
#define ClearPageFsCache(page) ClearPagePrivate2((page))
#define TestSetPageFsCache(page) TestSetPagePrivate2((page))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TestClearPageFsCache(page) TestClearPagePrivate2((page))
#define FSCACHE_INDEX_DEADFILL_PATTERN 0x79
struct pagevec;
struct fscache_cache_tag;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct fscache_cookie;
struct fscache_netfs;
typedef void (*fscache_rw_complete_t)(struct page *page,
 void *context,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int error);
enum fscache_checkaux {
 FSCACHE_CHECKAUX_OKAY,
 FSCACHE_CHECKAUX_NEEDS_UPDATE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FSCACHE_CHECKAUX_OBSOLETE,
};
struct fscache_cookie_def {
 char name[16];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t type;
#define FSCACHE_COOKIE_TYPE_INDEX 0
#define FSCACHE_COOKIE_TYPE_DATAFILE 1
 struct fscache_cache_tag *(*select_cache)(
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const void *parent_netfs_data,
 const void *cookie_netfs_data);
 uint16_t (*get_key)(const void *cookie_netfs_data,
 void *buffer,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t bufmax);
 void (*get_attr)(const void *cookie_netfs_data, uint64_t *size);
 uint16_t (*get_aux)(const void *cookie_netfs_data,
 void *buffer,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t bufmax);
 enum fscache_checkaux (*check_aux)(void *cookie_netfs_data,
 const void *data,
 uint16_t datalen);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*get_context)(void *cookie_netfs_data, void *context);
 void (*put_context)(void *cookie_netfs_data, void *context);
 void (*mark_page_cached)(void *cookie_netfs_data,
 struct address_space *mapping,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct page *page);
 void (*now_uncached)(void *cookie_netfs_data);
};
struct fscache_netfs {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t version;
 const char *name;
 struct fscache_cookie *primary_index;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
