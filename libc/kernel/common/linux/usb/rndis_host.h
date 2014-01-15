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
#ifndef __LINUX_USB_RNDIS_HOST_H
#define __LINUX_USB_RNDIS_HOST_H
#include <linux/rndis.h>
struct rndis_msg_hdr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 msg_type;
 __le32 msg_len;
 __le32 request_id;
 __le32 status;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__ ((packed));
#define CONTROL_BUFFER_SIZE 1025
#define RNDIS_CONTROL_TIMEOUT_MS (5 * 1000)
struct rndis_data_hdr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 msg_type;
 __le32 msg_len;
 __le32 data_offset;
 __le32 data_len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 oob_data_offset;
 __le32 oob_data_len;
 __le32 num_oob;
 __le32 packet_data_offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 packet_data_len;
 __le32 vc_handle;
 __le32 reserved;
} __attribute__ ((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct rndis_init {
 __le32 msg_type;
 __le32 msg_len;
 __le32 request_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 major_version;
 __le32 minor_version;
 __le32 max_transfer_size;
} __attribute__ ((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct rndis_init_c {
 __le32 msg_type;
 __le32 msg_len;
 __le32 request_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 status;
 __le32 major_version;
 __le32 minor_version;
 __le32 device_flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 medium;
 __le32 max_packets_per_message;
 __le32 max_transfer_size;
 __le32 packet_alignment;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 af_list_offset;
 __le32 af_list_size;
} __attribute__ ((packed));
struct rndis_halt {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 msg_type;
 __le32 msg_len;
 __le32 request_id;
} __attribute__ ((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct rndis_query {
 __le32 msg_type;
 __le32 msg_len;
 __le32 request_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 oid;
 __le32 len;
 __le32 offset;
  __le32 handle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__ ((packed));
struct rndis_query_c {
 __le32 msg_type;
 __le32 msg_len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 request_id;
 __le32 status;
 __le32 len;
 __le32 offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__ ((packed));
struct rndis_set {
 __le32 msg_type;
 __le32 msg_len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 request_id;
 __le32 oid;
 __le32 len;
 __le32 offset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __le32 handle;
} __attribute__ ((packed));
struct rndis_set_c {
 __le32 msg_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 msg_len;
 __le32 request_id;
 __le32 status;
} __attribute__ ((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct rndis_reset {
 __le32 msg_type;
 __le32 msg_len;
 __le32 reserved;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__ ((packed));
struct rndis_reset_c {
 __le32 msg_type;
 __le32 msg_len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 status;
 __le32 addressing_lost;
} __attribute__ ((packed));
struct rndis_indicate {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 msg_type;
 __le32 msg_len;
 __le32 status;
 __le32 length;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 offset;
  __le32 diag_status;
 __le32 error_offset;
  __le32 message;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__ ((packed));
struct rndis_keepalive {
 __le32 msg_type;
 __le32 msg_len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 request_id;
} __attribute__ ((packed));
struct rndis_keepalive_c {
 __le32 msg_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 msg_len;
 __le32 request_id;
 __le32 status;
} __attribute__ ((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define RNDIS_DEFAULT_FILTER (   RNDIS_PACKET_TYPE_DIRECTED |   RNDIS_PACKET_TYPE_BROADCAST |   RNDIS_PACKET_TYPE_ALL_MULTICAST |   RNDIS_PACKET_TYPE_PROMISCUOUS)
#define FLAG_RNDIS_PHYM_NOT_WIRELESS 0x0001
#define FLAG_RNDIS_PHYM_WIRELESS 0x0002
#define RNDIS_DRIVER_DATA_POLL_STATUS 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
