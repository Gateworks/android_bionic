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
#ifndef _NET_DN_NSP_H
#define _NET_DN_NSP_H
#define NSP_REASON_OK 0
#define NSP_REASON_NR 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NSP_REASON_UN 2
#define NSP_REASON_SD 3
#define NSP_REASON_ID 4
#define NSP_REASON_ER 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NSP_REASON_OB 6
#define NSP_REASON_US 7
#define NSP_REASON_TP 8
#define NSP_REASON_EA 9
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NSP_REASON_IF 10
#define NSP_REASON_LS 11
#define NSP_REASON_LL 32
#define NSP_REASON_LE 33
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NSP_REASON_UR 34
#define NSP_REASON_UA 36
#define NSP_REASON_TM 38
#define NSP_REASON_NU 39
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NSP_REASON_NL 41
#define NSP_REASON_DC 42
#define NSP_REASON_IO 43
#define NSP_DISCINIT 0x38
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NSP_DISCCONF 0x48
struct nsp_data_seg_msg {
 __u8 msgflg;
 __le16 dstaddr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 srcaddr;
} __packed;
struct nsp_data_opt_msg {
 __le16 acknum;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 segnum;
 __le16 lsflgs;
} __packed;
struct nsp_data_opt_msg1 {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 acknum;
 __le16 segnum;
} __packed;
struct nsp_data_ack_msg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 msgflg;
 __le16 dstaddr;
 __le16 srcaddr;
 __le16 acknum;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __packed;
struct nsp_conn_ack_msg {
 __u8 msgflg;
 __le16 dstaddr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __packed;
struct nsp_conn_init_msg {
 __u8 msgflg;
#define NSP_CI 0x18
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NSP_RCI 0x68
 __le16 dstaddr;
 __le16 srcaddr;
 __u8 services;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NSP_FC_NONE 0x00
#define NSP_FC_SRC 0x04
#define NSP_FC_SCMC 0x08
#define NSP_FC_MASK 0x0c
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 info;
 __le16 segsize;
} __packed;
struct nsp_disconn_init_msg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 msgflg;
 __le16 dstaddr;
 __le16 srcaddr;
 __le16 reason;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __packed;
struct srcobj_fmt {
 __u8 format;
 __u8 task;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 grpcode;
 __le16 usrcode;
 __u8 dlen;
} __packed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DN_MAX_NSP_DATA_HEADER (11)
#endif
