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
#ifndef LINUX_SSB_H_
#define LINUX_SSB_H_
#include <linux/device.h>
#include <linux/list.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/types.h>
#include <linux/spinlock.h>
#include <linux/pci.h>
#include <linux/gpio.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mod_devicetable.h>
#include <linux/dma-mapping.h>
#include <linux/platform_device.h>
#include <linux/ssb/ssb_regs.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct pcmcia_device;
struct ssb_bus;
struct ssb_driver;
struct ssb_sprom_core_pwr_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 itssi_2g, itssi_5g;
 u8 maxpwr_2g, maxpwr_5gl, maxpwr_5g, maxpwr_5gh;
 u16 pa_2g[4], pa_5gl[4], pa_5g[4], pa_5gh[4];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ssb_sprom {
 u8 revision;
 u8 il0mac[6] __aligned(sizeof(u16));
 u8 et0mac[6] __aligned(sizeof(u16));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 et1mac[6] __aligned(sizeof(u16));
 u8 et0phyaddr;
 u8 et1phyaddr;
 u8 et0mdcport;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 et1mdcport;
 u16 board_rev;
 u16 board_num;
 u16 board_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 country_code;
 char alpha2[2];
 u8 leddc_on_time;
 u8 leddc_off_time;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 ant_available_a;
 u8 ant_available_bg;
 u16 pa0b0;
 u16 pa0b1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 pa0b2;
 u16 pa1b0;
 u16 pa1b1;
 u16 pa1b2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 pa1lob0;
 u16 pa1lob1;
 u16 pa1lob2;
 u16 pa1hib0;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 pa1hib1;
 u16 pa1hib2;
 u8 gpio0;
 u8 gpio1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 gpio2;
 u8 gpio3;
 u8 maxpwr_bg;
 u8 maxpwr_al;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 maxpwr_a;
 u8 maxpwr_ah;
 u8 itssi_a;
 u8 itssi_bg;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 tri2g;
 u8 tri5gl;
 u8 tri5g;
 u8 tri5gh;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 txpid2g[4];
 u8 txpid5gl[4];
 u8 txpid5g[4];
 u8 txpid5gh[4];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 s8 rxpo2g;
 s8 rxpo5g;
 u8 rssisav2g;
 u8 rssismc2g;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 rssismf2g;
 u8 bxa2g;
 u8 rssisav5g;
 u8 rssismc5g;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 rssismf5g;
 u8 bxa5g;
 u16 cck2gpo;
 u32 ofdm2gpo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 ofdm5glpo;
 u32 ofdm5gpo;
 u32 ofdm5ghpo;
 u16 boardflags_lo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 boardflags_hi;
 u16 boardflags2_lo;
 u16 boardflags2_hi;
 struct ssb_sprom_core_pwr_info core_pwr_info[4];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 s8 a0, a1, a2, a3;
 } antenna_gain;
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 u8 tssipos, extpa_gain, pdet_range, tr_iso, antswlut;
 } ghz2;
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 tssipos, extpa_gain, pdet_range, tr_iso, antswlut;
 } ghz5;
 } fem;
 u16 mcs2gpo[8];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 mcs5gpo[8];
 u16 mcs5glpo[8];
 u16 mcs5ghpo[8];
 u8 opo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 rxgainerr2ga[3];
 u8 rxgainerr5gla[3];
 u8 rxgainerr5gma[3];
 u8 rxgainerr5gha[3];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 rxgainerr5gua[3];
 u8 noiselvl2ga[3];
 u8 noiselvl5gla[3];
 u8 noiselvl5gma[3];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 noiselvl5gha[3];
 u8 noiselvl5gua[3];
 u8 regrev;
 u8 txchain;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 rxchain;
 u8 antswitch;
 u16 cddpo;
 u16 stbcpo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 bw40po;
 u16 bwduppo;
 u8 tempthresh;
 u8 tempoffset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 rawtempsense;
 u8 measpower;
 u8 tempsense_slope;
 u8 tempcorrx;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 tempsense_option;
 u8 freqoffset_corr;
 u8 iqcal_swp_dis;
 u8 hw_iqcal_en;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 elna2g;
 u8 elna5g;
 u8 phycal_tempdelta;
 u8 temps_period;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 temps_hysteresis;
 u8 measpower1;
 u8 measpower2;
 u8 pcieingress_war;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 cckbw202gpo;
 u16 cckbw20ul2gpo;
 u32 legofdmbw202gpo;
 u32 legofdmbw20ul2gpo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 legofdmbw205glpo;
 u32 legofdmbw20ul5glpo;
 u32 legofdmbw205gmpo;
 u32 legofdmbw20ul5gmpo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 legofdmbw205ghpo;
 u32 legofdmbw20ul5ghpo;
 u32 mcsbw202gpo;
 u32 mcsbw20ul2gpo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 mcsbw402gpo;
 u32 mcsbw205glpo;
 u32 mcsbw20ul5glpo;
 u32 mcsbw405glpo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 mcsbw205gmpo;
 u32 mcsbw20ul5gmpo;
 u32 mcsbw405gmpo;
 u32 mcsbw205ghpo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 mcsbw20ul5ghpo;
 u32 mcsbw405ghpo;
 u16 mcs32po;
 u16 legofdm40duppo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 sar2g;
 u8 sar5g;
};
struct ssb_boardinfo {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 vendor;
 u16 type;
};
struct ssb_device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ssb_bus_ops {
 u8 (*read8)(struct ssb_device *dev, u16 offset);
 u16 (*read16)(struct ssb_device *dev, u16 offset);
 u32 (*read32)(struct ssb_device *dev, u16 offset);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*write8)(struct ssb_device *dev, u16 offset, u8 value);
 void (*write16)(struct ssb_device *dev, u16 offset, u16 value);
 void (*write32)(struct ssb_device *dev, u16 offset, u32 value);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_DEV_CHIPCOMMON 0x800
#define SSB_DEV_ILINE20 0x801
#define SSB_DEV_SDRAM 0x803
#define SSB_DEV_PCI 0x804
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_DEV_MIPS 0x805
#define SSB_DEV_ETHERNET 0x806
#define SSB_DEV_V90 0x807
#define SSB_DEV_USB11_HOSTDEV 0x808
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_DEV_ADSL 0x809
#define SSB_DEV_ILINE100 0x80A
#define SSB_DEV_IPSEC 0x80B
#define SSB_DEV_PCMCIA 0x80D
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_DEV_INTERNAL_MEM 0x80E
#define SSB_DEV_MEMC_SDRAM 0x80F
#define SSB_DEV_EXTIF 0x811
#define SSB_DEV_80211 0x812
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_DEV_MIPS_3302 0x816
#define SSB_DEV_USB11_HOST 0x817
#define SSB_DEV_USB11_DEV 0x818
#define SSB_DEV_USB20_HOST 0x819
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_DEV_USB20_DEV 0x81A
#define SSB_DEV_SDIO_HOST 0x81B
#define SSB_DEV_ROBOSWITCH 0x81C
#define SSB_DEV_PARA_ATA 0x81D
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_DEV_SATA_XORDMA 0x81E
#define SSB_DEV_ETHERNET_GBIT 0x81F
#define SSB_DEV_PCIE 0x820
#define SSB_DEV_MIMO_PHY 0x821
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_DEV_SRAM_CTRLR 0x822
#define SSB_DEV_MINI_MACPHY 0x823
#define SSB_DEV_ARM_1176 0x824
#define SSB_DEV_ARM_7TDMI 0x825
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_DEV_ARM_CM3 0x82A
#define SSB_VENDOR_BROADCOM 0x4243
struct __ssb_dev_wrapper {
 struct device dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ssb_device *sdev;
};
struct ssb_device {
 const struct ssb_bus_ops *ops;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device *dev, *dma_dev;
 struct ssb_bus *bus;
 struct ssb_device_id id;
 u8 core_index;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int irq;
 void *drvdata;
 void *devtypedata;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ssb_driver {
 const char *name;
 const struct ssb_device_id *id_table;
 int (*probe)(struct ssb_device *dev, const struct ssb_device_id *id);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*remove)(struct ssb_device *dev);
 int (*suspend)(struct ssb_device *dev, pm_message_t state);
 int (*resume)(struct ssb_device *dev);
 void (*shutdown)(struct ssb_device *dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device_driver drv;
};
#define drv_to_ssb_drv(_drv) container_of(_drv, struct ssb_driver, drv)
#define ssb_driver_register(drv)   __ssb_driver_register(drv, THIS_MODULE)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum ssb_bustype {
 SSB_BUSTYPE_SSB,
 SSB_BUSTYPE_PCI,
 SSB_BUSTYPE_PCMCIA,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SSB_BUSTYPE_SDIO,
};
#define SSB_BOARDVENDOR_BCM 0x14E4
#define SSB_BOARDVENDOR_DELL 0x1028
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_BOARDVENDOR_HP 0x0E11
#define SSB_BOARD_BCM94301CB 0x0406
#define SSB_BOARD_BCM94301MP 0x0407
#define SSB_BOARD_BU4309 0x040A
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_BOARD_BCM94309CB 0x040B
#define SSB_BOARD_BCM4309MP 0x040C
#define SSB_BOARD_BU4306 0x0416
#define SSB_BOARD_BCM94306MP 0x0418
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_BOARD_BCM4309G 0x0421
#define SSB_BOARD_BCM4306CB 0x0417
#define SSB_BOARD_BCM94306PC 0x0425
#define SSB_BOARD_BCM94306CBSG 0x042B
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_BOARD_PCSG94306 0x042D
#define SSB_BOARD_BU4704SD 0x042E
#define SSB_BOARD_BCM94704AGR 0x042F
#define SSB_BOARD_BCM94308MP 0x0430
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_BOARD_BU4318 0x0447
#define SSB_BOARD_CB4318 0x0448
#define SSB_BOARD_MPG4318 0x0449
#define SSB_BOARD_MP4318 0x044A
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_BOARD_SD4318 0x044B
#define SSB_BOARD_BCM94306P 0x044C
#define SSB_BOARD_BCM94303MP 0x044E
#define SSB_BOARD_BCM94306MPM 0x0450
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_BOARD_BCM94306MPL 0x0453
#define SSB_BOARD_PC4303 0x0454
#define SSB_BOARD_BCM94306MPLNA 0x0457
#define SSB_BOARD_BCM94306MPH 0x045B
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_BOARD_BCM94306PCIV 0x045C
#define SSB_BOARD_BCM94318MPGH 0x0463
#define SSB_BOARD_BU4311 0x0464
#define SSB_BOARD_BCM94311MC 0x0465
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_BOARD_BCM94311MCAG 0x0466
#define SSB_BOARD_BU4321 0x046B
#define SSB_BOARD_BU4321E 0x047C
#define SSB_BOARD_MP4321 0x046C
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_BOARD_CB2_4321 0x046D
#define SSB_BOARD_CB2_4321_AG 0x0066
#define SSB_BOARD_MC4321 0x046E
#define SSB_BOARD_BCM94325DEVBU 0x0490
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_BOARD_BCM94325BGABU 0x0491
#define SSB_BOARD_BCM94325SDGWB 0x0492
#define SSB_BOARD_BCM94325SDGMDL 0x04AA
#define SSB_BOARD_BCM94325SDGMDL2 0x04C6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_BOARD_BCM94325SDGMDL3 0x04C9
#define SSB_BOARD_BCM94325SDABGWBA 0x04E1
#define SSB_BOARD_BCM94322MC 0x04A4
#define SSB_BOARD_BCM94322USB 0x04A8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_BOARD_BCM94322HM 0x04B0
#define SSB_BOARD_BCM94322USB2D 0x04Bf
#define SSB_BOARD_BU4312 0x048A
#define SSB_BOARD_BCM4312MCGSG 0x04B5
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SSB_CHIPPACK_BCM4712S 1
#define SSB_CHIPPACK_BCM4712M 2
#define SSB_CHIPPACK_BCM4712L 0
#include <linux/ssb/ssb_driver_chipcommon.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/ssb/ssb_driver_mips.h>
#include <linux/ssb/ssb_driver_extif.h>
#include <linux/ssb/ssb_driver_pci.h>
struct ssb_bus {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void __iomem *mmio;
 const struct ssb_bus_ops *ops;
 struct ssb_device *mapped_device;
 union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 mapped_pcmcia_seg;
 u32 sdio_sbaddr;
 };
 spinlock_t bar_lock;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum ssb_bustype bustype;
 union {
 struct pci_dev *host_pci;
 struct pcmcia_device *host_pcmcia;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct sdio_func *host_sdio;
 };
 unsigned int quirks;
 u16 chip_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 chip_rev;
 u16 sprom_offset;
 u16 sprom_size;
 u8 chip_package;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ssb_device devices[SSB_MAX_NR_CORES];
 u8 nr_devices;
 unsigned int busnumber;
 struct ssb_chipcommon chipco;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ssb_pcicore pcicore;
 struct ssb_mipscore mipscore;
 struct ssb_extif extif;
 struct ssb_boardinfo boardinfo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ssb_sprom sprom;
 bool has_cardbus_slot;
};
enum ssb_quirks {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SSB_QUIRK_SDIO_READ_AFTER_WRITE32 = (1 << 0),
};
struct ssb_init_invariants {
 struct ssb_boardinfo boardinfo;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ssb_sprom sprom;
 bool has_cardbus_slot;
};
typedef int (*ssb_invariants_func_t)(struct ssb_bus *bus,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct ssb_init_invariants *iv);
#define SSB_DMA_TRANSLATION_MASK 0xC0000000
#define SSB_DMA_TRANSLATION_SHIFT 30
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
