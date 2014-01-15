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
#ifndef _SERIO_H
#define _SERIO_H
#include <linux/types.h>
#include <linux/interrupt.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/list.h>
#include <linux/spinlock.h>
#include <linux/mutex.h>
#include <linux/device.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mod_devicetable.h>
#include <uapi/linux/serio.h>
struct serio {
 void *port_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char name[32];
 char phys[32];
 bool manual_bind;
 struct serio_device_id id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 spinlock_t lock;
 int (*write)(struct serio *, unsigned char);
 int (*open)(struct serio *);
 void (*close)(struct serio *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*start)(struct serio *);
 void (*stop)(struct serio *);
 struct serio *parent;
 unsigned int depth;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct serio_driver *drv;
 struct mutex drv_mutex;
 struct device dev;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define to_serio_port(d) container_of(d, struct serio, dev)
struct serio_driver {
 const char *description;
 const struct serio_device_id *id_table;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool manual_bind;
 void (*write_wakeup)(struct serio *);
 irqreturn_t (*interrupt)(struct serio *, unsigned char, unsigned int);
 int (*connect)(struct serio *, struct serio_driver *drv);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*reconnect)(struct serio *);
 void (*disconnect)(struct serio *);
 void (*cleanup)(struct serio *);
 struct device_driver driver;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define to_serio_driver(d) container_of(d, struct serio_driver, driver)
#define serio_register_port(serio)   __serio_register_port(serio, THIS_MODULE)
#define serio_register_driver(drv)   __serio_register_driver(drv, THIS_MODULE, KBUILD_MODNAME)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define module_serio_driver(__serio_driver)   module_driver(__serio_driver, serio_register_driver,   serio_unregister_driver)
#endif
