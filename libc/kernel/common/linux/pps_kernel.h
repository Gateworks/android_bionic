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
#ifndef LINUX_PPS_KERNEL_H
#define LINUX_PPS_KERNEL_H
#include <linux/pps.h>
#include <linux/cdev.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/device.h>
#include <linux/time.h>
struct pps_device;
struct pps_source_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char name[PPS_MAX_NAME_LEN];
 char path[PPS_MAX_NAME_LEN];
 int mode;
 void (*echo)(struct pps_device *pps,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int event, void *data);
 struct module *owner;
 struct device *dev;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct pps_event_time {
 struct timespec ts_real;
};
struct pps_device {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pps_source_info info;
 struct pps_kparams params;
 __u32 assert_sequence;
 __u32 clear_sequence;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pps_ktime assert_tu;
 struct pps_ktime clear_tu;
 int current_mode;
 unsigned int last_ev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 wait_queue_head_t queue;
 unsigned int id;
 void const *lookup_cookie;
 struct cdev cdev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device *dev;
 struct fasync_struct *async_queue;
 spinlock_t lock;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct pps_device *pps_lookup_dev(void const *cookie);
#endif
