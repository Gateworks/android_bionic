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
#ifndef _LINUX_PERCPU_DEFS_H
#define _LINUX_PERCPU_DEFS_H
#define __PCPU_ATTRS(sec)   __percpu __attribute__((section(PER_CPU_BASE_SECTION sec)))   PER_CPU_ATTRIBUTES
#define __PCPU_DUMMY_ATTRS   __attribute__((section(".discard"), unused))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __verify_pcpu_ptr(ptr) do {   const void __percpu *__vpp_verify = (typeof(ptr))NULL;   (void)__vpp_verify;  } while (0)
#ifdef ARCH_NEEDS_WEAK_PER_CPU
#define DECLARE_PER_CPU_SECTION(type, name, sec)   extern __PCPU_DUMMY_ATTRS char __pcpu_scope_##name;   extern __PCPU_ATTRS(sec) __typeof__(type) name
#define DEFINE_PER_CPU_SECTION(type, name, sec)   __PCPU_DUMMY_ATTRS char __pcpu_scope_##name;   extern __PCPU_DUMMY_ATTRS char __pcpu_unique_##name;   __PCPU_DUMMY_ATTRS char __pcpu_unique_##name;   __PCPU_ATTRS(sec) PER_CPU_DEF_ATTRIBUTES __weak   __typeof__(type) name
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#define DECLARE_PER_CPU_SECTION(type, name, sec)   extern __PCPU_ATTRS(sec) __typeof__(type) name
#define DEFINE_PER_CPU_SECTION(type, name, sec)   __PCPU_ATTRS(sec) PER_CPU_DEF_ATTRIBUTES   __typeof__(type) name
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DECLARE_PER_CPU(type, name)   DECLARE_PER_CPU_SECTION(type, name, "")
#define DEFINE_PER_CPU(type, name)   DEFINE_PER_CPU_SECTION(type, name, "")
#define DECLARE_PER_CPU_FIRST(type, name)   DECLARE_PER_CPU_SECTION(type, name, PER_CPU_FIRST_SECTION)
#define DEFINE_PER_CPU_FIRST(type, name)   DEFINE_PER_CPU_SECTION(type, name, PER_CPU_FIRST_SECTION)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DECLARE_PER_CPU_SHARED_ALIGNED(type, name)   DECLARE_PER_CPU_SECTION(type, name, PER_CPU_SHARED_ALIGNED_SECTION)   ____cacheline_aligned_in_smp
#define DEFINE_PER_CPU_SHARED_ALIGNED(type, name)   DEFINE_PER_CPU_SECTION(type, name, PER_CPU_SHARED_ALIGNED_SECTION)   ____cacheline_aligned_in_smp
#define DECLARE_PER_CPU_ALIGNED(type, name)   DECLARE_PER_CPU_SECTION(type, name, PER_CPU_ALIGNED_SECTION)   ____cacheline_aligned
#define DEFINE_PER_CPU_ALIGNED(type, name)   DEFINE_PER_CPU_SECTION(type, name, PER_CPU_ALIGNED_SECTION)   ____cacheline_aligned
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DECLARE_PER_CPU_PAGE_ALIGNED(type, name)   DECLARE_PER_CPU_SECTION(type, name, "..page_aligned")   __aligned(PAGE_SIZE)
#define DEFINE_PER_CPU_PAGE_ALIGNED(type, name)   DEFINE_PER_CPU_SECTION(type, name, "..page_aligned")   __aligned(PAGE_SIZE)
#define DECLARE_PER_CPU_READ_MOSTLY(type, name)   DECLARE_PER_CPU_SECTION(type, name, "..readmostly")
#define DEFINE_PER_CPU_READ_MOSTLY(type, name)   DEFINE_PER_CPU_SECTION(type, name, "..readmostly")
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EXPORT_PER_CPU_SYMBOL(var) EXPORT_SYMBOL(var)
#define EXPORT_PER_CPU_SYMBOL_GPL(var) EXPORT_SYMBOL_GPL(var)
#endif
