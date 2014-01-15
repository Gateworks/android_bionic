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
#ifndef _LINUX_FTL_H
#define _LINUX_FTL_H
typedef struct erase_unit_header_t {
 uint8_t LinkTargetTuple[5];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t DataOrgTuple[10];
 uint8_t NumTransferUnits;
 uint32_t EraseCount;
 uint16_t LogicalEUN;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t BlockSize;
 uint8_t EraseUnitSize;
 uint16_t FirstPhysicalEUN;
 uint16_t NumEraseUnits;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t FormattedSize;
 uint32_t FirstVMAddress;
 uint16_t NumVMPages;
 uint8_t Flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t Code;
 uint32_t SerialNumber;
 uint32_t AltEUHOffset;
 uint32_t BAMOffset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t Reserved[12];
 uint8_t EndTuple[2];
} erase_unit_header_t;
#define HIDDEN_AREA 0x01
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define REVERSE_POLARITY 0x02
#define DOUBLE_BAI 0x04
#define BLOCK_FREE(b) ((b) == 0xffffffff)
#define BLOCK_DELETED(b) (((b) == 0) || ((b) == 0xfffffffe))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BLOCK_TYPE(b) ((b) & 0x7f)
#define BLOCK_ADDRESS(b) ((b) & ~0x7f)
#define BLOCK_NUMBER(b) ((b) >> 9)
#define BLOCK_CONTROL 0x30
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BLOCK_DATA 0x40
#define BLOCK_REPLACEMENT 0x60
#define BLOCK_BAD 0x70
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
