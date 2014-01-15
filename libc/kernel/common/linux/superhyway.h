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
#ifndef __LINUX_SUPERHYWAY_H
#define __LINUX_SUPERHYWAY_H
#include <linux/device.h>
#define SUPERHYWAY_DEVICE_ID_SH5_DMAC 0x0183
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct superhyway_vcr_info {
 u8 perr_flags;
 u8 merr_flags;
 u16 mod_vers;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 mod_id;
 u8 bot_mb;
 u8 top_mb;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct superhyway_ops {
 int (*read_vcr)(unsigned long base, struct superhyway_vcr_info *vcr);
 int (*write_vcr)(unsigned long base, struct superhyway_vcr_info vcr);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct superhyway_bus {
 struct superhyway_ops *ops;
};
struct superhyway_device_id {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int id;
 unsigned long driver_data;
};
struct superhyway_device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct superhyway_driver {
 char *name;
 const struct superhyway_device_id *id_table;
 struct device_driver drv;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*probe)(struct superhyway_device *dev, const struct superhyway_device_id *id);
 void (*remove)(struct superhyway_device *dev);
};
#define to_superhyway_driver(d) container_of((d), struct superhyway_driver, drv)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct superhyway_device {
 char name[32];
 struct device dev;
 struct superhyway_device_id id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct superhyway_driver *drv;
 struct superhyway_bus *bus;
 int num_resources;
 struct resource *resource;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct superhyway_vcr_info vcr;
};
#define to_superhyway_device(d) container_of((d), struct superhyway_device, dev)
#define superhyway_get_drvdata(d) dev_get_drvdata(&(d)->dev)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define superhyway_set_drvdata(d,p) dev_set_drvdata(&(d)->dev, (p))
#endif
