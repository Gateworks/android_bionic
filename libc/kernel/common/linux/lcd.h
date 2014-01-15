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
#ifndef _LINUX_LCD_H
#define _LINUX_LCD_H
#include <linux/device.h>
#include <linux/mutex.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/notifier.h>
#include <linux/fb.h>
struct lcd_device;
struct fb_info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct lcd_properties {
 int max_contrast;
};
struct lcd_ops {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*get_power)(struct lcd_device *);
 int (*early_set_power)(struct lcd_device *, int power);
 int (*r_early_set_power)(struct lcd_device *, int power);
 int (*set_power)(struct lcd_device *, int power);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*get_contrast)(struct lcd_device *);
 int (*set_contrast)(struct lcd_device *, int contrast);
 int (*set_mode)(struct lcd_device *, struct fb_videomode *);
 int (*check_fb)(struct lcd_device *, struct fb_info *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct lcd_device {
 struct lcd_properties props;
 struct mutex ops_lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct lcd_ops *ops;
 struct mutex update_lock;
 struct notifier_block fb_notif;
 struct device dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct lcd_platform_data {
 int (*reset)(struct lcd_device *ld);
 int (*power_on)(struct lcd_device *ld, int enable);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int lcd_enabled;
 unsigned int reset_delay;
 unsigned int power_on_delay;
 unsigned int power_off_delay;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *pdata;
};
#define to_lcd_device(obj) container_of(obj, struct lcd_device, dev)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
