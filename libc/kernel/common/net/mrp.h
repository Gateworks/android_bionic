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
#ifndef _NET_MRP_H
#define _NET_MRP_H
#define MRP_END_MARK 0x0
struct mrp_pdu_hdr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 version;
};
struct mrp_msg_hdr {
 u8 attrtype;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 attrlen;
};
struct mrp_vecattr_hdr {
 __be16 lenflags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char firstattrvalue[];
#define MRP_VECATTR_HDR_LEN_MASK cpu_to_be16(0x1FFF)
#define MRP_VECATTR_HDR_FLAG_LA cpu_to_be16(0x2000)
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum mrp_vecattr_event {
 MRP_VECATTR_EVENT_NEW,
 MRP_VECATTR_EVENT_JOIN_IN,
 MRP_VECATTR_EVENT_IN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MRP_VECATTR_EVENT_JOIN_MT,
 MRP_VECATTR_EVENT_MT,
 MRP_VECATTR_EVENT_LV,
 __MRP_VECATTR_EVENT_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct mrp_skb_cb {
 struct mrp_msg_hdr *mh;
 struct mrp_vecattr_hdr *vah;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char attrvalue[];
};
enum mrp_applicant_state {
 MRP_APPLICANT_INVALID,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MRP_APPLICANT_VO,
 MRP_APPLICANT_VP,
 MRP_APPLICANT_VN,
 MRP_APPLICANT_AN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MRP_APPLICANT_AA,
 MRP_APPLICANT_QA,
 MRP_APPLICANT_LA,
 MRP_APPLICANT_AO,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MRP_APPLICANT_QO,
 MRP_APPLICANT_AP,
 MRP_APPLICANT_QP,
 __MRP_APPLICANT_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define MRP_APPLICANT_MAX (__MRP_APPLICANT_MAX - 1)
enum mrp_event {
 MRP_EVENT_NEW,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MRP_EVENT_JOIN,
 MRP_EVENT_LV,
 MRP_EVENT_TX,
 MRP_EVENT_R_NEW,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MRP_EVENT_R_JOIN_IN,
 MRP_EVENT_R_IN,
 MRP_EVENT_R_JOIN_MT,
 MRP_EVENT_R_MT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MRP_EVENT_R_LV,
 MRP_EVENT_R_LA,
 MRP_EVENT_REDECLARE,
 MRP_EVENT_PERIODIC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __MRP_EVENT_MAX
};
#define MRP_EVENT_MAX (__MRP_EVENT_MAX - 1)
enum mrp_tx_action {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MRP_TX_ACTION_NONE,
 MRP_TX_ACTION_S_NEW,
 MRP_TX_ACTION_S_JOIN_IN,
 MRP_TX_ACTION_S_JOIN_IN_OPTIONAL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MRP_TX_ACTION_S_IN_OPTIONAL,
 MRP_TX_ACTION_S_LV,
};
struct mrp_attr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum mrp_applicant_state state;
 u8 type;
 u8 len;
 unsigned char value[];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum mrp_applications {
 MRP_APPLICATION_MVRP,
 __MRP_APPLICATION_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define MRP_APPLICATION_MAX (__MRP_APPLICATION_MAX - 1)
struct mrp_application {
 enum mrp_applications type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int maxattr;
 struct packet_type pkttype;
 unsigned char group_address[ETH_ALEN];
 u8 version;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct mrp_applicant {
 struct mrp_application *app;
 struct net_device *dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct timer_list join_timer;
 spinlock_t lock;
 struct sk_buff_head queue;
 struct sk_buff *pdu;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct rb_root mad;
 struct rcu_head rcu;
};
struct mrp_port {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mrp_applicant __rcu *applicants[MRP_APPLICATION_MAX + 1];
 struct rcu_head rcu;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
