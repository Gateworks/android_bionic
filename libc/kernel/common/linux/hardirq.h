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
#ifndef LINUX_HARDIRQ_H
#define LINUX_HARDIRQ_H
#include <linux/preempt.h>
#include <linux/lockdep.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/ftrace_irq.h>
#include <linux/vtime.h>
#include <asm/hardirq.h>
#define PREEMPT_BITS 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SOFTIRQ_BITS 8
#define NMI_BITS 1
#define MAX_HARDIRQ_BITS 10
#ifndef HARDIRQ_BITS
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HARDIRQ_BITS MAX_HARDIRQ_BITS
#endif
#if HARDIRQ_BITS > MAX_HARDIRQ_BITS
#error HARDIRQ_BITS too high!
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define PREEMPT_SHIFT 0
#define SOFTIRQ_SHIFT (PREEMPT_SHIFT + PREEMPT_BITS)
#define HARDIRQ_SHIFT (SOFTIRQ_SHIFT + SOFTIRQ_BITS)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NMI_SHIFT (HARDIRQ_SHIFT + HARDIRQ_BITS)
#define __IRQ_MASK(x) ((1UL << (x))-1)
#define PREEMPT_MASK (__IRQ_MASK(PREEMPT_BITS) << PREEMPT_SHIFT)
#define SOFTIRQ_MASK (__IRQ_MASK(SOFTIRQ_BITS) << SOFTIRQ_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HARDIRQ_MASK (__IRQ_MASK(HARDIRQ_BITS) << HARDIRQ_SHIFT)
#define NMI_MASK (__IRQ_MASK(NMI_BITS) << NMI_SHIFT)
#define PREEMPT_OFFSET (1UL << PREEMPT_SHIFT)
#define SOFTIRQ_OFFSET (1UL << SOFTIRQ_SHIFT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HARDIRQ_OFFSET (1UL << HARDIRQ_SHIFT)
#define NMI_OFFSET (1UL << NMI_SHIFT)
#define SOFTIRQ_DISABLE_OFFSET (2 * SOFTIRQ_OFFSET)
#ifndef PREEMPT_ACTIVE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PREEMPT_ACTIVE_BITS 1
#define PREEMPT_ACTIVE_SHIFT (NMI_SHIFT + NMI_BITS)
#define PREEMPT_ACTIVE (__IRQ_MASK(PREEMPT_ACTIVE_BITS) << PREEMPT_ACTIVE_SHIFT)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if PREEMPT_ACTIVE < 1 << NMI_SHIFT + NMI_BITS
#error PREEMPT_ACTIVE is too low!
#endif
#define hardirq_count() (preempt_count() & HARDIRQ_MASK)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define softirq_count() (preempt_count() & SOFTIRQ_MASK)
#define irq_count() (preempt_count() & (HARDIRQ_MASK | SOFTIRQ_MASK   | NMI_MASK))
#define in_irq() (hardirq_count())
#define in_softirq() (softirq_count())
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define in_interrupt() (irq_count())
#define in_serving_softirq() (softirq_count() & SOFTIRQ_OFFSET)
#define in_nmi() (preempt_count() & NMI_MASK)
#define PREEMPT_CHECK_OFFSET 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define in_atomic() ((preempt_count() & ~PREEMPT_ACTIVE) != 0)
#define in_atomic_preempt_off()   ((preempt_count() & ~PREEMPT_ACTIVE) != PREEMPT_CHECK_OFFSET)
#define preemptible() 0
#define synchronize_irq(irq) barrier()
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __irq_enter()   do {   account_irq_enter_time(current);   add_preempt_count(HARDIRQ_OFFSET);   trace_hardirq_enter();   } while (0)
#define __irq_exit()   do {   trace_hardirq_exit();   account_irq_exit_time(current);   sub_preempt_count(HARDIRQ_OFFSET);   } while (0)
#define nmi_enter()   do {   lockdep_off();   ftrace_nmi_enter();   BUG_ON(in_nmi());   add_preempt_count(NMI_OFFSET + HARDIRQ_OFFSET);   rcu_nmi_enter();   trace_hardirq_enter();   } while (0)
#define nmi_exit()   do {   trace_hardirq_exit();   rcu_nmi_exit();   BUG_ON(!in_nmi());   sub_preempt_count(NMI_OFFSET + HARDIRQ_OFFSET);   ftrace_nmi_exit();   lockdep_on();   } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
