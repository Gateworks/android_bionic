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
#ifndef __ASM_ASSEMBLER_H__
#define __ASM_ASSEMBLER_H__
#ifndef __ASSEMBLY__
#error "Only include this from assembly code"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#include <asm/ptrace.h>
#include <asm/domain.h>
#include <asm/opcodes-virt.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IOMEM(x) (x)
#ifndef __ARMEB__
#define pull lsr
#define push lsl
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define get_byte_0 lsl #0
#define get_byte_1 lsr #8
#define get_byte_2 lsr #16
#define get_byte_3 lsr #24
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define put_byte_0 lsl #0
#define put_byte_1 lsl #8
#define put_byte_2 lsl #16
#define put_byte_3 lsl #24
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#define pull lsl
#define push lsr
#define get_byte_0 lsr #24
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define get_byte_1 lsr #16
#define get_byte_2 lsr #8
#define get_byte_3 lsl #0
#define put_byte_0 lsl #24
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define put_byte_1 lsl #16
#define put_byte_2 lsl #8
#define put_byte_3 lsl #0
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if __LINUX_ARM_ARCH__ >= 5
#define PLD(code...) code
#else
#define PLD(code...)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define CALGN(code...)
#if __LINUX_ARM_ARCH__ >= 6
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define USER(x...)  9999: x;   .pushsection __ex_table,"a";   .align 3;   .long 9999b,9001f;   .popsection
#define ALT_SMP(instr...)
#define ALT_UP(instr...) instr
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ALT_UP_B(label) b label
#if __LINUX_ARM_ARCH__ >= 7
#elif __LINUX_ARM_ARCH__ == 6
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if __LINUX_ARM_ARCH__ >= 6
#else
#endif
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
