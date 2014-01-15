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
#ifndef _NET_GARP_H
#define _NET_GARP_H
#include <net/stp.h>
#define GARP_PROTOCOL_ID 0x1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GARP_END_MARK 0x0
struct garp_pdu_hdr {
 __be16 protocol;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct garp_msg_hdr {
 u8 attrtype;
};
enum garp_attr_event {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 GARP_LEAVE_ALL,
 GARP_JOIN_EMPTY,
 GARP_JOIN_IN,
 GARP_LEAVE_EMPTY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 GARP_LEAVE_IN,
 GARP_EMPTY,
};
struct garp_attr_hdr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 len;
 u8 event;
 u8 data[];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct garp_skb_cb {
 u8 cur_type;
};
enum garp_applicant_state {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 GARP_APPLICANT_INVALID,
 GARP_APPLICANT_VA,
 GARP_APPLICANT_AA,
 GARP_APPLICANT_QA,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 GARP_APPLICANT_LA,
 GARP_APPLICANT_VP,
 GARP_APPLICANT_AP,
 GARP_APPLICANT_QP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 GARP_APPLICANT_VO,
 GARP_APPLICANT_AO,
 GARP_APPLICANT_QO,
 __GARP_APPLICANT_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define GARP_APPLICANT_MAX (__GARP_APPLICANT_MAX - 1)
enum garp_event {
 GARP_EVENT_REQ_JOIN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 GARP_EVENT_REQ_LEAVE,
 GARP_EVENT_R_JOIN_IN,
 GARP_EVENT_R_JOIN_EMPTY,
 GARP_EVENT_R_EMPTY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 GARP_EVENT_R_LEAVE_IN,
 GARP_EVENT_R_LEAVE_EMPTY,
 GARP_EVENT_TRANSMIT_PDU,
 __GARP_EVENT_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define GARP_EVENT_MAX (__GARP_EVENT_MAX - 1)
enum garp_action {
 GARP_ACTION_NONE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 GARP_ACTION_S_JOIN_IN,
 GARP_ACTION_S_LEAVE_EMPTY,
};
struct garp_attr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum garp_applicant_state state;
 u8 type;
 u8 dlen;
 unsigned char data[];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum garp_applications {
 GARP_APPLICATION_GVRP,
 __GARP_APPLICATION_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define GARP_APPLICATION_MAX (__GARP_APPLICATION_MAX - 1)
struct garp_application {
 enum garp_applications type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int maxattr;
 struct stp_proto proto;
};
struct garp_applicant {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct garp_application *app;
 struct net_device *dev;
 struct timer_list join_timer;
 spinlock_t lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sk_buff_head queue;
 struct sk_buff *pdu;
 struct rb_root gid;
 struct rcu_head rcu;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct garp_port {
 struct garp_applicant __rcu *applicants[GARP_APPLICATION_MAX + 1];
 struct rcu_head rcu;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
