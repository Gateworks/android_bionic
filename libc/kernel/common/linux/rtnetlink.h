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
#ifndef __LINUX_RTNETLINK_H
#define __LINUX_RTNETLINK_H
#include <linux/mutex.h>
#include <linux/netdevice.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <uapi/linux/rtnetlink.h>
#define rcu_dereference_rtnl(p)   rcu_dereference_check(p, lockdep_rtnl_is_held())
#define rtnl_dereference(p)   rcu_dereference_protected(p, lockdep_rtnl_is_held())
#define ASSERT_RTNL() do {   if (unlikely(!rtnl_is_locked())) {   printk(KERN_ERR "RTNL: assertion failed at %s (%d)\n",   __FILE__, __LINE__);   dump_stack();   }  } while(0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
