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
#ifndef LINUX_MMC_SDIO_FUNC_H
#define LINUX_MMC_SDIO_FUNC_H
#include <linux/device.h>
#include <linux/mod_devicetable.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mmc/pm.h>
struct mmc_card;
struct sdio_func;
typedef void (sdio_irq_handler_t)(struct sdio_func *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sdio_embedded_func {
 uint8_t f_class;
 uint32_t f_maxblksize;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sdio_func_tuple {
 struct sdio_func_tuple *next;
 unsigned char code;
 unsigned char size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char data[0];
};
struct sdio_func {
 struct mmc_card *card;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device dev;
 sdio_irq_handler_t *irq_handler;
 unsigned int num;
 unsigned char class;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short vendor;
 unsigned short device;
 unsigned max_blksize;
 unsigned cur_blksize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned enable_timeout;
 unsigned int state;
#define SDIO_STATE_PRESENT (1<<0)
 u8 tmpbuf[4];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned num_info;
 const char **info;
 struct sdio_func_tuple *tuples;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define sdio_func_present(f) ((f)->state & SDIO_STATE_PRESENT)
#define sdio_func_set_present(f) ((f)->state |= SDIO_STATE_PRESENT)
#define sdio_func_id(f) (dev_name(&(f)->dev))
#define sdio_get_drvdata(f) dev_get_drvdata(&(f)->dev)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define sdio_set_drvdata(f,d) dev_set_drvdata(&(f)->dev, d)
#define dev_to_sdio_func(d) container_of(d, struct sdio_func, dev)
struct sdio_driver {
 char *name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct sdio_device_id *id_table;
 int (*probe)(struct sdio_func *, const struct sdio_device_id *);
 void (*remove)(struct sdio_func *);
 struct device_driver drv;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define to_sdio_driver(d) container_of(d, struct sdio_driver, drv)
#define SDIO_DEVICE(vend,dev)   .class = SDIO_ANY_ID,   .vendor = (vend), .device = (dev)
#define SDIO_DEVICE_CLASS(dev_class)   .class = (dev_class),   .vendor = SDIO_ANY_ID, .device = SDIO_ANY_ID
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
