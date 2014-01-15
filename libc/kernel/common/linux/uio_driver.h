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
#ifndef _UIO_DRIVER_H_
#define _UIO_DRIVER_H_
#include <linux/fs.h>
#include <linux/interrupt.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct module;
struct uio_map;
struct uio_mem {
 const char *name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 phys_addr_t addr;
 unsigned long size;
 int memtype;
 void __iomem *internal_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct uio_map *map;
};
#define MAX_UIO_MAPS 5
struct uio_portio;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct uio_port {
 const char *name;
 unsigned long start;
 unsigned long size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int porttype;
 struct uio_portio *portio;
};
#define MAX_UIO_PORT_REGIONS 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct uio_device;
struct uio_info {
 struct uio_device *uio_dev;
 const char *name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *version;
 struct uio_mem mem[MAX_UIO_MAPS];
 struct uio_port port[MAX_UIO_PORT_REGIONS];
 long irq;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long irq_flags;
 void *priv;
 irqreturn_t (*handler)(int irq, struct uio_info *dev_info);
 int (*mmap)(struct uio_info *info, struct vm_area_struct *vma);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*open)(struct uio_info *info, struct inode *inode);
 int (*release)(struct uio_info *info, struct inode *inode);
 int (*irqcontrol)(struct uio_info *info, s32 irq_on);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define uio_register_device(parent, info)   __uio_register_device(THIS_MODULE, parent, info)
#define UIO_IRQ_CUSTOM -1
#define UIO_IRQ_NONE 0
#define UIO_MEM_NONE 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UIO_MEM_PHYS 1
#define UIO_MEM_LOGICAL 2
#define UIO_MEM_VIRTUAL 3
#define UIO_PORT_NONE 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UIO_PORT_X86 1
#define UIO_PORT_GPIO 2
#define UIO_PORT_OTHER 3
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
