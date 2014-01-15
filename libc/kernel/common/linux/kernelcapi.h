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
#ifndef __KERNELCAPI_H__
#define __KERNELCAPI_H__
#include <linux/list.h>
#include <linux/skbuff.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/workqueue.h>
#include <linux/notifier.h>
#include <uapi/linux/kernelcapi.h>
struct capi20_appl {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 applid;
 capi_register_params rparam;
 void (*recv_message)(struct capi20_appl *ap, struct sk_buff *skb);
 void *private;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long nrecvctlpkt;
 unsigned long nrecvdatapkt;
 unsigned long nsentctlpkt;
 unsigned long nsentdatapkt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mutex recv_mtx;
 struct sk_buff_head recv_queue;
 int release_in_progress;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CAPICTR_UP 0
#define CAPICTR_DOWN 1
#define CAPI_NOERROR 0x0000
#define CAPI_TOOMANYAPPLS 0x1001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CAPI_LOGBLKSIZETOSMALL 0x1002
#define CAPI_BUFFEXECEEDS64K 0x1003
#define CAPI_MSGBUFSIZETOOSMALL 0x1004
#define CAPI_ANZLOGCONNNOTSUPPORTED 0x1005
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CAPI_REGRESERVED 0x1006
#define CAPI_REGBUSY 0x1007
#define CAPI_REGOSRESOURCEERR 0x1008
#define CAPI_REGNOTINSTALLED 0x1009
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CAPI_REGCTRLERNOTSUPPORTEXTEQUIP 0x100a
#define CAPI_REGCTRLERONLYSUPPORTEXTEQUIP 0x100b
#define CAPI_ILLAPPNR 0x1101
#define CAPI_ILLCMDORSUBCMDORMSGTOSMALL 0x1102
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CAPI_SENDQUEUEFULL 0x1103
#define CAPI_RECEIVEQUEUEEMPTY 0x1104
#define CAPI_RECEIVEOVERFLOW 0x1105
#define CAPI_UNKNOWNNOTPAR 0x1106
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CAPI_MSGBUSY 0x1107
#define CAPI_MSGOSRESOURCEERR 0x1108
#define CAPI_MSGNOTINSTALLED 0x1109
#define CAPI_MSGCTRLERNOTSUPPORTEXTEQUIP 0x110a
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CAPI_MSGCTRLERONLYSUPPORTEXTEQUIP 0x110b
typedef enum {
 CapiMessageNotSupportedInCurrentState = 0x2001,
 CapiIllContrPlciNcci = 0x2002,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CapiNoPlciAvailable = 0x2003,
 CapiNoNcciAvailable = 0x2004,
 CapiNoListenResourcesAvailable = 0x2005,
 CapiNoFaxResourcesAvailable = 0x2006,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CapiIllMessageParmCoding = 0x2007,
} RESOURCE_CODING_PROBLEM;
typedef enum {
 CapiB1ProtocolNotSupported = 0x3001,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CapiB2ProtocolNotSupported = 0x3002,
 CapiB3ProtocolNotSupported = 0x3003,
 CapiB1ProtocolParameterNotSupported = 0x3004,
 CapiB2ProtocolParameterNotSupported = 0x3005,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CapiB3ProtocolParameterNotSupported = 0x3006,
 CapiBProtocolCombinationNotSupported = 0x3007,
 CapiNcpiNotSupported = 0x3008,
 CapiCipValueUnknown = 0x3009,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CapiFlagsNotSupported = 0x300a,
 CapiFacilityNotSupported = 0x300b,
 CapiDataLengthNotSupportedByCurrentProtocol = 0x300c,
 CapiResetProcedureNotSupportedByCurrentProtocol = 0x300d,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CapiTeiAssignmentFailed = 0x300e,
} REQUESTED_SERVICES_PROBLEM;
typedef enum {
 CapiSuccess = 0x0000,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CapiSupplementaryServiceNotSupported = 0x300e,
 CapiRequestNotAllowedInThisState = 0x3010,
} SUPPLEMENTARY_SERVICE_INFO;
typedef enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CapiProtocolErrorLayer1 = 0x3301,
 CapiProtocolErrorLayer2 = 0x3302,
 CapiProtocolErrorLayer3 = 0x3303,
 CapiTimeOut = 0x3303,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CapiCallGivenToOtherApplication = 0x3304,
} CAPI_REASON;
#endif
