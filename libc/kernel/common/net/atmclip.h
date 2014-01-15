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
#ifndef _ATMCLIP_H
#define _ATMCLIP_H
#include <linux/netdevice.h>
#include <linux/atm.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/atmdev.h>
#include <linux/atmarp.h>
#include <linux/spinlock.h>
#include <net/neighbour.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CLIP_VCC(vcc) ((struct clip_vcc *) ((vcc)->user_back))
struct sk_buff;
struct clip_vcc {
 struct atm_vcc *vcc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct atmarp_entry *entry;
 int xoff;
 unsigned char encap;
 unsigned long last_use;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long idle_timeout;
 void (*old_push)(struct atm_vcc *vcc,struct sk_buff *skb);
 void (*old_pop)(struct atm_vcc *vcc,struct sk_buff *skb);
 struct clip_vcc *next;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct atmarp_entry {
 struct clip_vcc *vccs;
 unsigned long expires;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct neighbour *neigh;
};
#define PRIV(dev) ((struct clip_priv *) netdev_priv(dev))
struct clip_priv {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int number;
 spinlock_t xoff_lock;
 struct net_device *next;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
