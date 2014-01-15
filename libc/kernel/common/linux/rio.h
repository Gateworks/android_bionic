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
#ifndef LINUX_RIO_H
#define LINUX_RIO_H
#include <linux/types.h>
#include <linux/ioport.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/list.h>
#include <linux/errno.h>
#include <linux/device.h>
#include <linux/rio_regs.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RIO_NO_HOPCOUNT -1
#define RIO_INVALID_DESTID 0xffff
#define RIO_MAX_MPORTS 8
#define RIO_MAX_MPORT_RESOURCES 16
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RIO_MAX_DEV_RESOURCES 16
#define RIO_MAX_MPORT_NAME 40
#define RIO_GLOBAL_TABLE 0xff
#define RIO_INVALID_ROUTE 0xff
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RIO_MAX_ROUTE_ENTRIES(size) (size ? (1 << 16) : (1 << 8))
#define RIO_ANY_DESTID(size) (size ? 0xffff : 0xff)
#define RIO_MAX_MBOX 4
#define RIO_MAX_MSG_SIZE 0x1000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RIO_SUCCESSFUL 0x00
#define RIO_BAD_SIZE 0x81
#define RIO_DOORBELL_RESOURCE 0
#define RIO_INB_MBOX_RESOURCE 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RIO_OUTB_MBOX_RESOURCE 2
#define RIO_PW_MSG_SIZE 64
#define RIO_CTAG_RESRVD 0xfffe0000
#define RIO_CTAG_UDEVID 0x0001ffff
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
