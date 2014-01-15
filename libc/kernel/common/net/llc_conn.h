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
#ifndef LLC_CONN_H
#define LLC_CONN_H
#include <linux/timer.h>
#include <net/llc_if.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/sock.h>
#include <linux/llc.h>
#define LLC_EVENT 1
#define LLC_PACKET 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LLC2_P_TIME 2
#define LLC2_ACK_TIME 1
#define LLC2_REJ_TIME 3
#define LLC2_BUSY_TIME 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct llc_timer {
 struct timer_list timer;
 unsigned long expire;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct llc_sock {
 struct sock sk;
 struct sockaddr_llc addr;
 u8 state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct llc_sap *sap;
 struct llc_addr laddr;
 struct llc_addr daddr;
 struct net_device *dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 copied_seq;
 u8 retry_count;
 u8 ack_must_be_send;
 u8 first_pdu_Ns;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 npta;
 struct llc_timer ack_timer;
 struct llc_timer pf_cycle_timer;
 struct llc_timer rej_sent_timer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct llc_timer busy_state_timer;
 u8 vS;
 u8 vR;
 u32 n2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 n1;
 u8 k;
 u8 rw;
 u8 p_flag;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 f_flag;
 u8 s_flag;
 u8 data_flag;
 u8 remote_busy_flag;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 cause_flag;
 struct sk_buff_head pdu_unack_q;
 u16 link;
 u8 X;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 ack_pf;
 u8 failed_data_req;
 u8 dec_step;
 u8 inc_cntr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 dec_cntr;
 u8 connect_step;
 u8 last_nr;
 u32 rx_pdu_hdr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 cmsg_flags;
};
#endif
