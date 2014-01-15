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
#ifndef __LINUX_MTD_PFOW_H
#define __LINUX_MTD_PFOW_H
#include <linux/mtd/qinfo.h>
#define PFOW_QUERY_STRING_P 0x0000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PFOW_QUERY_STRING_F 0x0002
#define PFOW_QUERY_STRING_O 0x0004
#define PFOW_QUERY_STRING_W 0x0006
#define PFOW_MANUFACTURER_ID 0x0020
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PFOW_DEVICE_ID 0x0022
#define PFOW_PROGRAM_BUFFER_OFFSET 0x0040
#define PFOW_PROGRAM_BUFFER_SIZE 0x0042
#define PFOW_COMMAND_CODE 0x0080
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PFOW_COMMAND_DATA 0x0084
#define PFOW_COMMAND_ADDRESS_L 0x0088
#define PFOW_COMMAND_ADDRESS_H 0x008a
#define PFOW_DATA_COUNT_L 0x0090
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PFOW_DATA_COUNT_H 0x0092
#define PFOW_COMMAND_EXECUTE 0x00c0
#define PFOW_CLEAR_PROGRAM_BUFFER 0x00c4
#define PFOW_PROGRAM_ERASE_SUSPEND 0x00c8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PFOW_DSR 0x00cc
#define LPDDR_WORD_PROGRAM 0x0041
#define LPDDR_BUFF_PROGRAM 0x00E9
#define LPDDR_BLOCK_ERASE 0x0020
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LPDDR_LOCK_BLOCK 0x0061
#define LPDDR_UNLOCK_BLOCK 0x0062
#define LPDDR_READ_BLOCK_LOCK_STATUS 0x0065
#define LPDDR_INFO_QUERY 0x0098
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LPDDR_READ_OTP 0x0097
#define LPDDR_PROG_OTP 0x00C0
#define LPDDR_RESUME 0x00D0
#define LPDDR_START_EXECUTION 0x0001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LPDDR_SUSPEND 0x0001
#define DSR_DPS (1<<1)
#define DSR_PSS (1<<2)
#define DSR_VPPS (1<<3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DSR_PROGRAM_STATUS (1<<4)
#define DSR_ERASE_STATUS (1<<5)
#define DSR_ESS (1<<6)
#define DSR_READY_STATUS (1<<7)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DSR_RPS (0x3<<8)
#define DSR_AOS (1<<12)
#define DSR_AVAILABLE (1<<15)
#define DSR_ERR 0x133A
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
