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
#ifndef __ASM_ARM_KVM_VGIC_H
#define __ASM_ARM_KVM_VGIC_H
#include <linux/kernel.h>
#include <linux/kvm.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/irqreturn.h>
#include <linux/spinlock.h>
#include <linux/types.h>
#include <linux/irqchip/arm-gic.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VGIC_NR_IRQS 128
#define VGIC_NR_SGIS 16
#define VGIC_NR_PPIS 16
#define VGIC_NR_PRIVATE_IRQS (VGIC_NR_SGIS + VGIC_NR_PPIS)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VGIC_NR_SHARED_IRQS (VGIC_NR_IRQS - VGIC_NR_PRIVATE_IRQS)
#define VGIC_MAX_CPUS KVM_MAX_VCPUS
#define VGIC_MAX_LRS (1 << 6)
#if VGIC_MAX_CPUS > 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#error Invalid number of CPU interfaces
#endif
#if VGIC_NR_IRQS & 31
#error "VGIC_NR_IRQS must be a multiple of 32"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#if VGIC_NR_IRQS > 1024
#error "VGIC_NR_IRQS must be <= 1024"
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct vgic_bitmap {
 union {
 u32 reg[VGIC_NR_PRIVATE_IRQS / 32];
 DECLARE_BITMAP(reg_ul, VGIC_NR_PRIVATE_IRQS);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } percpu[VGIC_MAX_CPUS];
 union {
 u32 reg[VGIC_NR_SHARED_IRQS / 32];
 DECLARE_BITMAP(reg_ul, VGIC_NR_SHARED_IRQS);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } shared;
};
struct vgic_bytemap {
 u32 percpu[VGIC_MAX_CPUS][VGIC_NR_PRIVATE_IRQS / 4];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 shared[VGIC_NR_SHARED_IRQS / 4];
};
struct vgic_dist {
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct vgic_cpu {
};
#define LR_EMPTY 0xff
struct kvm;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_vcpu;
struct kvm_run;
struct kvm_exit_mmio;
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
