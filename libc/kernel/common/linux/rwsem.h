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
#ifndef _LINUX_RWSEM_H
#define _LINUX_RWSEM_H
#include <linux/linkage.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/kernel.h>
#include <linux/list.h>
#include <linux/spinlock.h>
#include <linux/atomic.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct rw_semaphore;
struct rw_semaphore {
 long count;
 raw_spinlock_t wait_lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#include <asm/rwsem.h>
#define __RWSEM_DEP_MAP_INIT(lockname)
#define __RWSEM_INITIALIZER(name)   { RWSEM_UNLOCKED_VALUE,   __RAW_SPIN_LOCK_UNLOCKED(name.wait_lock),   LIST_HEAD_INIT((name).wait_list)   __RWSEM_DEP_MAP_INIT(name) }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DECLARE_RWSEM(name)   struct rw_semaphore name = __RWSEM_INITIALIZER(name)
#define init_rwsem(sem)  do {   static struct lock_class_key __key;     __init_rwsem((sem), #sem, &__key);  } while (0)
#define down_read_nested(sem, subclass) down_read(sem)
#define down_write_nest_lock(sem, nest_lock) down_write(sem)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define down_write_nested(sem, subclass) down_write(sem)
#define down_read_non_owner(sem) down_read(sem)
#define up_read_non_owner(sem) up_read(sem)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
