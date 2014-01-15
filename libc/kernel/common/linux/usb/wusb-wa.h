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
#ifndef __LINUX_USB_WUSB_WA_H
#define __LINUX_USB_WUSB_WA_H
enum {
 WA_EXEC_RC_CMD = 40,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
 WUSB_REQ_ADD_MMC_IE = 20,
 WUSB_REQ_REMOVE_MMC_IE = 21,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 WUSB_REQ_SET_NUM_DNTS = 22,
 WUSB_REQ_SET_CLUSTER_ID = 23,
 WUSB_REQ_SET_DEV_INFO = 24,
 WUSB_REQ_GET_TIME = 25,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 WUSB_REQ_SET_STREAM_IDX = 26,
 WUSB_REQ_SET_WUSB_MAS = 27,
 WUSB_REQ_CHAN_STOP = 28,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 WUSB_TIME_ADJ = 0,
 WUSB_TIME_BPST = 1,
 WUSB_TIME_WUSB = 2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
 WA_ENABLE = 0x01,
 WA_RESET = 0x02,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 RPIPE_PAUSE = 0x1,
};
enum {
 WA_STATUS_ENABLED = 0x01,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 WA_STATUS_RESETTING = 0x02
};
enum rpipe_crs {
 RPIPE_CRS_CTL = 0x01,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 RPIPE_CRS_ISO = 0x02,
 RPIPE_CRS_BULK = 0x04,
 RPIPE_CRS_INTR = 0x08
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct usb_rpipe_descriptor {
 u8 bLength;
 u8 bDescriptorType;
 __le16 wRPipeIndex;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 wRequests;
 __le16 wBlocks;
 __le16 wMaxPacketSize;
 u8 bHSHubAddress;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 bHSHubPort;
 u8 bSpeed;
 u8 bDeviceAddress;
 u8 bEndpointAddress;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 bDataSequence;
 __le32 dwCurrentWindow;
 u8 bMaxDataSequence;
 u8 bInterval;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 bOverTheAirInterval;
 u8 bmAttribute;
 u8 bmCharacteristics;
 u8 bmRetryOptions;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 wNumTransactionErrors;
} __attribute__ ((packed));
enum wa_notif_type {
 DWA_NOTIF_RWAKE = 0x91,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DWA_NOTIF_PORTSTATUS = 0x92,
 WA_NOTIF_TRANSFER = 0x93,
 HWA_NOTIF_BPST_ADJ = 0x94,
 HWA_NOTIF_DN = 0x95,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct wa_notif_hdr {
 u8 bLength;
 u8 bNotifyType;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__((packed));
struct hwa_notif_dn {
 struct wa_notif_hdr hdr;
 u8 bSourceDeviceAddr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 bmAttributes;
 struct wusb_dn_hdr dndata[];
} __attribute__((packed));
enum wa_xfer_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 WA_XFER_TYPE_CTL = 0x80,
 WA_XFER_TYPE_BI = 0x81,
 WA_XFER_TYPE_ISO = 0x82,
 WA_XFER_RESULT = 0x83,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 WA_XFER_ABORT = 0x84,
};
struct wa_xfer_hdr {
 u8 bLength;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 bRequestType;
 __le16 wRPipe;
 __le32 dwTransferID;
 __le32 dwTransferLength;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 bTransferSegment;
} __attribute__((packed));
struct wa_xfer_ctl {
 struct wa_xfer_hdr hdr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 bmAttribute;
 __le16 wReserved;
 struct usb_ctrlrequest baSetupData;
} __attribute__((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct wa_xfer_bi {
 struct wa_xfer_hdr hdr;
 u8 bReserved;
 __le16 wReserved;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__((packed));
struct wa_xfer_hwaiso {
 struct wa_xfer_hdr hdr;
 u8 bReserved;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le16 wPresentationTime;
 __le32 dwNumOfPackets;
} __attribute__((packed));
struct wa_xfer_abort {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 bLength;
 u8 bRequestType;
 __le16 wRPipe;
 __le32 dwTransferID;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__((packed));
struct wa_notif_xfer {
 struct wa_notif_hdr hdr;
 u8 bEndpoint;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 Reserved;
} __attribute__((packed));
enum {
 WA_XFER_STATUS_SUCCESS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 WA_XFER_STATUS_HALTED,
 WA_XFER_STATUS_DATA_BUFFER_ERROR,
 WA_XFER_STATUS_BABBLE,
 WA_XFER_RESERVED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 WA_XFER_STATUS_NOT_FOUND,
 WA_XFER_STATUS_INSUFFICIENT_RESOURCE,
 WA_XFER_STATUS_TRANSACTION_ERROR,
 WA_XFER_STATUS_ABORTED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 WA_XFER_STATUS_RPIPE_NOT_READY,
 WA_XFER_INVALID_FORMAT,
 WA_XFER_UNEXPECTED_SEGMENT_NUMBER,
 WA_XFER_STATUS_RPIPE_TYPE_MISMATCH,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct wa_xfer_result {
 struct wa_notif_hdr hdr;
 __le32 dwTransferID;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __le32 dwTransferLength;
 u8 bTransferSegment;
 u8 bTransferStatus;
 __le32 dwNumOfPackets;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} __attribute__((packed));
struct usb_wa_descriptor {
 u8 bLength;
 u8 bDescriptorType;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 bcdWAVersion;
 u8 bNumPorts;
 u8 bmAttributes;
 u16 wNumRPipes;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 wRPipeMaxBlock;
 u8 bRPipeBlockSize;
 u8 bPwrOn2PwrGood;
 u8 bNumMMCIEs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 DeviceRemovable;
} __attribute__((packed));
struct hwa_dev_info {
 u8 bmDeviceAvailability[32];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 bDeviceAddress;
 __le16 wPHYRates;
 u8 bmDeviceAttribute;
} __attribute__((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
