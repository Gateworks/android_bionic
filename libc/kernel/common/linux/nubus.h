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
#ifndef LINUX_NUBUS_H
#define LINUX_NUBUS_H
#include <asm/nubus.h>
#include <uapi/linux/nubus.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nubus_board {
 struct nubus_board* next;
 struct nubus_dev* first_dev;
 int slot;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char name[64];
 unsigned char* fblock;
 unsigned char* directory;
 unsigned long slot_addr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long doffset;
 unsigned long rom_length;
 unsigned long crc;
 unsigned char rev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char format;
 unsigned char lanes;
};
struct nubus_dev {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct nubus_dev* next;
 struct proc_dir_entry* procdir;
 unsigned char resid;
 unsigned short category;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short type;
 unsigned short dr_sw;
 unsigned short dr_hw;
 char name[64];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char* driver;
 unsigned long iobase;
 unsigned long iosize;
 unsigned char flags, hwdevid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char* directory;
 struct nubus_board* board;
};
struct nubus_dev* nubus_find_device(unsigned short category,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short type,
 unsigned short dr_hw,
 unsigned short dr_sw,
 const struct nubus_dev* from);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct nubus_dev* nubus_find_type(unsigned short category,
 unsigned short type,
 const struct nubus_dev* from);
struct nubus_dev* nubus_find_slot(unsigned int slot,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct nubus_dev* from);
#endif
