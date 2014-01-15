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
#ifndef __ARM_KGDB_H__
#define __ARM_KGDB_H__
#include <linux/ptrace.h>
#define BREAK_INSTR_SIZE 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GDB_BREAKINST 0xef9f0001
#define KGDB_BREAKINST 0xe7ffdefe
#define KGDB_COMPILED_BREAK 0xe7ffdeff
#define CACHE_FLUSH_IS_SAFE 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __ASSEMBLY__
#endif
#define _GP_REGS 16
#define _FP_REGS 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define _EXTRA_REGS 2
#define GDB_MAX_REGS (_GP_REGS + (_FP_REGS * 3) + _EXTRA_REGS)
#define DBG_MAX_REG_NUM (_GP_REGS + _FP_REGS + _EXTRA_REGS)
#define KGDB_MAX_NO_CPUS 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BUFMAX 400
#define NUMREGBYTES (DBG_MAX_REG_NUM << 2)
#define NUMCRITREGBYTES (32 << 2)
#define _R0 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define _R1 1
#define _R2 2
#define _R3 3
#define _R4 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define _R5 5
#define _R6 6
#define _R7 7
#define _R8 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define _R9 9
#define _R10 10
#define _FP 11
#define _IP 12
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define _SPT 13
#define _LR 14
#define _PC 15
#define _CPSR (GDB_MAX_REGS - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CFI_END_FRAME(func) __CFI_END_FRAME(_PC, _SPT, func)
#endif
