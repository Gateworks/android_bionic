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
#ifndef _ASM_GENERIC_ATOMIC_LONG_H
#define _ASM_GENERIC_ATOMIC_LONG_H
#include <asm/types.h>
#if BITS_PER_LONG == 64
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef atomic64_t atomic_long_t;
#define ATOMIC_LONG_INIT(i) ATOMIC64_INIT(i)
#define atomic_long_inc_not_zero(l) atomic64_inc_not_zero((atomic64_t *)(l))
#define atomic_long_cmpxchg(l, old, new)   (atomic64_cmpxchg((atomic64_t *)(l), (old), (new)))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define atomic_long_xchg(v, new)   (atomic64_xchg((atomic64_t *)(v), (new)))
#else
typedef atomic_t atomic_long_t;
#define ATOMIC_LONG_INIT(i) ATOMIC_INIT(i)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define atomic_long_inc_not_zero(l) atomic_inc_not_zero((atomic_t *)(l))
#define atomic_long_cmpxchg(l, old, new)   (atomic_cmpxchg((atomic_t *)(l), (old), (new)))
#define atomic_long_xchg(v, new)   (atomic_xchg((atomic_t *)(v), (new)))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
