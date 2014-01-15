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
#ifndef _LINUX_TCP_H
#define _LINUX_TCP_H
#include <linux/skbuff.h>
#include <linux/dmaengine.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/sock.h>
#include <net/inet_connection_sock.h>
#include <net/inet_timewait_sock.h>
#include <uapi/linux/tcp.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TCP_FASTOPEN_COOKIE_MIN 4
#define TCP_FASTOPEN_COOKIE_MAX 16
#define TCP_FASTOPEN_COOKIE_SIZE 8
struct tcp_fastopen_cookie {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 s8 len;
 u8 val[TCP_FASTOPEN_COOKIE_MAX];
};
struct tcp_sack_block_wire {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 start_seq;
 __be32 end_seq;
};
struct tcp_sack_block {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 start_seq;
 u32 end_seq;
};
#define TCP_SACK_SEEN (1 << 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TCP_FACK_ENABLED (1 << 1)
#define TCP_DSACK_SEEN (1 << 2)
struct tcp_options_received {
 long ts_recent_stamp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 ts_recent;
 u32 rcv_tsval;
 u32 rcv_tsecr;
 u16 saw_tstamp : 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 tstamp_ok : 1,
 dsack : 1,
 wscale_ok : 1,
 sack_ok : 4,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 snd_wscale : 4,
 rcv_wscale : 4;
 u8 num_sacks;
 u16 user_mss;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 mss_clamp;
};
#define TCP_NUM_SACKS 4
struct tcp_cookie_values;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tcp_request_sock_ops;
struct tcp_sock {
 u16 tcp_header_len;
 u16 xmit_size_goal_segs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be32 pred_flags;
 u32 rcv_nxt;
 u32 copied_seq;
 u32 rcv_wup;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 snd_nxt;
 u32 snd_una;
 u32 snd_sml;
 u32 rcv_tstamp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 lsndtime;
 u32 tsoffset;
 unsigned long tsq_flags;
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sk_buff_head prequeue;
 struct task_struct *task;
 struct iovec *iov;
 int memory;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int len;
 } ucopy;
 u32 snd_wl1;
 u32 snd_wnd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 max_window;
 u32 mss_cache;
 u32 window_clamp;
 u32 rcv_ssthresh;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 advmss;
 u8 unused;
 u8 nonagle : 4,
 thin_lto : 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 thin_dupack : 1,
 repair : 1,
 frto : 1;
 u8 repair_queue;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 do_early_retrans:1,
 syn_data:1,
 syn_fastopen:1,
 syn_data_acked:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 tlp_high_seq;
 u32 srtt;
 u32 mdev;
 u32 mdev_max;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 rttvar;
 u32 rtt_seq;
 u32 packets_out;
 u32 retrans_out;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 urg_data;
 u8 ecn_flags;
 u8 reordering;
 u32 snd_up;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 keepalive_probes;
 struct tcp_options_received rx_opt;
 u32 snd_ssthresh;
 u32 snd_cwnd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 snd_cwnd_cnt;
 u32 snd_cwnd_clamp;
 u32 snd_cwnd_used;
 u32 snd_cwnd_stamp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 prior_cwnd;
 u32 prr_delivered;
 u32 prr_out;
 u32 rcv_wnd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 write_seq;
 u32 pushed_seq;
 u32 lost_out;
 u32 sacked_out;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 fackets_out;
 u32 tso_deferred;
 struct sk_buff* lost_skb_hint;
 struct sk_buff *scoreboard_skb_hint;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sk_buff *retransmit_skb_hint;
 struct sk_buff_head out_of_order_queue;
 struct tcp_sack_block duplicate_sack[1];
 struct tcp_sack_block selective_acks[4];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct tcp_sack_block recv_sack_cache[4];
 struct sk_buff *highest_sack;
 int lost_cnt_hint;
 u32 retransmit_high;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 lost_retrans_low;
 u32 prior_ssthresh;
 u32 high_seq;
 u32 retrans_stamp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 undo_marker;
 int undo_retrans;
 u32 total_retrans;
 u32 urg_seq;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int keepalive_time;
 unsigned int keepalive_intvl;
 int linger2;
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 rtt;
 u32 seq;
 u32 time;
 } rcv_rtt_est;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 int space;
 u32 seq;
 u32 time;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } rcvq_space;
 struct {
 u32 probe_seq_start;
 u32 probe_seq_end;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } mtu_probe;
 u32 mtu_info;
 struct tcp_fastopen_request *fastopen_req;
 struct request_sock *fastopen_rsk;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum tsq_flags {
 TSQ_THROTTLED,
 TSQ_QUEUED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TCP_TSQ_DEFERRED,
 TCP_WRITE_TIMER_DEFERRED,
 TCP_DELACK_TIMER_DEFERRED,
 TCP_MTU_REDUCED_DEFERRED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct tcp_timewait_sock {
 u32 tw_rcv_nxt;
 u32 tw_snd_nxt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 tw_rcv_wnd;
 u32 tw_ts_offset;
 u32 tw_ts_recent;
 long tw_ts_recent_stamp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
