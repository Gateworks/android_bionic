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
#define CDC_NCM_COMM_ALTSETTING_NCM 0
#define CDC_NCM_COMM_ALTSETTING_MBIM 1
#define CDC_NCM_DATA_ALTSETTING_NCM 1
#define CDC_NCM_DATA_ALTSETTING_MBIM 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define USB_CDC_NCM_NDP16_LENGTH_MIN 0x10
#define CDC_NCM_NTB_MAX_SIZE_TX 32768
#define CDC_NCM_NTB_MAX_SIZE_RX 32768
#define CDC_NCM_MIN_DATAGRAM_SIZE 1514
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CDC_MBIM_MIN_DATAGRAM_SIZE 2048
#define CDC_NCM_MIN_TX_PKT 512
#define CDC_NCM_MAX_DATAGRAM_SIZE 8192
#define CDC_NCM_DPT_DATAGRAMS_MAX 40
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CDC_NCM_RESTART_TIMER_DATAGRAM_CNT 3
#define CDC_NCM_TIMER_PENDING_CNT 2
#define CDC_NCM_TIMER_INTERVAL (400UL * NSEC_PER_USEC)
#define CDC_NCM_MIN_HDR_SIZE   (sizeof(struct usb_cdc_ncm_nth16) + sizeof(struct usb_cdc_ncm_ndp16) +   (CDC_NCM_DPT_DATAGRAMS_MAX + 1) * sizeof(struct usb_cdc_ncm_dpe16))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CDC_NCM_NDP_SIZE   (sizeof(struct usb_cdc_ncm_ndp16) +   (CDC_NCM_DPT_DATAGRAMS_MAX + 1) * sizeof(struct usb_cdc_ncm_dpe16))
#define cdc_ncm_comm_intf_is_mbim(x) ((x)->desc.bInterfaceSubClass == USB_CDC_SUBCLASS_MBIM &&   (x)->desc.bInterfaceProtocol == USB_CDC_PROTO_NONE)
#define cdc_ncm_data_intf_is_mbim(x) ((x)->desc.bInterfaceProtocol == USB_CDC_MBIM_PROTO_NTB)
struct cdc_ncm_ctx {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct usb_cdc_ncm_ntb_parameters ncm_parm;
 struct hrtimer tx_timer;
 struct tasklet_struct bh;
 const struct usb_cdc_ncm_desc *func_desc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct usb_cdc_mbim_desc *mbim_desc;
 const struct usb_cdc_header_desc *header_desc;
 const struct usb_cdc_union_desc *union_desc;
 const struct usb_cdc_ether_desc *ether_desc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct net_device *netdev;
 struct usb_device *udev;
 struct usb_host_endpoint *in_ep;
 struct usb_host_endpoint *out_ep;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct usb_host_endpoint *status_ep;
 struct usb_interface *intf;
 struct usb_interface *control;
 struct usb_interface *data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sk_buff *tx_curr_skb;
 struct sk_buff *tx_rem_skb;
 __le32 tx_rem_sign;
 spinlock_t mtx;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 atomic_t stop;
 u32 tx_timer_pending;
 u32 tx_curr_frame_num;
 u32 rx_speed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 tx_speed;
 u32 rx_max;
 u32 tx_max;
 u32 max_datagram_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 tx_max_datagrams;
 u16 tx_remainder;
 u16 tx_modulus;
 u16 tx_ndp_modulus;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 tx_seq;
 u16 rx_seq;
 u16 connected;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
