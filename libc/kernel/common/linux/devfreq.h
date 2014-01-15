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
#ifndef __LINUX_DEVFREQ_H__
#define __LINUX_DEVFREQ_H__
#include <linux/device.h>
#include <linux/notifier.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/opp.h>
#define DEVFREQ_NAME_LEN 16
struct devfreq;
struct devfreq_dev_status {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long total_time;
 unsigned long busy_time;
 unsigned long current_frequency;
 void *private_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define DEVFREQ_FLAG_LEAST_UPPER_BOUND 0x1
struct devfreq_dev_profile {
 unsigned long initial_freq;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int polling_ms;
 int (*target)(struct device *dev, unsigned long *freq, u32 flags);
 int (*get_dev_status)(struct device *dev,
 struct devfreq_dev_status *stat);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*get_cur_freq)(struct device *dev, unsigned long *freq);
 void (*exit)(struct device *dev);
 unsigned int *freq_table;
 unsigned int max_state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct devfreq_governor {
 const char name[DEVFREQ_NAME_LEN];
 int (*get_target_freq)(struct devfreq *this, unsigned long *freq);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*event_handler)(struct devfreq *devfreq,
 unsigned int event, void *data);
};
struct devfreq {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mutex lock;
 struct device dev;
 struct devfreq_dev_profile *profile;
 const struct devfreq_governor *governor;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char governor_name[DEVFREQ_NAME_LEN];
 struct notifier_block nb;
 struct delayed_work work;
 unsigned long previous_freq;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *data;
 unsigned long min_freq;
 unsigned long max_freq;
 bool stop_polling;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int total_trans;
 unsigned int *trans_table;
 unsigned long *time_in_state;
 unsigned long last_stat_updated;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
