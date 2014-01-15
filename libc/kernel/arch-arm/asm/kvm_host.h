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
#ifndef __ARM_KVM_HOST_H__
#define __ARM_KVM_HOST_H__
#include <asm/kvm.h>
#include <asm/kvm_asm.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/kvm_mmio.h>
#include <asm/fpstate.h>
#include <asm/kvm_arch_timer.h>
#define KVM_MAX_VCPUS CONFIG_KVM_ARM_MAX_VCPUS
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_USER_MEM_SLOTS 32
#define KVM_PRIVATE_MEM_SLOTS 4
#define KVM_COALESCED_MMIO_PAGE_OFFSET 1
#define KVM_HAVE_ONE_REG
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_VCPU_MAX_FEATURES 1
#define KVM_HPAGE_GFN_SHIFT(x) 0
#define KVM_NR_PAGE_SIZES 1
#define KVM_PAGES_PER_HPAGE(x) (1UL<<31)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/kvm_vgic.h>
struct kvm_vcpu;
struct kvm_arch {
 u64 vttbr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct arch_timer_kvm timer;
 u64 vmid_gen;
 u32 vmid;
 pgd_t *pgd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct vgic_dist vgic;
};
#define KVM_NR_MEM_OBJS 40
struct kvm_mmu_memory_cache {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int nobjs;
 void *objects[KVM_NR_MEM_OBJS];
};
struct kvm_vcpu_fault_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 hsr;
 u32 hxfar;
 u32 hpfar;
 u32 hyp_pc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
typedef struct vfp_hard_struct kvm_cpu_context_t;
struct kvm_vcpu_arch {
 struct kvm_regs regs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int target;
 DECLARE_BITMAP(features, KVM_VCPU_MAX_FEATURES);
 u32 cp15[NR_CP15_REGS];
 u32 midr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct kvm_vcpu_fault_info fault;
 struct vfp_hard_struct vfp_guest;
 kvm_cpu_context_t *host_cpu_context;
 struct vgic_cpu vgic_cpu;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct arch_timer_cpu timer_cpu;
 int last_pcpu;
 cpumask_t require_dcache_flush;
 bool pause;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct kvm_decode mmio_decode;
 u32 irq_lines;
 struct kvm_mmu_memory_cache mmu_page_cache;
 bool has_run_once;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct kvm_vm_stat {
 u32 remote_tlb_flush;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_vcpu_stat {
 u32 halt_wakeup;
};
struct kvm_vcpu_init;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_one_reg;
#define KVM_ARCH_WANT_MMU_NOTIFIER
struct kvm;
struct kvm_vcpu *kvm_arm_get_running_vcpu(void);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kvm_vcpu __percpu **kvm_get_running_vcpus(void);
struct kvm_one_reg;
#endif
