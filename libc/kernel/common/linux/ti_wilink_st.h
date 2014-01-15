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
#ifndef TI_WILINK_ST_H
#define TI_WILINK_ST_H
#include <linux/skbuff.h>
enum proto_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ST_BT,
 ST_FM,
 ST_GPS,
 ST_MAX_CHANNELS = 16,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct st_proto_s {
 enum proto_type type;
 long (*recv) (void *, struct sk_buff *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char (*match_packet) (const unsigned char *data);
 void (*reg_complete_cb) (void *, char data);
 long (*write) (struct sk_buff *skb);
 void *priv_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char chnl_id;
 unsigned short max_frame_size;
 unsigned char hdr_len;
 unsigned char offset_len_in_hdr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char len_size;
 unsigned char reserve;
};
#define ST_NOTEMPTY 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ST_EMPTY 0
#define ST_INITIALIZING 1
#define ST_REG_IN_PROGRESS 2
#define ST_REG_PENDING 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ST_WAITING_FOR_RESP 4
struct st_data_s {
 unsigned long st_state;
 struct sk_buff *tx_skb;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ST_TX_SENDING 1
#define ST_TX_WAKEUP 2
 unsigned long tx_state;
 struct st_proto_s *list[ST_MAX_CHANNELS];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool is_registered[ST_MAX_CHANNELS];
 unsigned long rx_state;
 unsigned long rx_count;
 struct sk_buff *rx_skb;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char rx_chnl;
 struct sk_buff_head txq, tx_waitq;
 spinlock_t lock;
 unsigned char protos_registered;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long ll_state;
 void *kim_data;
 struct tty_struct *tty;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GPS_STUB_TEST
#ifdef GPS_STUB_TEST
#endif
#define LDISC_TIME 1000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CMD_RESP_TIME 800
#define CMD_WR_TIME 5000
#define MAKEWORD(a, b) ((unsigned short)(((unsigned char)(a))   | ((unsigned short)((unsigned char)(b))) << 8))
#define GPIO_HIGH 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GPIO_LOW 0
#define POR_RETRY_COUNT 5
struct chip_version {
 unsigned short full;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short chip;
 unsigned short min_ver;
 unsigned short maj_ver;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define UART_DEV_NAME_LEN 32
struct kim_data_s {
 long uim_pid;
 struct platform_device *kim_pdev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct completion kim_rcvd, ldisc_installed;
 char resp_buffer[30];
 const struct firmware *fw_entry;
 long nshutdown;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long rx_state;
 unsigned long rx_count;
 struct sk_buff *rx_skb;
 struct st_data_s *core_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct chip_version version;
 unsigned char ldisc_install;
 unsigned char dev_name[UART_DEV_NAME_LEN];
 unsigned char flow_cntrl;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long baud_rate;
};
#define ACTION_SEND_COMMAND 1
#define ACTION_WAIT_EVENT 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ACTION_SERIAL 3
#define ACTION_DELAY 4
#define ACTION_RUN_SCRIPT 5
#define ACTION_REMARKS 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct bts_header {
 u32 magic;
 u32 version;
 u8 future[24];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 actions[0];
} __attribute__ ((packed));
struct bts_action {
 u16 type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 size;
 u8 data[0];
} __attribute__ ((packed));
struct bts_action_send {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 data[0];
} __attribute__ ((packed));
struct bts_action_wait {
 u32 msec;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 size;
 u8 data[0];
} __attribute__ ((packed));
struct bts_action_delay {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 msec;
} __attribute__ ((packed));
struct bts_action_serial {
 u32 baud;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 flow_control;
} __attribute__ ((packed));
struct hci_command {
 u8 prefix;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 opcode;
 u8 plen;
 u32 speed;
} __attribute__ ((packed));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ST_W4_PACKET_TYPE 0
#define ST_W4_HEADER 1
#define ST_W4_DATA 2
#define ST_LL_ASLEEP 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ST_LL_ASLEEP_TO_AWAKE 1
#define ST_LL_AWAKE 2
#define ST_LL_AWAKE_TO_ASLEEP 3
#define ST_LL_INVALID 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LL_SLEEP_IND 0x30
#define LL_SLEEP_ACK 0x31
#define LL_WAKE_UP_IND 0x32
#define LL_WAKE_UP_ACK 0x33
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct fm_event_hdr {
 u8 plen;
} __attribute__ ((packed));
#define FM_MAX_FRAME_SIZE 0xFF
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FM_EVENT_HDR_SIZE 1
#define ST_FM_CH8_PKT 0x8
struct gps_event_hdr {
 u8 opcode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 plen;
} __attribute__ ((packed));
struct ti_st_plat_data {
 long nshutdown_gpio;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char dev_name[UART_DEV_NAME_LEN];
 unsigned char flow_cntrl;
 unsigned long baud_rate;
 int (*suspend)(struct platform_device *, pm_message_t);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*resume)(struct platform_device *);
 int (*chip_enable) (struct kim_data_s *);
 int (*chip_disable) (struct kim_data_s *);
 int (*chip_asleep) (struct kim_data_s *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*chip_awake) (struct kim_data_s *);
};
#endif
