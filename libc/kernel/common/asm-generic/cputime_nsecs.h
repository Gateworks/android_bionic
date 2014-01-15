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
#ifndef _ASM_GENERIC_CPUTIME_NSECS_H
#define _ASM_GENERIC_CPUTIME_NSECS_H
#include <linux/math64.h>
typedef u64 __nocast cputime_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef u64 __nocast cputime64_t;
#define cputime_one_jiffy jiffies_to_cputime(1)
#define cputime_div(__ct, divisor) div_u64((__force u64)__ct, divisor)
#define cputime_div_rem(__ct, divisor, remainder)   div_u64_rem((__force u64)__ct, divisor, remainder);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cputime_to_jiffies(__ct)   cputime_div(__ct, NSEC_PER_SEC / HZ)
#define cputime_to_scaled(__ct) (__ct)
#define jiffies_to_cputime(__jif)   (__force cputime_t)((__jif) * (NSEC_PER_SEC / HZ))
#define cputime64_to_jiffies64(__ct)   cputime_div(__ct, NSEC_PER_SEC / HZ)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define jiffies64_to_cputime64(__jif)   (__force cputime64_t)((__jif) * (NSEC_PER_SEC / HZ))
#define nsecs_to_cputime(__nsecs) ((__force u64)(__nsecs))
#define cputime_to_usecs(__ct)   cputime_div(__ct, NSEC_PER_USEC)
#define usecs_to_cputime(__usecs)   (__force cputime_t)((__usecs) * NSEC_PER_USEC)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define usecs_to_cputime64(__usecs)   (__force cputime64_t)((__usecs) * NSEC_PER_USEC)
#define cputime_to_secs(__ct)   cputime_div(__ct, NSEC_PER_SEC)
#define secs_to_cputime(__secs)   (__force cputime_t)((__secs) * NSEC_PER_SEC)
#define cputime_to_clock_t(__ct)   cputime_div(__ct, (NSEC_PER_SEC / USER_HZ))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define clock_t_to_cputime(__x)   (__force cputime_t)((__x) * (NSEC_PER_SEC / USER_HZ))
#define cputime64_to_clock_t(__ct)   cputime_to_clock_t((__force cputime_t)__ct)
#endif
