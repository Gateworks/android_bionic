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
#ifndef _LINUX_BACKLIGHT_H
#define _LINUX_BACKLIGHT_H
#include <linux/device.h>
#include <linux/fb.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mutex.h>
#include <linux/notifier.h>
enum backlight_update_reason {
 BACKLIGHT_UPDATE_HOTKEY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BACKLIGHT_UPDATE_SYSFS,
};
enum backlight_type {
 BACKLIGHT_RAW = 1,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BACKLIGHT_PLATFORM,
 BACKLIGHT_FIRMWARE,
 BACKLIGHT_TYPE_MAX,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct backlight_device;
struct fb_info;
struct backlight_ops {
 unsigned int options;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BL_CORE_SUSPENDRESUME (1 << 0)
 int (*update_status)(struct backlight_device *);
 int (*get_brightness)(struct backlight_device *);
 int (*check_fb)(struct backlight_device *, struct fb_info *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct backlight_properties {
 int brightness;
 int max_brightness;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int power;
 int fb_blank;
 enum backlight_type type;
 unsigned int state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BL_CORE_SUSPENDED (1 << 0)
#define BL_CORE_FBBLANK (1 << 1)
#define BL_CORE_DRIVER4 (1 << 28)
#define BL_CORE_DRIVER3 (1 << 29)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BL_CORE_DRIVER2 (1 << 30)
#define BL_CORE_DRIVER1 (1 << 31)
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
