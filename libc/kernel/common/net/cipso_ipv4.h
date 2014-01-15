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
#ifndef _CIPSO_IPV4_H
#define _CIPSO_IPV4_H
#include <linux/types.h>
#include <linux/rcupdate.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/list.h>
#include <linux/net.h>
#include <linux/skbuff.h>
#include <net/netlabel.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <net/request_sock.h>
#include <linux/atomic.h>
#include <asm/unaligned.h>
#define CIPSO_V4_DOI_UNKNOWN 0x00000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CIPSO_V4_TAG_INVALID 0
#define CIPSO_V4_TAG_RBITMAP 1
#define CIPSO_V4_TAG_ENUM 2
#define CIPSO_V4_TAG_RANGE 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CIPSO_V4_TAG_PBITMAP 6
#define CIPSO_V4_TAG_FREEFORM 7
#define CIPSO_V4_TAG_LOCAL 128
#define CIPSO_V4_MAP_UNKNOWN 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CIPSO_V4_MAP_TRANS 1
#define CIPSO_V4_MAP_PASS 2
#define CIPSO_V4_MAP_LOCAL 3
#define CIPSO_V4_MAX_REM_LVLS 255
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CIPSO_V4_INV_LVL 0x80000000
#define CIPSO_V4_MAX_LOC_LVLS (CIPSO_V4_INV_LVL - 1)
#define CIPSO_V4_MAX_REM_CATS 65534
#define CIPSO_V4_INV_CAT 0x80000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CIPSO_V4_MAX_LOC_CATS (CIPSO_V4_INV_CAT - 1)
#endif
