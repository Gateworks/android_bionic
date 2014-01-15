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
#ifndef LINUX_MMC_HOST_H
#define LINUX_MMC_HOST_H
#include <linux/leds.h>
#include <linux/mutex.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/sched.h>
#include <linux/device.h>
#include <linux/fault-inject.h>
#include <linux/wakelock.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mmc/core.h>
#include <linux/mmc/pm.h>
struct mmc_ios {
 unsigned int clock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned short vdd;
 unsigned char bus_mode;
#define MMC_BUSMODE_OPENDRAIN 1
#define MMC_BUSMODE_PUSHPULL 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char chip_select;
#define MMC_CS_DONTCARE 0
#define MMC_CS_HIGH 1
#define MMC_CS_LOW 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char power_mode;
#define MMC_POWER_OFF 0
#define MMC_POWER_UP 1
#define MMC_POWER_ON 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char bus_width;
#define MMC_BUS_WIDTH_1 0
#define MMC_BUS_WIDTH_4 2
#define MMC_BUS_WIDTH_8 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char timing;
#define MMC_TIMING_LEGACY 0
#define MMC_TIMING_MMC_HS 1
#define MMC_TIMING_SD_HS 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_TIMING_UHS_SDR12 3
#define MMC_TIMING_UHS_SDR25 4
#define MMC_TIMING_UHS_SDR50 5
#define MMC_TIMING_UHS_SDR104 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_TIMING_UHS_DDR50 7
#define MMC_TIMING_MMC_HS200 8
#define MMC_SDR_MODE 0
#define MMC_1_2V_DDR_MODE 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_1_8V_DDR_MODE 2
#define MMC_1_2V_SDR_MODE 3
#define MMC_1_8V_SDR_MODE 4
 unsigned char signal_voltage;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_SIGNAL_VOLTAGE_330 0
#define MMC_SIGNAL_VOLTAGE_180 1
#define MMC_SIGNAL_VOLTAGE_120 2
 unsigned char drv_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_SET_DRIVER_TYPE_B 0
#define MMC_SET_DRIVER_TYPE_A 1
#define MMC_SET_DRIVER_TYPE_C 2
#define MMC_SET_DRIVER_TYPE_D 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct mmc_host_ops {
 int (*enable)(struct mmc_host *host);
 int (*disable)(struct mmc_host *host);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*post_req)(struct mmc_host *host, struct mmc_request *req,
 int err);
 void (*pre_req)(struct mmc_host *host, struct mmc_request *req,
 bool is_first_req);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*request)(struct mmc_host *host, struct mmc_request *req);
 void (*set_ios)(struct mmc_host *host, struct mmc_ios *ios);
 int (*get_ro)(struct mmc_host *host);
 int (*get_cd)(struct mmc_host *host);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*enable_sdio_irq)(struct mmc_host *host, int enable);
 void (*init_card)(struct mmc_host *host, struct mmc_card *card);
 int (*start_signal_voltage_switch)(struct mmc_host *host, struct mmc_ios *ios);
 int (*card_busy)(struct mmc_host *host);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*execute_tuning)(struct mmc_host *host, u32 opcode);
 int (*select_drive_strength)(unsigned int max_dtr, int host_drv, int card_drv);
 void (*hw_reset)(struct mmc_host *host);
 void (*card_event)(struct mmc_host *host);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct mmc_card;
struct device;
struct mmc_async_req {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mmc_request *mrq;
 int (*err_check) (struct mmc_card *, struct mmc_async_req *);
};
struct mmc_slot {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int cd_irq;
 struct mutex lock;
 void *handler_priv;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mmc_context_info {
 bool is_done_rcv;
 bool is_new_req;
 bool is_waiting_last_req;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 wait_queue_head_t wait;
 spinlock_t lock;
};
struct regulator;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mmc_supply {
 struct regulator *vmmc;
 struct regulator *vqmmc;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mmc_host {
 struct device *parent;
 struct device class_dev;
 int index;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct mmc_host_ops *ops;
 unsigned int f_min;
 unsigned int f_max;
 unsigned int f_init;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 ocr_avail;
 u32 ocr_avail_sdio;
 u32 ocr_avail_sd;
 u32 ocr_avail_mmc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct notifier_block pm_notify;
 u32 max_current_330;
 u32 max_current_300;
 u32 max_current_180;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_VDD_165_195 0x00000080
#define MMC_VDD_20_21 0x00000100
#define MMC_VDD_21_22 0x00000200
#define MMC_VDD_22_23 0x00000400
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_VDD_23_24 0x00000800
#define MMC_VDD_24_25 0x00001000
#define MMC_VDD_25_26 0x00002000
#define MMC_VDD_26_27 0x00004000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_VDD_27_28 0x00008000
#define MMC_VDD_28_29 0x00010000
#define MMC_VDD_29_30 0x00020000
#define MMC_VDD_30_31 0x00040000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_VDD_31_32 0x00080000
#define MMC_VDD_32_33 0x00100000
#define MMC_VDD_33_34 0x00200000
#define MMC_VDD_34_35 0x00400000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_VDD_35_36 0x00800000
 u32 caps;
#define MMC_CAP_4_BIT_DATA (1 << 0)
#define MMC_CAP_MMC_HIGHSPEED (1 << 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_CAP_SD_HIGHSPEED (1 << 2)
#define MMC_CAP_SDIO_IRQ (1 << 3)
#define MMC_CAP_SPI (1 << 4)
#define MMC_CAP_NEEDS_POLL (1 << 5)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_CAP_8_BIT_DATA (1 << 6)
#define MMC_CAP_NONREMOVABLE (1 << 8)
#define MMC_CAP_WAIT_WHILE_BUSY (1 << 9)
#define MMC_CAP_ERASE (1 << 10)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_CAP_1_8V_DDR (1 << 11)
#define MMC_CAP_1_2V_DDR (1 << 12)
#define MMC_CAP_POWER_OFF_CARD (1 << 13)
#define MMC_CAP_BUS_WIDTH_TEST (1 << 14)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_CAP_UHS_SDR12 (1 << 15)
#define MMC_CAP_UHS_SDR25 (1 << 16)
#define MMC_CAP_UHS_SDR50 (1 << 17)
#define MMC_CAP_UHS_SDR104 (1 << 18)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_CAP_UHS_DDR50 (1 << 19)
#define MMC_CAP_DRIVER_TYPE_A (1 << 23)
#define MMC_CAP_DRIVER_TYPE_C (1 << 24)
#define MMC_CAP_DRIVER_TYPE_D (1 << 25)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_CAP_CMD23 (1 << 30)
#define MMC_CAP_HW_RESET (1 << 31)
 u32 caps2;
#define MMC_CAP2_BOOTPART_NOACC (1 << 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_CAP2_CACHE_CTRL (1 << 1)
#define MMC_CAP2_POWEROFF_NOTIFY (1 << 2)
#define MMC_CAP2_NO_MULTI_READ (1 << 3)
#define MMC_CAP2_NO_SLEEP_CMD (1 << 4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_CAP2_HS200_1_8V_SDR (1 << 5)
#define MMC_CAP2_HS200_1_2V_SDR (1 << 6)
#define MMC_CAP2_HS200 (MMC_CAP2_HS200_1_8V_SDR |   MMC_CAP2_HS200_1_2V_SDR)
#define MMC_CAP2_BROKEN_VOLTAGE (1 << 7)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_CAP2_DETECT_ON_ERR (1 << 8)
#define MMC_CAP2_HC_ERASE_SZ (1 << 9)
#define MMC_CAP2_CD_ACTIVE_HIGH (1 << 10)
#define MMC_CAP2_RO_ACTIVE_HIGH (1 << 11)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_CAP2_PACKED_RD (1 << 12)
#define MMC_CAP2_PACKED_WR (1 << 13)
#define MMC_CAP2_PACKED_CMD (MMC_CAP2_PACKED_RD |   MMC_CAP2_PACKED_WR)
#define MMC_CAP2_NO_PRESCAN_POWERUP (1 << 14)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 mmc_pm_flag_t pm_caps;
 unsigned int max_seg_size;
 unsigned short max_segs;
 unsigned short unused;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int max_req_size;
 unsigned int max_blk_size;
 unsigned int max_blk_count;
 unsigned int max_discard_to;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 spinlock_t lock;
 struct mmc_ios ios;
 u32 ocr;
 unsigned int use_spi_crc:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int claimed:1;
 unsigned int bus_dead:1;
 int rescan_disable;
 int rescan_entered;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mmc_card *card;
 wait_queue_head_t wq;
 struct task_struct *claimer;
 int claim_cnt;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct delayed_work detect;
 struct wake_lock detect_wake_lock;
 int detect_change;
 struct mmc_slot slot;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct mmc_bus_ops *bus_ops;
 unsigned int bus_refs;
 unsigned int bus_resume_flags;
#define MMC_BUSRESUME_MANUAL_RESUME (1 << 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MMC_BUSRESUME_NEEDS_RESUME (1 << 1)
 unsigned int sdio_irqs;
 struct task_struct *sdio_irq_thread;
 bool sdio_irq_pending;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 atomic_t sdio_irq_thread_abort;
 mmc_pm_flag_t pm_flags;
 struct led_trigger *led;
 struct mmc_supply supply;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct dentry *debugfs_root;
 struct mmc_async_req *areq;
 struct mmc_context_info context_info;
 unsigned int actual_clock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int slotno;
 unsigned long private[0] ____cacheline_aligned;
};
struct mmc_host *mmc_alloc_host(int extra, struct device *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define mmc_host_is_spi(host) ((host)->caps & MMC_CAP_SPI)
#define mmc_dev(x) ((x)->parent)
#define mmc_classdev(x) (&(x)->class_dev)
#define mmc_hostname(x) (dev_name(&(x)->class_dev))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define mmc_bus_needs_resume(host) ((host)->bus_resume_flags & MMC_BUSRESUME_NEEDS_RESUME)
#define mmc_bus_manual_resume(host) ((host)->bus_resume_flags & MMC_BUSRESUME_MANUAL_RESUME)
#endif
