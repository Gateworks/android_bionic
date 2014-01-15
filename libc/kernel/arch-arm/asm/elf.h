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
#ifndef __ASMARM_ELF_H
#define __ASMARM_ELF_H
#include <asm/hwcap.h>
#include <asm/ptrace.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/user.h>
struct task_struct;
typedef unsigned long elf_greg_t;
typedef unsigned long elf_freg_t[3];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ELF_NGREG (sizeof (struct pt_regs) / sizeof(elf_greg_t))
typedef elf_greg_t elf_gregset_t[ELF_NGREG];
typedef struct user_fp elf_fpregset_t;
#define EM_ARM 40
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EF_ARM_EABI_MASK 0xff000000
#define EF_ARM_EABI_UNKNOWN 0x00000000
#define EF_ARM_EABI_VER1 0x01000000
#define EF_ARM_EABI_VER2 0x02000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EF_ARM_EABI_VER3 0x03000000
#define EF_ARM_EABI_VER4 0x04000000
#define EF_ARM_EABI_VER5 0x05000000
#define EF_ARM_BE8 0x00800000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EF_ARM_LE8 0x00400000
#define EF_ARM_MAVERICK_FLOAT 0x00000800
#define EF_ARM_VFP_FLOAT 0x00000400
#define EF_ARM_SOFT_FLOAT 0x00000200
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EF_ARM_OLD_ABI 0x00000100
#define EF_ARM_NEW_ABI 0x00000080
#define EF_ARM_ALIGN8 0x00000040
#define EF_ARM_PIC 0x00000020
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EF_ARM_MAPSYMSFIRST 0x00000010
#define EF_ARM_APCS_FLOAT 0x00000010
#define EF_ARM_DYNSYMSUSESEGIDX 0x00000008
#define EF_ARM_APCS_26 0x00000008
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EF_ARM_SYMSARESORTED 0x00000004
#define EF_ARM_INTERWORK 0x00000004
#define EF_ARM_HASENTRY 0x00000002
#define EF_ARM_RELEXEC 0x00000001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define R_ARM_NONE 0
#define R_ARM_PC24 1
#define R_ARM_ABS32 2
#define R_ARM_CALL 28
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define R_ARM_JUMP24 29
#define R_ARM_V4BX 40
#define R_ARM_PREL31 42
#define R_ARM_MOVW_ABS_NC 43
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define R_ARM_MOVT_ABS 44
#define R_ARM_THM_CALL 10
#define R_ARM_THM_JUMP24 30
#define R_ARM_THM_MOVW_ABS_NC 47
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define R_ARM_THM_MOVT_ABS 48
#define ELF_CLASS ELFCLASS32
#ifdef __ARMEB__
#define ELF_DATA ELFDATA2MSB
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#define ELF_DATA ELFDATA2LSB
#endif
#define ELF_ARCH EM_ARM
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ELF_PLATFORM_SIZE 8
#define ELF_PLATFORM (elf_platform)
struct elf32_hdr;
#define elf_check_arch elf_check_arch
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define vmcore_elf64_check_arch(x) (0)
#define elf_read_implies_exec(ex,stk) arm_elf_read_implies_exec(&(ex), stk)
struct task_struct;
#define ELF_CORE_COPY_TASK_REGS dump_task_regs
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CORE_DUMP_USE_REGSET
#define ELF_EXEC_PAGESIZE 4096
#define ELF_ET_DYN_BASE (2 * TASK_SIZE / 3)
#define ELF_PLAT_INIT(_r, load_addr) (_r)->ARM_r0 = 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SET_PERSONALITY(ex) elf_set_personality(&(ex))
struct mm_struct;
#define arch_randomize_brk arch_randomize_brk
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
