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
#ifndef _LINUX_IOC3_H
#define _LINUX_IOC3_H
#include <asm/sn/ioc3.h>
#define IOC3_MAX_SUBMODULES 32
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IOC3_CLASS_NONE 0
#define IOC3_CLASS_BASE_IP27 1
#define IOC3_CLASS_BASE_IP30 2
#define IOC3_CLASS_MENET_123 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IOC3_CLASS_MENET_4 4
#define IOC3_CLASS_CADDUO 5
#define IOC3_CLASS_SERIAL 6
struct ioc3_driver_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int id;
 unsigned long pma;
 struct ioc3 __iomem *vma;
 struct pci_dev *pdev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int dual_irq;
 int irq_io, irq_eth;
 spinlock_t gpio_lock;
 unsigned int gpdr_shadow;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char nic_part[32];
 char nic_serial[16];
 char nic_mac[6];
 int class;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *data[IOC3_MAX_SUBMODULES];
 int active[IOC3_MAX_SUBMODULES];
 spinlock_t ir_lock;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ioc3_submodule {
 char *name;
 struct module *owner;
 int ethernet;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*probe) (struct ioc3_submodule *, struct ioc3_driver_data *);
 int (*remove) (struct ioc3_submodule *, struct ioc3_driver_data *);
 int id;
 unsigned int irq_mask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int reset_mask;
 int (*intr) (struct ioc3_submodule *, struct ioc3_driver_data *, unsigned int);
 void *data;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IOC3_W_IES 0
#define IOC3_W_IEC 1
#endif
