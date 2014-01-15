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
#ifndef _LINUX_ISICOM_H
#define _LINUX_ISICOM_H
#define YES 1
#define NO 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISICOM_NAME "ISICom"
#define DEVID_COUNT 9
#define VENDOR_ID 0x10b5
#define ISICOM_NMAJOR 112
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISICOM_CMAJOR 113
#define ISICOM_MAGIC (('M' << 8) | 'T')
#define WAKEUP_CHARS 256
#define TX_SIZE 254
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define BOARD_COUNT 4
#define PORT_COUNT (BOARD_COUNT*16)
#define ISICOM_CS5 0x0000
#define ISICOM_CS6 0x0001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISICOM_CS7 0x0002
#define ISICOM_CS8 0x0003
#define ISICOM_1SB 0x0000
#define ISICOM_2SB 0x0004
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISICOM_NOPAR 0x0000
#define ISICOM_ODPAR 0x0008
#define ISICOM_EVPAR 0x0018
#define ISICOM_CTSRTS 0x03
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISICOM_INITIATE_XONXOFF 0x04
#define ISICOM_RESPOND_XONXOFF 0x08
#define BOARD(line) (((line) >> 4) & 0x3)
#define ISICOM_KILLTX 0x01
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISICOM_KILLRX 0x02
#define FIRMWARE_LOADED 0x0001
#define BOARD_ACTIVE 0x0002
#define BOARD_INIT 0x0004
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISI_CTS 0x1000
#define ISI_DSR 0x2000
#define ISI_RI 0x4000
#define ISI_DCD 0x8000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISI_DTR 0x0100
#define ISI_RTS 0x0200
#define ISI_TXOK 0x0001
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
