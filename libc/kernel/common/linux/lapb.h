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
#ifndef LAPB_KERNEL_H
#define LAPB_KERNEL_H
#define LAPB_OK 0
#define LAPB_BADTOKEN 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LAPB_INVALUE 2
#define LAPB_CONNECTED 3
#define LAPB_NOTCONNECTED 4
#define LAPB_REFUSED 5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LAPB_TIMEDOUT 6
#define LAPB_NOMEM 7
#define LAPB_STANDARD 0x00
#define LAPB_EXTENDED 0x01
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LAPB_SLP 0x00
#define LAPB_MLP 0x02
#define LAPB_DTE 0x00
#define LAPB_DCE 0x04
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct lapb_register_struct {
 void (*connect_confirmation)(struct net_device *dev, int reason);
 void (*connect_indication)(struct net_device *dev, int reason);
 void (*disconnect_confirmation)(struct net_device *dev, int reason);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*disconnect_indication)(struct net_device *dev, int reason);
 int (*data_indication)(struct net_device *dev, struct sk_buff *skb);
 void (*data_transmit)(struct net_device *dev, struct sk_buff *skb);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct lapb_parms_struct {
 unsigned int t1;
 unsigned int t1timer;
 unsigned int t2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int t2timer;
 unsigned int n2;
 unsigned int n2count;
 unsigned int window;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int state;
 unsigned int mode;
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
