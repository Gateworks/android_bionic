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
#ifndef _SNMP_H
#define _SNMP_H
#include <linux/cache.h>
#include <linux/snmp.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/smp.h>
struct snmp_mib {
 const char *name;
 int entry;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define SNMP_MIB_ITEM(_name,_entry) {   .name = _name,   .entry = _entry,  }
#define SNMP_MIB_SENTINEL {   .name = NULL,   .entry = 0,  }
#include <linux/u64_stats_sync.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IPSTATS_MIB_MAX __IPSTATS_MIB_MAX
struct ipstats_mib {
 u64 mibs[IPSTATS_MIB_MAX];
 struct u64_stats_sync syncp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define ICMP_MIB_MAX __ICMP_MIB_MAX
struct icmp_mib {
 unsigned long mibs[ICMP_MIB_MAX];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define ICMPMSG_MIB_MAX __ICMPMSG_MIB_MAX
struct icmpmsg_mib {
 atomic_long_t mibs[ICMPMSG_MIB_MAX];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define ICMP6_MIB_MAX __ICMP6_MIB_MAX
struct icmpv6_mib {
 unsigned long mibs[ICMP6_MIB_MAX];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct icmpv6_mib_device {
 atomic_long_t mibs[ICMP6_MIB_MAX];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ICMP6MSG_MIB_MAX __ICMP6MSG_MIB_MAX
struct icmpv6msg_mib {
 atomic_long_t mibs[ICMP6MSG_MIB_MAX];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct icmpv6msg_mib_device {
 atomic_long_t mibs[ICMP6MSG_MIB_MAX];
};
#define TCP_MIB_MAX __TCP_MIB_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tcp_mib {
 unsigned long mibs[TCP_MIB_MAX];
};
#define UDP_MIB_MAX __UDP_MIB_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct udp_mib {
 unsigned long mibs[UDP_MIB_MAX];
};
#define LINUX_MIB_MAX __LINUX_MIB_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct linux_mib {
 unsigned long mibs[LINUX_MIB_MAX];
};
#define LINUX_MIB_XFRMMAX __LINUX_MIB_XFRMMAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct linux_xfrm_mib {
 unsigned long mibs[LINUX_MIB_XFRMMAX];
};
#define SNMP_ARRAY_SZ 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DEFINE_SNMP_STAT(type, name)   __typeof__(type) __percpu *name[SNMP_ARRAY_SZ]
#define DEFINE_SNMP_STAT_ATOMIC(type, name)   __typeof__(type) *name
#define DECLARE_SNMP_STAT(type, name)   extern __typeof__(type) __percpu *name[SNMP_ARRAY_SZ]
#define SNMP_INC_STATS_BH(mib, field)   __this_cpu_inc(mib[0]->mibs[field])
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SNMP_INC_STATS_USER(mib, field)   this_cpu_inc(mib[0]->mibs[field])
#define SNMP_INC_STATS_ATOMIC_LONG(mib, field)   atomic_long_inc(&mib->mibs[field])
#define SNMP_INC_STATS(mib, field)   this_cpu_inc(mib[0]->mibs[field])
#define SNMP_DEC_STATS(mib, field)   this_cpu_dec(mib[0]->mibs[field])
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SNMP_ADD_STATS_BH(mib, field, addend)   __this_cpu_add(mib[0]->mibs[field], addend)
#define SNMP_ADD_STATS_USER(mib, field, addend)   this_cpu_add(mib[0]->mibs[field], addend)
#define SNMP_ADD_STATS(mib, field, addend)   this_cpu_add(mib[0]->mibs[field], addend)
#define SNMP_UPD_PO_STATS(mib, basefield, addend)   do {   __typeof__(*mib[0]->mibs) *ptr = mib[0]->mibs;   this_cpu_inc(ptr[basefield##PKTS]);   this_cpu_add(ptr[basefield##OCTETS], addend);   } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SNMP_UPD_PO_STATS_BH(mib, basefield, addend)   do {   __typeof__(*mib[0]->mibs) *ptr = mib[0]->mibs;   __this_cpu_inc(ptr[basefield##PKTS]);   __this_cpu_add(ptr[basefield##OCTETS], addend);   } while (0)
#if BITS_PER_LONG == 32
#define SNMP_ADD_STATS64_BH(mib, field, addend)   do {   __typeof__(*mib[0]) *ptr = __this_cpu_ptr((mib)[0]);   u64_stats_update_begin(&ptr->syncp);   ptr->mibs[field] += addend;   u64_stats_update_end(&ptr->syncp);   } while (0)
#define SNMP_ADD_STATS64_USER(mib, field, addend)   do {   local_bh_disable();   SNMP_ADD_STATS64_BH(mib, field, addend);   local_bh_enable();   } while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SNMP_ADD_STATS64(mib, field, addend)   SNMP_ADD_STATS64_USER(mib, field, addend)
#define SNMP_INC_STATS64_BH(mib, field) SNMP_ADD_STATS64_BH(mib, field, 1)
#define SNMP_INC_STATS64_USER(mib, field) SNMP_ADD_STATS64_USER(mib, field, 1)
#define SNMP_INC_STATS64(mib, field) SNMP_ADD_STATS64(mib, field, 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SNMP_UPD_PO_STATS64_BH(mib, basefield, addend)   do {   __typeof__(*mib[0]) *ptr;   ptr = __this_cpu_ptr((mib)[0]);   u64_stats_update_begin(&ptr->syncp);   ptr->mibs[basefield##PKTS]++;   ptr->mibs[basefield##OCTETS] += addend;   u64_stats_update_end(&ptr->syncp);   } while (0)
#define SNMP_UPD_PO_STATS64(mib, basefield, addend)   do {   local_bh_disable();   SNMP_UPD_PO_STATS64_BH(mib, basefield, addend);   local_bh_enable();   } while (0)
#else
#define SNMP_INC_STATS64_BH(mib, field) SNMP_INC_STATS_BH(mib, field)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SNMP_INC_STATS64_USER(mib, field) SNMP_INC_STATS_USER(mib, field)
#define SNMP_INC_STATS64(mib, field) SNMP_INC_STATS(mib, field)
#define SNMP_DEC_STATS64(mib, field) SNMP_DEC_STATS(mib, field)
#define SNMP_ADD_STATS64_BH(mib, field, addend) SNMP_ADD_STATS_BH(mib, field, addend)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SNMP_ADD_STATS64_USER(mib, field, addend) SNMP_ADD_STATS_USER(mib, field, addend)
#define SNMP_ADD_STATS64(mib, field, addend) SNMP_ADD_STATS(mib, field, addend)
#define SNMP_UPD_PO_STATS64(mib, basefield, addend) SNMP_UPD_PO_STATS(mib, basefield, addend)
#define SNMP_UPD_PO_STATS64_BH(mib, basefield, addend) SNMP_UPD_PO_STATS_BH(mib, basefield, addend)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#endif
