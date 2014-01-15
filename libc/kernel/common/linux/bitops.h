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
#ifndef _LINUX_BITOPS_H
#define _LINUX_BITOPS_H
#include <asm/types.h>
#define BIT(nr) (1UL << (nr))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BIT_MASK(nr) (1UL << ((nr) % BITS_PER_LONG))
#define BIT_WORD(nr) ((nr) / BITS_PER_LONG)
#define BITS_PER_BYTE 8
#define BITS_TO_LONGS(nr) DIV_ROUND_UP(nr, BITS_PER_BYTE * sizeof(long))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/bitops.h>
#define for_each_set_bit(bit, addr, size)   for ((bit) = find_first_bit((addr), (size));   (bit) < (size);   (bit) = find_next_bit((addr), (size), (bit) + 1))
#define for_each_set_bit_from(bit, addr, size)   for ((bit) = find_next_bit((addr), (size), (bit));   (bit) < (size);   (bit) = find_next_bit((addr), (size), (bit) + 1))
#define for_each_clear_bit(bit, addr, size)   for ((bit) = find_first_zero_bit((addr), (size));   (bit) < (size);   (bit) = find_next_zero_bit((addr), (size), (bit) + 1))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define for_each_clear_bit_from(bit, addr, size)   for ((bit) = find_next_zero_bit((addr), (size), (bit));   (bit) < (size);   (bit) = find_next_zero_bit((addr), (size), (bit) + 1))
#if BITS_PER_LONG == 32
#elif BITS_PER_LONG != 64
#error BITS_PER_LONG not 32 or 64
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#endif
