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
#ifndef _LINUX_CLEANCACHE_H
#define _LINUX_CLEANCACHE_H
#include <linux/fs.h>
#include <linux/exportfs.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mm.h>
#define CLEANCACHE_KEY_MAX 6
struct cleancache_filekey {
 union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ino_t ino;
 __u32 fh[CLEANCACHE_KEY_MAX];
 u32 key[CLEANCACHE_KEY_MAX];
 } u;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct cleancache_ops {
 int (*init_fs)(size_t);
 int (*init_shared_fs)(char *uuid, size_t);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*get_page)(int, struct cleancache_filekey,
 pgoff_t, struct page *);
 void (*put_page)(int, struct cleancache_filekey,
 pgoff_t, struct page *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*invalidate_page)(int, struct cleancache_filekey, pgoff_t);
 void (*invalidate_inode)(int, struct cleancache_filekey);
 void (*invalidate_fs)(int);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cleancache_enabled (0)
#define cleancache_fs_enabled(_page) (0)
#define cleancache_fs_enabled_mapping(_page) (0)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
