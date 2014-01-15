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
#ifndef _LINUX_ENCLOSURE_H_
#define _LINUX_ENCLOSURE_H_
#include <linux/device.h>
#include <linux/list.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum enclosure_component_type {
 ENCLOSURE_COMPONENT_DEVICE = 0x01,
 ENCLOSURE_COMPONENT_ARRAY_DEVICE = 0x17,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum enclosure_status {
 ENCLOSURE_STATUS_UNSUPPORTED = 0,
 ENCLOSURE_STATUS_OK,
 ENCLOSURE_STATUS_CRITICAL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ENCLOSURE_STATUS_NON_CRITICAL,
 ENCLOSURE_STATUS_UNRECOVERABLE,
 ENCLOSURE_STATUS_NOT_INSTALLED,
 ENCLOSURE_STATUS_UNKNOWN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ENCLOSURE_STATUS_UNAVAILABLE,
 ENCLOSURE_STATUS_MAX
};
enum enclosure_component_setting {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ENCLOSURE_SETTING_DISABLED = 0,
 ENCLOSURE_SETTING_ENABLED = 1,
 ENCLOSURE_SETTING_BLINK_A_ON_OFF = 2,
 ENCLOSURE_SETTING_BLINK_A_OFF_ON = 3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ENCLOSURE_SETTING_BLINK_B_ON_OFF = 6,
 ENCLOSURE_SETTING_BLINK_B_OFF_ON = 7,
};
struct enclosure_device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct enclosure_component;
struct enclosure_component_callbacks {
 void (*get_status)(struct enclosure_device *,
 struct enclosure_component *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*set_status)(struct enclosure_device *,
 struct enclosure_component *,
 enum enclosure_status);
 void (*get_fault)(struct enclosure_device *,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct enclosure_component *);
 int (*set_fault)(struct enclosure_device *,
 struct enclosure_component *,
 enum enclosure_component_setting);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*get_active)(struct enclosure_device *,
 struct enclosure_component *);
 int (*set_active)(struct enclosure_device *,
 struct enclosure_component *,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum enclosure_component_setting);
 void (*get_locate)(struct enclosure_device *,
 struct enclosure_component *);
 int (*set_locate)(struct enclosure_device *,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct enclosure_component *,
 enum enclosure_component_setting);
};
struct enclosure_component {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *scratch;
 struct device cdev;
 struct device *dev;
 enum enclosure_component_type type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int number;
 int fault;
 int active;
 int locate;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum enclosure_status status;
};
struct enclosure_device {
 void *scratch;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device edev;
 struct enclosure_component_callbacks *cb;
 int components;
 struct enclosure_component component[0];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct enclosure_device *
enclosure_register(struct device *, const char *, int,
 struct enclosure_component_callbacks *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct enclosure_component *
enclosure_component_register(struct enclosure_device *, unsigned int,
 enum enclosure_component_type, const char *);
struct enclosure_device *enclosure_find(struct device *dev,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct enclosure_device *start);
#endif
