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
#ifndef __LINUX_RCUPDATE_H
#define __LINUX_RCUPDATE_H
#include <linux/types.h>
#include <linux/cache.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/spinlock.h>
#include <linux/threads.h>
#include <linux/cpumask.h>
#include <linux/seqlock.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/lockdep.h>
#include <linux/completion.h>
#include <linux/debugobjects.h>
#include <linux/bug.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/compiler.h>
#define do_trace_rcu_torture_read(rcutorturename, rhp, secs, c_old, c)   do { } while (0)
#define UINT_CMP_GE(a, b) (UINT_MAX / 2 >= (a) - (b))
#define UINT_CMP_LT(a, b) (UINT_MAX / 2 < (a) - (b))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ULONG_CMP_GE(a, b) (ULONG_MAX / 2 >= (a) - (b))
#define ULONG_CMP_LT(a, b) (ULONG_MAX / 2 < (a) - (b))
#define ulong2long(a) (*(long *)(&(a)))
#define call_rcu call_rcu_sched
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct notifier_block;
#define RCU_NONIDLE(a)   do {   rcu_irq_enter();   do { a; } while (0);   rcu_irq_exit();   } while (0)
typedef void call_rcu_func_t(struct rcu_head *head,
 void (*func)(struct rcu_head *head));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define rcu_lock_acquire(a) do { } while (0)
#define rcu_lock_release(a) do { } while (0)
#define rcu_lockdep_assert(c, s) do { } while (0)
#define rcu_sleep_check() do { } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define rcu_dereference_sparse(p, space)
#define __rcu_access_pointer(p, space)   ({   typeof(*p) *_________p1 = (typeof(*p)*__force )ACCESS_ONCE(p);   rcu_dereference_sparse(p, space);   ((typeof(*p) __force __kernel *)(_________p1));   })
#define __rcu_dereference_check(p, c, space)   ({   typeof(*p) *_________p1 = (typeof(*p)*__force )ACCESS_ONCE(p);   rcu_lockdep_assert(c, "suspicious rcu_dereference_check()"   " usage");   rcu_dereference_sparse(p, space);   smp_read_barrier_depends();   ((typeof(*p) __force __kernel *)(_________p1));   })
#define __rcu_dereference_protected(p, c, space)   ({   rcu_lockdep_assert(c, "suspicious rcu_dereference_protected()"   " usage");   rcu_dereference_sparse(p, space);   ((typeof(*p) __force __kernel *)(p));   })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __rcu_access_index(p, space)   ({   typeof(p) _________p1 = ACCESS_ONCE(p);   rcu_dereference_sparse(p, space);   (_________p1);   })
#define __rcu_dereference_index_check(p, c)   ({   typeof(p) _________p1 = ACCESS_ONCE(p);   rcu_lockdep_assert(c,   "suspicious rcu_dereference_index_check()"   " usage");   smp_read_barrier_depends();   (_________p1);   })
#define __rcu_assign_pointer(p, v, space)   do {   smp_wmb();   (p) = (typeof(*v) __force space *)(v);   } while (0)
#define rcu_access_pointer(p) __rcu_access_pointer((p), __rcu)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define rcu_dereference_check(p, c)   __rcu_dereference_check((p), rcu_read_lock_held() || (c), __rcu)
#define rcu_dereference_bh_check(p, c)   __rcu_dereference_check((p), rcu_read_lock_bh_held() || (c), __rcu)
#define rcu_dereference_sched_check(p, c)   __rcu_dereference_check((p), rcu_read_lock_sched_held() || (c),   __rcu)
#define rcu_dereference_raw(p) rcu_dereference_check(p, 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define rcu_dereference_raw_notrace(p) __rcu_dereference_check((p), 1, __rcu)
#define rcu_access_index(p) __rcu_access_index((p), __rcu)
#define rcu_dereference_index_check(p, c)   __rcu_dereference_index_check((p), (c))
#define rcu_dereference_protected(p, c)   __rcu_dereference_protected((p), (c), __rcu)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define rcu_dereference(p) rcu_dereference_check(p, 0)
#define rcu_dereference_bh(p) rcu_dereference_bh_check(p, 0)
#define rcu_dereference_sched(p) rcu_dereference_sched_check(p, 0)
#define rcu_assign_pointer(p, v)   __rcu_assign_pointer((p), (v), __rcu)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RCU_INIT_POINTER(p, v)   do {   p = (typeof(*v) __force __rcu *)(v);   } while (0)
#define RCU_POINTER_INITIALIZER(p, v)   .p = (typeof(*v) __force __rcu *)(v)
#define __is_kfree_rcu_offset(offset) ((offset) < 4096)
#define __kfree_rcu(head, offset)   do {   BUILD_BUG_ON(!__is_kfree_rcu_offset(offset));   kfree_call_rcu(head, (void (*)(struct rcu_head *))(unsigned long)(offset));   } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define kfree_rcu(ptr, rcu_head)   __kfree_rcu(&((ptr)->rcu_head), offsetof(typeof(*(ptr)), rcu_head))
#endif
