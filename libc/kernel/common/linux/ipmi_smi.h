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
#ifndef __LINUX_IPMI_SMI_H
#define __LINUX_IPMI_SMI_H
#include <linux/ipmi_msgdefs.h>
#include <linux/proc_fs.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/platform_device.h>
#include <linux/ipmi.h>
struct device;
typedef struct ipmi_smi *ipmi_smi_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ipmi_smi_msg {
 long msgid;
 void *user_data;
 int data_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char data[IPMI_MAX_MSG_LENGTH];
 int rsp_size;
 unsigned char rsp[IPMI_MAX_MSG_LENGTH];
 void (*done)(struct ipmi_smi_msg *msg);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ipmi_smi_handlers {
 struct module *owner;
 int (*start_processing)(void *send_info,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ipmi_smi_t new_intf);
 int (*get_smi_info)(void *send_info, struct ipmi_smi_info *data);
 void (*sender)(void *send_info,
 struct ipmi_smi_msg *msg,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int priority);
 void (*request_events)(void *send_info);
 void (*set_run_to_completion)(void *send_info, int run_to_completion);
 void (*poll)(void *send_info);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*set_maintenance_mode)(void *send_info, int enable);
 int (*inc_usecount)(void *send_info);
 void (*dec_usecount)(void *send_info);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ipmi_device_id {
 unsigned char device_id;
 unsigned char device_revision;
 unsigned char firmware_revision_1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char firmware_revision_2;
 unsigned char ipmi_version;
 unsigned char additional_device_support;
 unsigned int manufacturer_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int product_id;
 unsigned char aux_firmware_revision[4];
 unsigned int aux_firmware_revision_set : 1;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ipmi_version_major(v) ((v)->ipmi_version & 0xf)
#define ipmi_version_minor(v) ((v)->ipmi_version >> 4)
struct ipmi_smi_msg *ipmi_alloc_smi_msg(void);
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
