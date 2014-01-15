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
#ifndef _LINUX_VIRTIO_SCSI_H
#define _LINUX_VIRTIO_SCSI_H
#define VIRTIO_SCSI_CDB_SIZE 32
#define VIRTIO_SCSI_SENSE_SIZE 96
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct virtio_scsi_cmd_req {
 u8 lun[8];
 u64 tag;
 u8 task_attr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 prio;
 u8 crn;
 u8 cdb[VIRTIO_SCSI_CDB_SIZE];
} __packed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct virtio_scsi_cmd_resp {
 u32 sense_len;
 u32 resid;
 u16 status_qualifier;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 status;
 u8 response;
 u8 sense[VIRTIO_SCSI_SENSE_SIZE];
} __packed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct virtio_scsi_ctrl_tmf_req {
 u32 type;
 u32 subtype;
 u8 lun[8];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u64 tag;
} __packed;
struct virtio_scsi_ctrl_tmf_resp {
 u8 response;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __packed;
struct virtio_scsi_ctrl_an_req {
 u32 type;
 u8 lun[8];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 event_requested;
} __packed;
struct virtio_scsi_ctrl_an_resp {
 u32 event_actual;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 response;
} __packed;
struct virtio_scsi_event {
 u32 event;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 lun[8];
 u32 reason;
} __packed;
struct virtio_scsi_config {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 num_queues;
 u32 seg_max;
 u32 max_sectors;
 u32 cmd_per_lun;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 event_info_size;
 u32 sense_size;
 u32 cdb_size;
 u16 max_channel;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 max_target;
 u32 max_lun;
} __packed;
#define VIRTIO_SCSI_F_INOUT 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_SCSI_F_HOTPLUG 1
#define VIRTIO_SCSI_F_CHANGE 2
#define VIRTIO_SCSI_S_OK 0
#define VIRTIO_SCSI_S_OVERRUN 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_SCSI_S_ABORTED 2
#define VIRTIO_SCSI_S_BAD_TARGET 3
#define VIRTIO_SCSI_S_RESET 4
#define VIRTIO_SCSI_S_BUSY 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_SCSI_S_TRANSPORT_FAILURE 6
#define VIRTIO_SCSI_S_TARGET_FAILURE 7
#define VIRTIO_SCSI_S_NEXUS_FAILURE 8
#define VIRTIO_SCSI_S_FAILURE 9
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_SCSI_S_FUNCTION_SUCCEEDED 10
#define VIRTIO_SCSI_S_FUNCTION_REJECTED 11
#define VIRTIO_SCSI_S_INCORRECT_LUN 12
#define VIRTIO_SCSI_T_TMF 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_SCSI_T_AN_QUERY 1
#define VIRTIO_SCSI_T_AN_SUBSCRIBE 2
#define VIRTIO_SCSI_T_TMF_ABORT_TASK 0
#define VIRTIO_SCSI_T_TMF_ABORT_TASK_SET 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_SCSI_T_TMF_CLEAR_ACA 2
#define VIRTIO_SCSI_T_TMF_CLEAR_TASK_SET 3
#define VIRTIO_SCSI_T_TMF_I_T_NEXUS_RESET 4
#define VIRTIO_SCSI_T_TMF_LOGICAL_UNIT_RESET 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_SCSI_T_TMF_QUERY_TASK 6
#define VIRTIO_SCSI_T_TMF_QUERY_TASK_SET 7
#define VIRTIO_SCSI_T_EVENTS_MISSED 0x80000000
#define VIRTIO_SCSI_T_NO_EVENT 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_SCSI_T_TRANSPORT_RESET 1
#define VIRTIO_SCSI_T_ASYNC_NOTIFY 2
#define VIRTIO_SCSI_T_PARAM_CHANGE 3
#define VIRTIO_SCSI_EVT_RESET_HARD 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_SCSI_EVT_RESET_RESCAN 1
#define VIRTIO_SCSI_EVT_RESET_REMOVED 2
#define VIRTIO_SCSI_S_SIMPLE 0
#define VIRTIO_SCSI_S_ORDERED 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VIRTIO_SCSI_S_HEAD 2
#define VIRTIO_SCSI_S_ACA 3
#endif
