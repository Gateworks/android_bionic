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
#ifndef _LINUX_WAIT_H
#define _LINUX_WAIT_H
#include <linux/list.h>
#include <linux/stddef.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/spinlock.h>
#include <asm/current.h>
#include <uapi/linux/wait.h>
typedef struct __wait_queue wait_queue_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef int (*wait_queue_func_t)(wait_queue_t *wait, unsigned mode, int flags, void *key);
struct __wait_queue {
 unsigned int flags;
#define WQ_FLAG_EXCLUSIVE 0x01
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 wait_queue_func_t func;
};
struct wait_bit_key {
 void *flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int bit_nr;
};
struct wait_bit_queue {
 struct wait_bit_key key;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 wait_queue_t wait;
};
struct __wait_queue_head {
 spinlock_t lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
typedef struct __wait_queue_head wait_queue_head_t;
struct task_struct;
#define __WAITQUEUE_INITIALIZER(name, tsk) {   .private = tsk,   .func = default_wake_function,   .task_list = { NULL, NULL } }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DECLARE_WAITQUEUE(name, tsk)   wait_queue_t name = __WAITQUEUE_INITIALIZER(name, tsk)
#define __WAIT_QUEUE_HEAD_INITIALIZER(name) {   .lock = __SPIN_LOCK_UNLOCKED(name.lock),   .task_list = { &(name).task_list, &(name).task_list } }
#define DECLARE_WAIT_QUEUE_HEAD(name)   wait_queue_head_t name = __WAIT_QUEUE_HEAD_INITIALIZER(name)
#define __WAIT_BIT_KEY_INITIALIZER(word, bit)   { .flags = word, .bit_nr = bit, }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define init_waitqueue_head(q)   do {   static struct lock_class_key __key;     __init_waitqueue_head((q), #q, &__key);   } while (0)
#define DECLARE_WAIT_QUEUE_HEAD_ONSTACK(name) DECLARE_WAIT_QUEUE_HEAD(name)
#define wake_up(x) __wake_up(x, TASK_NORMAL, 1, NULL)
#define wake_up_nr(x, nr) __wake_up(x, TASK_NORMAL, nr, NULL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define wake_up_all(x) __wake_up(x, TASK_NORMAL, 0, NULL)
#define wake_up_locked(x) __wake_up_locked((x), TASK_NORMAL, 1)
#define wake_up_all_locked(x) __wake_up_locked((x), TASK_NORMAL, 0)
#define wake_up_interruptible(x) __wake_up(x, TASK_INTERRUPTIBLE, 1, NULL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define wake_up_interruptible_nr(x, nr) __wake_up(x, TASK_INTERRUPTIBLE, nr, NULL)
#define wake_up_interruptible_all(x) __wake_up(x, TASK_INTERRUPTIBLE, 0, NULL)
#define wake_up_interruptible_sync(x) __wake_up_sync((x), TASK_INTERRUPTIBLE, 1)
#define wake_up_poll(x, m)   __wake_up(x, TASK_NORMAL, 1, (void *) (m))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define wake_up_locked_poll(x, m)   __wake_up_locked_key((x), TASK_NORMAL, (void *) (m))
#define wake_up_interruptible_poll(x, m)   __wake_up(x, TASK_INTERRUPTIBLE, 1, (void *) (m))
#define wake_up_interruptible_sync_poll(x, m)   __wake_up_sync_key((x), TASK_INTERRUPTIBLE, 1, (void *) (m))
#define __wait_event(wq, condition)  do {   DEFINE_WAIT(__wait);     for (;;) {   prepare_to_wait(&wq, &__wait, TASK_UNINTERRUPTIBLE);   if (condition)   break;   schedule();   }   finish_wait(&wq, &__wait);  } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define wait_event(wq, condition)  do {   if (condition)   break;   __wait_event(wq, condition);  } while (0)
#define __wait_event_timeout(wq, condition, ret)  do {   DEFINE_WAIT(__wait);     for (;;) {   prepare_to_wait(&wq, &__wait, TASK_UNINTERRUPTIBLE);   if (condition)   break;   ret = schedule_timeout(ret);   if (!ret)   break;   }   if (!ret && (condition))   ret = 1;   finish_wait(&wq, &__wait);  } while (0)
#define wait_event_timeout(wq, condition, timeout)  ({   long __ret = timeout;   if (!(condition))   __wait_event_timeout(wq, condition, __ret);   __ret;  })
#define __wait_event_interruptible(wq, condition, ret)  do {   DEFINE_WAIT(__wait);     for (;;) {   prepare_to_wait(&wq, &__wait, TASK_INTERRUPTIBLE);   if (condition)   break;   if (!signal_pending(current)) {   schedule();   continue;   }   ret = -ERESTARTSYS;   break;   }   finish_wait(&wq, &__wait);  } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define wait_event_interruptible(wq, condition)  ({   int __ret = 0;   if (!(condition))   __wait_event_interruptible(wq, condition, __ret);   __ret;  })
#define __wait_event_interruptible_timeout(wq, condition, ret)  do {   DEFINE_WAIT(__wait);     for (;;) {   prepare_to_wait(&wq, &__wait, TASK_INTERRUPTIBLE);   if (condition)   break;   if (!signal_pending(current)) {   ret = schedule_timeout(ret);   if (!ret)   break;   continue;   }   ret = -ERESTARTSYS;   break;   }   if (!ret && (condition))   ret = 1;   finish_wait(&wq, &__wait);  } while (0)
#define wait_event_interruptible_timeout(wq, condition, timeout)  ({   long __ret = timeout;   if (!(condition))   __wait_event_interruptible_timeout(wq, condition, __ret);   __ret;  })
#define __wait_event_hrtimeout(wq, condition, timeout, state)  ({   int __ret = 0;   DEFINE_WAIT(__wait);   struct hrtimer_sleeper __t;     hrtimer_init_on_stack(&__t.timer, CLOCK_MONOTONIC,   HRTIMER_MODE_REL);   hrtimer_init_sleeper(&__t, current);   if ((timeout).tv64 != KTIME_MAX)   hrtimer_start_range_ns(&__t.timer, timeout,   current->timer_slack_ns,   HRTIMER_MODE_REL);     for (;;) {   prepare_to_wait(&wq, &__wait, state);   if (condition)   break;   if (state == TASK_INTERRUPTIBLE &&   signal_pending(current)) {   __ret = -ERESTARTSYS;   break;   }   if (!__t.task) {   __ret = -ETIME;   break;   }   schedule();   }     hrtimer_cancel(&__t.timer);   destroy_hrtimer_on_stack(&__t.timer);   finish_wait(&wq, &__wait);   __ret;  })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define wait_event_hrtimeout(wq, condition, timeout)  ({   int __ret = 0;   if (!(condition))   __ret = __wait_event_hrtimeout(wq, condition, timeout,   TASK_UNINTERRUPTIBLE);   __ret;  })
#define wait_event_interruptible_hrtimeout(wq, condition, timeout)  ({   long __ret = 0;   if (!(condition))   __ret = __wait_event_hrtimeout(wq, condition, timeout,   TASK_INTERRUPTIBLE);   __ret;  })
#define __wait_event_interruptible_exclusive(wq, condition, ret)  do {   DEFINE_WAIT(__wait);     for (;;) {   prepare_to_wait_exclusive(&wq, &__wait,   TASK_INTERRUPTIBLE);   if (condition) {   finish_wait(&wq, &__wait);   break;   }   if (!signal_pending(current)) {   schedule();   continue;   }   ret = -ERESTARTSYS;   abort_exclusive_wait(&wq, &__wait,   TASK_INTERRUPTIBLE, NULL);   break;   }  } while (0)
#define wait_event_interruptible_exclusive(wq, condition)  ({   int __ret = 0;   if (!(condition))   __wait_event_interruptible_exclusive(wq, condition, __ret);  __ret;  })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __wait_event_interruptible_locked(wq, condition, exclusive, irq)  ({   int __ret = 0;   DEFINE_WAIT(__wait);   if (exclusive)   __wait.flags |= WQ_FLAG_EXCLUSIVE;   do {   if (likely(list_empty(&__wait.task_list)))   __add_wait_queue_tail(&(wq), &__wait);   set_current_state(TASK_INTERRUPTIBLE);   if (signal_pending(current)) {   __ret = -ERESTARTSYS;   break;   }   if (irq)   spin_unlock_irq(&(wq).lock);   else   spin_unlock(&(wq).lock);   schedule();   if (irq)   spin_lock_irq(&(wq).lock);   else   spin_lock(&(wq).lock);   } while (!(condition));   __remove_wait_queue(&(wq), &__wait);   __set_current_state(TASK_RUNNING);   __ret;  })
#define wait_event_interruptible_locked(wq, condition)   ((condition)   ? 0 : __wait_event_interruptible_locked(wq, condition, 0, 0))
#define wait_event_interruptible_locked_irq(wq, condition)   ((condition)   ? 0 : __wait_event_interruptible_locked(wq, condition, 0, 1))
#define wait_event_interruptible_exclusive_locked(wq, condition)   ((condition)   ? 0 : __wait_event_interruptible_locked(wq, condition, 1, 0))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define wait_event_interruptible_exclusive_locked_irq(wq, condition)   ((condition)   ? 0 : __wait_event_interruptible_locked(wq, condition, 1, 1))
#define __wait_event_killable(wq, condition, ret)  do {   DEFINE_WAIT(__wait);     for (;;) {   prepare_to_wait(&wq, &__wait, TASK_KILLABLE);   if (condition)   break;   if (!fatal_signal_pending(current)) {   schedule();   continue;   }   ret = -ERESTARTSYS;   break;   }   finish_wait(&wq, &__wait);  } while (0)
#define wait_event_killable(wq, condition)  ({   int __ret = 0;   if (!(condition))   __wait_event_killable(wq, condition, __ret);   __ret;  })
#define __wait_event_lock_irq(wq, condition, lock, cmd)  do {   DEFINE_WAIT(__wait);     for (;;) {   prepare_to_wait(&wq, &__wait, TASK_UNINTERRUPTIBLE);   if (condition)   break;   spin_unlock_irq(&lock);   cmd;   schedule();   spin_lock_irq(&lock);   }   finish_wait(&wq, &__wait);  } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define wait_event_lock_irq_cmd(wq, condition, lock, cmd)  do {   if (condition)   break;   __wait_event_lock_irq(wq, condition, lock, cmd);  } while (0)
#define wait_event_lock_irq(wq, condition, lock)  do {   if (condition)   break;   __wait_event_lock_irq(wq, condition, lock, );  } while (0)
#define __wait_event_interruptible_lock_irq(wq, condition,   lock, ret, cmd)  do {   DEFINE_WAIT(__wait);     for (;;) {   prepare_to_wait(&wq, &__wait, TASK_INTERRUPTIBLE);   if (condition)   break;   if (signal_pending(current)) {   ret = -ERESTARTSYS;   break;   }   spin_unlock_irq(&lock);   cmd;   schedule();   spin_lock_irq(&lock);   }   finish_wait(&wq, &__wait);  } while (0)
#define wait_event_interruptible_lock_irq_cmd(wq, condition, lock, cmd)  ({   int __ret = 0;     if (!(condition))   __wait_event_interruptible_lock_irq(wq, condition,   lock, __ret, cmd);   __ret;  })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define wait_event_interruptible_lock_irq(wq, condition, lock)  ({   int __ret = 0;     if (!(condition))   __wait_event_interruptible_lock_irq(wq, condition,   lock, __ret, );   __ret;  })
#define __wait_event_interruptible_lock_irq_timeout(wq, condition,   lock, ret)  do {   DEFINE_WAIT(__wait);     for (;;) {   prepare_to_wait(&wq, &__wait, TASK_INTERRUPTIBLE);   if (condition)   break;   if (signal_pending(current)) {   ret = -ERESTARTSYS;   break;   }   spin_unlock_irq(&lock);   ret = schedule_timeout(ret);   spin_lock_irq(&lock);   if (!ret)   break;   }   finish_wait(&wq, &__wait);  } while (0)
#define wait_event_interruptible_lock_irq_timeout(wq, condition, lock,   timeout)  ({   int __ret = timeout;     if (!(condition))   __wait_event_interruptible_lock_irq_timeout(   wq, condition, lock, __ret);   __ret;  })
#define DEFINE_WAIT_FUNC(name, function)   wait_queue_t name = {   .private = current,   .func = function,   .task_list = LIST_HEAD_INIT((name).task_list),   }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DEFINE_WAIT(name) DEFINE_WAIT_FUNC(name, autoremove_wake_function)
#define DEFINE_WAIT_BIT(name, word, bit)   struct wait_bit_queue name = {   .key = __WAIT_BIT_KEY_INITIALIZER(word, bit),   .wait = {   .private = current,   .func = wake_bit_function,   .task_list =   LIST_HEAD_INIT((name).wait.task_list),   },   }
#define init_wait(wait)   do {   (wait)->private = current;   (wait)->func = autoremove_wake_function;   INIT_LIST_HEAD(&(wait)->task_list);   (wait)->flags = 0;   } while (0)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
