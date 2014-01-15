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
#ifndef NET_MAC802154_H
#define NET_MAC802154_H
#include <net/af_ieee802154.h>
#define MAC802154_FRAME_HARD_HEADER_LEN (2 + 1 + 20 + 14)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IEEE802515_AFILT_SADDR_CHANGED 0x00000001
#define IEEE802515_AFILT_IEEEADDR_CHANGED 0x00000002
#define IEEE802515_AFILT_PANID_CHANGED 0x00000004
#define IEEE802515_AFILT_PANC_CHANGED 0x00000008
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ieee802154_hw_addr_filt {
 __le16 pan_id;
 __le16 short_addr;
 u8 ieee_addr[IEEE802154_ADDR_LEN];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 pan_coord;
};
struct ieee802154_dev {
 int extra_tx_headroom;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 flags;
 struct device *parent;
 struct ieee802154_hw_addr_filt hw_filt;
 void *priv;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct wpan_phy *phy;
};
#define IEEE802154_HW_OMIT_CKSUM 0x00000001
#define IEEE802154_HW_AACK 0x00000002
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ieee802154_ops {
 struct module *owner;
 int (*start)(struct ieee802154_dev *dev);
 void (*stop)(struct ieee802154_dev *dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*xmit)(struct ieee802154_dev *dev,
 struct sk_buff *skb);
 int (*ed)(struct ieee802154_dev *dev, u8 *level);
 int (*set_channel)(struct ieee802154_dev *dev,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int page,
 int channel);
 int (*set_hw_addr_filt)(struct ieee802154_dev *dev,
 struct ieee802154_hw_addr_filt *filt,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long changed);
 int (*ieee_addr)(struct ieee802154_dev *dev,
 u8 addr[IEEE802154_ADDR_LEN]);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ieee802154_dev *
ieee802154_alloc_device(size_t priv_data_lex, struct ieee802154_ops *ops);
#endif
