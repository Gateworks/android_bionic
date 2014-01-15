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
#ifndef _LINUX_RTC_H_
#define _LINUX_RTC_H_
#include <linux/types.h>
#include <linux/interrupt.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <uapi/linux/rtc.h>
struct rtc_time rtc_ktime_to_tm(ktime_t kt);
#include <linux/device.h>
#include <linux/seq_file.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/cdev.h>
#include <linux/poll.h>
#include <linux/mutex.h>
#include <linux/timerqueue.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/workqueue.h>
struct rtc_class_ops {
 int (*open)(struct device *);
 void (*release)(struct device *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*ioctl)(struct device *, unsigned int, unsigned long);
 int (*read_time)(struct device *, struct rtc_time *);
 int (*set_time)(struct device *, struct rtc_time *);
 int (*read_alarm)(struct device *, struct rtc_wkalrm *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*set_alarm)(struct device *, struct rtc_wkalrm *);
 int (*proc)(struct device *, struct seq_file *);
 int (*set_mmss)(struct device *, unsigned long secs);
 int (*read_callback)(struct device *, int data);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*alarm_irq_enable)(struct device *, unsigned int enabled);
};
#define RTC_DEVICE_NAME_SIZE 20
typedef struct rtc_task {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*func)(void *private_data);
 void *private_data;
} rtc_task_t;
struct rtc_timer {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct rtc_task task;
 struct timerqueue_node node;
 ktime_t period;
 int enabled;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define RTC_DEV_BUSY 0
#endif
