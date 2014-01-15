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
#ifndef XZ_H
#define XZ_H
#include <stddef.h>
#include <stdint.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef XZ_EXTERN
#define XZ_EXTERN extern
#endif
enum xz_mode {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 XZ_SINGLE,
 XZ_PREALLOC,
 XZ_DYNALLOC
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum xz_ret {
 XZ_OK,
 XZ_STREAM_END,
 XZ_UNSUPPORTED_CHECK,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 XZ_MEM_ERROR,
 XZ_MEMLIMIT_ERROR,
 XZ_FORMAT_ERROR,
 XZ_OPTIONS_ERROR,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 XZ_DATA_ERROR,
 XZ_BUF_ERROR
};
struct xz_buf {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const uint8_t *in;
 size_t in_pos;
 size_t in_size;
 uint8_t *out;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t out_pos;
 size_t out_size;
};
struct xz_dec;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef XZ_INTERNAL_CRC32
#define XZ_INTERNAL_CRC32 1
#endif
#if XZ_INTERNAL_CRC32
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#endif
