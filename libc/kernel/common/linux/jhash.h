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
#ifndef _LINUX_JHASH_H
#define _LINUX_JHASH_H
#include <linux/bitops.h>
#include <linux/unaligned/packed_struct.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define jhash_size(n) ((u32)1<<(n))
#define jhash_mask(n) (jhash_size(n)-1)
#define __jhash_mix(a, b, c)  {   a -= c; a ^= rol32(c, 4); c += b;   b -= a; b ^= rol32(a, 6); a += c;   c -= b; c ^= rol32(b, 8); b += a;   a -= c; a ^= rol32(c, 16); c += b;   b -= a; b ^= rol32(a, 19); a += c;   c -= b; c ^= rol32(b, 4); b += a;  }
#define __jhash_final(a, b, c)  {   c ^= b; c -= rol32(b, 14);   a ^= c; a -= rol32(c, 11);   b ^= a; b -= rol32(a, 25);   c ^= b; c -= rol32(b, 16);   a ^= c; a -= rol32(c, 4);   b ^= a; b -= rol32(a, 14);   c ^= b; c -= rol32(b, 24);  }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define JHASH_INITVAL 0xdeadbeef
#endif
