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
#ifndef _NET_DST_H
#define _NET_DST_H
#include <net/dst_ops.h>
#include <linux/netdevice.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/rtnetlink.h>
#include <linux/rcupdate.h>
#include <linux/bug.h>
#include <linux/jiffies.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/neighbour.h>
#include <asm/processor.h>
#define DST_GC_MIN (HZ/10)
#define DST_GC_INC (HZ/2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DST_GC_MAX (120*HZ)
struct sk_buff;
struct dst_entry {
 struct rcu_head rcu_head;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct dst_entry *child;
 struct net_device *dev;
 struct dst_ops *ops;
 unsigned long _metrics;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long expires;
 struct dst_entry *path;
 struct dst_entry *from;
 void *__pad1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*input)(struct sk_buff *);
 int (*output)(struct sk_buff *);
 unsigned short flags;
#define DST_HOST 0x0001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DST_NOXFRM 0x0002
#define DST_NOPOLICY 0x0004
#define DST_NOHASH 0x0008
#define DST_NOCACHE 0x0010
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DST_NOCOUNT 0x0020
#define DST_NOPEER 0x0040
#define DST_FAKE_RTABLE 0x0080
#define DST_XFRM_TUNNEL 0x0100
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DST_XFRM_QUEUE 0x0200
 unsigned short pending_confirm;
 short error;
 short obsolete;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DST_OBSOLETE_NONE 0
#define DST_OBSOLETE_DEAD 2
#define DST_OBSOLETE_FORCE_CHK -1
#define DST_OBSOLETE_KILL -2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short header_len;
 unsigned short trailer_len;
 __u32 __pad2;
 atomic_t __refcnt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int __use;
 unsigned long lastuse;
 union {
 struct dst_entry *next;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct rtable __rcu *rt_next;
 struct rt6_info *rt6_next;
 struct dn_route __rcu *dn_next;
 };
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define DST_METRICS_READ_ONLY 0x1UL
#define __DST_METRICS_PTR(Y)   ((u32 *)((Y) & ~DST_METRICS_READ_ONLY))
#define DST_METRICS_PTR(X) __DST_METRICS_PTR((X)->_metrics)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 XFRM_LOOKUP_ICMP = 1 << 0,
};
struct flowi;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
