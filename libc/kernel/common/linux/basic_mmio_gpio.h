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
#ifndef __BASIC_MMIO_GPIO_H
#define __BASIC_MMIO_GPIO_H
#include <linux/gpio.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/compiler.h>
#include <linux/spinlock_types.h>
struct bgpio_pdata {
 int base;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int ngpio;
};
struct device;
struct bgpio_chip {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct gpio_chip gc;
 unsigned long (*read_reg)(void __iomem *reg);
 void (*write_reg)(void __iomem *reg, unsigned long data);
 void __iomem *reg_dat;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void __iomem *reg_set;
 void __iomem *reg_clr;
 void __iomem *reg_dir;
 int bits;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long (*pin2mask)(struct bgpio_chip *bgc, unsigned int pin);
 spinlock_t lock;
 unsigned long data;
 unsigned long dir;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define BGPIOF_BIG_ENDIAN BIT(0)
#define BGPIOF_UNREADABLE_REG_SET BIT(1)
#define BGPIOF_UNREADABLE_REG_DIR BIT(2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BGPIOF_BIG_ENDIAN_BYTE_ORDER BIT(3)
#endif
