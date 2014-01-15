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
#ifndef __LINUX_SMP_H
#define __LINUX_SMP_H
#include <linux/errno.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/list.h>
#include <linux/cpumask.h>
#include <linux/init.h>
#include <linux/irqflags.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef void (*smp_call_func_t)(void *info);
struct call_single_data {
 smp_call_func_t func;
 void *info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 flags;
};
#define raw_smp_processor_id() 0
#define smp_call_function(func, info, wait)   (up_smp_call_function(func, info))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define on_each_cpu_mask(mask, func, info, wait)   do {   if (cpumask_test_cpu(0, (mask))) {   local_irq_disable();   (func)(info);   local_irq_enable();   }   } while (0)
#define on_each_cpu_cond(cond_func, func, info, wait, gfp_flags)  do {   void *__info = (info);   preempt_disable();   if ((cond_func)(0, __info)) {   local_irq_disable();   (func)(__info);   local_irq_enable();   }   preempt_enable();   } while (0)
#define smp_prepare_boot_cpu() do {} while (0)
#define smp_call_function_many(mask, func, info, wait)   (up_smp_call_function(func, info))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define smp_processor_id() raw_smp_processor_id()
#define get_cpu() ({ preempt_disable(); smp_processor_id(); })
#define put_cpu() preempt_enable()
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
