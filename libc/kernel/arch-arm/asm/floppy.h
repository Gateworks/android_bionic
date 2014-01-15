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
#ifndef __ASM_ARM_FLOPPY_H
#define __ASM_ARM_FLOPPY_H
#define fd_outb(val,port)   do {   if ((port) == FD_DOR)   fd_setdor((val));   else   outb((val),(port));   } while(0)
#define fd_inb(port) inb((port))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define fd_request_irq() request_irq(IRQ_FLOPPYDISK,floppy_interrupt,  IRQF_DISABLED,"floppy",NULL)
#define fd_free_irq() free_irq(IRQ_FLOPPYDISK,NULL)
#define fd_disable_irq() disable_irq(IRQ_FLOPPYDISK)
#define fd_enable_irq() enable_irq(IRQ_FLOPPYDISK)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define fd_dma_setup fd_dma_setup
#define fd_request_dma() request_dma(DMA_FLOPPY,"floppy")
#define fd_free_dma() free_dma(DMA_FLOPPY)
#define fd_disable_dma() disable_dma(DMA_FLOPPY)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DMA_FLOPPYDISK DMA_FLOPPY
#define fd_setdor(dor)  do {   int new_dor = (dor);   if (new_dor & 0xf0)   new_dor = (new_dor & 0x0c) | floppy_selects[fdc][new_dor & 3];   else   new_dor &= 0x0c;   outb(new_dor, FD_DOR);  } while (0)
#define FDC1 (0x3f0)
#define FLOPPY0_TYPE 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FLOPPY1_TYPE 4
#define N_FDC 1
#define N_DRIVE 4
#define CROSS_64KB(a,s) (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EXTRA_FLOPPY_PARAMS ,{ "driveswap", &driveswap, NULL, 0, 0 }
#endif
