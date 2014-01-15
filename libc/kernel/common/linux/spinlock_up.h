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
#ifndef __LINUX_SPINLOCK_UP_H
#define __LINUX_SPINLOCK_UP_H
#ifndef __LINUX_SPINLOCK_H
#error "please don't include this file directly"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#include <asm/processor.h>
#define arch_spin_is_locked(lock) ((void)(lock), 0)
#define arch_spin_lock(lock) do { barrier(); (void)(lock); } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define arch_spin_lock_flags(lock, flags) do { barrier(); (void)(lock); } while (0)
#define arch_spin_unlock(lock) do { barrier(); (void)(lock); } while (0)
#define arch_spin_trylock(lock) ({ barrier(); (void)(lock); 1; })
#define arch_spin_is_contended(lock) (((void)(lock), 0))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define arch_read_can_lock(lock) (((void)(lock), 1))
#define arch_write_can_lock(lock) (((void)(lock), 1))
#define arch_spin_unlock_wait(lock)   do { cpu_relax(); } while (arch_spin_is_locked(lock))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
