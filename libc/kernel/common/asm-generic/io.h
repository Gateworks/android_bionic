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
#ifndef __ASM_GENERIC_IO_H
#define __ASM_GENERIC_IO_H
#include <asm/page.h>
#include <linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm-generic/pci_iomap.h>
#ifndef mmiowb
#define mmiowb() do {} while (0)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __raw_readb
#endif
#ifndef __raw_readw
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __raw_readl
#endif
#define readb __raw_readb
#define readw readw
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define readl readl
#ifndef __raw_writeb
#endif
#ifndef __raw_writew
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef __raw_writel
#endif
#define writeb __raw_writeb
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define writew(b,addr) __raw_writew(__cpu_to_le16(b),addr)
#define writel(b,addr) __raw_writel(__cpu_to_le32(b),addr)
#ifndef PCI_IOBASE
#define PCI_IOBASE ((void __iomem *) 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define inb_p(addr) inb(addr)
#define inw_p(addr) inw(addr)
#define inl_p(addr) inl(addr)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define outb_p(x, addr) outb((x), (addr))
#define outw_p(x, addr) outw((x), (addr))
#define outl_p(x, addr) outl((x), (addr))
#ifndef insb
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef insw
#endif
#ifndef insl
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef outsb
#endif
#ifndef outsw
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef outsl
#endif
#define ioread8(addr) readb(addr)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ioread16(addr) readw(addr)
#define ioread16be(addr) __be16_to_cpu(__raw_readw(addr))
#define ioread32(addr) readl(addr)
#define ioread32be(addr) __be32_to_cpu(__raw_readl(addr))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define iowrite8(v, addr) writeb((v), (addr))
#define iowrite16(v, addr) writew((v), (addr))
#define iowrite16be(v, addr) __raw_writew(__cpu_to_be16(v), addr)
#define iowrite32(v, addr) writel((v), (addr))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define iowrite32be(v, addr) __raw_writel(__cpu_to_be32(v), addr)
#define ioread8_rep(p, dst, count)   insb((unsigned long) (p), (dst), (count))
#define ioread16_rep(p, dst, count)   insw((unsigned long) (p), (dst), (count))
#define ioread32_rep(p, dst, count)   insl((unsigned long) (p), (dst), (count))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define iowrite8_rep(p, src, count)   outsb((unsigned long) (p), (src), (count))
#define iowrite16_rep(p, src, count)   outsw((unsigned long) (p), (src), (count))
#define iowrite32_rep(p, src, count)   outsl((unsigned long) (p), (src), (count))
#ifndef IO_SPACE_LIMIT
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IO_SPACE_LIMIT 0xffff
#endif
#endif
