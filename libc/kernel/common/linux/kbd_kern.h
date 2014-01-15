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
#ifndef _KBD_KERN_H
#define _KBD_KERN_H
#include <linux/tty.h>
#include <linux/interrupt.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/keyboard.h>
struct kbd_struct {
 unsigned char lockstate;
#define VC_SHIFTLOCK KG_SHIFT
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VC_ALTGRLOCK KG_ALTGR
#define VC_CTRLLOCK KG_CTRL
#define VC_ALTLOCK KG_ALT
#define VC_SHIFTLLOCK KG_SHIFTL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VC_SHIFTRLOCK KG_SHIFTR
#define VC_CTRLLLOCK KG_CTRLL
#define VC_CTRLRLOCK KG_CTRLR
 unsigned char slockstate;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char ledmode:2;
#define LED_SHOW_FLAGS 0
#define LED_SHOW_IOCTL 1
#define LED_SHOW_MEM 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char ledflagstate:4;
 unsigned char default_ledflagstate:4;
#define VC_SCROLLOCK 0
#define VC_NUMLOCK 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VC_CAPSLOCK 2
#define VC_KANALOCK 3
 unsigned char kbdmode:3;
#define VC_XLATE 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VC_MEDIUMRAW 1
#define VC_RAW 2
#define VC_UNICODE 3
#define VC_OFF 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char modeflags:5;
#define VC_APPLIC 0
#define VC_CKMODE 1
#define VC_REPEAT 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VC_CRLF 3
#define VC_META 4
};
#define U(x) ((x) ^ 0xf000)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BRL_UC_ROW 0x2800
struct console;
#endif
