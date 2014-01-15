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
#ifndef VFIO_H
#define VFIO_H
#include <linux/iommu.h>
#include <linux/mm.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <uapi/linux/vfio.h>
struct vfio_device_ops {
 char *name;
 int (*open)(void *device_data);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*release)(void *device_data);
 ssize_t (*read)(void *device_data, char __user *buf,
 size_t count, loff_t *ppos);
 ssize_t (*write)(void *device_data, const char __user *buf,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t count, loff_t *size);
 long (*ioctl)(void *device_data, unsigned int cmd,
 unsigned long arg);
 int (*mmap)(void *device_data, struct vm_area_struct *vma);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct vfio_iommu_driver_ops {
 char *name;
 struct module *owner;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *(*open)(unsigned long arg);
 void (*release)(void *iommu_data);
 ssize_t (*read)(void *iommu_data, char __user *buf,
 size_t count, loff_t *ppos);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ssize_t (*write)(void *iommu_data, const char __user *buf,
 size_t count, loff_t *size);
 long (*ioctl)(void *iommu_data, unsigned int cmd,
 unsigned long arg);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*mmap)(void *iommu_data, struct vm_area_struct *vma);
 int (*attach_group)(void *iommu_data,
 struct iommu_group *group);
 void (*detach_group)(void *iommu_data,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct iommu_group *group);
};
#define offsetofend(TYPE, MEMBER) ({   TYPE tmp;   offsetof(TYPE, MEMBER) + sizeof(tmp.MEMBER); })
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
