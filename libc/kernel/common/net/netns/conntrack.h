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
#ifndef __NETNS_CONNTRACK_H
#define __NETNS_CONNTRACK_H
#include <linux/list.h>
#include <linux/list_nulls.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/atomic.h>
#include <linux/netfilter/nf_conntrack_tcp.h>
struct ctl_table_header;
struct nf_conntrack_ecache;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nf_proto_net {
 unsigned int users;
};
struct nf_generic_net {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nf_proto_net pn;
 unsigned int timeout;
};
struct nf_tcp_net {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nf_proto_net pn;
 unsigned int timeouts[TCP_CONNTRACK_TIMEOUT_MAX];
 unsigned int tcp_loose;
 unsigned int tcp_be_liberal;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int tcp_max_retrans;
};
enum udp_conntrack {
 UDP_CT_UNREPLIED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 UDP_CT_REPLIED,
 UDP_CT_MAX
};
struct nf_udp_net {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nf_proto_net pn;
 unsigned int timeouts[UDP_CT_MAX];
};
struct nf_icmp_net {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nf_proto_net pn;
 unsigned int timeout;
};
struct nf_ip_net {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nf_generic_net generic;
 struct nf_tcp_net tcp;
 struct nf_udp_net udp;
 struct nf_icmp_net icmp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nf_icmp_net icmpv6;
};
struct netns_ct {
 atomic_t count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int expect_count;
 unsigned int htable_size;
 struct kmem_cache *nf_conntrack_cachep;
 struct hlist_nulls_head *hash;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct hlist_head *expect_hash;
 struct hlist_nulls_head unconfirmed;
 struct hlist_nulls_head dying;
 struct hlist_nulls_head tmpl;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ip_conntrack_stat __percpu *stat;
 struct nf_ct_event_notifier __rcu *nf_conntrack_event_cb;
 struct nf_exp_event_notifier __rcu *nf_expect_event_cb;
 int sysctl_events;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int sysctl_events_retry_timeout;
 int sysctl_acct;
 int sysctl_tstamp;
 int sysctl_checksum;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int sysctl_log_invalid;
 int sysctl_auto_assign_helper;
 bool auto_assign_helper_warned;
 struct nf_ip_net nf_ct_proto;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char *slabname;
};
#endif
