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
#include <asm-generic/xor.h>
#define __XOR(a1, a2) a1 ^= a2
#define GET_BLOCK_2(dst)   __asm__("ldmia	%0, {%1, %2}"   : "=r" (dst), "=r" (a1), "=r" (a2)   : "0" (dst))
#define GET_BLOCK_4(dst)   __asm__("ldmia	%0, {%1, %2, %3, %4}"   : "=r" (dst), "=r" (a1), "=r" (a2), "=r" (a3), "=r" (a4)   : "0" (dst))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define XOR_BLOCK_2(src)   __asm__("ldmia	%0!, {%1, %2}"   : "=r" (src), "=r" (b1), "=r" (b2)   : "0" (src));   __XOR(a1, b1); __XOR(a2, b2);
#define XOR_BLOCK_4(src)   __asm__("ldmia	%0!, {%1, %2, %3, %4}"   : "=r" (src), "=r" (b1), "=r" (b2), "=r" (b3), "=r" (b4)   : "0" (src));   __XOR(a1, b1); __XOR(a2, b2); __XOR(a3, b3); __XOR(a4, b4)
#define PUT_BLOCK_2(dst)   __asm__ __volatile__("stmia	%0!, {%2, %3}"   : "=r" (dst)   : "0" (dst), "r" (a1), "r" (a2))
#define PUT_BLOCK_4(dst)   __asm__ __volatile__("stmia	%0!, {%2, %3, %4, %5}"   : "=r" (dst)   : "0" (dst), "r" (a1), "r" (a2), "r" (a3), "r" (a4))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#undef XOR_TRY_TEMPLATES
#define XOR_TRY_TEMPLATES   do {   xor_speed(&xor_block_arm4regs);   xor_speed(&xor_block_8regs);   xor_speed(&xor_block_32regs);   } while (0)
