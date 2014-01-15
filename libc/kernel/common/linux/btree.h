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
#ifndef BTREE_H
#define BTREE_H
#include <linux/kernel.h>
#include <linux/mempool.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct btree_head {
 unsigned long *node;
 mempool_t *mempool;
 int height;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct btree_geo;
#include <linux/btree-128.h>
#define BTREE_TYPE_SUFFIX l
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BTREE_TYPE_BITS BITS_PER_LONG
#define BTREE_TYPE_GEO &btree_geo32
#define BTREE_KEYTYPE unsigned long
#include <linux/btree-type.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define btree_for_each_safel(head, key, val)   for (val = btree_lastl(head, &key);   val;   val = btree_get_prevl(head, &key))
#define BTREE_TYPE_SUFFIX 32
#define BTREE_TYPE_BITS 32
#define BTREE_TYPE_GEO &btree_geo32
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BTREE_KEYTYPE u32
#include <linux/btree-type.h>
#define btree_for_each_safe32(head, key, val)   for (val = btree_last32(head, &key);   val;   val = btree_get_prev32(head, &key))
#define BTREE_TYPE_SUFFIX 64
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BTREE_TYPE_BITS 64
#define BTREE_TYPE_GEO &btree_geo64
#define BTREE_KEYTYPE u64
#include <linux/btree-type.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define btree_for_each_safe64(head, key, val)   for (val = btree_last64(head, &key);   val;   val = btree_get_prev64(head, &key))
#endif
