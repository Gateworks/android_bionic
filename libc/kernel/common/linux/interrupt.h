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
#ifndef _LINUX_INTERRUPT_H
#define _LINUX_INTERRUPT_H
#include <linux/kernel.h>
#include <linux/linkage.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/bitops.h>
#include <linux/preempt.h>
#include <linux/cpumask.h>
#include <linux/irqreturn.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/irqnr.h>
#include <linux/hardirq.h>
#include <linux/irqflags.h>
#include <linux/smp.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/percpu.h>
#include <linux/hrtimer.h>
#include <linux/kref.h>
#include <linux/workqueue.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/atomic.h>
#include <asm/ptrace.h>
#define IRQF_TRIGGER_NONE 0x00000000
#define IRQF_TRIGGER_RISING 0x00000001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IRQF_TRIGGER_FALLING 0x00000002
#define IRQF_TRIGGER_HIGH 0x00000004
#define IRQF_TRIGGER_LOW 0x00000008
#define IRQF_TRIGGER_MASK (IRQF_TRIGGER_HIGH | IRQF_TRIGGER_LOW |   IRQF_TRIGGER_RISING | IRQF_TRIGGER_FALLING)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IRQF_TRIGGER_PROBE 0x00000010
#define IRQF_DISABLED 0x00000020
#define IRQF_SHARED 0x00000080
#define IRQF_PROBE_SHARED 0x00000100
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __IRQF_TIMER 0x00000200
#define IRQF_PERCPU 0x00000400
#define IRQF_NOBALANCING 0x00000800
#define IRQF_IRQPOLL 0x00001000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IRQF_ONESHOT 0x00002000
#define IRQF_NO_SUSPEND 0x00004000
#define IRQF_FORCE_RESUME 0x00008000
#define IRQF_NO_THREAD 0x00010000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IRQF_EARLY_RESUME 0x00020000
#define IRQF_TIMER (__IRQF_TIMER | IRQF_NO_SUSPEND | IRQF_NO_THREAD)
enum {
 IRQC_IS_HARDIRQ = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IRQC_IS_NESTED,
};
typedef irqreturn_t (*irq_handler_t)(int, void *);
struct irqaction {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 irq_handler_t handler;
 void *dev_id;
 void __percpu *percpu_dev_id;
 struct irqaction *next;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 irq_handler_t thread_fn;
 struct task_struct *thread;
 unsigned int irq;
 unsigned int flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long thread_flags;
 unsigned long thread_mask;
 const char *name;
 struct proc_dir_entry *dir;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} ____cacheline_internodealigned_in_smp;
struct device;
#define local_irq_enable_in_hardirq() local_irq_enable()
#define disable_irq_nosync_lockdep(irq) disable_irq_nosync(irq)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define disable_irq_nosync_lockdep_irqsave(irq, flags)   disable_irq_nosync(irq)
#define disable_irq_lockdep(irq) disable_irq(irq)
#define enable_irq_lockdep(irq) enable_irq(irq)
#define enable_irq_lockdep_irqrestore(irq, flags)   enable_irq(irq)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define force_irqthreads (0)
#ifndef __ARCH_SET_SOFTIRQ_PENDING
#define set_softirq_pending(x) (local_softirq_pending() = (x))
#define or_softirq_pending(x) (local_softirq_pending() |= (x))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef hard_irq_disable
#define hard_irq_disable() do { } while(0)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum
{
 HI_SOFTIRQ=0,
 TIMER_SOFTIRQ,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NET_TX_SOFTIRQ,
 NET_RX_SOFTIRQ,
 BLOCK_SOFTIRQ,
 BLOCK_IOPOLL_SOFTIRQ,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TASKLET_SOFTIRQ,
 SCHED_SOFTIRQ,
 HRTIMER_SOFTIRQ,
 RCU_SOFTIRQ,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 NR_SOFTIRQS
};
#define SOFTIRQ_STOP_IDLE_MASK (~(1 << RCU_SOFTIRQ))
struct softirq_action
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
{
 void (*action)(struct softirq_action *);
};
struct tasklet_struct
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
{
 struct tasklet_struct *next;
 unsigned long state;
 atomic_t count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*func)(unsigned long);
 unsigned long data;
};
#define DECLARE_TASKLET(name, func, data)  struct tasklet_struct name = { NULL, 0, ATOMIC_INIT(0), func, data }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DECLARE_TASKLET_DISABLED(name, func, data)  struct tasklet_struct name = { NULL, 0, ATOMIC_INIT(1), func, data }
enum
{
 TASKLET_STATE_SCHED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TASKLET_STATE_RUN
};
#define tasklet_trylock(t) 1
#define tasklet_unlock_wait(t) do { } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define tasklet_unlock(t) do { } while (0)
struct tasklet_hrtimer {
 struct hrtimer timer;
 struct tasklet_struct tasklet;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum hrtimer_restart (*function)(struct hrtimer *);
};
struct seq_file;
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
