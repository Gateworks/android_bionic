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
#ifndef __KVM_TYPES_H__
#define __KVM_TYPES_H__
#include <asm/types.h>
typedef unsigned long gva_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef u64 gpa_t;
typedef u64 gfn_t;
typedef unsigned long hva_t;
typedef u64 hpa_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef u64 hfn_t;
typedef hfn_t pfn_t;
union kvm_ioapic_redirect_entry {
 u64 bits;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 u8 vector;
 u8 delivery_mode:3;
 u8 dest_mode:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 delivery_status:1;
 u8 polarity:1;
 u8 remote_irr:1;
 u8 trig_mode:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 mask:1;
 u8 reserve:7;
 u8 reserved[4];
 u8 dest_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } fields;
};
struct kvm_lapic_irq {
 u32 vector;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 delivery_mode;
 u32 dest_mode;
 u32 level;
 u32 trig_mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 shorthand;
 u32 dest_id;
};
struct gfn_to_hva_cache {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u64 generation;
 gpa_t gpa;
 unsigned long hva;
 unsigned long len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct kvm_memory_slot *memslot;
};
#endif
