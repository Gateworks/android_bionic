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
#ifndef _HID_SENSORS_HUB_H
#define _HID_SENSORS_HUB_H
#include <linux/hid.h>
#include <linux/hid-sensor-ids.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct hid_sensor_hub_attribute_info {
 u32 usage_id;
 u32 attrib_id;
 s32 report_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 s32 index;
 s32 units;
 s32 unit_expo;
 s32 size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct hid_sensor_hub_device {
 struct hid_device *hdev;
 u32 vendor_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 product_id;
};
struct hid_sensor_hub_callbacks {
 struct platform_device *pdev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*suspend)(struct hid_sensor_hub_device *hsdev, void *priv);
 int (*resume)(struct hid_sensor_hub_device *hsdev, void *priv);
 int (*capture_sample)(struct hid_sensor_hub_device *hsdev,
 u32 usage_id, size_t raw_len, char *raw_data,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *priv);
 int (*send_event)(struct hid_sensor_hub_device *hsdev, u32 usage_id,
 void *priv);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct hid_sensor_common {
 struct hid_sensor_hub_device *hsdev;
 struct platform_device *pdev;
 unsigned usage_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool data_ready;
 struct hid_sensor_hub_attribute_info poll;
 struct hid_sensor_hub_attribute_info report_state;
 struct hid_sensor_hub_attribute_info power_state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct hid_sensor_hub_attribute_info sensitivity;
};
#endif
