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
#ifndef _LINUX_WATCHDOG_H
#define _LINUX_WATCHDOG_H
#include <linux/bitops.h>
#include <linux/device.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/cdev.h>
#include <uapi/linux/watchdog.h>
struct watchdog_ops;
struct watchdog_device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct watchdog_ops {
 struct module *owner;
 int (*start)(struct watchdog_device *);
 int (*stop)(struct watchdog_device *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*ping)(struct watchdog_device *);
 unsigned int (*status)(struct watchdog_device *);
 int (*set_timeout)(struct watchdog_device *, unsigned int);
 unsigned int (*get_timeleft)(struct watchdog_device *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*ref)(struct watchdog_device *);
 void (*unref)(struct watchdog_device *);
 long (*ioctl)(struct watchdog_device *, unsigned int, unsigned long);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct watchdog_device {
 int id;
 struct cdev cdev;
 struct device *dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device *parent;
 const struct watchdog_info *info;
 const struct watchdog_ops *ops;
 unsigned int bootstatus;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int timeout;
 unsigned int min_timeout;
 unsigned int max_timeout;
 void *driver_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mutex lock;
 unsigned long status;
#define WDOG_ACTIVE 0
#define WDOG_DEV_OPEN 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WDOG_ALLOW_RELEASE 2
#define WDOG_NO_WAY_OUT 3
#define WDOG_UNREGISTERED 4
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WATCHDOG_NOWAYOUT 0
#define WATCHDOG_NOWAYOUT_INIT_STATUS 0
#endif
