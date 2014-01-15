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
#ifndef _LINUX_IRQNR_H
#define _LINUX_IRQNR_H
#include <uapi/linux/irqnr.h>
#include <asm/irq.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define nr_irqs NR_IRQS
#define irq_to_desc(irq) (&irq_desc[irq])
#define for_each_irq_desc(irq, desc)   for (irq = 0; irq < nr_irqs; irq++)
#define for_each_irq_desc_reverse(irq, desc)   for (irq = nr_irqs - 1; irq >= 0; irq--)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define for_each_irq_nr(irq)   for (irq = 0; irq < nr_irqs; irq++)
#endif
