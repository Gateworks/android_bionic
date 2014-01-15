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
#ifndef _LINUX_MMIOTRACE_H
#define _LINUX_MMIOTRACE_H
#include <linux/types.h>
#include <linux/list.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct kmmio_probe;
struct pt_regs;
typedef void (*kmmio_pre_handler_t)(struct kmmio_probe *,
 struct pt_regs *, unsigned long addr);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef void (*kmmio_post_handler_t)(struct kmmio_probe *,
 unsigned long condition, struct pt_regs *);
struct kmmio_probe {
 unsigned long addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long len;
 kmmio_pre_handler_t pre_handler;
 kmmio_post_handler_t post_handler;
 void *private;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum mm_io_opcode {
 MMIO_READ = 0x1,
 MMIO_WRITE = 0x2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MMIO_PROBE = 0x3,
 MMIO_UNPROBE = 0x4,
 MMIO_UNKNOWN_OP = 0x5,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mmiotrace_rw {
 resource_size_t phys;
 unsigned long value;
 unsigned long pc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int map_id;
 unsigned char opcode;
 unsigned char width;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mmiotrace_map {
 resource_size_t phys;
 unsigned long virt;
 unsigned long len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int map_id;
 unsigned char opcode;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
