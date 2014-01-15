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
#ifndef __MTD_SPEAR_SMI_H
#define __MTD_SPEAR_SMI_H
#include <linux/types.h>
#include <linux/mtd/mtd.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mtd/partitions.h>
#include <linux/platform_device.h>
#include <linux/of.h>
#define MAX_NUM_FLASH_CHIP 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DEFINE_PARTS(n, of, s)  {   .name = n,   .offset = of,   .size = s,  }
struct spear_smi_flash_info {
 char *name;
 unsigned long mem_base;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long size;
 struct mtd_partition *partitions;
 int nr_partitions;
 u8 fast_mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct spear_smi_plat_data {
 unsigned long clk_rate;
 int num_flashes;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct spear_smi_flash_info *board_flash_info;
 struct device_node *np[MAX_NUM_FLASH_CHIP];
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
