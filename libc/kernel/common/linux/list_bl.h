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
#ifndef _LINUX_LIST_BL_H
#define _LINUX_LIST_BL_H
#include <linux/list.h>
#include <linux/bit_spinlock.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LIST_BL_LOCKMASK 0UL
#define LIST_BL_BUG_ON(x)
struct hlist_bl_head {
 struct hlist_bl_node *first;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct hlist_bl_node {
 struct hlist_bl_node *next, **pprev;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INIT_HLIST_BL_HEAD(ptr)   ((ptr)->first = NULL)
#define hlist_bl_entry(ptr, type, member) container_of(ptr,type,member)
#define hlist_bl_for_each_entry(tpos, pos, head, member)   for (pos = hlist_bl_first(head);   pos &&   ({ tpos = hlist_bl_entry(pos, typeof(*tpos), member); 1;});   pos = pos->next)
#define hlist_bl_for_each_entry_safe(tpos, pos, n, head, member)   for (pos = hlist_bl_first(head);   pos && ({ n = pos->next; 1; }) &&   ({ tpos = hlist_bl_entry(pos, typeof(*tpos), member); 1;});   pos = n)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
