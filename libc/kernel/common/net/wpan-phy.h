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
#ifndef WPAN_PHY_H
#define WPAN_PHY_H
#include <linux/netdevice.h>
#include <linux/mutex.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/bug.h>
#define WPAN_NUM_CHANNELS 27
#define WPAN_NUM_PAGES 32
struct wpan_phy {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mutex pib_lock;
 u8 current_channel;
 u8 current_page;
 u32 channels_supported[32];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 transmit_power;
 u8 cca_mode;
 struct device dev;
 int idx;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct net_device *(*add_iface)(struct wpan_phy *phy,
 const char *name, int type);
 void (*del_iface)(struct wpan_phy *phy, struct net_device *dev);
 char priv[0] __attribute__((__aligned__(NETDEV_ALIGN)));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define to_phy(_dev) container_of(_dev, struct wpan_phy, dev)
struct wpan_phy *wpan_phy_alloc(size_t priv_size);
struct wpan_phy *wpan_phy_find(const char *str);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
