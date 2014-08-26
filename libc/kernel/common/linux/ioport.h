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
#ifndef _LINUX_IOPORT_H
#define _LINUX_IOPORT_H
#ifndef __ASSEMBLY__
#include <linux/compiler.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/types.h>
#define IORESOURCE_BITS 0x000000ff
#define IORESOURCE_TYPE_BITS 0x00001f00
#define IORESOURCE_IO 0x00000100
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IORESOURCE_MEM 0x00000200
#define IORESOURCE_REG 0x00000300
#define IORESOURCE_IRQ 0x00000400
#define IORESOURCE_DMA 0x00000800
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IORESOURCE_BUS 0x00001000
#define IORESOURCE_PREFETCH 0x00002000
#define IORESOURCE_READONLY 0x00004000
#define IORESOURCE_CACHEABLE 0x00008000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IORESOURCE_RANGELENGTH 0x00010000
#define IORESOURCE_SHADOWABLE 0x00020000
#define IORESOURCE_SIZEALIGN 0x00040000
#define IORESOURCE_STARTALIGN 0x00080000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IORESOURCE_MEM_64 0x00100000
#define IORESOURCE_WINDOW 0x00200000
#define IORESOURCE_MUXED 0x00400000
#define IORESOURCE_EXCLUSIVE 0x08000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IORESOURCE_DISABLED 0x10000000
#define IORESOURCE_UNSET 0x20000000
#define IORESOURCE_AUTO 0x40000000
#define IORESOURCE_BUSY 0x80000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IORESOURCE_IRQ_HIGHEDGE (1<<0)
#define IORESOURCE_IRQ_LOWEDGE (1<<1)
#define IORESOURCE_IRQ_HIGHLEVEL (1<<2)
#define IORESOURCE_IRQ_LOWLEVEL (1<<3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IORESOURCE_IRQ_SHAREABLE (1<<4)
#define IORESOURCE_IRQ_OPTIONAL (1<<5)
#define IORESOURCE_DMA_TYPE_MASK (3<<0)
#define IORESOURCE_DMA_8BIT (0<<0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IORESOURCE_DMA_8AND16BIT (1<<0)
#define IORESOURCE_DMA_16BIT (2<<0)
#define IORESOURCE_DMA_MASTER (1<<2)
#define IORESOURCE_DMA_BYTE (1<<3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IORESOURCE_DMA_WORD (1<<4)
#define IORESOURCE_DMA_SPEED_MASK (3<<6)
#define IORESOURCE_DMA_COMPATIBLE (0<<6)
#define IORESOURCE_DMA_TYPEA (1<<6)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IORESOURCE_DMA_TYPEB (2<<6)
#define IORESOURCE_DMA_TYPEF (3<<6)
#define IORESOURCE_MEM_WRITEABLE (1<<0)
#define IORESOURCE_MEM_CACHEABLE (1<<1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IORESOURCE_MEM_RANGELENGTH (1<<2)
#define IORESOURCE_MEM_TYPE_MASK (3<<3)
#define IORESOURCE_MEM_8BIT (0<<3)
#define IORESOURCE_MEM_16BIT (1<<3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IORESOURCE_MEM_8AND16BIT (2<<3)
#define IORESOURCE_MEM_32BIT (3<<3)
#define IORESOURCE_MEM_SHADOWABLE (1<<5)
#define IORESOURCE_MEM_EXPANSIONROM (1<<6)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IORESOURCE_IO_16BIT_ADDR (1<<0)
#define IORESOURCE_IO_FIXED (1<<1)
#define IORESOURCE_ROM_ENABLE (1<<0)
#define IORESOURCE_ROM_SHADOW (1<<1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IORESOURCE_ROM_COPY (1<<2)
#define IORESOURCE_ROM_BIOS_COPY (1<<3)
#define IORESOURCE_PCI_FIXED (1<<4)
#define DEFINE_RES_NAMED(_start, _size, _name, _flags)   {   .start = (_start),   .end = (_start) + (_size) - 1,   .name = (_name),   .flags = (_flags),   }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DEFINE_RES_IO_NAMED(_start, _size, _name)   DEFINE_RES_NAMED((_start), (_size), (_name), IORESOURCE_IO)
#define DEFINE_RES_IO(_start, _size)   DEFINE_RES_IO_NAMED((_start), (_size), NULL)
#define DEFINE_RES_MEM_NAMED(_start, _size, _name)   DEFINE_RES_NAMED((_start), (_size), (_name), IORESOURCE_MEM)
#define DEFINE_RES_MEM(_start, _size)   DEFINE_RES_MEM_NAMED((_start), (_size), NULL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DEFINE_RES_IRQ_NAMED(_irq, _name)   DEFINE_RES_NAMED((_irq), 1, (_name), IORESOURCE_IRQ)
#define DEFINE_RES_IRQ(_irq)   DEFINE_RES_IRQ_NAMED((_irq), NULL)
#define DEFINE_RES_DMA_NAMED(_dma, _name)   DEFINE_RES_NAMED((_dma), 1, (_name), IORESOURCE_DMA)
#define DEFINE_RES_DMA(_dma)   DEFINE_RES_DMA_NAMED((_dma), NULL)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define request_region(start,n,name) __request_region(&ioport_resource, (start), (n), (name), 0)
#define request_muxed_region(start,n,name) __request_region(&ioport_resource, (start), (n), (name), IORESOURCE_MUXED)
#define __request_mem_region(start,n,name, excl) __request_region(&iomem_resource, (start), (n), (name), excl)
#define request_mem_region(start,n,name) __request_region(&iomem_resource, (start), (n), (name), 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define request_mem_region_exclusive(start,n,name)   __request_region(&iomem_resource, (start), (n), (name), IORESOURCE_EXCLUSIVE)
#define rename_region(region, newname) do { (region)->name = (newname); } while (0)
#define release_region(start,n) __release_region(&ioport_resource, (start), (n))
#define check_mem_region(start,n) __check_region(&iomem_resource, (start), (n))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define release_mem_region(start,n) __release_region(&iomem_resource, (start), (n))
struct device;
#define devm_request_region(dev,start,n,name)   __devm_request_region(dev, &ioport_resource, (start), (n), (name))
#define devm_request_mem_region(dev,start,n,name)   __devm_request_region(dev, &iomem_resource, (start), (n), (name))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define devm_release_region(dev, start, n)   __devm_release_region(dev, &ioport_resource, (start), (n))
#define devm_release_mem_region(dev, start, n)   __devm_release_region(dev, &iomem_resource, (start), (n))
#endif
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
