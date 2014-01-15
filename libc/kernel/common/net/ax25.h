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
#ifndef _AX25_H
#define _AX25_H
#include <linux/ax25.h>
#include <linux/spinlock.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/timer.h>
#include <linux/list.h>
#include <linux/slab.h>
#include <linux/atomic.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_T1CLAMPLO 1
#define AX25_T1CLAMPHI (30 * HZ)
#define AX25_BPQ_HEADER_LEN 16
#define AX25_KISS_HEADER_LEN 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_HEADER_LEN 17
#define AX25_ADDR_LEN 7
#define AX25_DIGI_HEADER_LEN (AX25_MAX_DIGIS * AX25_ADDR_LEN)
#define AX25_MAX_HEADER_LEN (AX25_HEADER_LEN + AX25_DIGI_HEADER_LEN)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_P_ROSE 0x01
#define AX25_P_VJCOMP 0x06
#define AX25_P_VJUNCOMP 0x07
#define AX25_P_SEGMENT 0x08
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_P_TEXNET 0xc3
#define AX25_P_LQ 0xc4
#define AX25_P_ATALK 0xca
#define AX25_P_ATALK_ARP 0xcb
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_P_IP 0xcc
#define AX25_P_ARP 0xcd
#define AX25_P_FLEXNET 0xce
#define AX25_P_NETROM 0xcf
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_P_TEXT 0xF0
#define AX25_SEG_REM 0x7F
#define AX25_SEG_FIRST 0x80
#define AX25_CBIT 0x80
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_EBIT 0x01
#define AX25_HBIT 0x80
#define AX25_SSSID_SPARE 0x60
#define AX25_ESSID_SPARE 0x20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_DAMA_FLAG 0x20
#define AX25_COND_ACK_PENDING 0x01
#define AX25_COND_REJECT 0x02
#define AX25_COND_PEER_RX_BUSY 0x04
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_COND_OWN_RX_BUSY 0x08
#define AX25_COND_DAMA_MODE 0x10
#ifndef _LINUX_NETDEVICE_H
#include <linux/netdevice.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define AX25_I 0x00
#define AX25_S 0x01
#define AX25_RR 0x01
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_RNR 0x05
#define AX25_REJ 0x09
#define AX25_U 0x03
#define AX25_SABM 0x2f
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_SABME 0x6f
#define AX25_DISC 0x43
#define AX25_DM 0x0f
#define AX25_UA 0x63
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_FRMR 0x87
#define AX25_UI 0x03
#define AX25_XID 0xaf
#define AX25_TEST 0xe3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_PF 0x10
#define AX25_EPF 0x01
#define AX25_ILLEGAL 0x100
#define AX25_POLLOFF 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_POLLON 1
#define AX25_COMMAND 1
#define AX25_RESPONSE 2
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 AX25_STATE_0,
 AX25_STATE_1,
 AX25_STATE_2,
 AX25_STATE_3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 AX25_STATE_4
};
#define AX25_MODULUS 8
#define AX25_EMODULUS 128
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 AX25_PROTO_STD_SIMPLEX,
 AX25_PROTO_STD_DUPLEX,
 __AX25_PROTO_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 AX25_PROTO_MAX = __AX25_PROTO_MAX -1
};
enum {
 AX25_VALUES_IPDEFMODE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 AX25_VALUES_AXDEFMODE,
 AX25_VALUES_BACKOFF,
 AX25_VALUES_CONMODE,
 AX25_VALUES_WINDOW,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 AX25_VALUES_EWINDOW,
 AX25_VALUES_T1,
 AX25_VALUES_T2,
 AX25_VALUES_T3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 AX25_VALUES_IDLE,
 AX25_VALUES_N2,
 AX25_VALUES_PACLEN,
 AX25_VALUES_PROTOCOL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 AX25_VALUES_DS_TIMEOUT,
 AX25_MAX_VALUES
};
#define AX25_DEF_IPDEFMODE 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_DEF_AXDEFMODE 0
#define AX25_DEF_BACKOFF 1
#define AX25_DEF_CONMODE 2
#define AX25_DEF_WINDOW 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_DEF_EWINDOW 32
#define AX25_DEF_T1 10000
#define AX25_DEF_T2 3000
#define AX25_DEF_T3 300000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_DEF_N2 10
#define AX25_DEF_IDLE 0
#define AX25_DEF_PACLEN 256
#define AX25_DEF_PROTOCOL AX25_PROTO_STD_SIMPLEX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AX25_DEF_DS_TIMEOUT 180000
typedef struct ax25_uid_assoc {
 atomic_t refcount;
 kuid_t uid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ax25_address call;
} ax25_uid_assoc;
#define ax25_uid_for_each(__ax25, list)   hlist_for_each_entry(__ax25, list, uid_node)
#define ax25_uid_hold(ax25)   atomic_inc(&((ax25)->refcount))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef struct {
 ax25_address calls[AX25_MAX_DIGIS];
 unsigned char repeated[AX25_MAX_DIGIS];
 unsigned char ndigi;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 signed char lastrepeat;
} ax25_digi;
typedef struct ax25_route {
 struct ax25_route *next;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 atomic_t refcount;
 ax25_address callsign;
 struct net_device *dev;
 ax25_digi *digipeat;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char ip_mode;
} ax25_route;
typedef struct {
 char slave;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct timer_list slave_timer;
 unsigned short slave_timeout;
} ax25_dama_info;
struct ctl_table;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef struct ax25_dev {
 struct ax25_dev *next;
 struct net_device *dev;
 struct net_device *forward;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ctl_table_header *sysheader;
 int values[AX25_MAX_VALUES];
} ax25_dev;
typedef struct ax25_cb {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ax25_address source_addr, dest_addr;
 ax25_digi *digipeat;
 ax25_dev *ax25_dev;
 unsigned char iamdigi;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char state, modulus, pidincl;
 unsigned short vs, vr, va;
 unsigned char condition, backoff;
 unsigned char n2, n2count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct timer_list t1timer, t2timer, t3timer, idletimer;
 unsigned long t1, t2, t3, idle, rtt;
 unsigned short paclen, fragno, fraglen;
 struct sk_buff_head write_queue;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sk_buff_head reseq_queue;
 struct sk_buff_head ack_queue;
 struct sk_buff_head frag_queue;
 unsigned char window;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct timer_list timer, dtimer;
 struct sock *sk;
 atomic_t refcount;
} ax25_cb;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ax25_sk(__sk) ((ax25_cb *)(__sk)->sk_protinfo)
#define ax25_for_each(__ax25, list)   hlist_for_each_entry(__ax25, list, ax25_node)
#define ax25_cb_hold(__ax25)   atomic_inc(&((__ax25)->refcount))
struct sock *ax25_find_listener(ax25_address *, int, struct net_device *, int);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sock *ax25_get_socket(ax25_address *, ax25_address *, int);
struct ax25_protocol {
 struct ax25_protocol *next;
 unsigned int pid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*func)(struct sk_buff *, ax25_cb *);
};
struct ax25_linkfail {
 void (*func)(ax25_cb *, int);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
