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
#ifndef _LINUX_HWMON_SYSFS_H
#define _LINUX_HWMON_SYSFS_H
#include <linux/device.h>
struct sensor_device_attribute{
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device_attribute dev_attr;
 int index;
};
#define to_sensor_dev_attr(_dev_attr)   container_of(_dev_attr, struct sensor_device_attribute, dev_attr)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SENSOR_ATTR(_name, _mode, _show, _store, _index)   { .dev_attr = __ATTR(_name, _mode, _show, _store),   .index = _index }
#define SENSOR_DEVICE_ATTR(_name, _mode, _show, _store, _index)  struct sensor_device_attribute sensor_dev_attr_##_name   = SENSOR_ATTR(_name, _mode, _show, _store, _index)
struct sensor_device_attribute_2 {
 struct device_attribute dev_attr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 index;
 u8 nr;
};
#define to_sensor_dev_attr_2(_dev_attr)   container_of(_dev_attr, struct sensor_device_attribute_2, dev_attr)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SENSOR_ATTR_2(_name, _mode, _show, _store, _nr, _index)   { .dev_attr = __ATTR(_name, _mode, _show, _store),   .index = _index,   .nr = _nr }
#define SENSOR_DEVICE_ATTR_2(_name,_mode,_show,_store,_nr,_index)  struct sensor_device_attribute_2 sensor_dev_attr_##_name   = SENSOR_ATTR_2(_name, _mode, _show, _store, _nr, _index)
#endif
