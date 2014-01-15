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
#ifndef _SCC_H
#define _SCC_H
#include <uapi/linux/scc.h>
enum {TX_OFF, TX_ON};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VECTOR_MASK 0x06
#define TXINT 0x00
#define EXINT 0x02
#define RXINT 0x04
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPINT 0x06
#define Inb(port) inb(port)
#define Outb(port, val) outb(val, port)
struct scc_kiss {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char txdelay;
 unsigned char persist;
 unsigned char slottime;
 unsigned char tailtime;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char fulldup;
 unsigned char waittime;
 unsigned int maxkeyup;
 unsigned int mintime;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int idletime;
 unsigned int maxdefer;
 unsigned char tx_inhibit;
 unsigned char group;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char mode;
 unsigned char softdcd;
};
struct scc_channel {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int init;
 struct net_device *dev;
 struct net_device_stats dev_stat;
 char brand;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 long clock;
 io_port ctrl;
 io_port data;
 io_port special;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int irq;
 char option;
 char enhanced;
 unsigned char wreg[16];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char status;
 unsigned char dcd;
 struct scc_kiss kiss;
 struct scc_stat stat;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct scc_modem modem;
 struct sk_buff_head tx_queue;
 struct sk_buff *rx_buff;
 struct sk_buff *tx_buff;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct timer_list tx_t;
 struct timer_list tx_wdog;
 spinlock_t lock;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
