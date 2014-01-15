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
#ifndef _LINUX_RCULIST_BL_H
#define _LINUX_RCULIST_BL_H
#include <linux/list_bl.h>
#include <linux/rcupdate.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define hlist_bl_for_each_entry_rcu(tpos, pos, head, member)   for (pos = hlist_bl_first_rcu(head);   pos &&   ({ tpos = hlist_bl_entry(pos, typeof(*tpos), member); 1; });   pos = rcu_dereference_raw(pos->next))
#endif
