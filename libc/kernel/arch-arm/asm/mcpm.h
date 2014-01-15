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
#ifndef MCPM_H
#define MCPM_H
#define MAX_CPUS_PER_CLUSTER 4
#define MAX_NR_CLUSTERS 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __ASSEMBLY__
#include <linux/types.h>
#include <asm/cacheflush.h>
struct mcpm_platform_ops {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*power_up)(unsigned int cpu, unsigned int cluster);
 void (*power_down)(void);
 void (*suspend)(u64);
 void (*powered_up)(void);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct mcpm_sync_struct {
 struct {
 s8 cpu __aligned(__CACHE_WRITEBACK_GRANULE);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } cpus[MAX_CPUS_PER_CLUSTER];
 s8 cluster __aligned(__CACHE_WRITEBACK_GRANULE);
 s8 inbound __aligned(__CACHE_WRITEBACK_GRANULE);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sync_struct {
 struct mcpm_sync_struct clusters[MAX_NR_CLUSTERS];
};
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/asm-offsets.h>
#define __CACHE_WRITEBACK_GRANULE CACHE_WRITEBACK_GRANULE
#endif
#define CPU_DOWN 0x11
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPU_COMING_UP 0x12
#define CPU_UP 0x13
#define CPU_GOING_DOWN 0x14
#define CLUSTER_DOWN 0x21
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CLUSTER_UP 0x22
#define CLUSTER_GOING_DOWN 0x23
#define INBOUND_NOT_COMING_UP 0x31
#define INBOUND_COMING_UP 0x32
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MCPM_SYNC_CLUSTER_CPUS 0
#define MCPM_SYNC_CPU_SIZE __CACHE_WRITEBACK_GRANULE
#define MCPM_SYNC_CLUSTER_CLUSTER   (MCPM_SYNC_CLUSTER_CPUS + MCPM_SYNC_CPU_SIZE * MAX_CPUS_PER_CLUSTER)
#define MCPM_SYNC_CLUSTER_INBOUND   (MCPM_SYNC_CLUSTER_CLUSTER + __CACHE_WRITEBACK_GRANULE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MCPM_SYNC_CLUSTER_SIZE   (MCPM_SYNC_CLUSTER_INBOUND + __CACHE_WRITEBACK_GRANULE)
#endif
