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
#ifndef _LINUX_MISCDEVICE_H
#define _LINUX_MISCDEVICE_H
#include <linux/major.h>
#include <linux/list.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/types.h>
#define PSMOUSE_MINOR 1
#define MS_BUSMOUSE_MINOR 2
#define ATIXL_BUSMOUSE_MINOR 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ATARIMOUSE_MINOR 5
#define SUN_MOUSE_MINOR 6
#define APOLLO_MOUSE_MINOR 7
#define PC110PAD_MINOR 9
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WATCHDOG_MINOR 130
#define TEMP_MINOR 131
#define RTC_MINOR 135
#define EFI_RTC_MINOR 136
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SUN_OPENPROM_MINOR 139
#define DMAPI_MINOR 140
#define NVRAM_MINOR 144
#define SGI_MMTIMER 153
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define STORE_QUEUE_MINOR 155
#define I2O_MINOR 166
#define MICROCODE_MINOR 184
#define TUN_MINOR 200
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MWAVE_MINOR 219
#define MPT_MINOR 220
#define MPT2SAS_MINOR 221
#define MPT3SAS_MINOR 222
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UINPUT_MINOR 223
#define MISC_MCELOG_MINOR 227
#define HPET_MINOR 228
#define FUSE_MINOR 229
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_MINOR 232
#define BTRFS_MINOR 234
#define AUTOFS_MINOR 235
#define MAPPER_CTRL_MINOR 236
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LOOP_CTRL_MINOR 237
#define VHOST_NET_MINOR 238
#define UHID_MINOR 239
#define MISC_DYNAMIC_MINOR 255
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct device;
struct miscdevice {
 int minor;
 const char *name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct file_operations *fops;
 struct device *parent;
 struct device *this_device;
 const char *nodename;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 umode_t mode;
};
#define MODULE_ALIAS_MISCDEV(minor)   MODULE_ALIAS("char-major-" __stringify(MISC_MAJOR)   "-" __stringify(minor))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
