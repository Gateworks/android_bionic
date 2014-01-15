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
#ifndef __ASM_ARM_CMPXCHG_H
#define __ASM_ARM_CMPXCHG_H
#include <linux/irqflags.h>
#include <asm/barrier.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef swp_is_buggy
#endif
#if __LINUX_ARM_ARCH__ >= 6
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if __LINUX_ARM_ARCH__ >= 6
#elif defined(swp_is_buggy)
#else
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define xchg(ptr,x)   ((__typeof__(*(ptr)))__xchg((unsigned long)(x),(ptr),sizeof(*(ptr))))
#include <asm-generic/cmpxchg-local.h>
#if __LINUX_ARM_ARCH__ < 6
#define cmpxchg_local(ptr, o, n)   ((__typeof__(*(ptr)))__cmpxchg_local_generic((ptr), (unsigned long)(o),  (unsigned long)(n), sizeof(*(ptr))))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cmpxchg64_local(ptr, o, n) __cmpxchg64_local_generic((ptr), (o), (n))
#include <asm-generic/cmpxchg.h>
#else
#define cmpxchg(ptr,o,n)   ((__typeof__(*(ptr)))__cmpxchg_mb((ptr),   (unsigned long)(o),   (unsigned long)(n),   sizeof(*(ptr))))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cmpxchg_local(ptr,o,n)   ((__typeof__(*(ptr)))__cmpxchg_local((ptr),   (unsigned long)(o),   (unsigned long)(n),   sizeof(*(ptr))))
#define cmpxchg64(ptr, o, n)   ((__typeof__(*(ptr)))atomic64_cmpxchg(container_of((ptr),   atomic64_t,   counter),   (unsigned long long)(o),   (unsigned long long)(n)))
#define cmpxchg64_local(ptr, o, n)   ((__typeof__(*(ptr)))local64_cmpxchg(container_of((ptr),   local64_t,   a),   (unsigned long long)(o),   (unsigned long long)(n)))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
