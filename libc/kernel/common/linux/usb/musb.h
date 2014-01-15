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
#ifndef __LINUX_USB_MUSB_H
#define __LINUX_USB_MUSB_H
enum musb_mode {
 MUSB_UNDEFINED = 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MUSB_HOST,
 MUSB_PERIPHERAL,
 MUSB_OTG
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct clk;
enum musb_fifo_style {
 FIFO_RXTX,
 FIFO_TX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FIFO_RX
} __attribute__ ((packed));
enum musb_buf_mode {
 BUF_SINGLE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BUF_DOUBLE
} __attribute__ ((packed));
struct musb_fifo_cfg {
 u8 hw_ep_num;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum musb_fifo_style style;
 enum musb_buf_mode mode;
 u16 maxpacket;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MUSB_EP_FIFO(ep, st, m, pkt)  {   .hw_ep_num = ep,   .style = st,   .mode = m,   .maxpacket = pkt,  }
#define MUSB_EP_FIFO_SINGLE(ep, st, pkt)   MUSB_EP_FIFO(ep, st, BUF_SINGLE, pkt)
#define MUSB_EP_FIFO_DOUBLE(ep, st, pkt)   MUSB_EP_FIFO(ep, st, BUF_DOUBLE, pkt)
struct musb_hdrc_eps_bits {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char name[16];
 u8 bits;
};
struct musb_hdrc_config {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct musb_fifo_cfg *fifo_cfg;
 unsigned fifo_cfg_size;
 unsigned multipoint:1;
 unsigned dyn_fifo:1 __deprecated;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned soft_con:1 __deprecated;
 unsigned utm_16:1 __deprecated;
 unsigned big_endian:1;
 unsigned mult_bulk_tx:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned mult_bulk_rx:1;
 unsigned high_iso_tx:1;
 unsigned high_iso_rx:1;
 unsigned dma:1 __deprecated;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned vendor_req:1 __deprecated;
 u8 num_eps;
 u8 dma_channels __deprecated;
 u8 dyn_fifo_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 vendor_ctrl __deprecated;
 u8 vendor_stat __deprecated;
 u8 dma_req_chan __deprecated;
 u8 ram_bits;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct musb_hdrc_eps_bits *eps_bits __deprecated;
};
struct musb_hdrc_platform_data {
 u8 mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 has_mailbox:1;
 const char *clock;
 int (*set_vbus)(struct device *dev, int is_on);
 u8 power;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 min_power;
 u8 potpgt;
 unsigned extvbus:1;
 int (*set_power)(int state);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct musb_hdrc_config *config;
 void *board_data;
 const void *platform_ops;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TUSB6010_OSCCLK_60 16667
#define TUSB6010_REFCLK_24 41667
#define TUSB6010_REFCLK_19 52083
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
