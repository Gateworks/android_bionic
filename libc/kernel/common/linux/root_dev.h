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
#ifndef _ROOT_DEV_H_
#define _ROOT_DEV_H_
#include <linux/major.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/kdev_t.h>
enum {
 Root_NFS = MKDEV(UNNAMED_MAJOR, 255),
 Root_RAM0 = MKDEV(RAMDISK_MAJOR, 0),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 Root_RAM1 = MKDEV(RAMDISK_MAJOR, 1),
 Root_FD0 = MKDEV(FLOPPY_MAJOR, 0),
 Root_HDA1 = MKDEV(IDE0_MAJOR, 1),
 Root_HDA2 = MKDEV(IDE0_MAJOR, 2),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 Root_SDA1 = MKDEV(SCSI_DISK0_MAJOR, 1),
 Root_SDA2 = MKDEV(SCSI_DISK0_MAJOR, 2),
 Root_HDC1 = MKDEV(IDE1_MAJOR, 1),
 Root_SR0 = MKDEV(SCSI_CDROM_MAJOR, 0),
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
