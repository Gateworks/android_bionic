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
#ifndef IEEE802154_NETDEVICE_H
#define IEEE802154_NETDEVICE_H
#include <net/af_ieee802154.h>
struct ieee802154_mac_cb {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 lqi;
 struct ieee802154_addr sa;
 struct ieee802154_addr da;
 u8 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 seq;
};
#define MAC_CB_FLAG_TYPEMASK ((1 << 3) - 1)
#define MAC_CB_FLAG_ACKREQ (1 << 3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MAC_CB_FLAG_SECEN (1 << 4)
#define MAC_CB_FLAG_INTRAPAN (1 << 5)
#define IEEE802154_MAC_SCAN_ED 0
#define IEEE802154_MAC_SCAN_ACTIVE 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IEEE802154_MAC_SCAN_PASSIVE 2
#define IEEE802154_MAC_SCAN_ORPHAN 3
struct wpan_phy;
struct ieee802154_mlme_ops {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*assoc_req)(struct net_device *dev,
 struct ieee802154_addr *addr,
 u8 channel, u8 page, u8 cap);
 int (*assoc_resp)(struct net_device *dev,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ieee802154_addr *addr,
 u16 short_addr, u8 status);
 int (*disassoc_req)(struct net_device *dev,
 struct ieee802154_addr *addr,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 reason);
 int (*start_req)(struct net_device *dev,
 struct ieee802154_addr *addr,
 u8 channel, u8 page, u8 bcn_ord, u8 sf_ord,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 pan_coord, u8 blx, u8 coord_realign);
 int (*scan_req)(struct net_device *dev,
 u8 type, u32 channels, u8 page, u8 duration);
 struct wpan_phy *(*get_phy)(const struct net_device *dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 (*get_pan_id)(const struct net_device *dev);
 u16 (*get_short_addr)(const struct net_device *dev);
 u8 (*get_dsn)(const struct net_device *dev);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ieee802154_reduced_mlme_ops {
 struct wpan_phy *(*get_phy)(const struct net_device *dev);
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
