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
#ifndef _LINUX_TYPES_H
#define _LINUX_TYPES_H
#define __EXPORTED_HEADERS__
#include <uapi/linux/types.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __ASSEMBLY__
#define DECLARE_BITMAP(name,bits)   unsigned long name[BITS_TO_LONGS(bits)]
typedef __u32 __kernel_dev_t;
typedef unsigned short umode_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef __kernel_pid_t pid_t;
typedef __kernel_daddr_t daddr_t;
typedef __kernel_key_t key_t;
typedef __kernel_suseconds_t suseconds_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef __kernel_clockid_t clockid_t;
typedef __kernel_mqd_t mqd_t;
typedef __kernel_uid32_t uid_t;
typedef __kernel_gid32_t gid_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef __kernel_uid16_t uid16_t;
typedef __kernel_gid16_t gid16_t;
#ifdef __GNUC__
typedef __kernel_loff_t loff_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef _SIZE_T
#define _SIZE_T
typedef __kernel_size_t size_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef _SSIZE_T
#define _SSIZE_T
typedef __kernel_ssize_t ssize_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef _PTRDIFF_T
#define _PTRDIFF_T
typedef __kernel_ptrdiff_t ptrdiff_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef _TIME_T
#define _TIME_T
typedef __kernel_time_t time_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef _CLOCK_T
#define _CLOCK_T
typedef __kernel_clock_t clock_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef _CADDR_T
#define _CADDR_T
typedef __kernel_caddr_t caddr_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef unsigned long u_long;
typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __BIT_TYPES_DEFINED__
#define __BIT_TYPES_DEFINED__
typedef __u8 u_int8_t;
typedef __s8 int8_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef __u16 u_int16_t;
typedef __s16 int16_t;
typedef __u32 u_int32_t;
typedef __s32 int32_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
typedef __u8 uint8_t;
typedef __u16 uint16_t;
typedef __u32 uint32_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef __GNUC__
typedef __u64 uint64_t;
typedef __u64 u_int64_t;
typedef __s64 int64_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define aligned_u64 __u64 __attribute__((aligned(8)))
#define aligned_be64 __be64 __attribute__((aligned(8)))
#define aligned_le64 __le64 __attribute__((aligned(8)))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef pgoff_t
#define pgoff_t unsigned long
#endif
typedef unsigned __bitwise__ gfp_t;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef unsigned __bitwise__ fmode_t;
typedef unsigned __bitwise__ oom_flags_t;
typedef unsigned long irq_hw_number_t;
typedef struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int counter;
} atomic_t;
struct ustat {
 __kernel_daddr_t f_tfree;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __kernel_ino_t f_tinode;
 char f_fname[6];
 char f_fpack[6];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct callback_head {
 struct callback_head *next;
 void (*func)(struct callback_head *head);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define rcu_head callback_head
#endif
#endif
