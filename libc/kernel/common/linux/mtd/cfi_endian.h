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
#include <asm/byteorder.h>
#define CFI_HOST_ENDIAN 1
#define CFI_LITTLE_ENDIAN 2
#define CFI_BIG_ENDIAN 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CFI_DEFAULT_ENDIAN CFI_HOST_ENDIAN
#error No CFI endianness defined
#define cfi_default(s) ((s)?:CFI_DEFAULT_ENDIAN)
#define cfi_be(s) (cfi_default(s) == CFI_BIG_ENDIAN)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cfi_le(s) (cfi_default(s) == CFI_LITTLE_ENDIAN)
#define cfi_host(s) (cfi_default(s) == CFI_HOST_ENDIAN)
#define cpu_to_cfi8(map, x) (x)
#define cfi8_to_cpu(map, x) (x)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cpu_to_cfi16(map, x) _cpu_to_cfi(16, (map)->swap, (x))
#define cpu_to_cfi32(map, x) _cpu_to_cfi(32, (map)->swap, (x))
#define cpu_to_cfi64(map, x) _cpu_to_cfi(64, (map)->swap, (x))
#define cfi16_to_cpu(map, x) _cfi_to_cpu(16, (map)->swap, (x))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cfi32_to_cpu(map, x) _cfi_to_cpu(32, (map)->swap, (x))
#define cfi64_to_cpu(map, x) _cfi_to_cpu(64, (map)->swap, (x))
#define _cpu_to_cfi(w, s, x) (cfi_host(s)?(x):_swap_to_cfi(w, s, x))
#define _cfi_to_cpu(w, s, x) (cfi_host(s)?(x):_swap_to_cpu(w, s, x))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define _swap_to_cfi(w, s, x) (cfi_be(s)?cpu_to_be##w(x):cpu_to_le##w(x))
#define _swap_to_cpu(w, s, x) (cfi_be(s)?be##w##_to_cpu(x):le##w##_to_cpu(x))
