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
#ifndef WRITEBACK_H
#define WRITEBACK_H
#include <linux/sched.h>
#include <linux/workqueue.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/fs.h>
#define DIRTY_SCOPE 8
#define DIRTY_FULL_SCOPE (DIRTY_SCOPE / 2)
struct backing_dev_info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum writeback_sync_modes {
 WB_SYNC_NONE,
 WB_SYNC_ALL,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum wb_reason {
 WB_REASON_BACKGROUND,
 WB_REASON_TRY_TO_FREE_PAGES,
 WB_REASON_SYNC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 WB_REASON_PERIODIC,
 WB_REASON_LAPTOP_TIMER,
 WB_REASON_FREE_MORE_MEM,
 WB_REASON_FS_FREE_SPACE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 WB_REASON_FORKER_THREAD,
 WB_REASON_MAX,
};
struct writeback_control {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 long nr_to_write;
 long pages_skipped;
 loff_t range_start;
 loff_t range_end;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum writeback_sync_modes sync_mode;
 unsigned for_kupdate:1;
 unsigned for_background:1;
 unsigned tagged_writepages:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned for_reclaim:1;
 unsigned range_cyclic:1;
};
struct bdi_writeback;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ctl_table;
typedef int (*writepage_t)(struct page *page, struct writeback_control *wbc,
 void *data);
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
