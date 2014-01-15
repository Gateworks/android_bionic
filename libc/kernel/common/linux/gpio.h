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
#ifndef __LINUX_GPIO_H
#define __LINUX_GPIO_H
#include <linux/errno.h>
#define GPIOF_DIR_OUT (0 << 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GPIOF_DIR_IN (1 << 0)
#define GPIOF_INIT_LOW (0 << 1)
#define GPIOF_INIT_HIGH (1 << 1)
#define GPIOF_IN (GPIOF_DIR_IN)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GPIOF_OUT_INIT_LOW (GPIOF_DIR_OUT | GPIOF_INIT_LOW)
#define GPIOF_OUT_INIT_HIGH (GPIOF_DIR_OUT | GPIOF_INIT_HIGH)
#define GPIOF_OPEN_DRAIN (1 << 2)
#define GPIOF_OPEN_SOURCE (1 << 3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GPIOF_EXPORT (1 << 4)
#define GPIOF_EXPORT_CHANGEABLE (1 << 5)
#define GPIOF_EXPORT_DIR_FIXED (GPIOF_EXPORT)
#define GPIOF_EXPORT_DIR_CHANGEABLE (GPIOF_EXPORT | GPIOF_EXPORT_CHANGEABLE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct gpio {
 unsigned gpio;
 unsigned long flags;
 const char *label;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#include <linux/kernel.h>
#include <linux/types.h>
#include <linux/errno.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/bug.h>
struct device;
struct gpio_chip;
struct device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
