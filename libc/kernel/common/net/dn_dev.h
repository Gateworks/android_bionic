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
#ifndef _NET_DN_DEV_H
#define _NET_DN_DEV_H
struct dn_dev;
struct dn_ifaddr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct dn_ifaddr __rcu *ifa_next;
 struct dn_dev *ifa_dev;
 __le16 ifa_local;
 __le16 ifa_address;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 ifa_flags;
 __u8 ifa_scope;
 char ifa_label[IFNAMSIZ];
 struct rcu_head rcu;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define DN_DEV_S_RU 0
#define DN_DEV_S_CR 1
#define DN_DEV_S_DS 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DN_DEV_S_RI 3
#define DN_DEV_S_RV 4
#define DN_DEV_S_RC 5
#define DN_DEV_S_OF 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DN_DEV_S_HA 7
struct dn_dev_parms {
 int type;
 int mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DN_DEV_BCAST 1
#define DN_DEV_UCAST 2
#define DN_DEV_MPOINT 4
 int state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int forwarding;
 unsigned long t2;
 unsigned long t3;
 int priority;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char *name;
 int (*up)(struct net_device *);
 void (*down)(struct net_device *);
 void (*timer3)(struct net_device *, struct dn_ifaddr *ifa);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *sysctl;
};
struct dn_dev {
 struct dn_ifaddr __rcu *ifa_list;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct net_device *dev;
 struct dn_dev_parms parms;
 char use_long;
 struct timer_list timer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long t3;
 struct neigh_parms *neigh_parms;
 __u8 addr[ETH_ALEN];
 struct neighbour *router;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct neighbour *peer;
 unsigned long uptime;
};
struct dn_short_packet {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 msgflg;
 __le16 dstnode;
 __le16 srcnode;
 __u8 forward;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __packed;
struct dn_long_packet {
 __u8 msgflg;
 __u8 d_area;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 d_subarea;
 __u8 d_id[6];
 __u8 s_area;
 __u8 s_subarea;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 s_id[6];
 __u8 nl2;
 __u8 visit_ct;
 __u8 s_class;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 pt;
} __packed;
struct endnode_hello_message {
 __u8 msgflg;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 tiver[3];
 __u8 id[6];
 __u8 iinfo;
 __le16 blksize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 area;
 __u8 seed[8];
 __u8 neighbor[6];
 __le16 timer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 mpd;
 __u8 datalen;
 __u8 data[2];
} __packed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct rtnode_hello_message {
 __u8 msgflg;
 __u8 tiver[3];
 __u8 id[6];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 iinfo;
 __le16 blksize;
 __u8 priority;
 __u8 area;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 timer;
 __u8 mpd;
} __packed;
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
