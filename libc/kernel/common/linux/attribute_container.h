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
#ifndef _ATTRIBUTE_CONTAINER_H_
#define _ATTRIBUTE_CONTAINER_H_
#include <linux/list.h>
#include <linux/klist.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct device;
struct attribute_container {
 struct klist containers;
 const struct attribute_group *grp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device_attribute **attrs;
 int (*match)(struct attribute_container *, struct device *);
#define ATTRIBUTE_CONTAINER_NO_CLASSDEVS 0x01
 unsigned long flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct attribute_container *attribute_container_classdev_to_container(struct device *);
struct device *attribute_container_find_class_device(struct attribute_container *, struct device *);
struct device_attribute **attribute_container_classdev_to_attrs(const struct device *classdev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
