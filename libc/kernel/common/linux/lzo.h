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
#ifndef __LZO_H__
#define __LZO_H__
#define LZO1X_1_MEM_COMPRESS (8192 * sizeof(unsigned short))
#define LZO1X_MEM_COMPRESS LZO1X_1_MEM_COMPRESS
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define lzo1x_worst_compress(x) ((x) + ((x) / 16) + 64 + 3)
#define LZO_E_OK 0
#define LZO_E_ERROR (-1)
#define LZO_E_OUT_OF_MEMORY (-2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LZO_E_NOT_COMPRESSIBLE (-3)
#define LZO_E_INPUT_OVERRUN (-4)
#define LZO_E_OUTPUT_OVERRUN (-5)
#define LZO_E_LOOKBEHIND_OVERRUN (-6)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LZO_E_EOF_NOT_FOUND (-7)
#define LZO_E_INPUT_NOT_CONSUMED (-8)
#define LZO_E_NOT_YET_IMPLEMENTED (-9)
#define LZO_E_INVALID_ARGUMENT (-10)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
