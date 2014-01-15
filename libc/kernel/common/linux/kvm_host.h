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
#ifndef __KVM_HOST_H
#define __KVM_HOST_H
#include <linux/types.h>
#include <linux/hardirq.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/list.h>
#include <linux/mutex.h>
#include <linux/spinlock.h>
#include <linux/signal.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/sched.h>
#include <linux/bug.h>
#include <linux/mm.h>
#include <linux/mmu_notifier.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/preempt.h>
#include <linux/msi.h>
#include <linux/slab.h>
#include <linux/rcupdate.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/ratelimit.h>
#include <linux/err.h>
#include <linux/irqflags.h>
#include <linux/context_tracking.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/signal.h>
#include <linux/kvm.h>
#include <linux/kvm_para.h>
#include <linux/kvm_types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/kvm_host.h>
#ifndef KVM_MMIO_SIZE
#define KVM_MMIO_SIZE 8
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_MEMSLOT_INVALID (1UL << 16)
#define KVM_MAX_MMIO_FRAGMENTS 2
#define KVM_PFN_ERR_MASK (0x7ffULL << 52)
#define KVM_PFN_ERR_NOSLOT_MASK (0xfffULL << 52)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_PFN_NOSLOT (0x1ULL << 63)
#define KVM_PFN_ERR_FAULT (KVM_PFN_ERR_MASK)
#define KVM_PFN_ERR_HWPOISON (KVM_PFN_ERR_MASK + 1)
#define KVM_PFN_ERR_RO_FAULT (KVM_PFN_ERR_MASK + 2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_HVA_ERR_BAD (PAGE_OFFSET)
#define KVM_HVA_ERR_RO_BAD (PAGE_OFFSET + PAGE_SIZE)
#define KVM_ERR_PTR_BAD_PAGE (ERR_PTR(-ENOENT))
#define KVM_REQ_TLB_FLUSH 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_REQ_MIGRATE_TIMER 1
#define KVM_REQ_REPORT_TPR_ACCESS 2
#define KVM_REQ_MMU_RELOAD 3
#define KVM_REQ_TRIPLE_FAULT 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_REQ_PENDING_TIMER 5
#define KVM_REQ_UNHALT 6
#define KVM_REQ_MMU_SYNC 7
#define KVM_REQ_CLOCK_UPDATE 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_REQ_KICK 9
#define KVM_REQ_DEACTIVATE_FPU 10
#define KVM_REQ_EVENT 11
#define KVM_REQ_APF_HALT 12
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_REQ_STEAL_UPDATE 13
#define KVM_REQ_NMI 14
#define KVM_REQ_PMU 15
#define KVM_REQ_PMI 16
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_REQ_WATCHDOG 17
#define KVM_REQ_MASTERCLOCK_UPDATE 18
#define KVM_REQ_MCLOCK_INPROGRESS 19
#define KVM_REQ_EPR_EXIT 20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define KVM_REQ_SCAN_IOAPIC 21
#define KVM_USERSPACE_IRQ_SOURCE_ID 0
#define KVM_IRQFD_RESAMPLE_IRQ_SOURCE_ID 1
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
