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
#ifndef __ASM_ARM_OPCODES_VIRT_H
#define __ASM_ARM_OPCODES_VIRT_H
#include <asm/opcodes.h>
#define __HVC(imm16) __inst_arm_thumb32(   0xE1400070 | (((imm16) & 0xFFF0) << 4) | ((imm16) & 0x000F),   0xF7E08000 | (((imm16) & 0xF000) << 4) | ((imm16) & 0x0FFF)  )
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __ERET __inst_arm_thumb32(   0xE160006E,   0xF3DE8F00  )
#define __MSR_ELR_HYP(regnum) __inst_arm_thumb32(   0xE12EF300 | regnum,   0xF3808E30 | (regnum << 16)  )
#endif
