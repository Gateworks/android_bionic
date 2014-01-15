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
#ifndef _LINUX_CPUIDLE_H
#define _LINUX_CPUIDLE_H
#include <linux/percpu.h>
#include <linux/list.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/kobject.h>
#include <linux/completion.h>
#include <linux/hrtimer.h>
#define CPUIDLE_STATE_MAX 10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUIDLE_NAME_LEN 16
#define CPUIDLE_DESC_LEN 32
struct module;
struct cpuidle_device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct cpuidle_driver;
struct cpuidle_state_usage {
 unsigned long long disable;
 unsigned long long usage;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long long time;
};
struct cpuidle_state {
 char name[CPUIDLE_NAME_LEN];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char desc[CPUIDLE_DESC_LEN];
 unsigned int flags;
 unsigned int exit_latency;
 int power_usage;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int target_residency;
 bool disabled;
 int (*enter) (struct cpuidle_device *dev,
 struct cpuidle_driver *drv,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int index);
 int (*enter_dead) (struct cpuidle_device *dev, int index);
};
#define CPUIDLE_FLAG_TIME_VALID (0x01)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUIDLE_FLAG_COUPLED (0x02)
#define CPUIDLE_FLAG_TIMER_STOP (0x04)
#define CPUIDLE_DRIVER_FLAGS_MASK (0xFFFF0000)
struct cpuidle_device {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int registered:1;
 unsigned int enabled:1;
 unsigned int cpu;
 int last_residency;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int state_count;
 struct cpuidle_state_usage states_usage[CPUIDLE_STATE_MAX];
 struct cpuidle_state_kobj *kobjs[CPUIDLE_STATE_MAX];
 struct cpuidle_driver_kobj *kobj_driver;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct kobject kobj;
 struct completion kobj_unregister;
};
struct cpuidle_driver {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *name;
 struct module *owner;
 int refcnt;
 unsigned int bctimer:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct cpuidle_state states[CPUIDLE_STATE_MAX];
 int state_count;
 int safe_state_index;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct cpuidle_governor {
 char name[CPUIDLE_NAME_LEN];
 unsigned int rating;
 int (*enable) (struct cpuidle_driver *drv,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct cpuidle_device *dev);
 void (*disable) (struct cpuidle_driver *drv,
 struct cpuidle_device *dev);
 int (*select) (struct cpuidle_driver *drv,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct cpuidle_device *dev);
 void (*reflect) (struct cpuidle_device *dev, int index);
 struct module *owner;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUIDLE_DRIVER_STATE_START 0
#endif
