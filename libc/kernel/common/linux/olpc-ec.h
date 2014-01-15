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
#ifndef _LINUX_OLPC_EC_H
#define _LINUX_OLPC_EC_H
#define EC_FIRMWARE_REV 0x08
#define EC_WRITE_SCI_MASK 0x1b
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EC_WAKE_UP_WLAN 0x24
#define EC_WLAN_LEAVE_RESET 0x25
#define EC_READ_EB_MODE 0x2a
#define EC_SET_SCI_INHIBIT 0x32
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EC_SET_SCI_INHIBIT_RELEASE 0x34
#define EC_WLAN_ENTER_RESET 0x35
#define EC_WRITE_EXT_SCI_MASK 0x38
#define EC_SCI_QUERY 0x84
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EC_EXT_SCI_QUERY 0x85
struct platform_device;
struct olpc_ec_driver {
 int (*probe)(struct platform_device *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*suspend)(struct platform_device *);
 int (*resume)(struct platform_device *);
 int (*ec_cmd)(u8, u8 *, size_t, u8 *, size_t, void *);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
