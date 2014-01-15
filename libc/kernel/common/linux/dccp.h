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
#ifndef _LINUX_DCCP_H
#define _LINUX_DCCP_H
#include <linux/in.h>
#include <linux/interrupt.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/ktime.h>
#include <linux/list.h>
#include <linux/uio.h>
#include <linux/workqueue.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/inet_connection_sock.h>
#include <net/inet_sock.h>
#include <net/inet_timewait_sock.h>
#include <net/tcp_states.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <uapi/linux/dccp.h>
enum dccp_state {
 DCCP_OPEN = TCP_ESTABLISHED,
 DCCP_REQUESTING = TCP_SYN_SENT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCCP_LISTEN = TCP_LISTEN,
 DCCP_RESPOND = TCP_SYN_RECV,
 DCCP_ACTIVE_CLOSEREQ = TCP_FIN_WAIT1,
 DCCP_PASSIVE_CLOSE = TCP_CLOSE_WAIT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCCP_CLOSING = TCP_CLOSING,
 DCCP_TIME_WAIT = TCP_TIME_WAIT,
 DCCP_CLOSED = TCP_CLOSE,
 DCCP_PARTOPEN = TCP_MAX_STATES,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCCP_PASSIVE_CLOSEREQ,
 DCCP_MAX_STATES
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCCPF_OPEN = TCPF_ESTABLISHED,
 DCCPF_REQUESTING = TCPF_SYN_SENT,
 DCCPF_LISTEN = TCPF_LISTEN,
 DCCPF_RESPOND = TCPF_SYN_RECV,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCCPF_ACTIVE_CLOSEREQ = TCPF_FIN_WAIT1,
 DCCPF_CLOSING = TCPF_CLOSING,
 DCCPF_TIME_WAIT = TCPF_TIME_WAIT,
 DCCPF_CLOSED = TCPF_CLOSE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCCPF_PARTOPEN = (1 << DCCP_PARTOPEN),
};
struct dccp_request_sock {
 struct inet_request_sock dreq_inet_rsk;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 dreq_iss;
 __u64 dreq_gss;
 __u64 dreq_isr;
 __u64 dreq_gsr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 dreq_service;
 __u32 dreq_timestamp_echo;
 __u32 dreq_timestamp_time;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dccp_options_received {
 u64 dccpor_ndp:48;
 u32 dccpor_timestamp;
 u32 dccpor_timestamp_echo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 dccpor_elapsed_time;
};
struct ccid;
enum dccp_role {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DCCP_ROLE_UNDEFINED,
 DCCP_ROLE_LISTEN,
 DCCP_ROLE_CLIENT,
 DCCP_ROLE_SERVER,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct dccp_service_list {
 __u32 dccpsl_nr;
 __be32 dccpsl_list[0];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define DCCP_SERVICE_INVALID_VALUE htonl((__u32)-1)
#define DCCP_SERVICE_CODE_IS_ABSENT 0
struct dccp_ackvec;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dccp_sock {
 struct inet_connection_sock dccps_inet_connection;
#define dccps_syn_rtt dccps_inet_connection.icsk_ack.lrcvtime
 __u64 dccps_swl;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 dccps_swh;
 __u64 dccps_awl;
 __u64 dccps_awh;
 __u64 dccps_iss;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 dccps_isr;
 __u64 dccps_osr;
 __u64 dccps_gss;
 __u64 dccps_gsr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 dccps_gar;
 __be32 dccps_service;
 __u32 dccps_mss_cache;
 struct dccp_service_list *dccps_service_list;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 dccps_timestamp_echo;
 __u32 dccps_timestamp_time;
 __u16 dccps_l_ack_ratio;
 __u16 dccps_r_ack_ratio;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u64 dccps_l_seq_win:48;
 __u64 dccps_r_seq_win:48;
 __u8 dccps_pcslen:4;
 __u8 dccps_pcrlen:4;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 dccps_send_ndp_count:1;
 __u64 dccps_ndp_count:48;
 unsigned long dccps_rate_last;
 struct dccp_ackvec *dccps_hc_rx_ackvec;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ccid *dccps_hc_rx_ccid;
 struct ccid *dccps_hc_tx_ccid;
 struct dccp_options_received dccps_options_received;
 __u8 dccps_qpolicy;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 dccps_tx_qlen;
 enum dccp_role dccps_role:2;
 __u8 dccps_hc_rx_insert_options:1;
 __u8 dccps_hc_tx_insert_options:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 dccps_server_timewait:1;
 __u8 dccps_sync_scheduled:1;
 struct tasklet_struct dccps_xmitlet;
 struct timer_list dccps_xmit_timer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
