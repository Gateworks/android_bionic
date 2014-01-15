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
#ifndef __ASM_ARM_CACHETYPE_H
#define __ASM_ARM_CACHETYPE_H
#define CACHEID_VIVT (1 << 0)
#define CACHEID_VIPT_NONALIASING (1 << 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CACHEID_VIPT_ALIASING (1 << 2)
#define CACHEID_VIPT (CACHEID_VIPT_ALIASING|CACHEID_VIPT_NONALIASING)
#define CACHEID_ASID_TAGGED (1 << 3)
#define CACHEID_VIPT_I_ALIASING (1 << 4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CACHEID_PIPT (1 << 5)
#define cache_is_vivt() cacheid_is(CACHEID_VIVT)
#define cache_is_vipt() cacheid_is(CACHEID_VIPT)
#define cache_is_vipt_nonaliasing() cacheid_is(CACHEID_VIPT_NONALIASING)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cache_is_vipt_aliasing() cacheid_is(CACHEID_VIPT_ALIASING)
#define icache_is_vivt_asid_tagged() cacheid_is(CACHEID_ASID_TAGGED)
#define icache_is_vipt_aliasing() cacheid_is(CACHEID_VIPT_I_ALIASING)
#define icache_is_pipt() cacheid_is(CACHEID_PIPT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if __LINUX_ARM_ARCH__ >= 7
#define __CACHEID_ARCH_MIN (CACHEID_VIPT_NONALIASING |  CACHEID_ASID_TAGGED |  CACHEID_VIPT_I_ALIASING |  CACHEID_PIPT)
#elif __LINUX_ARM_ARCH__ >= 6
#define __CACHEID_ARCH_MIN (~CACHEID_VIVT)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#define __CACHEID_ARCH_MIN (~0)
#endif
#define __CACHEID_ALWAYS (0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __CACHEID_NEVER (0)
#endif
