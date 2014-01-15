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
#ifndef __LINUX_MDIO_H__
#define __LINUX_MDIO_H__
#include <uapi/linux/mdio.h>
struct mdio_if_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int prtad;
 u32 mmds;
 unsigned mode_support;
 struct net_device *dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*mdio_read)(struct net_device *dev, int prtad, int devad,
 u16 addr);
 int (*mdio_write)(struct net_device *dev, int prtad, int devad,
 u16 addr, u16 val);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define MDIO_PRTAD_NONE (-1)
#define MDIO_DEVAD_NONE (-1)
#define MDIO_SUPPORTS_C22 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MDIO_SUPPORTS_C45 2
#define MDIO_EMULATE_C22 4
struct ethtool_cmd;
struct ethtool_pauseparam;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
