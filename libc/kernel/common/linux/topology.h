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
#ifndef _LINUX_TOPOLOGY_H
#define _LINUX_TOPOLOGY_H
#include <linux/cpumask.h>
#include <linux/bitops.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mmzone.h>
#include <linux/smp.h>
#include <linux/percpu.h>
#include <asm/topology.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef node_has_online_mem
#define node_has_online_mem(nid) (1)
#endif
#ifndef nr_cpus_node
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define nr_cpus_node(node) cpumask_weight(cpumask_of_node(node))
#endif
#define for_each_node_with_cpus(node)   for_each_online_node(node)   if (nr_cpus_node(node))
#define LOCAL_DISTANCE 10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define REMOTE_DISTANCE 20
#ifndef node_distance
#define node_distance(from,to) ((from) == (to) ? LOCAL_DISTANCE : REMOTE_DISTANCE)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef RECLAIM_DISTANCE
#define RECLAIM_DISTANCE 30
#endif
#ifndef PENALTY_FOR_NODE_WITH_CPUS
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PENALTY_FOR_NODE_WITH_CPUS (1)
#endif
#ifndef SD_CPU_INIT
#define SD_CPU_INIT (struct sched_domain) {   .min_interval = 1,   .max_interval = 4,   .busy_factor = 64,   .imbalance_pct = 125,   .cache_nice_tries = 1,   .busy_idx = 2,   .idle_idx = 1,   .newidle_idx = 0,   .wake_idx = 0,   .forkexec_idx = 0,     .flags = 1*SD_LOAD_BALANCE   | 1*SD_BALANCE_NEWIDLE   | 1*SD_BALANCE_EXEC   | 1*SD_BALANCE_FORK   | 0*SD_BALANCE_WAKE   | 1*SD_WAKE_AFFINE   | 0*SD_SHARE_CPUPOWER   | 0*SD_SHARE_PKG_RESOURCES   | 0*SD_SERIALIZE   | 1*SD_PREFER_SIBLING   ,   .last_balance = jiffies,   .balance_interval = 1,  }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef numa_node_id
#endif
#ifndef numa_mem_id
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef cpu_to_mem
#endif
#ifndef topology_physical_package_id
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define topology_physical_package_id(cpu) ((void)(cpu), -1)
#endif
#ifndef topology_core_id
#define topology_core_id(cpu) ((void)(cpu), 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef topology_thread_cpumask
#define topology_thread_cpumask(cpu) cpumask_of(cpu)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef topology_core_cpumask
#define topology_core_cpumask(cpu) cpumask_of(cpu)
#endif
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
