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
#ifndef _ASM_GENERIC_ATOMIC64_H
#define _ASM_GENERIC_ATOMIC64_H
typedef struct {
 long long counter;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} atomic64_t;
#define ATOMIC64_INIT(i) { (i) }
#define atomic64_add_negative(a, v) (atomic64_add_return((a), (v)) < 0)
#define atomic64_inc(v) atomic64_add(1LL, (v))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define atomic64_inc_return(v) atomic64_add_return(1LL, (v))
#define atomic64_inc_and_test(v) (atomic64_inc_return(v) == 0)
#define atomic64_sub_and_test(a, v) (atomic64_sub_return((a), (v)) == 0)
#define atomic64_dec(v) atomic64_sub(1LL, (v))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define atomic64_dec_return(v) atomic64_sub_return(1LL, (v))
#define atomic64_dec_and_test(v) (atomic64_dec_return((v)) == 0)
#define atomic64_inc_not_zero(v) atomic64_add_unless((v), 1LL, 0LL)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
