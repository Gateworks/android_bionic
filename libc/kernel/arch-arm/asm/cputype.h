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
#ifndef __ASM_ARM_CPUTYPE_H
#define __ASM_ARM_CPUTYPE_H
#include <linux/stringify.h>
#include <linux/kernel.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUID_ID 0
#define CPUID_CACHETYPE 1
#define CPUID_TCM 2
#define CPUID_TLBTYPE 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUID_MPIDR 5
#define CPUID_EXT_PFR0 "c1, 0"
#define CPUID_EXT_PFR1 "c1, 1"
#define CPUID_EXT_DFR0 "c1, 2"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUID_EXT_AFR0 "c1, 3"
#define CPUID_EXT_MMFR0 "c1, 4"
#define CPUID_EXT_MMFR1 "c1, 5"
#define CPUID_EXT_MMFR2 "c1, 6"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUID_EXT_MMFR3 "c1, 7"
#define CPUID_EXT_ISAR0 "c2, 0"
#define CPUID_EXT_ISAR1 "c2, 1"
#define CPUID_EXT_ISAR2 "c2, 2"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CPUID_EXT_ISAR3 "c2, 3"
#define CPUID_EXT_ISAR4 "c2, 4"
#define CPUID_EXT_ISAR5 "c2, 5"
#define MPIDR_SMP_BITMASK (0x3 << 30)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MPIDR_SMP_VALUE (0x2 << 30)
#define MPIDR_MT_BITMASK (0x1 << 24)
#define MPIDR_HWID_BITMASK 0xFFFFFF
#define MPIDR_INVALID (~MPIDR_HWID_BITMASK)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MPIDR_LEVEL_BITS 8
#define MPIDR_LEVEL_MASK ((1 << MPIDR_LEVEL_BITS) - 1)
#define MPIDR_AFFINITY_LEVEL(mpidr, level)   ((mpidr >> (MPIDR_LEVEL_BITS * level)) & MPIDR_LEVEL_MASK)
#define ARM_CPU_IMP_ARM 0x41
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ARM_CPU_IMP_INTEL 0x69
#define ARM_CPU_PART_ARM1136 0xB360
#define ARM_CPU_PART_ARM1156 0xB560
#define ARM_CPU_PART_ARM1176 0xB760
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ARM_CPU_PART_ARM11MPCORE 0xB020
#define ARM_CPU_PART_CORTEX_A8 0xC080
#define ARM_CPU_PART_CORTEX_A9 0xC090
#define ARM_CPU_PART_CORTEX_A5 0xC050
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ARM_CPU_PART_CORTEX_A15 0xC0F0
#define ARM_CPU_PART_CORTEX_A7 0xC070
#define ARM_CPU_XSCALE_ARCH_MASK 0xe000
#define ARM_CPU_XSCALE_ARCH_V1 0x2000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ARM_CPU_XSCALE_ARCH_V2 0x4000
#define ARM_CPU_XSCALE_ARCH_V3 0x6000
#define read_cpuid(reg)   ({   WARN_ON_ONCE(1);   0;   })
#define read_cpuid_ext(reg) read_cpuid(reg)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cpu_is_xsc3() 0
#define cpu_is_xscale() 0
#endif
