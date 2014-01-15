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
#ifndef __ASM_OFFSETS_H__
#define __ASM_OFFSETS_H__
#define TSK_ACTIVE_MM 200
#define TI_FLAGS 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TI_PREEMPT 4
#define TI_ADDR_LIMIT 8
#define TI_TASK 12
#define TI_EXEC_DOMAIN 16
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TI_CPU 20
#define TI_CPU_DOMAIN 24
#define TI_CPU_SAVE 28
#define TI_USED_CP 80
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TI_TP_VALUE 96
#define TI_FPSTATE 104
#define TI_VFPSTATE 248
#define VFP_CPU 272
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define S_R0 0
#define S_R1 4
#define S_R2 8
#define S_R3 12
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define S_R4 16
#define S_R5 20
#define S_R6 24
#define S_R7 28
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define S_R8 32
#define S_R9 36
#define S_R10 40
#define S_FP 44
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define S_IP 48
#define S_SP 52
#define S_LR 56
#define S_PC 60
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define S_PSR 64
#define S_OLD_R0 68
#define S_FRAME_SIZE 72
#define L2X0_R_PHY_BASE 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define L2X0_R_AUX_CTRL 4
#define L2X0_R_TAG_LATENCY 8
#define L2X0_R_DATA_LATENCY 12
#define L2X0_R_FILTER_START 16
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define L2X0_R_FILTER_END 20
#define L2X0_R_PREFETCH_CTRL 24
#define L2X0_R_PWR_CTRL 28
#define MM_CONTEXT_ID 352
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VMA_VM_MM 32
#define VMA_VM_FLAGS 40
#define VM_EXEC 4
#define PAGE_SZ 4096
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SYS_ERROR0 10420224
#define SIZEOF_MACHINE_DESC 80
#define MACHINFO_TYPE 0
#define MACHINFO_NAME 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PROC_INFO_SZ 52
#define PROCINFO_INITFUNC 16
#define PROCINFO_MM_MMUFLAGS 8
#define PROCINFO_IO_MMUFLAGS 12
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CACHE_FLUSH_KERN_ALL 4
#define DMA_BIDIRECTIONAL 0
#define DMA_TO_DEVICE 1
#define DMA_FROM_DEVICE 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CACHE_WRITEBACK_ORDER 6
#define CACHE_WRITEBACK_GRANULE 64
#endif
