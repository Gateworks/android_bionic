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
#ifndef __THERMAL_H__
#define __THERMAL_H__
#include <linux/idr.h>
#include <linux/device.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/workqueue.h>
#define THERMAL_TRIPS_NONE -1
#define THERMAL_MAX_TRIPS 12
#define THERMAL_NAME_LENGTH 20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define THERMAL_CSTATE_INVALID -1UL
#define THERMAL_NO_LIMIT THERMAL_CSTATE_INVALID
#define KELVIN_TO_CELSIUS(t) (long)(((long)t-2732 >= 0) ?   ((long)t-2732+5)/10 : ((long)t-2732-5)/10)
#define CELSIUS_TO_KELVIN(t) ((t)*10+2732)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define THERMAL_GENL_FAMILY_NAME "thermal_event"
#define THERMAL_GENL_VERSION 0x01
#define THERMAL_GENL_MCAST_GROUP_NAME "thermal_mc_grp"
struct thermal_zone_device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct thermal_cooling_device;
enum thermal_device_mode {
 THERMAL_DEVICE_DISABLED = 0,
 THERMAL_DEVICE_ENABLED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum thermal_trip_type {
 THERMAL_TRIP_ACTIVE = 0,
 THERMAL_TRIP_PASSIVE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 THERMAL_TRIP_HOT,
 THERMAL_TRIP_CRITICAL,
};
enum thermal_trend {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 THERMAL_TREND_STABLE,
 THERMAL_TREND_RAISING,
 THERMAL_TREND_DROPPING,
 THERMAL_TREND_RAISE_FULL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 THERMAL_TREND_DROP_FULL,
};
enum events {
 THERMAL_AUX0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 THERMAL_AUX1,
 THERMAL_CRITICAL,
 THERMAL_DEV_FAULT,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 THERMAL_GENL_ATTR_UNSPEC,
 THERMAL_GENL_ATTR_EVENT,
 __THERMAL_GENL_ATTR_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define THERMAL_GENL_ATTR_MAX (__THERMAL_GENL_ATTR_MAX - 1)
enum {
 THERMAL_GENL_CMD_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 THERMAL_GENL_CMD_EVENT,
 __THERMAL_GENL_CMD_MAX,
};
#define THERMAL_GENL_CMD_MAX (__THERMAL_GENL_CMD_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct thermal_zone_device_ops {
 int (*bind) (struct thermal_zone_device *,
 struct thermal_cooling_device *);
 int (*unbind) (struct thermal_zone_device *,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct thermal_cooling_device *);
 int (*get_temp) (struct thermal_zone_device *, unsigned long *);
 int (*get_mode) (struct thermal_zone_device *,
 enum thermal_device_mode *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*set_mode) (struct thermal_zone_device *,
 enum thermal_device_mode);
 int (*get_trip_type) (struct thermal_zone_device *, int,
 enum thermal_trip_type *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*get_trip_temp) (struct thermal_zone_device *, int,
 unsigned long *);
 int (*set_trip_temp) (struct thermal_zone_device *, int,
 unsigned long);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*get_trip_hyst) (struct thermal_zone_device *, int,
 unsigned long *);
 int (*set_trip_hyst) (struct thermal_zone_device *, int,
 unsigned long);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*get_crit_temp) (struct thermal_zone_device *, unsigned long *);
 int (*set_emul_temp) (struct thermal_zone_device *, unsigned long);
 int (*get_trend) (struct thermal_zone_device *, int,
 enum thermal_trend *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*notify) (struct thermal_zone_device *, int,
 enum thermal_trip_type);
};
struct thermal_cooling_device_ops {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*get_max_state) (struct thermal_cooling_device *, unsigned long *);
 int (*get_cur_state) (struct thermal_cooling_device *, unsigned long *);
 int (*set_cur_state) (struct thermal_cooling_device *, unsigned long);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
