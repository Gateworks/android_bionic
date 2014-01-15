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
#ifndef __LINUX_SEMAPHORE_H
#define __LINUX_SEMAPHORE_H
#include <linux/list.h>
#include <linux/spinlock.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct semaphore {
 raw_spinlock_t lock;
 unsigned int count;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __SEMAPHORE_INITIALIZER(name, n)  {   .lock = __RAW_SPIN_LOCK_UNLOCKED((name).lock),   .count = n,   .wait_list = LIST_HEAD_INIT((name).wait_list),  }
#define DEFINE_SEMAPHORE(name)   struct semaphore name = __SEMAPHORE_INITIALIZER(name, 1)
#endif
