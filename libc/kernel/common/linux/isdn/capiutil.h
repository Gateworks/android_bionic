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
#ifndef __CAPIUTIL_H__
#define __CAPIUTIL_H__
#include <asm/types.h>
#define CAPIMSG_BASELEN 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CAPIMSG_U8(m, off) (m[off])
#define CAPIMSG_U16(m, off) (m[off]|(m[(off)+1]<<8))
#define CAPIMSG_U32(m, off) (m[off]|(m[(off)+1]<<8)|(m[(off)+2]<<16)|(m[(off)+3]<<24))
#define CAPIMSG_LEN(m) CAPIMSG_U16(m,0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CAPIMSG_APPID(m) CAPIMSG_U16(m,2)
#define CAPIMSG_COMMAND(m) CAPIMSG_U8(m,4)
#define CAPIMSG_SUBCOMMAND(m) CAPIMSG_U8(m,5)
#define CAPIMSG_CMD(m) (((m[4])<<8)|(m[5]))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CAPIMSG_MSGID(m) CAPIMSG_U16(m,6)
#define CAPIMSG_CONTROLLER(m) (m[8] & 0x7f)
#define CAPIMSG_CONTROL(m) CAPIMSG_U32(m, 8)
#define CAPIMSG_NCCI(m) CAPIMSG_CONTROL(m)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CAPIMSG_DATALEN(m) CAPIMSG_U16(m,16)
#define CAPIMSG_SETLEN(m, len) capimsg_setu16(m, 0, len)
#define CAPIMSG_SETAPPID(m, applid) capimsg_setu16(m, 2, applid)
#define CAPIMSG_SETCOMMAND(m,cmd) capimsg_setu8(m, 4, cmd)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CAPIMSG_SETSUBCOMMAND(m, cmd) capimsg_setu8(m, 5, cmd)
#define CAPIMSG_SETMSGID(m, msgid) capimsg_setu16(m, 6, msgid)
#define CAPIMSG_SETCONTROL(m, contr) capimsg_setu32(m, 8, contr)
#define CAPIMSG_SETDATALEN(m, len) capimsg_setu16(m, 16, len)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef __u8 *_cstruct;
typedef enum {
 CAPI_COMPOSE,
 CAPI_DEFAULT
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} _cmstruct;
typedef struct {
 __u16 ApplId;
 __u8 Command;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 Subcommand;
 __u16 Messagenumber;
 union {
 __u32 adrController;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 adrPLCI;
 __u32 adrNCCI;
 } adr;
 _cmstruct AdditionalInfo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 _cstruct B1configuration;
 __u16 B1protocol;
 _cstruct B2configuration;
 __u16 B2protocol;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 _cstruct B3configuration;
 __u16 B3protocol;
 _cstruct BC;
 _cstruct BChannelinformation;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 _cmstruct BProtocol;
 _cstruct CalledPartyNumber;
 _cstruct CalledPartySubaddress;
 _cstruct CallingPartyNumber;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 _cstruct CallingPartySubaddress;
 __u32 CIPmask;
 __u32 CIPmask2;
 __u16 CIPValue;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 Class;
 _cstruct ConnectedNumber;
 _cstruct ConnectedSubaddress;
 __u32 Data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 DataHandle;
 __u16 DataLength;
 _cstruct FacilityConfirmationParameter;
 _cstruct Facilitydataarray;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 _cstruct FacilityIndicationParameter;
 _cstruct FacilityRequestParameter;
 __u16 FacilitySelector;
 __u16 Flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 Function;
 _cstruct HLC;
 __u16 Info;
 _cstruct InfoElement;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 InfoMask;
 __u16 InfoNumber;
 _cstruct Keypadfacility;
 _cstruct LLC;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 _cstruct ManuData;
 __u32 ManuID;
 _cstruct NCPI;
 __u16 Reason;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u16 Reason_B3;
 __u16 Reject;
 _cstruct Useruserdata;
 unsigned l, p;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char *par;
 __u8 *m;
 __u8 buf[180];
} _cmsg;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
typedef struct {
 u_char *buf;
 u_char *p;
 size_t size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t pos;
} _cdebbuf;
#define CDEBUG_SIZE 1024
#define CDEBUG_GSIZE 4096
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
