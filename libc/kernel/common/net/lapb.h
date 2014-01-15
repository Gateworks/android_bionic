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
#ifndef _LAPB_H
#define _LAPB_H
#include <linux/lapb.h>
#define LAPB_HEADER_LEN 20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LAPB_ACK_PENDING_CONDITION 0x01
#define LAPB_REJECT_CONDITION 0x02
#define LAPB_PEER_RX_BUSY_CONDITION 0x04
#define LAPB_I 0x00
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LAPB_S 0x01
#define LAPB_U 0x03
#define LAPB_RR 0x01
#define LAPB_RNR 0x05
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LAPB_REJ 0x09
#define LAPB_SABM 0x2F
#define LAPB_SABME 0x6F
#define LAPB_DISC 0x43
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LAPB_DM 0x0F
#define LAPB_UA 0x63
#define LAPB_FRMR 0x87
#define LAPB_ILLEGAL 0x100
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LAPB_SPF 0x10
#define LAPB_EPF 0x01
#define LAPB_FRMR_W 0x01
#define LAPB_FRMR_X 0x02
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LAPB_FRMR_Y 0x04
#define LAPB_FRMR_Z 0x08
#define LAPB_POLLOFF 0
#define LAPB_POLLON 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LAPB_COMMAND 1
#define LAPB_RESPONSE 2
#define LAPB_ADDR_A 0x03
#define LAPB_ADDR_B 0x01
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LAPB_ADDR_C 0x0F
#define LAPB_ADDR_D 0x07
#endif
