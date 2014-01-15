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
#ifndef __ASM_HARDIRQ_H
#define __ASM_HARDIRQ_H
#include <linux/cache.h>
#include <linux/threads.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/irq.h>
#define NR_IPI 7
#include <linux/irq_cpustat.h>
#define __inc_irq_stat(cpu, member) __IRQ_STAT(cpu, member)++
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __get_irq_stat(cpu, member) __IRQ_STAT(cpu, member)
#define smp_irq_stat_cpu(cpu) 0
#define arch_irq_stat_cpu smp_irq_stat_cpu
#define __ARCH_IRQ_EXIT_IRQS_DISABLED 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
