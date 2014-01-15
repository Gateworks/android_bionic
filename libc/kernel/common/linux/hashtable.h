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
#ifndef _LINUX_HASHTABLE_H
#define _LINUX_HASHTABLE_H
#include <linux/list.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/kernel.h>
#include <linux/hash.h>
#include <linux/rculist.h>
#define DEFINE_HASHTABLE(name, bits)   struct hlist_head name[1 << (bits)] =   { [0 ... ((1 << (bits)) - 1)] = HLIST_HEAD_INIT }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DECLARE_HASHTABLE(name, bits)   struct hlist_head name[1 << (bits)]
#define HASH_SIZE(name) (ARRAY_SIZE(name))
#define hash_min(val, bits)   (sizeof(val) <= 4 ? hash_32(val, bits) : hash_long(val, bits))
#define hash_init(hashtable) __hash_init(hashtable, HASH_SIZE(hashtable))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
