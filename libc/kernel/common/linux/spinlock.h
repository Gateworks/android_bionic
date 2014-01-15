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
#ifndef __LINUX_SPINLOCK_H
#define __LINUX_SPINLOCK_H
#include <linux/typecheck.h>
#include <linux/preempt.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/linkage.h>
#include <linux/compiler.h>
#include <linux/irqflags.h>
#include <linux/thread_info.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/kernel.h>
#include <linux/stringify.h>
#include <linux/bottom_half.h>
#include <asm/barrier.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LOCK_SECTION_NAME ".text..lock."KBUILD_BASENAME
#define LOCK_SECTION_START(extra)   ".subsection 1\n\t"   extra   ".ifndef " LOCK_SECTION_NAME "\n\t"   LOCK_SECTION_NAME ":\n\t"   ".endif\n"
#define LOCK_SECTION_END   ".previous\n\t"
#define __lockfunc __attribute__((section(".spinlock.text")))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/spinlock_types.h>
#include <linux/spinlock_up.h>
#define raw_spin_lock_init(lock)   do { *(lock) = __RAW_SPIN_LOCK_UNLOCKED(lock); } while (0)
#define raw_spin_is_locked(lock) arch_spin_is_locked(&(lock)->raw_lock)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef arch_spin_is_contended
#define raw_spin_is_contended(lock) arch_spin_is_contended(&(lock)->raw_lock)
#else
#define raw_spin_is_contended(lock) (((void)(lock), 0))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef ARCH_HAS_SMP_MB_AFTER_LOCK
#endif
#define raw_spin_unlock_wait(lock) arch_spin_unlock_wait(&(lock)->raw_lock)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define raw_spin_trylock(lock) __cond_lock(lock, _raw_spin_trylock(lock))
#define raw_spin_lock(lock) _raw_spin_lock(lock)
#define raw_spin_lock_nested(lock, subclass) _raw_spin_lock(lock)
#define raw_spin_lock_nest_lock(lock, nest_lock) _raw_spin_lock(lock)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define raw_spin_lock_irqsave(lock, flags)   do {   typecheck(unsigned long, flags);   _raw_spin_lock_irqsave(lock, flags);   } while (0)
#define raw_spin_lock_irqsave_nested(lock, flags, subclass)   raw_spin_lock_irqsave(lock, flags)
#define raw_spin_lock_irq(lock) _raw_spin_lock_irq(lock)
#define raw_spin_lock_bh(lock) _raw_spin_lock_bh(lock)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define raw_spin_unlock(lock) _raw_spin_unlock(lock)
#define raw_spin_unlock_irq(lock) _raw_spin_unlock_irq(lock)
#define raw_spin_unlock_irqrestore(lock, flags)   do {   typecheck(unsigned long, flags);   _raw_spin_unlock_irqrestore(lock, flags);   } while (0)
#define raw_spin_unlock_bh(lock) _raw_spin_unlock_bh(lock)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define raw_spin_trylock_bh(lock)   __cond_lock(lock, _raw_spin_trylock_bh(lock))
#define raw_spin_trylock_irq(lock)  ({   local_irq_disable();   raw_spin_trylock(lock) ?   1 : ({ local_irq_enable(); 0; });  })
#define raw_spin_trylock_irqsave(lock, flags)  ({   local_irq_save(flags);   raw_spin_trylock(lock) ?   1 : ({ local_irq_restore(flags); 0; });  })
#define raw_spin_can_lock(lock) (!raw_spin_is_locked(lock))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/rwlock.h>
#include <linux/spinlock_api_up.h>
#define spin_lock_init(_lock)  do {   spinlock_check(_lock);   raw_spin_lock_init(&(_lock)->rlock);  } while (0)
#define spin_lock_nested(lock, subclass)  do {   raw_spin_lock_nested(spinlock_check(lock), subclass);  } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define spin_lock_nest_lock(lock, nest_lock)  do {   raw_spin_lock_nest_lock(spinlock_check(lock), nest_lock);  } while (0)
#define spin_lock_irqsave(lock, flags)  do {   raw_spin_lock_irqsave(spinlock_check(lock), flags);  } while (0)
#define spin_lock_irqsave_nested(lock, flags, subclass)  do {   raw_spin_lock_irqsave_nested(spinlock_check(lock), flags, subclass);  } while (0)
#define spin_trylock_irqsave(lock, flags)  ({   raw_spin_trylock_irqsave(spinlock_check(lock), flags);  })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define assert_spin_locked(lock) assert_raw_spin_locked(&(lock)->rlock)
#include <linux/atomic.h>
#define atomic_dec_and_lock(atomic, lock)   __cond_lock(lock, _atomic_dec_and_lock(atomic, lock))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
