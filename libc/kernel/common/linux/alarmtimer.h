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
#ifndef _LINUX_ALARMTIMER_H
#define _LINUX_ALARMTIMER_H
#include <linux/time.h>
#include <linux/hrtimer.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/timerqueue.h>
#include <linux/rtc.h>
enum alarmtimer_type {
 ALARM_REALTIME,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ALARM_BOOTTIME,
 ALARM_NUMTYPE,
};
enum alarmtimer_restart {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ALARMTIMER_NORESTART,
 ALARMTIMER_RESTART,
};
#define ALARMTIMER_STATE_INACTIVE 0x00
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ALARMTIMER_STATE_ENQUEUED 0x01
struct alarm {
 struct timerqueue_node node;
 struct hrtimer timer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum alarmtimer_restart (*function)(struct alarm *, ktime_t now);
 enum alarmtimer_type type;
 int state;
 void *data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct rtc_device *alarmtimer_get_rtcdev(void);
#endif
