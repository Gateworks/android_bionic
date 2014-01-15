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
#ifndef _ROSE_H
#define _ROSE_H
#include <linux/rose.h>
#include <net/sock.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ROSE_ADDR_LEN 5
#define ROSE_MIN_LEN 3
#define ROSE_CALL_REQ_ADDR_LEN_OFF 3
#define ROSE_CALL_REQ_ADDR_LEN_VAL 0xAA
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ROSE_CALL_REQ_DEST_ADDR_OFF 4
#define ROSE_CALL_REQ_SRC_ADDR_OFF 9
#define ROSE_CALL_REQ_FACILITIES_OFF 14
#define ROSE_GFI 0x10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ROSE_Q_BIT 0x80
#define ROSE_D_BIT 0x40
#define ROSE_M_BIT 0x10
#define ROSE_CALL_REQUEST 0x0B
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ROSE_CALL_ACCEPTED 0x0F
#define ROSE_CLEAR_REQUEST 0x13
#define ROSE_CLEAR_CONFIRMATION 0x17
#define ROSE_DATA 0x00
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ROSE_INTERRUPT 0x23
#define ROSE_INTERRUPT_CONFIRMATION 0x27
#define ROSE_RR 0x01
#define ROSE_RNR 0x05
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ROSE_REJ 0x09
#define ROSE_RESET_REQUEST 0x1B
#define ROSE_RESET_CONFIRMATION 0x1F
#define ROSE_REGISTRATION_REQUEST 0xF3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ROSE_REGISTRATION_CONFIRMATION 0xF7
#define ROSE_RESTART_REQUEST 0xFB
#define ROSE_RESTART_CONFIRMATION 0xFF
#define ROSE_DIAGNOSTIC 0xF1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ROSE_ILLEGAL 0xFD
enum {
 ROSE_STATE_0,
 ROSE_STATE_1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ROSE_STATE_2,
 ROSE_STATE_3,
 ROSE_STATE_4,
 ROSE_STATE_5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define ROSE_DEFAULT_T0 180000
#define ROSE_DEFAULT_T1 200000
#define ROSE_DEFAULT_T2 180000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ROSE_DEFAULT_T3 180000
#define ROSE_DEFAULT_HB 5000
#define ROSE_DEFAULT_IDLE 0
#define ROSE_DEFAULT_ROUTING 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ROSE_DEFAULT_FAIL_TIMEOUT 120000
#define ROSE_DEFAULT_MAXVC 50
#define ROSE_DEFAULT_WINDOW_SIZE 7
#define ROSE_MODULUS 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ROSE_MAX_PACKET_SIZE 251
#define ROSE_COND_ACK_PENDING 0x01
#define ROSE_COND_PEER_RX_BUSY 0x02
#define ROSE_COND_OWN_RX_BUSY 0x04
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FAC_NATIONAL 0x00
#define FAC_CCITT 0x0F
#define FAC_NATIONAL_RAND 0x7F
#define FAC_NATIONAL_FLAGS 0x3F
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FAC_NATIONAL_DEST_DIGI 0xE9
#define FAC_NATIONAL_SRC_DIGI 0xEB
#define FAC_NATIONAL_FAIL_CALL 0xED
#define FAC_NATIONAL_FAIL_ADD 0xEE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FAC_NATIONAL_DIGIS 0xEF
#define FAC_CCITT_DEST_NSAP 0xC9
#define FAC_CCITT_SRC_NSAP 0xCB
struct rose_neigh {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct rose_neigh *next;
 ax25_address callsign;
 ax25_digi *digipeat;
 ax25_cb *ax25;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct net_device *dev;
 unsigned short count;
 unsigned short use;
 unsigned int number;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char restarted;
 char dce_mode;
 char loopback;
 struct sk_buff_head queue;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct timer_list t0timer;
 struct timer_list ftimer;
};
struct rose_node {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct rose_node *next;
 rose_address address;
 unsigned short mask;
 unsigned char count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char loopback;
 struct rose_neigh *neighbour[3];
};
struct rose_route {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct rose_route *next;
 unsigned int lci1, lci2;
 rose_address src_addr, dest_addr;
 ax25_address src_call, dest_call;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct rose_neigh *neigh1, *neigh2;
 unsigned int rand;
};
struct rose_sock {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sock sock;
 rose_address source_addr, dest_addr;
 ax25_address source_call, dest_call;
 unsigned char source_ndigis, dest_ndigis;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ax25_address source_digis[ROSE_MAX_DIGIS];
 ax25_address dest_digis[ROSE_MAX_DIGIS];
 struct rose_neigh *neighbour;
 struct net_device *device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int lci, rand;
 unsigned char state, condition, qbitincl, defer;
 unsigned char cause, diagnostic;
 unsigned short vs, vr, va, vl;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long t1, t2, t3, hb, idle;
#ifdef M_BIT
 unsigned short fraglen;
 struct sk_buff_head frag_queue;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
 struct sk_buff_head ack_queue;
 struct rose_facilities_struct facilities;
 struct timer_list timer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct timer_list idletimer;
};
#define rose_sk(sk) ((struct rose_sock *)(sk))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
