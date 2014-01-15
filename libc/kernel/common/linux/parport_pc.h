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
#ifndef __LINUX_PARPORT_PC_H
#define __LINUX_PARPORT_PC_H
#include <asm/io.h>
#define ECONTROL(p) ((p)->base_hi + 0x2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CONFIGB(p) ((p)->base_hi + 0x1)
#define CONFIGA(p) ((p)->base_hi + 0x0)
#define FIFO(p) ((p)->base_hi + 0x0)
#define EPPDATA(p) ((p)->base + 0x4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EPPADDR(p) ((p)->base + 0x3)
#define CONTROL(p) ((p)->base + 0x2)
#define STATUS(p) ((p)->base + 0x1)
#define DATA(p) ((p)->base + 0x0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct parport_pc_private {
 unsigned char ctr;
 unsigned char ctr_writable;
 int ecr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int fifo_depth;
 int pword;
 int readIntrThreshold;
 int writeIntrThreshold;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char *dma_buf;
 dma_addr_t dma_handle;
 struct parport *port;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct parport_pc_via_data
{
 u8 via_pci_parport_irq_reg;
 u8 via_pci_parport_dma_reg;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 via_pci_superio_config_reg;
 u8 via_pci_superio_config_data;
 u8 viacfg_function;
 u8 viacfg_parport_control;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 viacfg_parport_base;
};
#ifdef DEBUG_PARPORT
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef DEBUG_PARPORT
#endif
#ifdef DEBUG_PARPORT
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define dump_parport_state(args...)
#endif
#ifdef DEBUG_PARPORT
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
