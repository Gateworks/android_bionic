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
#ifndef _TIFM_H
#define _TIFM_H
#include <linux/spinlock.h>
#include <linux/interrupt.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/delay.h>
#include <linux/pci.h>
#include <linux/workqueue.h>
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FM_SET_INTERRUPT_ENABLE = 0x008,
 FM_CLEAR_INTERRUPT_ENABLE = 0x00c,
 FM_INTERRUPT_STATUS = 0x014
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
 SOCK_CONTROL = 0x004,
 SOCK_PRESENT_STATE = 0x008,
 SOCK_DMA_ADDRESS = 0x00c,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SOCK_DMA_CONTROL = 0x010,
 SOCK_DMA_FIFO_INT_ENABLE_SET = 0x014,
 SOCK_DMA_FIFO_INT_ENABLE_CLEAR = 0x018,
 SOCK_DMA_FIFO_STATUS = 0x020,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SOCK_FIFO_CONTROL = 0x024,
 SOCK_FIFO_PAGE_SIZE = 0x028,
 SOCK_MMCSD_COMMAND = 0x104,
 SOCK_MMCSD_ARG_LOW = 0x108,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SOCK_MMCSD_ARG_HIGH = 0x10c,
 SOCK_MMCSD_CONFIG = 0x110,
 SOCK_MMCSD_STATUS = 0x114,
 SOCK_MMCSD_INT_ENABLE = 0x118,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SOCK_MMCSD_COMMAND_TO = 0x11c,
 SOCK_MMCSD_DATA_TO = 0x120,
 SOCK_MMCSD_DATA = 0x124,
 SOCK_MMCSD_BLOCK_LEN = 0x128,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SOCK_MMCSD_NUM_BLOCKS = 0x12c,
 SOCK_MMCSD_BUFFER_CONFIG = 0x130,
 SOCK_MMCSD_SPI_CONFIG = 0x134,
 SOCK_MMCSD_SDIO_MODE_CONFIG = 0x138,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SOCK_MMCSD_RESPONSE = 0x144,
 SOCK_MMCSD_SDIO_SR = 0x164,
 SOCK_MMCSD_SYSTEM_CONTROL = 0x168,
 SOCK_MMCSD_SYSTEM_STATUS = 0x16c,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SOCK_MS_COMMAND = 0x184,
 SOCK_MS_DATA = 0x188,
 SOCK_MS_STATUS = 0x18c,
 SOCK_MS_SYSTEM = 0x190,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SOCK_FIFO_ACCESS = 0x200
};
#define TIFM_CTRL_LED 0x00000040
#define TIFM_CTRL_FAST_CLK 0x00000100
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TIFM_CTRL_POWER_MASK 0x00000007
#define TIFM_SOCK_STATE_OCCUPIED 0x00000008
#define TIFM_SOCK_STATE_POWERED 0x00000080
#define TIFM_FIFO_ENABLE 0x00000001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TIFM_FIFO_READY 0x00000001
#define TIFM_FIFO_MORE 0x00000008
#define TIFM_FIFO_INT_SETALL 0x0000ffff
#define TIFM_FIFO_INTMASK 0x00000005
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TIFM_DMA_RESET 0x00000002
#define TIFM_DMA_TX 0x00008000
#define TIFM_DMA_EN 0x00000001
#define TIFM_DMA_TSIZE 0x0000007f
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TIFM_TYPE_XD 1
#define TIFM_TYPE_MS 2
#define TIFM_TYPE_SD 3
struct tifm_device_id {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char type;
};
struct tifm_driver;
struct tifm_dev {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char __iomem *addr;
 spinlock_t lock;
 unsigned char type;
 unsigned int socket_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*card_event)(struct tifm_dev *sock);
 void (*data_event)(struct tifm_dev *sock);
 struct device dev;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tifm_driver {
 struct tifm_device_id *id_table;
 int (*probe)(struct tifm_dev *dev);
 void (*remove)(struct tifm_dev *dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*suspend)(struct tifm_dev *dev,
 pm_message_t state);
 int (*resume)(struct tifm_dev *dev);
 struct device_driver driver;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct tifm_adapter {
 char __iomem *addr;
 spinlock_t lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int irq_status;
 unsigned int socket_change_set;
 unsigned int id;
 unsigned int num_sockets;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct completion *finish_me;
 struct device dev;
 void (*eject)(struct tifm_adapter *fm,
 struct tifm_dev *sock);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*has_ms_pif)(struct tifm_adapter *fm,
 struct tifm_dev *sock);
 struct tifm_dev *sockets[0];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tifm_adapter *tifm_alloc_adapter(unsigned int num_sockets,
 struct device *dev);
struct tifm_dev *tifm_alloc_device(struct tifm_adapter *fm, unsigned int id,
 unsigned char type);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
