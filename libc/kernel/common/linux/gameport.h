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
#ifndef _GAMEPORT_H
#define _GAMEPORT_H
#include <asm/io.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/list.h>
#include <linux/mutex.h>
#include <linux/device.h>
#include <linux/timer.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/slab.h>
#include <uapi/linux/gameport.h>
struct gameport {
 void *port_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char name[32];
 char phys[32];
 int io;
 int speed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int fuzz;
 void (*trigger)(struct gameport *);
 unsigned char (*read)(struct gameport *);
 int (*cooked_read)(struct gameport *, int *, int *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*calibrate)(struct gameport *, int *, int *);
 int (*open)(struct gameport *, int);
 void (*close)(struct gameport *);
 struct timer_list poll_timer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int poll_interval;
 spinlock_t timer_lock;
 unsigned int poll_cnt;
 void (*poll_handler)(struct gameport *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct gameport *parent, *child;
 struct gameport_driver *drv;
 struct mutex drv_mutex;
 struct device dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define to_gameport_port(d) container_of(d, struct gameport, dev)
struct gameport_driver {
 const char *description;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*connect)(struct gameport *, struct gameport_driver *drv);
 int (*reconnect)(struct gameport *);
 void (*disconnect)(struct gameport *);
 struct device_driver driver;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool ignore;
};
#define to_gameport_driver(d) container_of(d, struct gameport_driver, driver)
#if defined(MODULE) && defined(CONFIG_GAMEPORT_MODULE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define gameport_register_port(gameport)   __gameport_register_port(gameport, THIS_MODULE)
#else
#endif
#define gameport_register_driver(drv)   __gameport_register_driver(drv, THIS_MODULE, KBUILD_MODNAME)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define module_gameport_driver(__gameport_driver)   module_driver(__gameport_driver, gameport_register_driver,   gameport_unregister_driver)
#endif
