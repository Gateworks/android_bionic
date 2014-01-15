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
#ifndef _LIBPS2_H
#define _LIBPS2_H
#define PS2_CMD_GETID 0x02f2
#define PS2_CMD_RESET_BAT 0x02ff
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PS2_RET_BAT 0xaa
#define PS2_RET_ID 0x00
#define PS2_RET_ACK 0xfa
#define PS2_RET_NAK 0xfe
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PS2_RET_ERR 0xfc
#define PS2_FLAG_ACK 1
#define PS2_FLAG_CMD 2
#define PS2_FLAG_CMD1 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PS2_FLAG_WAITID 8
#define PS2_FLAG_NAK 16
struct ps2dev {
 struct serio *serio;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mutex cmd_mutex;
 wait_queue_head_t wait;
 unsigned long flags;
 unsigned char cmdbuf[8];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char cmdcnt;
 unsigned char nak;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
