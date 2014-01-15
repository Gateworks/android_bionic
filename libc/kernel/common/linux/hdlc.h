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
#ifndef __HDLC_H
#define __HDLC_H
#include <linux/skbuff.h>
#include <linux/netdevice.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/hdlc/ioctl.h>
#include <uapi/linux/hdlc.h>
struct hdlc_proto {
 int (*open)(struct net_device *dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*close)(struct net_device *dev);
 void (*start)(struct net_device *dev);
 void (*stop)(struct net_device *dev);
 void (*detach)(struct net_device *dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*ioctl)(struct net_device *dev, struct ifreq *ifr);
 __be16 (*type_trans)(struct sk_buff *skb, struct net_device *dev);
 int (*netif_rx)(struct sk_buff *skb);
 netdev_tx_t (*xmit)(struct sk_buff *skb, struct net_device *dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct module *module;
 struct hdlc_proto *next;
};
typedef struct hdlc_device {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*attach)(struct net_device *dev,
 unsigned short encoding, unsigned short parity);
 netdev_tx_t (*xmit)(struct sk_buff *skb, struct net_device *dev);
 const struct hdlc_proto *proto;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int carrier;
 int open;
 spinlock_t state_lock;
 void *state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *priv;
} hdlc_device;
#define register_hdlc_device(dev) register_netdev(dev)
struct net_device *alloc_hdlcdev(void *priv);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
