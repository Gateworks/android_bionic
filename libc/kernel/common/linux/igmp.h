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
#ifndef _LINUX_IGMP_H
#define _LINUX_IGMP_H
#include <linux/skbuff.h>
#include <linux/timer.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/in.h>
#include <uapi/linux/igmp.h>
struct ip_sf_socklist {
 unsigned int sl_max;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int sl_count;
 struct rcu_head rcu;
 __be32 sl_addr[0];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IP_SFLSIZE(count) (sizeof(struct ip_sf_socklist) +   (count) * sizeof(__be32))
#define IP_SFBLOCK 10
struct ip_mc_socklist {
 struct ip_mc_socklist __rcu *next_rcu;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ip_mreqn multi;
 unsigned int sfmode;
 struct ip_sf_socklist __rcu *sflist;
 struct rcu_head rcu;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ip_sf_list {
 struct ip_sf_list *sf_next;
 __be32 sf_inaddr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long sf_count[2];
 unsigned char sf_gsresp;
 unsigned char sf_oldin;
 unsigned char sf_crcount;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ip_mc_list {
 struct in_device *interface;
 __be32 multiaddr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int sfmode;
 struct ip_sf_list *sources;
 struct ip_sf_list *tomb;
 unsigned long sfcount[2];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 struct ip_mc_list *next;
 struct ip_mc_list __rcu *next_rcu;
 };
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct timer_list timer;
 int users;
 atomic_t refcnt;
 spinlock_t lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char tm_running;
 char reporter;
 char unsolicit_count;
 char loaded;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char gsquery;
 unsigned char crcount;
 struct rcu_head rcu;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IGMPV3_MASK(value, nb) ((nb)>=32 ? (value) : ((1<<(nb))-1) & (value))
#define IGMPV3_EXP(thresh, nbmant, nbexp, value)   ((value) < (thresh) ? (value) :   ((IGMPV3_MASK(value, nbmant) | (1<<(nbmant))) <<   (IGMPV3_MASK((value) >> (nbmant), nbexp) + (nbexp))))
#define IGMPV3_QQIC(value) IGMPV3_EXP(0x80, 4, 3, value)
#define IGMPV3_MRC(value) IGMPV3_EXP(0x80, 4, 3, value)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
