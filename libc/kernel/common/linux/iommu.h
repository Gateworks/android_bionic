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
#ifndef __LINUX_IOMMU_H
#define __LINUX_IOMMU_H
#include <linux/errno.h>
#include <linux/err.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/types.h>
#define IOMMU_READ (1)
#define IOMMU_WRITE (2)
#define IOMMU_CACHE (4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct iommu_ops;
struct iommu_group;
struct bus_type;
struct device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct iommu_domain;
struct notifier_block;
#define IOMMU_FAULT_READ 0x0
#define IOMMU_FAULT_WRITE 0x1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef int (*iommu_fault_handler_t)(struct iommu_domain *,
 struct device *, unsigned long, int, void *);
struct iommu_domain_geometry {
 dma_addr_t aperture_start;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 dma_addr_t aperture_end;
 bool force_aperture;
};
struct iommu_domain {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct iommu_ops *ops;
 void *priv;
 iommu_fault_handler_t handler;
 void *handler_token;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct iommu_domain_geometry geometry;
};
#define IOMMU_CAP_CACHE_COHERENCY 0x1
#define IOMMU_CAP_INTR_REMAP 0x2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum iommu_attr {
 DOMAIN_ATTR_GEOMETRY,
 DOMAIN_ATTR_PAGING,
 DOMAIN_ATTR_WINDOWS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DOMAIN_ATTR_MAX,
};
struct iommu_ops {};
struct iommu_group {};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
