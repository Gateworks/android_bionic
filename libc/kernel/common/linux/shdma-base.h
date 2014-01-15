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
#ifndef SHDMA_BASE_H
#define SHDMA_BASE_H
#include <linux/dmaengine.h>
#include <linux/interrupt.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/list.h>
#include <linux/types.h>
enum shdma_pm_state {
 SHDMA_PM_ESTABLISHED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SHDMA_PM_BUSY,
 SHDMA_PM_PENDING,
};
struct device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct shdma_slave {
 int slave_id;
};
struct shdma_desc {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct dma_async_tx_descriptor async_tx;
 enum dma_transfer_direction direction;
 size_t partial;
 dma_cookie_t cookie;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int chunks;
 int mark;
};
struct shdma_chan {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 spinlock_t chan_lock;
 struct dma_chan dma_chan;
 struct device *dev;
 void *desc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int desc_num;
 size_t max_xfer_len;
 int id;
 int irq;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int slave_id;
 enum shdma_pm_state pm_state;
};
struct shdma_ops {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool (*desc_completed)(struct shdma_chan *, struct shdma_desc *);
 void (*halt_channel)(struct shdma_chan *);
 bool (*channel_busy)(struct shdma_chan *);
 dma_addr_t (*slave_addr)(struct shdma_chan *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*desc_setup)(struct shdma_chan *, struct shdma_desc *,
 dma_addr_t, dma_addr_t, size_t *);
 int (*set_slave)(struct shdma_chan *, int, bool);
 void (*setup_xfer)(struct shdma_chan *, int);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*start_xfer)(struct shdma_chan *, struct shdma_desc *);
 struct shdma_desc *(*embedded_desc)(void *, int);
 bool (*chan_irq)(struct shdma_chan *, int);
 size_t (*get_partial)(struct shdma_chan *, struct shdma_desc *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct shdma_dev {
 struct dma_device dma_dev;
 struct shdma_chan **schan;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct shdma_ops *ops;
 size_t desc_size;
};
#define shdma_for_each_chan(c, d, i) for (i = 0, c = (d)->schan[0];   i < (d)->dma_dev.chancnt; c = (d)->schan[++i])
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
