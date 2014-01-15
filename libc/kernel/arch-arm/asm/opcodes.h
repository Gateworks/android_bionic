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
#ifndef __ASM_ARM_OPCODES_H
#define __ASM_ARM_OPCODES_H
#ifndef __ASSEMBLY__
#include <linux/linkage.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define ARM_OPCODE_CONDTEST_FAIL 0
#define ARM_OPCODE_CONDTEST_PASS 1
#define ARM_OPCODE_CONDTEST_UNCOND 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ___asm_opcode_swab32(x) (   (((x) << 24) & 0xFF000000)   | (((x) << 8) & 0x00FF0000)   | (((x) >> 8) & 0x0000FF00)   | (((x) >> 24) & 0x000000FF)  )
#define ___asm_opcode_swab16(x) (   (((x) << 8) & 0xFF00)   | (((x) >> 8) & 0x00FF)  )
#define ___asm_opcode_swahb32(x) (   (((x) << 8) & 0xFF00FF00)   | (((x) >> 8) & 0x00FF00FF)  )
#define ___asm_opcode_swahw32(x) (   (((x) << 16) & 0xFFFF0000)   | (((x) >> 16) & 0x0000FFFF)  )
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ___asm_opcode_identity32(x) ((x) & 0xFFFFFFFF)
#define ___asm_opcode_identity16(x) ((x) & 0xFFFF)
#ifdef __ASSEMBLY__
#define ___opcode_swab32(x) ___asm_opcode_swab32(x)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ___opcode_swab16(x) ___asm_opcode_swab16(x)
#define ___opcode_swahb32(x) ___asm_opcode_swahb32(x)
#define ___opcode_swahw32(x) ___asm_opcode_swahw32(x)
#define ___opcode_identity32(x) ___asm_opcode_identity32(x)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ___opcode_identity16(x) ___asm_opcode_identity16(x)
#else
#include <linux/types.h>
#include <linux/swab.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ___opcode_swab32(x) swab32(x)
#define ___opcode_swab16(x) swab16(x)
#define ___opcode_swahb32(x) swahb32(x)
#define ___opcode_swahw32(x) swahw32(x)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ___opcode_identity32(x) ((u32)(x))
#define ___opcode_identity16(x) ((u16)(x))
#endif
#define __opcode_to_mem_arm(x) ___opcode_identity32(x)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __opcode_to_mem_thumb16(x) ___opcode_identity16(x)
#define ___asm_opcode_to_mem_arm(x) ___asm_opcode_identity32(x)
#define ___asm_opcode_to_mem_thumb16(x) ___asm_opcode_identity16(x)
#define __opcode_to_mem_thumb32(x) ___opcode_swahw32(x)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ___asm_opcode_to_mem_thumb32(x) ___asm_opcode_swahw32(x)
#define __mem_to_opcode_arm(x) __opcode_to_mem_arm(x)
#define __mem_to_opcode_thumb16(x) __opcode_to_mem_thumb16(x)
#define __mem_to_opcode_thumb32(x) __opcode_to_mem_thumb32(x)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __opcode_is_thumb32(x) (   ((x) & 0xF8000000) == 0xE8000000   || ((x) & 0xF0000000) == 0xF0000000  )
#define __opcode_is_thumb16(x) (   ((x) & 0xFFFF0000) == 0   && !(((x) & 0xF800) == 0xE800 || ((x) & 0xF000) == 0xF000)  )
#define __opcode_thumb32_first(x) (___opcode_identity16((x) >> 16))
#define __opcode_thumb32_second(x) (___opcode_identity16(x))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __opcode_thumb32_compose(first, second) (   (___opcode_identity32(___opcode_identity16(first)) << 16)   | ___opcode_identity32(___opcode_identity16(second))  )
#define ___asm_opcode_thumb32_first(x) (___asm_opcode_identity16((x) >> 16))
#define ___asm_opcode_thumb32_second(x) (___asm_opcode_identity16(x))
#define ___asm_opcode_thumb32_compose(first, second) (   (___asm_opcode_identity32(___asm_opcode_identity16(first)) << 16)   | ___asm_opcode_identity32(___asm_opcode_identity16(second))  )
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/stringify.h>
#define __inst_arm(x) ___inst_arm(___asm_opcode_to_mem_arm(x))
#define __inst_thumb32(x) ___inst_thumb32(   ___asm_opcode_to_mem_thumb16(___asm_opcode_thumb32_first(x)),   ___asm_opcode_to_mem_thumb16(___asm_opcode_thumb32_second(x))  )
#define __inst_thumb16(x) ___inst_thumb16(___asm_opcode_to_mem_thumb16(x))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __inst_arm_thumb16(arm_opcode, thumb_opcode) __inst_arm(arm_opcode)
#define __inst_arm_thumb32(arm_opcode, thumb_opcode) __inst_arm(arm_opcode)
#ifdef __ASSEMBLY__
#define ___inst_arm(x) .long x
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ___inst_thumb16(x) .short x
#define ___inst_thumb32(first, second) .short first, second
#else
#define ___inst_arm(x) ".long " __stringify(x) "\n\t"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ___inst_thumb16(x) ".short " __stringify(x) "\n\t"
#define ___inst_thumb32(first, second)   ".short " __stringify(first) ", " __stringify(second) "\n\t"
#endif
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
