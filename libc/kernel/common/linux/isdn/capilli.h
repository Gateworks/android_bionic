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
#ifndef __CAPILLI_H__
#define __CAPILLI_H__
#include <linux/kernel.h>
#include <linux/list.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/capi.h>
#include <linux/kernelcapi.h>
typedef struct capiloaddatapart {
 int user;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int len;
 unsigned char *data;
} capiloaddatapart;
typedef struct capiloaddata {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 capiloaddatapart firmware;
 capiloaddatapart configuration;
} capiloaddata;
typedef struct capicardparams {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int port;
 unsigned irq;
 int cardtype;
 int cardnr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int membase;
} capicardparams;
struct capi_ctr {
 struct module *owner;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *driverdata;
 char name[32];
 char *driver_name;
 int (*load_firmware)(struct capi_ctr *, capiloaddata *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*reset_ctr)(struct capi_ctr *);
 void (*register_appl)(struct capi_ctr *, u16 appl,
 capi_register_params *);
 void (*release_appl)(struct capi_ctr *, u16 appl);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 (*send_message)(struct capi_ctr *, struct sk_buff *skb);
 char *(*procinfo)(struct capi_ctr *);
 const struct file_operations *proc_fops;
 u8 manu[CAPI_MANUFACTURER_LEN];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 capi_version version;
 capi_profile profile;
 u8 serial[CAPI_SERIAL_LEN];
 unsigned long nrecvctlpkt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long nrecvdatapkt;
 unsigned long nsentctlpkt;
 unsigned long nsentdatapkt;
 int cnr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short state;
 int blocked;
 int traceflag;
 wait_queue_head_t state_wait_queue;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct proc_dir_entry *procent;
 char procfn[128];
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
