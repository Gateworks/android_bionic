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
#ifndef _LINUX_EISA_H
#define _LINUX_EISA_H
#include <linux/ioport.h>
#include <linux/device.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mod_devicetable.h>
#define EISA_MAX_SLOTS 8
#define EISA_MAX_RESOURCES 4
#define EISA_DMA1_STATUS 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EISA_INT1_CTRL 0x20
#define EISA_INT1_MASK 0x21
#define EISA_INT2_CTRL 0xA0
#define EISA_INT2_MASK 0xA1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EISA_DMA2_STATUS 0xD0
#define EISA_DMA2_WRITE_SINGLE 0xD4
#define EISA_EXT_NMI_RESET_CTRL 0x461
#define EISA_INT1_EDGE_LEVEL 0x4D0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EISA_INT2_EDGE_LEVEL 0x4D1
#define EISA_VENDOR_ID_OFFSET 0xC80
#define EISA_CONFIG_OFFSET 0xC84
#define EISA_CONFIG_ENABLED 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EISA_CONFIG_FORCED 2
struct eisa_device {
 struct eisa_device_id id;
 int slot;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int state;
 unsigned long base_addr;
 struct resource res[EISA_MAX_RESOURCES];
 u64 dma_mask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device dev;
};
#define to_eisa_device(n) container_of(n, struct eisa_device, dev)
struct eisa_driver {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct eisa_device_id *id_table;
 struct device_driver driver;
};
#define to_eisa_driver(drv) container_of(drv,struct eisa_driver, driver)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct eisa_root_device {
 struct device *dev;
 struct resource *res;
 unsigned long bus_base_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int slots;
 int force_probe;
 u64 dma_mask;
 int bus_nr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct resource eisa_root_res;
};
#define EISA_bus 0
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
