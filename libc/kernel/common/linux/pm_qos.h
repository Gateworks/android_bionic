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
#ifndef _LINUX_PM_QOS_H
#define _LINUX_PM_QOS_H
#include <linux/plist.h>
#include <linux/notifier.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/miscdevice.h>
#include <linux/device.h>
#include <linux/workqueue.h>
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PM_QOS_RESERVED = 0,
 PM_QOS_CPU_DMA_LATENCY,
 PM_QOS_NETWORK_LATENCY,
 PM_QOS_NETWORK_THROUGHPUT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PM_QOS_NUM_CLASSES,
};
enum pm_qos_flags_status {
 PM_QOS_FLAGS_UNDEFINED = -1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PM_QOS_FLAGS_NONE,
 PM_QOS_FLAGS_SOME,
 PM_QOS_FLAGS_ALL,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PM_QOS_DEFAULT_VALUE -1
#define PM_QOS_CPU_DMA_LAT_DEFAULT_VALUE (2000 * USEC_PER_SEC)
#define PM_QOS_NETWORK_LAT_DEFAULT_VALUE (2000 * USEC_PER_SEC)
#define PM_QOS_NETWORK_THROUGHPUT_DEFAULT_VALUE 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PM_QOS_DEV_LAT_DEFAULT_VALUE 0
#define PM_QOS_FLAG_NO_POWER_OFF (1 << 0)
#define PM_QOS_FLAG_REMOTE_WAKEUP (1 << 1)
struct pm_qos_request {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int pm_qos_class;
};
struct pm_qos_flags_request {
 s32 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum dev_pm_qos_req_type {
 DEV_PM_QOS_LATENCY = 1,
 DEV_PM_QOS_FLAGS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct dev_pm_qos_request {
 enum dev_pm_qos_req_type type;
 union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pm_qos_flags_request flr;
 } data;
 struct device *dev;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum pm_qos_type {
 PM_QOS_UNITIALIZED,
 PM_QOS_MAX,
 PM_QOS_MIN
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct pm_qos_constraints {
 s32 target_value;
 s32 default_value;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum pm_qos_type type;
 struct blocking_notifier_head *notifiers;
};
struct pm_qos_flags {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 s32 effective_flags;
};
struct dev_pm_qos {
 struct pm_qos_constraints latency;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pm_qos_flags flags;
 struct dev_pm_qos_request *latency_req;
 struct dev_pm_qos_request *flags_req;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum pm_qos_req_action {
 PM_QOS_ADD_REQ,
 PM_QOS_UPDATE_REQ,
 PM_QOS_REMOVE_REQ
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
