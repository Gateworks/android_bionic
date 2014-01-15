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
#ifndef _LINUX_KERNEL_H
#define _LINUX_KERNEL_H
#include <stdarg.h>
#include <linux/linkage.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/stddef.h>
#include <linux/types.h>
#include <linux/compiler.h>
#include <linux/bitops.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/log2.h>
#include <linux/typecheck.h>
#include <linux/printk.h>
#include <linux/dynamic_debug.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/byteorder.h>
#include <uapi/linux/kernel.h>
#define STACK_MAGIC 0xdeadbeef
#define REPEAT_BYTE(x) ((~0ul / 0xff) * (x))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FIELD_SIZEOF(t, f) (sizeof(((t*)0)->f))
#define DIV_ROUND_UP(n,d) (((n) + (d) - 1) / (d))
#define DIV_ROUND_UP_ULL(ll,d)   ({ unsigned long long _tmp = (ll)+(d)-1; do_div(_tmp, d); _tmp; })
#if BITS_PER_LONG == 32
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DIV_ROUND_UP_SECTOR_T(ll,d) DIV_ROUND_UP_ULL(ll, d)
#else
#define DIV_ROUND_UP_SECTOR_T(ll,d) DIV_ROUND_UP(ll,d)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DIV_ROUND_CLOSEST(x, divisor)(  {   typeof(x) __x = x;   typeof(divisor) __d = divisor;   (((typeof(x))-1) > 0 ||   ((typeof(divisor))-1) > 0 || (__x) > 0) ?   (((__x) + ((__d) / 2)) / (__d)) :   (((__x) - ((__d) / 2)) / (__d));  }  )
#define mult_frac(x, numer, denom)(  {   typeof(x) quot = (x) / (denom);   typeof(x) rem = (x) % (denom);   (quot * (numer)) + ((rem * (numer)) / (denom));  }  )
#define _RET_IP_ (unsigned long)__builtin_return_address(0)
#define _THIS_IP_ ({ __label__ __here; __here: (unsigned long)&&__here; })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define sector_div(n, b)(  {   int _res;   _res = (n) % (b);   (n) /= (b);   _res;  }  )
#define upper_32_bits(n) ((u32)(((n) >> 16) >> 16))
#define lower_32_bits(n) ((u32)(n))
struct completion;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct pt_regs;
struct user;
#define strict_strtoul kstrtoul
#define strict_strtol kstrtol
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define strict_strtoull kstrtoull
#define strict_strtoll kstrtoll
struct pid;
enum lockdep_ok {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 LOCKDEP_STILL_OK,
 LOCKDEP_NOW_UNRELIABLE
};
#define TAINT_PROPRIETARY_MODULE 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TAINT_FORCED_MODULE 1
#define TAINT_UNSAFE_SMP 2
#define TAINT_FORCED_RMMOD 3
#define TAINT_MACHINE_CHECK 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TAINT_BAD_PAGE 5
#define TAINT_USER 6
#define TAINT_DIE 7
#define TAINT_OVERRIDDEN_ACPI_TABLE 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TAINT_WARN 9
#define TAINT_CRAP 10
#define TAINT_FIRMWARE_WORKAROUND 11
#define TAINT_OOT_MODULE 12
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define hex_asc_lo(x) hex_asc[((x) & 0x0f)]
#define hex_asc_hi(x) hex_asc[((x) & 0xf0) >> 4]
enum ftrace_dump_mode {
 DUMP_NONE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DUMP_ALL,
 DUMP_ORIG,
};
#define __FUNCTION__ (__func__)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
