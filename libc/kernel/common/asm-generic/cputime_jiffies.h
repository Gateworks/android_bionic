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
#ifndef _ASM_GENERIC_CPUTIME_JIFFIES_H
#define _ASM_GENERIC_CPUTIME_JIFFIES_H
typedef unsigned long __nocast cputime_t;
#define cputime_one_jiffy jiffies_to_cputime(1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cputime_to_jiffies(__ct) (__force unsigned long)(__ct)
#define cputime_to_scaled(__ct) (__ct)
#define jiffies_to_cputime(__hz) (__force cputime_t)(__hz)
typedef u64 __nocast cputime64_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cputime64_to_jiffies64(__ct) (__force u64)(__ct)
#define jiffies64_to_cputime64(__jif) (__force cputime64_t)(__jif)
#define nsecs_to_cputime64(__nsec)   jiffies64_to_cputime64(nsecs_to_jiffies64(__nsec))
#define nsecs_to_cputime(__nsec)   jiffies_to_cputime(nsecs_to_jiffies(__nsec))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cputime_to_usecs(__ct)   jiffies_to_usecs(cputime_to_jiffies(__ct))
#define usecs_to_cputime(__usec)   jiffies_to_cputime(usecs_to_jiffies(__usec))
#define usecs_to_cputime64(__usec)   jiffies64_to_cputime64(nsecs_to_jiffies64((__usec) * 1000))
#define cputime_to_secs(jif) (cputime_to_jiffies(jif) / HZ)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define secs_to_cputime(sec) jiffies_to_cputime((sec) * HZ)
#define timespec_to_cputime(__val)   jiffies_to_cputime(timespec_to_jiffies(__val))
#define cputime_to_timespec(__ct,__val)   jiffies_to_timespec(cputime_to_jiffies(__ct),__val)
#define timeval_to_cputime(__val)   jiffies_to_cputime(timeval_to_jiffies(__val))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cputime_to_timeval(__ct,__val)   jiffies_to_timeval(cputime_to_jiffies(__ct),__val)
#define cputime_to_clock_t(__ct)   jiffies_to_clock_t(cputime_to_jiffies(__ct))
#define clock_t_to_cputime(__x)   jiffies_to_cputime(clock_t_to_jiffies(__x))
#define cputime64_to_clock_t(__ct)   jiffies_64_to_clock_t(cputime64_to_jiffies64(__ct))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
