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
#ifndef __ASM_ARM_PTRACE_H
#define __ASM_ARM_PTRACE_H
#include <uapi/asm/ptrace.h>
#ifndef __ASSEMBLY__
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define user_mode(regs)   (((regs)->ARM_cpsr & 0xf) == 0)
#define thumb_mode(regs) (0)
#define isa_mode(regs)   ((((regs)->ARM_cpsr & PSR_J_BIT) >> 23) |   (((regs)->ARM_cpsr & PSR_T_BIT) >> 5))
#define processor_mode(regs)   ((regs)->ARM_cpsr & MODE_MASK)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define interrupts_enabled(regs)   (!((regs)->ARM_cpsr & PSR_I_BIT))
#define fast_interrupts_enabled(regs)   (!((regs)->ARM_cpsr & PSR_F_BIT))
#define instruction_pointer(regs) (regs)->ARM_pc
#define profile_pc(regs) instruction_pointer(regs)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define predicate(x) ((x) & 0xf0000000)
#define PREDICATE_ALWAYS 0xe0000000
#define is_wide_instruction(instr) ((unsigned)(instr) >= 0xe800)
#include <linux/stddef.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/types.h>
#define MAX_REG_OFFSET (offsetof(struct pt_regs, ARM_ORIG_r0))
#define current_pt_regs(void) ({   register unsigned long sp asm ("sp");   (struct pt_regs *)((sp | (THREAD_SIZE - 1)) - 7) - 1;  })
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
