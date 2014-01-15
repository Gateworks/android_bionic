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
#ifndef LLIST_H
#define LLIST_H
#include <linux/kernel.h>
#include <asm/cmpxchg.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct llist_head {
 struct llist_node *first;
};
struct llist_node {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct llist_node *next;
};
#define LLIST_HEAD_INIT(name) { NULL }
#define LLIST_HEAD(name) struct llist_head name = LLIST_HEAD_INIT(name)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define llist_entry(ptr, type, member)   container_of(ptr, type, member)
#define llist_for_each(pos, node)   for ((pos) = (node); pos; (pos) = (pos)->next)
#define llist_for_each_entry(pos, node, member)   for ((pos) = llist_entry((node), typeof(*(pos)), member);   &(pos)->member != NULL;   (pos) = llist_entry((pos)->member.next, typeof(*(pos)), member))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
