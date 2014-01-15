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
#ifndef __ISDNIF_H__
#define __ISDNIF_H__
#include <linux/skbuff.h>
#include <uapi/linux/isdnif.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DSS1_CMD_INVOKE ((0x00 << 8) | ISDN_PTYPE_EURO)
#define DSS1_CMD_INVOKE_ABORT ((0x01 << 8) | ISDN_PTYPE_EURO)
#define DSS1_STAT_INVOKE_RES ((0x80 << 8) | ISDN_PTYPE_EURO)
#define DSS1_STAT_INVOKE_ERR ((0x81 << 8) | ISDN_PTYPE_EURO)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DSS1_STAT_INVOKE_BRD ((0x82 << 8) | ISDN_PTYPE_EURO)
#define NI1_CMD_INVOKE ((0x00 << 8) | ISDN_PTYPE_NI1)
#define NI1_CMD_INVOKE_ABORT ((0x01 << 8) | ISDN_PTYPE_NI1)
#define NI1_STAT_INVOKE_RES ((0x80 << 8) | ISDN_PTYPE_NI1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define NI1_STAT_INVOKE_ERR ((0x81 << 8) | ISDN_PTYPE_NI1)
#define NI1_STAT_INVOKE_BRD ((0x82 << 8) | ISDN_PTYPE_NI1)
typedef struct
 { ulong ll_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int hl_id;
 int proc;
 int timeout;
 int datalen;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u_char *data;
 } isdn_cmd_stat;
#define ISDN_CMD_IOCTL 0
#define ISDN_CMD_DIAL 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_CMD_ACCEPTD 2
#define ISDN_CMD_ACCEPTB 3
#define ISDN_CMD_HANGUP 4
#define ISDN_CMD_CLREAZ 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_CMD_SETEAZ 6
#define ISDN_CMD_GETEAZ 7
#define ISDN_CMD_SETSIL 8
#define ISDN_CMD_GETSIL 9
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_CMD_SETL2 10
#define ISDN_CMD_GETL2 11
#define ISDN_CMD_SETL3 12
#define ISDN_CMD_GETL3 13
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_CMD_SUSPEND 16
#define ISDN_CMD_RESUME 17
#define ISDN_CMD_PROCEED 18
#define ISDN_CMD_ALERT 19
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_CMD_REDIR 20
#define ISDN_CMD_PROT_IO 21
#define CAPI_PUT_MESSAGE 22
#define ISDN_CMD_FAXCMD 23
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_CMD_AUDIO 24
#define ISDN_STAT_STAVAIL 256
#define ISDN_STAT_ICALL 257
#define ISDN_STAT_RUN 258
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_STAT_STOP 259
#define ISDN_STAT_DCONN 260
#define ISDN_STAT_BCONN 261
#define ISDN_STAT_DHUP 262
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_STAT_BHUP 263
#define ISDN_STAT_CINF 264
#define ISDN_STAT_LOAD 265
#define ISDN_STAT_UNLOAD 266
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_STAT_BSENT 267
#define ISDN_STAT_NODCH 268
#define ISDN_STAT_ADDCH 269
#define ISDN_STAT_CAUSE 270
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_STAT_ICALLW 271
#define ISDN_STAT_REDIR 272
#define ISDN_STAT_PROT 273
#define ISDN_STAT_DISPLAY 274
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_STAT_L1ERR 275
#define ISDN_STAT_FAXIND 276
#define ISDN_STAT_AUDIO 277
#define ISDN_STAT_DISCH 278
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_AUDIO_SETDD 0
#define ISDN_AUDIO_DTMF 1
#define ISDN_STAT_L1ERR_SEND 1
#define ISDN_STAT_L1ERR_RECV 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_FEATURE_L2_X75I (0x0001 << ISDN_PROTO_L2_X75I)
#define ISDN_FEATURE_L2_X75UI (0x0001 << ISDN_PROTO_L2_X75UI)
#define ISDN_FEATURE_L2_X75BUI (0x0001 << ISDN_PROTO_L2_X75BUI)
#define ISDN_FEATURE_L2_HDLC (0x0001 << ISDN_PROTO_L2_HDLC)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_FEATURE_L2_TRANS (0x0001 << ISDN_PROTO_L2_TRANS)
#define ISDN_FEATURE_L2_X25DTE (0x0001 << ISDN_PROTO_L2_X25DTE)
#define ISDN_FEATURE_L2_X25DCE (0x0001 << ISDN_PROTO_L2_X25DCE)
#define ISDN_FEATURE_L2_V11096 (0x0001 << ISDN_PROTO_L2_V11096)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_FEATURE_L2_V11019 (0x0001 << ISDN_PROTO_L2_V11019)
#define ISDN_FEATURE_L2_V11038 (0x0001 << ISDN_PROTO_L2_V11038)
#define ISDN_FEATURE_L2_MODEM (0x0001 << ISDN_PROTO_L2_MODEM)
#define ISDN_FEATURE_L2_FAX (0x0001 << ISDN_PROTO_L2_FAX)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_FEATURE_L2_HDLC_56K (0x0001 << ISDN_PROTO_L2_HDLC_56K)
#define ISDN_FEATURE_L2_MASK (0x0FFFF)
#define ISDN_FEATURE_L2_SHIFT (0)
#define ISDN_FEATURE_L3_TRANS (0x10000 << ISDN_PROTO_L3_TRANS)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_FEATURE_L3_TRANSDSP (0x10000 << ISDN_PROTO_L3_TRANSDSP)
#define ISDN_FEATURE_L3_FCLASS2 (0x10000 << ISDN_PROTO_L3_FCLASS2)
#define ISDN_FEATURE_L3_FCLASS1 (0x10000 << ISDN_PROTO_L3_FCLASS1)
#define ISDN_FEATURE_L3_MASK (0x0FF0000)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_FEATURE_L3_SHIFT (16)
#define ISDN_FEATURE_P_UNKNOWN (0x1000000 << ISDN_PTYPE_UNKNOWN)
#define ISDN_FEATURE_P_1TR6 (0x1000000 << ISDN_PTYPE_1TR6)
#define ISDN_FEATURE_P_EURO (0x1000000 << ISDN_PTYPE_EURO)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_FEATURE_P_NI1 (0x1000000 << ISDN_PTYPE_NI1)
#define ISDN_FEATURE_P_MASK (0x0FF000000)
#define ISDN_FEATURE_P_SHIFT (24)
typedef struct setup_parm {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char phone[32];
 unsigned char eazmsn[32];
 unsigned char si1;
 unsigned char si2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char plan;
 unsigned char screen;
} setup_parm;
#define ISDN_FAX_CLASS1_FAE 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_FAX_CLASS1_FTS 1
#define ISDN_FAX_CLASS1_FRS 2
#define ISDN_FAX_CLASS1_FTM 3
#define ISDN_FAX_CLASS1_FRM 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_FAX_CLASS1_FTH 5
#define ISDN_FAX_CLASS1_FRH 6
#define ISDN_FAX_CLASS1_CTRL 7
#define ISDN_FAX_CLASS1_OK 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_FAX_CLASS1_CONNECT 1
#define ISDN_FAX_CLASS1_NOCARR 2
#define ISDN_FAX_CLASS1_ERROR 3
#define ISDN_FAX_CLASS1_FCERROR 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ISDN_FAX_CLASS1_QUERY 5
typedef struct {
 __u8 cmd;
 __u8 subcmd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 para[50];
} aux_s;
#define AT_COMMAND 0
#define AT_EQ_VALUE 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AT_QUERY 2
#define AT_EQ_QUERY 3
#define MAX_CAPI_PARA_LEN 50
typedef struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 Length;
 __u16 ApplId;
 __u8 Command;
 __u8 Subcommand;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 Messagenumber;
 union {
 __u32 Controller;
 __u32 PLCI;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 NCCI;
 } adr;
 __u8 para[MAX_CAPI_PARA_LEN];
} capi_msg;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef struct {
 int driver;
 int command;
 ulong arg;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 ulong errcode;
 int length;
 u_char num[50];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 setup_parm setup;
 capi_msg cmsg;
 char display[85];
 isdn_cmd_stat isdn_io;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 aux_s aux;
 ulong userdata;
 } parm;
} isdn_ctrl;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define dss1_io isdn_io
#define ni1_io isdn_io
typedef struct {
 struct module *owner;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int channels;
 int maxbufsize;
 unsigned long features;
 unsigned short hl_hdrlen;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*rcvcallb_skb)(int, int, struct sk_buff *);
 int (*statcallb)(isdn_ctrl*);
 int (*command)(isdn_ctrl*);
 int (*writebuf_skb) (int, int, int, struct sk_buff *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*writecmd)(const u_char __user *, int, int, int);
 int (*readstat)(u_char __user *, int, int, int);
 char id[20];
} isdn_if;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <asm/uaccess.h>
#endif
