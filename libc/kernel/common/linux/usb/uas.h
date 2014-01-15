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
#ifndef __USB_UAS_H__
#define __USB_UAS_H__
#include <scsi/scsi.h>
#include <scsi/scsi_cmnd.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct iu {
 __u8 iu_id;
 __u8 rsvd1;
 __be16 tag;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
 IU_ID_COMMAND = 0x01,
 IU_ID_STATUS = 0x03,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 IU_ID_RESPONSE = 0x04,
 IU_ID_TASK_MGMT = 0x05,
 IU_ID_READ_READY = 0x06,
 IU_ID_WRITE_READY = 0x07,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
 TMF_ABORT_TASK = 0x01,
 TMF_ABORT_TASK_SET = 0x02,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TMF_CLEAR_TASK_SET = 0x04,
 TMF_LOGICAL_UNIT_RESET = 0x08,
 TMF_I_T_NEXUS_RESET = 0x10,
 TMF_CLEAR_ACA = 0x40,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 TMF_QUERY_TASK = 0x80,
 TMF_QUERY_TASK_SET = 0x81,
 TMF_QUERY_ASYNC_EVENT = 0x82,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 RC_TMF_COMPLETE = 0x00,
 RC_INVALID_INFO_UNIT = 0x02,
 RC_TMF_NOT_SUPPORTED = 0x04,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 RC_TMF_FAILED = 0x05,
 RC_TMF_SUCCEEDED = 0x08,
 RC_INCORRECT_LUN = 0x09,
 RC_OVERLAPPED_TAG = 0x0a,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct command_iu {
 __u8 iu_id;
 __u8 rsvd1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be16 tag;
 __u8 prio_attr;
 __u8 rsvd5;
 __u8 len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 rsvd7;
 struct scsi_lun lun;
 __u8 cdb[16];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct task_mgmt_iu {
 __u8 iu_id;
 __u8 rsvd1;
 __be16 tag;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 function;
 __u8 rsvd2;
 __be16 task_tag;
 struct scsi_lun lun;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct sense_iu {
 __u8 iu_id;
 __u8 rsvd1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be16 tag;
 __be16 status_qual;
 __u8 status;
 __u8 rsvd7[7];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __be16 len;
 __u8 sense[SCSI_SENSE_BUFFERSIZE];
};
struct response_ui {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 iu_id;
 __u8 rsvd1;
 __be16 tag;
 __be16 add_response_info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 response_code;
};
struct usb_pipe_usage_descriptor {
 __u8 bLength;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 bDescriptorType;
 __u8 bPipeID;
 __u8 Reserved;
} __attribute__((__packed__));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 CMD_PIPE_ID = 1,
 STATUS_PIPE_ID = 2,
 DATA_IN_PIPE_ID = 3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DATA_OUT_PIPE_ID = 4,
 UAS_SIMPLE_TAG = 0,
 UAS_HEAD_TAG = 1,
 UAS_ORDERED_TAG = 2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 UAS_ACA = 4,
};
#endif
