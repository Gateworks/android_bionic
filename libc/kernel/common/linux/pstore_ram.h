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
#ifndef __LINUX_PSTORE_RAM_H__
#define __LINUX_PSTORE_RAM_H__
#include <linux/device.h>
#include <linux/kernel.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/list.h>
#include <linux/types.h>
#include <linux/init.h>
struct persistent_ram_buffer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct rs_control;
struct persistent_ram_ecc_info {
 int block_size;
 int ecc_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int symsize;
 int poly;
};
struct persistent_ram_zone {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 phys_addr_t paddr;
 size_t size;
 void *vaddr;
 struct persistent_ram_buffer *buffer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t buffer_size;
 char *par_buffer;
 char *par_header;
 struct rs_control *rs_decoder;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int corrected_bytes;
 int bad_blocks;
 struct persistent_ram_ecc_info ecc_info;
 char *old_log;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t old_log_size;
};
struct persistent_ram_zone *persistent_ram_new(phys_addr_t start, size_t size,
 u32 sig, struct persistent_ram_ecc_info *ecc_info);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ramoops_platform_data {
 unsigned long mem_size;
 unsigned long mem_address;
 unsigned long record_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long console_size;
 unsigned long ftrace_size;
 int dump_oops;
 struct persistent_ram_ecc_info ecc_info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
