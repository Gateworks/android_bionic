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
#ifndef _LINUX_PM_H
#define _LINUX_PM_H
#include <linux/list.h>
#include <linux/workqueue.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/spinlock.h>
#include <linux/wait.h>
#include <linux/timer.h>
#include <linux/completion.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct device;
#define power_group_name NULL
typedef struct pm_message {
 int event;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} pm_message_t;
struct dev_pm_ops {
 int (*prepare)(struct device *dev);
 void (*complete)(struct device *dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*suspend)(struct device *dev);
 int (*resume)(struct device *dev);
 int (*freeze)(struct device *dev);
 int (*thaw)(struct device *dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*poweroff)(struct device *dev);
 int (*restore)(struct device *dev);
 int (*suspend_late)(struct device *dev);
 int (*resume_early)(struct device *dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*freeze_late)(struct device *dev);
 int (*thaw_early)(struct device *dev);
 int (*poweroff_late)(struct device *dev);
 int (*restore_early)(struct device *dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*suspend_noirq)(struct device *dev);
 int (*resume_noirq)(struct device *dev);
 int (*freeze_noirq)(struct device *dev);
 int (*thaw_noirq)(struct device *dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*poweroff_noirq)(struct device *dev);
 int (*restore_noirq)(struct device *dev);
 int (*runtime_suspend)(struct device *dev);
 int (*runtime_resume)(struct device *dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*runtime_idle)(struct device *dev);
};
#define SET_SYSTEM_SLEEP_PM_OPS(suspend_fn, resume_fn)
#define SET_RUNTIME_PM_OPS(suspend_fn, resume_fn, idle_fn)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SIMPLE_DEV_PM_OPS(name, suspend_fn, resume_fn)  const struct dev_pm_ops name = {   SET_SYSTEM_SLEEP_PM_OPS(suspend_fn, resume_fn)  }
#define UNIVERSAL_DEV_PM_OPS(name, suspend_fn, resume_fn, idle_fn)  const struct dev_pm_ops name = {   SET_SYSTEM_SLEEP_PM_OPS(suspend_fn, resume_fn)   SET_RUNTIME_PM_OPS(suspend_fn, resume_fn, idle_fn)  }
#define PM_EVENT_INVALID (-1)
#define PM_EVENT_ON 0x0000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PM_EVENT_FREEZE 0x0001
#define PM_EVENT_SUSPEND 0x0002
#define PM_EVENT_HIBERNATE 0x0004
#define PM_EVENT_QUIESCE 0x0008
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PM_EVENT_RESUME 0x0010
#define PM_EVENT_THAW 0x0020
#define PM_EVENT_RESTORE 0x0040
#define PM_EVENT_RECOVER 0x0080
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PM_EVENT_USER 0x0100
#define PM_EVENT_REMOTE 0x0200
#define PM_EVENT_AUTO 0x0400
#define PM_EVENT_SLEEP (PM_EVENT_SUSPEND | PM_EVENT_HIBERNATE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PM_EVENT_USER_SUSPEND (PM_EVENT_USER | PM_EVENT_SUSPEND)
#define PM_EVENT_USER_RESUME (PM_EVENT_USER | PM_EVENT_RESUME)
#define PM_EVENT_REMOTE_RESUME (PM_EVENT_REMOTE | PM_EVENT_RESUME)
#define PM_EVENT_AUTO_SUSPEND (PM_EVENT_AUTO | PM_EVENT_SUSPEND)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PM_EVENT_AUTO_RESUME (PM_EVENT_AUTO | PM_EVENT_RESUME)
#define PMSG_INVALID ((struct pm_message){ .event = PM_EVENT_INVALID, })
#define PMSG_ON ((struct pm_message){ .event = PM_EVENT_ON, })
#define PMSG_FREEZE ((struct pm_message){ .event = PM_EVENT_FREEZE, })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PMSG_QUIESCE ((struct pm_message){ .event = PM_EVENT_QUIESCE, })
#define PMSG_SUSPEND ((struct pm_message){ .event = PM_EVENT_SUSPEND, })
#define PMSG_HIBERNATE ((struct pm_message){ .event = PM_EVENT_HIBERNATE, })
#define PMSG_RESUME ((struct pm_message){ .event = PM_EVENT_RESUME, })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PMSG_THAW ((struct pm_message){ .event = PM_EVENT_THAW, })
#define PMSG_RESTORE ((struct pm_message){ .event = PM_EVENT_RESTORE, })
#define PMSG_RECOVER ((struct pm_message){ .event = PM_EVENT_RECOVER, })
#define PMSG_USER_SUSPEND ((struct pm_message)   { .event = PM_EVENT_USER_SUSPEND, })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PMSG_USER_RESUME ((struct pm_message)   { .event = PM_EVENT_USER_RESUME, })
#define PMSG_REMOTE_RESUME ((struct pm_message)   { .event = PM_EVENT_REMOTE_RESUME, })
#define PMSG_AUTO_SUSPEND ((struct pm_message)   { .event = PM_EVENT_AUTO_SUSPEND, })
#define PMSG_AUTO_RESUME ((struct pm_message)   { .event = PM_EVENT_AUTO_RESUME, })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PMSG_IS_AUTO(msg) (((msg).event & PM_EVENT_AUTO) != 0)
enum rpm_status {
 RPM_ACTIVE = 0,
 RPM_RESUMING,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 RPM_SUSPENDED,
 RPM_SUSPENDING,
};
enum rpm_request {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 RPM_REQ_NONE = 0,
 RPM_REQ_IDLE,
 RPM_REQ_SUSPEND,
 RPM_REQ_AUTOSUSPEND,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 RPM_REQ_RESUME,
};
struct wakeup_source;
struct pm_domain_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device *dev;
};
struct pm_subsys_data {
 spinlock_t lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int refcount;
};
struct dev_pm_info {
 pm_message_t power_state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int can_wakeup:1;
 unsigned int async_suspend:1;
 spinlock_t lock;
 unsigned int should_wakeup:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pm_subsys_data *subsys_data;
 struct dev_pm_qos *qos;
};
struct dev_pm_domain {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct dev_pm_ops ops;
};
#define PM_EVENT_PRETHAW PM_EVENT_QUIESCE
#define device_pm_lock() do {} while (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define device_pm_unlock() do {} while (0)
#define suspend_report_result(fn, ret) do {} while (0)
#define pm_generic_prepare NULL
#define pm_generic_suspend NULL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define pm_generic_resume NULL
#define pm_generic_freeze NULL
#define pm_generic_thaw NULL
#define pm_generic_restore NULL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define pm_generic_poweroff NULL
#define pm_generic_complete NULL
enum dpm_order {
 DPM_ORDER_NONE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DPM_ORDER_DEV_AFTER_PARENT,
 DPM_ORDER_PARENT_BEFORE_DEV,
 DPM_ORDER_DEV_LAST,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
