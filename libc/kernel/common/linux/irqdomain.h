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
#ifndef _LINUX_IRQDOMAIN_H
#define _LINUX_IRQDOMAIN_H
#include <linux/types.h>
#include <linux/radix-tree.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct device_node;
struct irq_domain;
struct of_device_id;
#define NUM_ISA_INTERRUPTS 16
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct irq_domain_ops {
 int (*match)(struct irq_domain *d, struct device_node *node);
 int (*map)(struct irq_domain *d, unsigned int virq, irq_hw_number_t hw);
 void (*unmap)(struct irq_domain *d, unsigned int virq);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*xlate)(struct irq_domain *d, struct device_node *node,
 const u32 *intspec, unsigned int intsize,
 unsigned long *out_hwirq, unsigned int *out_type);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct irq_domain {
 unsigned int revmap_type;
 union {
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int size;
 unsigned int first_irq;
 irq_hw_number_t first_hwirq;
 } legacy;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 unsigned int size;
 unsigned int *revmap;
 } linear;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 unsigned int max_irq;
 } nomap;
 struct radix_tree_root tree;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } revmap_data;
 const struct irq_domain_ops *ops;
 void *host_data;
 irq_hw_number_t inval_irq;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device_node *of_node;
};
#endif
