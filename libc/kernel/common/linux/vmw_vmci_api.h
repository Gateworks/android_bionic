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
#ifndef __VMW_VMCI_API_H__
#define __VMW_VMCI_API_H__
#include <linux/uidgid.h>
#include <linux/vmw_vmci_defs.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#undef VMCI_KERNEL_API_VERSION
#define VMCI_KERNEL_API_VERSION_1 1
#define VMCI_KERNEL_API_VERSION_2 2
#define VMCI_KERNEL_API_VERSION VMCI_KERNEL_API_VERSION_2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef void (vmci_device_shutdown_fn) (void *device_registration,
 void *user_data);
#endif
