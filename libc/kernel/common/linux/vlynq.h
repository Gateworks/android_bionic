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
#ifndef __VLYNQ_H__
#define __VLYNQ_H__
#include <linux/device.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct module;
#define VLYNQ_NUM_IRQS 32
struct vlynq_mapping {
 u32 size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 offset;
};
enum vlynq_divisor {
 vlynq_div_auto = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 vlynq_ldiv1,
 vlynq_ldiv2,
 vlynq_ldiv3,
 vlynq_ldiv4,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 vlynq_ldiv5,
 vlynq_ldiv6,
 vlynq_ldiv7,
 vlynq_ldiv8,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 vlynq_rdiv1,
 vlynq_rdiv2,
 vlynq_rdiv3,
 vlynq_rdiv4,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 vlynq_rdiv5,
 vlynq_rdiv6,
 vlynq_rdiv7,
 vlynq_rdiv8,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 vlynq_div_external
};
struct vlynq_device_id {
 u32 id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum vlynq_divisor divisor;
 unsigned long driver_data;
};
struct vlynq_regs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct vlynq_device {
 u32 id, dev_id;
 int local_irq;
 int remote_irq;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum vlynq_divisor divisor;
 u32 regs_start, regs_end;
 u32 mem_start, mem_end;
 u32 irq_start, irq_end;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int irq;
 int enabled;
 struct vlynq_regs *local;
 struct vlynq_regs *remote;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device dev;
};
struct vlynq_driver {
 char *name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct vlynq_device_id *id_table;
 int (*probe)(struct vlynq_device *dev, struct vlynq_device_id *id);
 void (*remove)(struct vlynq_device *dev);
 struct device_driver driver;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct plat_vlynq_ops {
 int (*on)(struct vlynq_device *dev);
 void (*off)(struct vlynq_device *dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
