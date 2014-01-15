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
#ifndef _LINUX_BACKING_DEV_H
#define _LINUX_BACKING_DEV_H
#include <linux/percpu_counter.h>
#include <linux/log2.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/flex_proportions.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/sched.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/timer.h>
#include <linux/writeback.h>
#include <linux/atomic.h>
#include <linux/sysctl.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/workqueue.h>
struct page;
struct device;
struct dentry;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum bdi_state {
 BDI_wb_alloc,
 BDI_async_congested,
 BDI_sync_congested,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BDI_registered,
 BDI_writeback_running,
 BDI_unused,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef int (congested_fn)(void *, int);
enum bdi_stat_item {
 BDI_RECLAIMABLE,
 BDI_WRITEBACK,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BDI_DIRTIED,
 BDI_WRITTEN,
 NR_BDI_STAT_ITEMS
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct bdi_writeback {
 struct backing_dev_info *bdi;
 unsigned int nr;
 unsigned long last_old_flush;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct delayed_work dwork;
 spinlock_t list_lock;
};
struct backing_dev_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long ra_pages;
 unsigned long state;
 unsigned int capabilities;
 congested_fn *congested_fn;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *congested_data;
 char *name;
 struct percpu_counter bdi_stat[NR_BDI_STAT_ITEMS];
 unsigned long bw_time_stamp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long dirtied_stamp;
 unsigned long written_stamp;
 unsigned long write_bandwidth;
 unsigned long avg_write_bandwidth;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long dirty_ratelimit;
 unsigned long balanced_dirty_ratelimit;
 struct fprop_local_percpu completions;
 int dirty_exceeded;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int min_ratio;
 unsigned int max_ratio, max_prop_frac;
 struct bdi_writeback wb;
 spinlock_t wb_lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device *dev;
 struct timer_list laptop_mode_wb_timer;
};
#define BDI_CAP_NO_ACCT_DIRTY 0x00000001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BDI_CAP_NO_WRITEBACK 0x00000002
#define BDI_CAP_MAP_COPY 0x00000004
#define BDI_CAP_MAP_DIRECT 0x00000008
#define BDI_CAP_READ_MAP 0x00000010
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BDI_CAP_WRITE_MAP 0x00000020
#define BDI_CAP_EXEC_MAP 0x00000040
#define BDI_CAP_NO_ACCT_WB 0x00000080
#define BDI_CAP_SWAP_BACKED 0x00000100
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BDI_CAP_STABLE_WRITES 0x00000200
#define BDI_CAP_VMFLAGS   (BDI_CAP_READ_MAP | BDI_CAP_WRITE_MAP | BDI_CAP_EXEC_MAP)
#define BDI_CAP_NO_ACCT_AND_WRITEBACK   (BDI_CAP_NO_WRITEBACK | BDI_CAP_NO_ACCT_DIRTY | BDI_CAP_NO_ACCT_WB)
#if defined(VM_MAYREAD) && BDI_CAP_READ_MAP != (VM_MAYREAD || BDI_CAP_WRITE_MAP != (VM_MAYWRITE || BDI_CAP_EXEC_MAP != VM_MAYEXEC))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#error please change backing_dev_info::capabilities flags
#endif
enum {
 BLK_RW_ASYNC = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BLK_RW_SYNC = 1,
};
#endif
