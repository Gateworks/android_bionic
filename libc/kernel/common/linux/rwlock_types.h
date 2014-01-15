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
#ifndef __LINUX_RWLOCK_TYPES_H
#define __LINUX_RWLOCK_TYPES_H
typedef struct {
 arch_rwlock_t raw_lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} rwlock_t;
#define RWLOCK_MAGIC 0xdeaf1eed
#define RW_DEP_MAP_INIT(lockname)
#define __RW_LOCK_UNLOCKED(lockname)   (rwlock_t) { .raw_lock = __ARCH_RW_LOCK_UNLOCKED,   RW_DEP_MAP_INIT(lockname) }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DEFINE_RWLOCK(x) rwlock_t x = __RW_LOCK_UNLOCKED(x)
#endif
