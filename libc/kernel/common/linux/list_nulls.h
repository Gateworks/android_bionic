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
#ifndef _LINUX_LIST_NULLS_H
#define _LINUX_LIST_NULLS_H
struct hlist_nulls_head {
 struct hlist_nulls_node *first;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct hlist_nulls_node {
 struct hlist_nulls_node *next, **pprev;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INIT_HLIST_NULLS_HEAD(ptr, nulls)   ((ptr)->first = (struct hlist_nulls_node *) (1UL | (((long)nulls) << 1)))
#define hlist_nulls_entry(ptr, type, member) container_of(ptr,type,member)
#define hlist_nulls_for_each_entry(tpos, pos, head, member)   for (pos = (head)->first;   (!is_a_nulls(pos)) &&   ({ tpos = hlist_nulls_entry(pos, typeof(*tpos), member); 1;});   pos = pos->next)
#define hlist_nulls_for_each_entry_from(tpos, pos, member)   for (; (!is_a_nulls(pos)) &&   ({ tpos = hlist_nulls_entry(pos, typeof(*tpos), member); 1;});   pos = pos->next)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
