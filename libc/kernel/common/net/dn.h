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
#ifndef _NET_DN_H
#define _NET_DN_H
#include <linux/dn.h>
#include <net/sock.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/flow.h>
#include <asm/byteorder.h>
#include <asm/unaligned.h>
struct dn_scp
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
{
 unsigned char state;
#define DN_O 1
#define DN_CR 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DN_DR 3
#define DN_DRC 4
#define DN_CC 5
#define DN_CI 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DN_NR 7
#define DN_NC 8
#define DN_CD 9
#define DN_RJ 10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DN_RUN 11
#define DN_DI 12
#define DN_DIC 13
#define DN_DN 14
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DN_CL 15
#define DN_CN 16
 __le16 addrloc;
 __le16 addrrem;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 numdat;
 __u16 numoth;
 __u16 numoth_rcv;
 __u16 numdat_rcv;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 ackxmt_dat;
 __u16 ackxmt_oth;
 __u16 ackrcv_dat;
 __u16 ackrcv_oth;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 flowrem_sw;
 __u8 flowloc_sw;
#define DN_SEND 2
#define DN_DONTSEND 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DN_NOCHANGE 0
 __u16 flowrem_dat;
 __u16 flowrem_oth;
 __u16 flowloc_dat;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 flowloc_oth;
 __u8 services_rem;
 __u8 services_loc;
 __u8 info_rem;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 info_loc;
 __u16 segsize_rem;
 __u16 segsize_loc;
 __u8 nonagle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 multi_ireq;
 __u8 accept_mode;
 unsigned long seg_total;
 struct optdata_dn conndata_in;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct optdata_dn conndata_out;
 struct optdata_dn discdata_in;
 struct optdata_dn discdata_out;
 struct accessdata_dn accessdata;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sockaddr_dn addr;
 struct sockaddr_dn peer;
#define NSP_MIN_WINDOW 1
#define NSP_MAX_WINDOW (0x07fe)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long max_window;
 unsigned long snd_window;
#define NSP_INITIAL_SRTT (HZ)
 unsigned long nsp_srtt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NSP_INITIAL_RTTVAR (HZ*3)
 unsigned long nsp_rttvar;
#define NSP_MAXRXTSHIFT 12
 unsigned long nsp_rxtshift;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sk_buff_head data_xmit_queue;
 struct sk_buff_head other_xmit_queue;
 struct sk_buff_head other_receive_queue;
 int other_report;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long stamp;
 unsigned long persist;
 int (*persist_fxn)(struct sock *sk);
 unsigned long keepalive;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*keepalive_fxn)(struct sock *sk);
 struct timer_list delack_timer;
 int delack_pending;
 void (*delack_fxn)(struct sock *sk);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define DN_SKB_CB(skb) ((struct dn_skb_cb *)(skb)->cb)
struct dn_skb_cb {
 __le16 dst;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 src;
 __u16 hops;
 __le16 dst_port;
 __le16 src_port;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 services;
 __u8 info;
 __u8 rt_flags;
 __u8 nsp_flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 segsize;
 __u16 segnum;
 __u16 xmit_count;
 unsigned long stamp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int iif;
};
#define DN_MENUVER_ACC 0x01
#define DN_MENUVER_USR 0x02
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DN_MENUVER_PRX 0x04
#define DN_MENUVER_UIC 0x08
#define DN_ASCBUF_LEN 9
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
