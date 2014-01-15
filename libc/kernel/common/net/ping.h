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
#ifndef _PING_H
#define _PING_H
#include <net/netns/hash.h>
#define PING_HTABLE_SIZE 64
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PING_HTABLE_MASK (PING_HTABLE_SIZE-1)
#define ping_portaddr_for_each_entry(__sk, node, list)   hlist_nulls_for_each_entry(__sk, node, list, sk_nulls_node)
#define GID_T_MAX (((gid_t)~0U) >> 1)
struct ping_table {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct hlist_nulls_head hash[PING_HTABLE_SIZE];
 rwlock_t lock;
};
struct ping_iter_state {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct seq_net_private p;
 int bucket;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
