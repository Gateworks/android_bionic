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
#ifndef __LINUX_USB_ASSOCIATION_H
#define __LINUX_USB_ASSOCIATION_H
struct wusb_am_attr {
 __u8 id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u8 len;
};
#define WUSB_AR_AssociationTypeId { .id = cpu_to_le16(0x0000), .len = cpu_to_le16(2) }
#define WUSB_AR_AssociationSubTypeId { .id = cpu_to_le16(0x0001), .len = cpu_to_le16(2) }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WUSB_AR_Length { .id = cpu_to_le16(0x0002), .len = cpu_to_le16(4) }
#define WUSB_AR_AssociationStatus { .id = cpu_to_le16(0x0004), .len = cpu_to_le16(4) }
#define WUSB_AR_LangID { .id = cpu_to_le16(0x0008), .len = cpu_to_le16(2) }
#define WUSB_AR_DeviceFriendlyName { .id = cpu_to_le16(0x000b), .len = cpu_to_le16(64) }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WUSB_AR_HostFriendlyName { .id = cpu_to_le16(0x000c), .len = cpu_to_le16(64) }
#define WUSB_AR_CHID { .id = cpu_to_le16(0x1000), .len = cpu_to_le16(16) }
#define WUSB_AR_CDID { .id = cpu_to_le16(0x1001), .len = cpu_to_le16(16) }
#define WUSB_AR_ConnectionContext { .id = cpu_to_le16(0x1002), .len = cpu_to_le16(48) }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WUSB_AR_BandGroups { .id = cpu_to_le16(0x1004), .len = cpu_to_le16(2) }
enum {
 CBAF_REQ_GET_ASSOCIATION_INFORMATION = 0x01,
 CBAF_REQ_GET_ASSOCIATION_REQUEST,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CBAF_REQ_SET_ASSOCIATION_RESPONSE
};
enum {
 CBAF_IFACECLASS = 0xef,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CBAF_IFACESUBCLASS = 0x03,
 CBAF_IFACEPROTOCOL = 0x01,
};
struct wusb_cbaf_assoc_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 Length;
 __u8 NumAssociationRequests;
 __le16 Flags;
 __u8 AssociationRequestsArray[];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__((packed));
struct wusb_cbaf_assoc_request {
 __u8 AssociationDataIndex;
 __u8 Reserved;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 AssociationTypeId;
 __le16 AssociationSubTypeId;
 __le32 AssociationTypeInfoSize;
} __attribute__((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 AR_TYPE_WUSB = 0x0001,
 AR_TYPE_WUSB_RETRIEVE_HOST_INFO = 0x0000,
 AR_TYPE_WUSB_ASSOCIATE = 0x0001,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct wusb_cbaf_attr_hdr {
 __le16 id;
 __le16 len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__((packed));
struct wusb_cbaf_host_info {
 struct wusb_cbaf_attr_hdr AssociationTypeId_hdr;
 __le16 AssociationTypeId;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct wusb_cbaf_attr_hdr AssociationSubTypeId_hdr;
 __le16 AssociationSubTypeId;
 struct wusb_cbaf_attr_hdr CHID_hdr;
 struct wusb_ckhdid CHID;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct wusb_cbaf_attr_hdr LangID_hdr;
 __le16 LangID;
 struct wusb_cbaf_attr_hdr HostFriendlyName_hdr;
 __u8 HostFriendlyName[];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__((packed));
struct wusb_cbaf_device_info {
 struct wusb_cbaf_attr_hdr Length_hdr;
 __le32 Length;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct wusb_cbaf_attr_hdr CDID_hdr;
 struct wusb_ckhdid CDID;
 struct wusb_cbaf_attr_hdr BandGroups_hdr;
 __le16 BandGroups;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct wusb_cbaf_attr_hdr LangID_hdr;
 __le16 LangID;
 struct wusb_cbaf_attr_hdr DeviceFriendlyName_hdr;
 __u8 DeviceFriendlyName[];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__((packed));
struct wusb_cbaf_cc_data {
 struct wusb_cbaf_attr_hdr AssociationTypeId_hdr;
 __le16 AssociationTypeId;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct wusb_cbaf_attr_hdr AssociationSubTypeId_hdr;
 __le16 AssociationSubTypeId;
 struct wusb_cbaf_attr_hdr Length_hdr;
 __le32 Length;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct wusb_cbaf_attr_hdr ConnectionContext_hdr;
 struct wusb_ckhdid CHID;
 struct wusb_ckhdid CDID;
 struct wusb_ckhdid CK;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct wusb_cbaf_attr_hdr BandGroups_hdr;
 __le16 BandGroups;
} __attribute__((packed));
struct wusb_cbaf_cc_data_fail {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct wusb_cbaf_attr_hdr AssociationTypeId_hdr;
 __le16 AssociationTypeId;
 struct wusb_cbaf_attr_hdr AssociationSubTypeId_hdr;
 __le16 AssociationSubTypeId;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct wusb_cbaf_attr_hdr Length_hdr;
 __le16 Length;
 struct wusb_cbaf_attr_hdr AssociationStatus_hdr;
 __u32 AssociationStatus;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__((packed));
#endif
