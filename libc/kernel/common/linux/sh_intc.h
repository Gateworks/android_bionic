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
#ifndef __SH_INTC_H
#define __SH_INTC_H
#include <linux/ioport.h>
#define INTC_NR_IRQS 1024
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define evt2irq(evt) (evt)
#define irq2evt(irq) (irq)
typedef unsigned char intc_enum;
struct intc_vect {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 intc_enum enum_id;
 unsigned short vect;
};
#define INTC_VECT(enum_id, vect) { enum_id, vect }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INTC_IRQ(enum_id, irq) INTC_VECT(enum_id, irq2evt(irq))
struct intc_group {
 intc_enum enum_id;
 intc_enum enum_ids[32];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define INTC_GROUP(enum_id, ids...) { enum_id, { ids } }
struct intc_subgroup {
 unsigned long reg, reg_width;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 intc_enum parent_id;
 intc_enum enum_ids[32];
};
struct intc_mask_reg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long set_reg, clr_reg, reg_width;
 intc_enum enum_ids[32];
};
struct intc_prio_reg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long set_reg, clr_reg, reg_width, field_width;
 intc_enum enum_ids[16];
};
struct intc_sense_reg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long reg, reg_width, field_width;
 intc_enum enum_ids[16];
};
#define INTC_SMP_BALANCING(reg)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define INTC_SMP(stride, nr)
struct intc_hw_desc {
 struct intc_vect *vectors;
 unsigned int nr_vectors;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct intc_group *groups;
 unsigned int nr_groups;
 struct intc_mask_reg *mask_regs;
 unsigned int nr_mask_regs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct intc_prio_reg *prio_regs;
 unsigned int nr_prio_regs;
 struct intc_sense_reg *sense_regs;
 unsigned int nr_sense_regs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct intc_mask_reg *ack_regs;
 unsigned int nr_ack_regs;
 struct intc_subgroup *subgroups;
 unsigned int nr_subgroups;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define _INTC_ARRAY(a) a, __same_type(a, NULL) ? 0 : sizeof(a)/sizeof(*a)
#define INTC_HW_DESC(vectors, groups, mask_regs,   prio_regs, sense_regs, ack_regs)  {   _INTC_ARRAY(vectors), _INTC_ARRAY(groups),   _INTC_ARRAY(mask_regs), _INTC_ARRAY(prio_regs),   _INTC_ARRAY(sense_regs), _INTC_ARRAY(ack_regs),  }
struct intc_desc {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char *name;
 struct resource *resource;
 unsigned int num_resources;
 intc_enum force_enable;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 intc_enum force_disable;
 bool skip_syscore_suspend;
 struct intc_hw_desc hw;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DECLARE_INTC_DESC(symbol, chipname, vectors, groups,   mask_regs, prio_regs, sense_regs)  struct intc_desc symbol __initdata = {   .name = chipname,   .hw = INTC_HW_DESC(vectors, groups, mask_regs,   prio_regs, sense_regs, NULL),  }
#define DECLARE_INTC_DESC_ACK(symbol, chipname, vectors, groups,   mask_regs, prio_regs, sense_regs, ack_regs)  struct intc_desc symbol __initdata = {   .name = chipname,   .hw = INTC_HW_DESC(vectors, groups, mask_regs,   prio_regs, sense_regs, ack_regs),  }
#endif
