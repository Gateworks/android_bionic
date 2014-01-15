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
#ifndef _LINUX_PM_DOMAIN_H
#define _LINUX_PM_DOMAIN_H
#include <linux/device.h>
#include <linux/mutex.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/pm.h>
#include <linux/err.h>
#include <linux/of.h>
#include <linux/notifier.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/cpuidle.h>
enum gpd_status {
 GPD_STATE_ACTIVE = 0,
 GPD_STATE_WAIT_MASTER,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 GPD_STATE_BUSY,
 GPD_STATE_REPEAT,
 GPD_STATE_POWER_OFF,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dev_power_governor {
 bool (*power_down_ok)(struct dev_pm_domain *domain);
 bool (*stop_ok)(struct device *dev);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct gpd_dev_ops {
 int (*start)(struct device *dev);
 int (*stop)(struct device *dev);
 int (*save_state)(struct device *dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*restore_state)(struct device *dev);
 int (*suspend)(struct device *dev);
 int (*suspend_late)(struct device *dev);
 int (*resume_early)(struct device *dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*resume)(struct device *dev);
 int (*freeze)(struct device *dev);
 int (*freeze_late)(struct device *dev);
 int (*thaw_early)(struct device *dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*thaw)(struct device *dev);
 bool (*active_wakeup)(struct device *dev);
};
struct gpd_cpu_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int saved_exit_latency;
 struct cpuidle_state *idle_state;
};
struct generic_pm_domain {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct dev_pm_domain domain;
 struct mutex lock;
 struct dev_power_governor *gov;
 char *name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int in_progress;
 atomic_t sd_count;
 enum gpd_status status;
 wait_queue_head_t status_wait_queue;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct task_struct *poweroff_task;
 unsigned int resume_count;
 unsigned int device_count;
 unsigned int suspended_count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int prepared_count;
 bool suspend_power_off;
 bool dev_irq_safe;
 int (*power_off)(struct generic_pm_domain *domain);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 s64 power_off_latency_ns;
 int (*power_on)(struct generic_pm_domain *domain);
 s64 power_on_latency_ns;
 struct gpd_dev_ops dev_ops;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 s64 max_off_time_ns;
 bool max_off_time_changed;
 bool cached_power_down_ok;
 struct device_node *of_node;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct gpd_cpu_data *cpu_data;
};
struct gpd_link {
 struct generic_pm_domain *master;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct generic_pm_domain *slave;
};
struct gpd_timing_data {
 s64 stop_latency_ns;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 s64 start_latency_ns;
 s64 save_state_latency_ns;
 s64 restore_state_latency_ns;
 s64 effective_constraint_ns;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool constraint_changed;
 bool cached_stop_ok;
};
struct generic_pm_domain_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pm_domain_data base;
 struct gpd_dev_ops ops;
 struct gpd_timing_data td;
 struct notifier_block nb;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mutex lock;
 unsigned int refcount;
 bool need_restore;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define simple_qos_governor NULL
#define pm_domain_always_on_gov NULL
#endif
