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
#ifndef __LINUX_EXTCON_H__
#define __LINUX_EXTCON_H__
#include <linux/device.h>
#include <linux/notifier.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/sysfs.h>
#define SUPPORTED_CABLE_MAX 32
#define CABLE_NAME_MAX 30
enum extcon_cable_name {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 EXTCON_USB = 0,
 EXTCON_USB_HOST,
 EXTCON_TA,
 EXTCON_FAST_CHARGER,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 EXTCON_SLOW_CHARGER,
 EXTCON_CHARGE_DOWNSTREAM,
 EXTCON_HDMI,
 EXTCON_MHL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 EXTCON_DVI,
 EXTCON_VGA,
 EXTCON_DOCK,
 EXTCON_LINE_IN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 EXTCON_LINE_OUT,
 EXTCON_MIC_IN,
 EXTCON_HEADPHONE_OUT,
 EXTCON_SPDIF_IN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 EXTCON_SPDIF_OUT,
 EXTCON_VIDEO_IN,
 EXTCON_VIDEO_OUT,
 EXTCON_MECHANICAL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct extcon_cable;
struct extcon_dev {
 const char *name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char **supported_cable;
 const u32 *mutually_exclusive;
 ssize_t (*print_name)(struct extcon_dev *edev, char *buf);
 ssize_t (*print_state)(struct extcon_dev *edev, char *buf);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device *dev;
 u32 state;
 struct raw_notifier_head nh;
 spinlock_t lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int max_supported;
 struct device_type extcon_dev_type;
 struct extcon_cable *cables;
 struct attribute_group attr_g_muex;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct attribute **attrs_muex;
 struct device_attribute *d_attrs_muex;
};
struct extcon_cable {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct extcon_dev *edev;
 int cable_index;
 struct attribute_group attr_g;
 struct device_attribute attr_name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device_attribute attr_state;
 struct attribute *attrs[3];
};
struct extcon_specific_cable_nb {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct notifier_block internal_nb;
 struct notifier_block *user_nb;
 int cable_index;
 struct extcon_dev *edev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long previous_value;
};
#if ???
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#endif
