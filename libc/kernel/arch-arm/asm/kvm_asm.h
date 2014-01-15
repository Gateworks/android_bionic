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
#ifndef __ARM_KVM_ASM_H__
#define __ARM_KVM_ASM_H__
#define c0_MPIDR 1
#define c0_CSSELR 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define c1_SCTLR 3
#define c1_ACTLR 4
#define c1_CPACR 5
#define c2_TTBR0 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define c2_TTBR0_high 7
#define c2_TTBR1 8
#define c2_TTBR1_high 9
#define c2_TTBCR 10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define c3_DACR 11
#define c5_DFSR 12
#define c5_IFSR 13
#define c5_ADFSR 14
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define c5_AIFSR 15
#define c6_DFAR 16
#define c6_IFAR 17
#define c7_PAR 18
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define c7_PAR_high 19
#define c9_L2CTLR 20
#define c10_PRRR 21
#define c10_NMRR 22
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define c12_VBAR 23
#define c13_CID 24
#define c13_TID_URW 25
#define c13_TID_URO 26
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define c13_TID_PRIV 27
#define c14_CNTKCTL 28
#define NR_CP15_REGS 29
#define ARM_EXCEPTION_RESET 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ARM_EXCEPTION_UNDEFINED 1
#define ARM_EXCEPTION_SOFTWARE 2
#define ARM_EXCEPTION_PREF_ABORT 3
#define ARM_EXCEPTION_DATA_ABORT 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ARM_EXCEPTION_IRQ 5
#define ARM_EXCEPTION_FIQ 6
#define ARM_EXCEPTION_HVC 7
#ifndef __ASSEMBLY__
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm;
struct kvm_vcpu;
#endif
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
