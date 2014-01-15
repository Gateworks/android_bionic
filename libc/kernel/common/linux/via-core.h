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
#ifndef __VIA_CORE_H__
#define __VIA_CORE_H__
#include <linux/types.h>
#include <linux/io.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/spinlock.h>
#include <linux/pci.h>
enum via_port_type {
 VIA_PORT_NONE = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 VIA_PORT_I2C,
 VIA_PORT_GPIO,
};
enum via_port_mode {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 VIA_MODE_OFF = 0,
 VIA_MODE_I2C,
 VIA_MODE_GPIO,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum viafb_i2c_adap {
 VIA_PORT_26 = 0,
 VIA_PORT_31,
 VIA_PORT_25,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 VIA_PORT_2C,
 VIA_PORT_3D,
};
#define VIAFB_NUM_PORTS 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct via_port_cfg {
 enum via_port_type type;
 enum via_port_mode mode;
 u16 io_port;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 ioport_index;
};
struct viafb_dev {
 struct pci_dev *pdev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int chip_type;
 struct via_port_cfg *port_cfg;
 spinlock_t reg_lock;
 unsigned long fbmem_start;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 long fbmem_len;
 void __iomem *fbmem;
 unsigned long engine_start;
 unsigned long engine_len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void __iomem *engine_mmio;
};
#define VDE_INTERRUPT 0x200
#define VDE_I_DVISENSE 0x00000001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VDE_I_VBLANK 0x00000002
#define VDE_I_MCCFI 0x00000004
#define VDE_I_VSYNC 0x00000008
#define VDE_I_DMA0DDONE 0x00000010
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VDE_I_DMA0TDONE 0x00000020
#define VDE_I_DMA1DDONE 0x00000040
#define VDE_I_DMA1TDONE 0x00000080
#define VDE_I_C1AV 0x00000100
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VDE_I_HQV0 0x00000200
#define VDE_I_HQV1 0x00000400
#define VDE_I_HQV1EN 0x00000800
#define VDE_I_C0AV 0x00001000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VDE_I_C0VBI 0x00002000
#define VDE_I_C1VBI 0x00004000
#define VDE_I_VSYNC2 0x00008000
#define VDE_I_DVISNSEN 0x00010000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VDE_I_VSYNC2EN 0x00020000
#define VDE_I_MCCFIEN 0x00040000
#define VDE_I_VSYNCEN 0x00080000
#define VDE_I_DMA0DDEN 0x00100000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VDE_I_DMA0TDEN 0x00200000
#define VDE_I_DMA1DDEN 0x00400000
#define VDE_I_DMA1TDEN 0x00800000
#define VDE_I_C1AVEN 0x01000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VDE_I_HQV0EN 0x02000000
#define VDE_I_C1VBIEN 0x04000000
#define VDE_I_LVDSSI 0x08000000
#define VDE_I_C0AVEN 0x10000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VDE_I_C0VBIEN 0x20000000
#define VDE_I_LVDSSIEN 0x40000000
#define VDE_I_ENABLE 0x80000000
#define VIAStatus 0x3DA
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIACR 0x3D4
#define VIASR 0x3C4
#define VIAGR 0x3CE
#define VIAAR 0x3C0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIA_MISC_REG_READ 0x03CC
#define VIA_MISC_REG_WRITE 0x03C2
#endif
