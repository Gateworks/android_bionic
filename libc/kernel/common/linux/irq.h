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
#ifndef _LINUX_IRQ_H
#define _LINUX_IRQ_H
#include <linux/smp.h>
#include <linux/linkage.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/cache.h>
#include <linux/spinlock.h>
#include <linux/cpumask.h>
#include <linux/gfp.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/irqreturn.h>
#include <linux/irqnr.h>
#include <linux/errno.h>
#include <linux/topology.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/wait.h>
#include <asm/irq.h>
#include <asm/ptrace.h>
#include <asm/irq_regs.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct seq_file;
struct module;
struct irq_desc;
struct irq_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef void (*irq_flow_handler_t)(unsigned int irq,
 struct irq_desc *desc);
typedef void (*irq_preflow_handler_t)(struct irq_data *data);
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IRQ_TYPE_NONE = 0x00000000,
 IRQ_TYPE_EDGE_RISING = 0x00000001,
 IRQ_TYPE_EDGE_FALLING = 0x00000002,
 IRQ_TYPE_EDGE_BOTH = (IRQ_TYPE_EDGE_FALLING | IRQ_TYPE_EDGE_RISING),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IRQ_TYPE_LEVEL_HIGH = 0x00000004,
 IRQ_TYPE_LEVEL_LOW = 0x00000008,
 IRQ_TYPE_LEVEL_MASK = (IRQ_TYPE_LEVEL_LOW | IRQ_TYPE_LEVEL_HIGH),
 IRQ_TYPE_SENSE_MASK = 0x0000000f,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IRQ_TYPE_DEFAULT = IRQ_TYPE_SENSE_MASK,
 IRQ_TYPE_PROBE = 0x00000010,
 IRQ_LEVEL = (1 << 8),
 IRQ_PER_CPU = (1 << 9),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IRQ_NOPROBE = (1 << 10),
 IRQ_NOREQUEST = (1 << 11),
 IRQ_NOAUTOEN = (1 << 12),
 IRQ_NO_BALANCING = (1 << 13),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IRQ_MOVE_PCNTXT = (1 << 14),
 IRQ_NESTED_THREAD = (1 << 15),
 IRQ_NOTHREAD = (1 << 16),
 IRQ_PER_CPU_DEVID = (1 << 17),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define IRQF_MODIFY_MASK   (IRQ_TYPE_SENSE_MASK | IRQ_NOPROBE | IRQ_NOREQUEST |   IRQ_NOAUTOEN | IRQ_MOVE_PCNTXT | IRQ_LEVEL | IRQ_NO_BALANCING |   IRQ_PER_CPU | IRQ_NESTED_THREAD | IRQ_NOTHREAD | IRQ_PER_CPU_DEVID)
#define IRQ_NO_BALANCING_MASK (IRQ_PER_CPU | IRQ_NO_BALANCING)
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IRQ_SET_MASK_OK = 0,
 IRQ_SET_MASK_OK_NOCOPY,
};
struct msi_desc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct irq_domain;
struct irq_data {
 unsigned int irq;
 unsigned long hwirq;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int node;
 unsigned int state_use_accessors;
 struct irq_chip *chip;
 struct irq_domain *domain;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *handler_data;
 void *chip_data;
 struct msi_desc *msi_desc;
 cpumask_var_t affinity;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
 IRQD_TRIGGER_MASK = 0xf,
 IRQD_SETAFFINITY_PENDING = (1 << 8),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IRQD_NO_BALANCING = (1 << 10),
 IRQD_PER_CPU = (1 << 11),
 IRQD_AFFINITY_SET = (1 << 12),
 IRQD_LEVEL = (1 << 13),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IRQD_WAKEUP_STATE = (1 << 14),
 IRQD_MOVE_PCNTXT = (1 << 15),
 IRQD_IRQ_DISABLED = (1 << 16),
 IRQD_IRQ_MASKED = (1 << 17),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IRQD_IRQ_INPROGRESS = (1 << 18),
};
struct irq_chip {
 const char *name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int (*irq_startup)(struct irq_data *data);
 void (*irq_shutdown)(struct irq_data *data);
 void (*irq_enable)(struct irq_data *data);
 void (*irq_disable)(struct irq_data *data);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*irq_ack)(struct irq_data *data);
 void (*irq_mask)(struct irq_data *data);
 void (*irq_mask_ack)(struct irq_data *data);
 void (*irq_unmask)(struct irq_data *data);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*irq_eoi)(struct irq_data *data);
 int (*irq_set_affinity)(struct irq_data *data, const struct cpumask *dest, bool force);
 int (*irq_retrigger)(struct irq_data *data);
 int (*irq_set_type)(struct irq_data *data, unsigned int flow_type);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*irq_set_wake)(struct irq_data *data, unsigned int on);
 void (*irq_bus_lock)(struct irq_data *data);
 void (*irq_bus_sync_unlock)(struct irq_data *data);
 void (*irq_cpu_online)(struct irq_data *data);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*irq_cpu_offline)(struct irq_data *data);
 void (*irq_suspend)(struct irq_data *data);
 void (*irq_resume)(struct irq_data *data);
 void (*irq_pm_shutdown)(struct irq_data *data);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*irq_print_chip)(struct irq_data *data, struct seq_file *p);
 unsigned long flags;
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IRQCHIP_SET_TYPE_MASKED = (1 << 0),
 IRQCHIP_EOI_IF_HANDLED = (1 << 1),
 IRQCHIP_MASK_ON_SUSPEND = (1 << 2),
 IRQCHIP_ONOFFLINE_ENABLED = (1 << 3),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IRQCHIP_SKIP_SET_WAKE = (1 << 4),
 IRQCHIP_ONESHOT_SAFE = (1 << 5),
};
#include <linux/irqdesc.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/hw_irq.h>
#ifndef NR_IRQS_LEGACY
#define NR_IRQS_LEGACY 0
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef ARCH_IRQ_INIT_FLAGS
#define ARCH_IRQ_INIT_FLAGS 0
#endif
#define IRQ_DEFAULT_INIT_FLAGS ARCH_IRQ_INIT_FLAGS
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct irqaction;
#endif
