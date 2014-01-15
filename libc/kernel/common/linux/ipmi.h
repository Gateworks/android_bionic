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
#ifndef __LINUX_IPMI_H
#define __LINUX_IPMI_H
#include <uapi/linux/ipmi.h>
#include <linux/list.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/proc_fs.h>
struct module;
struct device;
typedef struct ipmi_user *ipmi_user_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ipmi_recv_msg {
 int recv_type;
 ipmi_user_t user;
 struct ipmi_addr addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 long msgid;
 struct kernel_ipmi_msg msg;
 void *user_msg_data;
 void (*done)(struct ipmi_recv_msg *msg);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char msg_data[IPMI_MAX_MSG_LENGTH];
};
struct ipmi_user_hndl {
 void (*ipmi_recv_hndl)(struct ipmi_recv_msg *msg,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *user_msg_data);
 void (*ipmi_watchdog_pretimeout)(void *handler_data);
};
struct ipmi_smi_watcher {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct module *owner;
 void (*new_smi)(int if_num, struct device *dev);
 void (*smi_gone)(int if_num);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum ipmi_addr_src {
 SI_INVALID = 0, SI_HOTMOD, SI_HARDCODED, SI_SPMI, SI_ACPI, SI_SMBIOS,
 SI_PCI, SI_DEVICETREE, SI_DEFAULT
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
union ipmi_smi_info_union {
 struct {
 void *acpi_handle;
 } acpi_info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ipmi_smi_info {
 enum ipmi_addr_src addr_src;
 struct device *dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union ipmi_smi_info_union addr_info;
};
#endif
