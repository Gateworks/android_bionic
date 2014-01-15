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
#ifndef _LINUX_TRACE_IRQFLAGS_H
#define _LINUX_TRACE_IRQFLAGS_H
#include <linux/typecheck.h>
#include <asm/irqflags.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define trace_hardirqs_on() do { } while (0)
#define trace_hardirqs_off() do { } while (0)
#define trace_softirqs_on(ip) do { } while (0)
#define trace_softirqs_off(ip) do { } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define trace_hardirq_context(p) 0
#define trace_softirq_context(p) 0
#define trace_hardirqs_enabled(p) 0
#define trace_softirqs_enabled(p) 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define trace_hardirq_enter() do { } while (0)
#define trace_hardirq_exit() do { } while (0)
#define lockdep_softirq_enter() do { } while (0)
#define lockdep_softirq_exit() do { } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INIT_TRACE_IRQFLAGS
#define stop_critical_timings() do { } while (0)
#define start_critical_timings() do { } while (0)
#define raw_local_irq_disable() arch_local_irq_disable()
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define raw_local_irq_enable() arch_local_irq_enable()
#define raw_local_irq_save(flags)   do {   typecheck(unsigned long, flags);   flags = arch_local_irq_save();   } while (0)
#define raw_local_irq_restore(flags)   do {   typecheck(unsigned long, flags);   arch_local_irq_restore(flags);   } while (0)
#define raw_local_save_flags(flags)   do {   typecheck(unsigned long, flags);   flags = arch_local_save_flags();   } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define raw_irqs_disabled_flags(flags)   ({   typecheck(unsigned long, flags);   arch_irqs_disabled_flags(flags);   })
#define raw_irqs_disabled() (arch_irqs_disabled())
#define raw_safe_halt() arch_safe_halt()
#define local_irq_enable() do { raw_local_irq_enable(); } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define local_irq_disable() do { raw_local_irq_disable(); } while (0)
#define local_irq_save(flags)   do {   raw_local_irq_save(flags);   } while (0)
#define local_irq_restore(flags) do { raw_local_irq_restore(flags); } while (0)
#define local_save_flags(flags) do { raw_local_save_flags(flags); } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define irqs_disabled() (raw_irqs_disabled())
#define irqs_disabled_flags(flags) (raw_irqs_disabled_flags(flags))
#define safe_halt() do { raw_safe_halt(); } while (0)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
