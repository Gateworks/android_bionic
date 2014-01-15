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
#ifndef LINUX_MSI_H
#define LINUX_MSI_H
#include <linux/kobject.h>
#include <linux/list.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msi_msg {
 u32 address_lo;
 u32 address_hi;
 u32 data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct irq_data;
struct msi_desc;
struct msi_desc {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 __u8 is_msix : 1;
 __u8 multiple: 3;
 __u8 maskbit : 1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 is_64 : 1;
 __u8 pos;
 __u16 entry_nr;
 unsigned default_irq;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } msi_attrib;
 u32 masked;
 unsigned int irq;
 unsigned int nvec_used;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 void __iomem *mask_base;
 u8 mask_pos;
 };
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pci_dev *dev;
 struct msi_msg msg;
 struct kobject kobj;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msi_chip {
 struct module *owner;
 struct device *dev;
 struct device_node *of_node;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*setup_irq)(struct msi_chip *chip, struct pci_dev *dev,
 struct msi_desc *desc);
 void (*teardown_irq)(struct msi_chip *chip, unsigned int irq);
 int (*check_device)(struct msi_chip *chip, struct pci_dev *dev,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int nvec, int type);
};
#endif
