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
#ifndef _HDLCDRV_H
#define _HDLCDRV_H
#include <linux/netdevice.h>
#include <linux/if.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/spinlock.h>
#include <uapi/linux/hdlcdrv.h>
#define HDLCDRV_MAGIC 0x5ac6e778
#define HDLCDRV_HDLCBUFFER 32
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define HDLCDRV_BITBUFFER 256
#undef HDLCDRV_LOOPBACK
#define HDLCDRV_DEBUG
#define HDLCDRV_MAXFLEN 400
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct hdlcdrv_hdlcbuffer {
 spinlock_t lock;
 unsigned rd, wr;
 unsigned short buf[HDLCDRV_HDLCBUFFER];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#ifdef HDLCDRV_DEBUG
struct hdlcdrv_bitbuffer {
 unsigned int rd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int wr;
 unsigned int shreg;
 unsigned char buffer[HDLCDRV_BITBUFFER];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
struct hdlcdrv_ops {
 const char *drvname;
 const char *drvinfo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*open)(struct net_device *);
 int (*close)(struct net_device *);
 int (*ioctl)(struct net_device *, struct ifreq *,
 struct hdlcdrv_ioctl *, int);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct hdlcdrv_state {
 int magic;
 int opened;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct hdlcdrv_ops *ops;
 struct {
 int bitrate;
 } par;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct hdlcdrv_pttoutput {
 int dma2;
 int seriobase;
 int pariobase;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int midiiobase;
 unsigned int flags;
 } ptt_out;
 struct hdlcdrv_channel_params ch_params;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct hdlcdrv_hdlcrx {
 struct hdlcdrv_hdlcbuffer hbuf;
 unsigned long in_hdlc_rx;
 int rx_state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int bitstream;
 unsigned int bitbuf;
 int numbits;
 unsigned char dcd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int len;
 unsigned char *bp;
 unsigned char buffer[HDLCDRV_MAXFLEN+2];
 } hdlcrx;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct hdlcdrv_hdlctx {
 struct hdlcdrv_hdlcbuffer hbuf;
 unsigned long in_hdlc_tx;
 int tx_state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int numflags;
 unsigned int bitstream;
 unsigned char ptt;
 int calibrate;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int slotcnt;
 unsigned int bitbuf;
 int numbits;
 int len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char *bp;
 unsigned char buffer[HDLCDRV_MAXFLEN+2];
 } hdlctx;
#ifdef HDLCDRV_DEBUG
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct hdlcdrv_bitbuffer bitbuf_channel;
 struct hdlcdrv_bitbuffer bitbuf_hdlc;
#endif
 int ptt_keyed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sk_buff *skb;
};
#ifdef HDLCDRV_LOOPBACK
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifdef HDLCDRV_DEBUG
#endif
struct net_device *hdlcdrv_register(const struct hdlcdrv_ops *ops,
 unsigned int privsize, const char *ifname,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int baseaddr, unsigned int irq,
 unsigned int dma);
#endif
