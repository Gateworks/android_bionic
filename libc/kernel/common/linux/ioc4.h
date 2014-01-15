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
#ifndef _LINUX_IOC4_H
#define _LINUX_IOC4_H
#include <linux/interrupt.h>
#define IOC4_EXTINT_COUNT_DIVISOR 520
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ioc4_misc_regs {
 union ioc4_pci_err_addr_l {
 uint32_t raw;
 struct {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t valid:1;
 uint32_t master_id:4;
 uint32_t mul_err:1;
 uint32_t addr:26;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } fields;
 } pci_err_addr_l;
 uint32_t pci_err_addr_h;
 union ioc4_sio_int {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t raw;
 struct {
 uint8_t tx_mt:1;
 uint8_t rx_full:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t rx_high:1;
 uint8_t rx_timer:1;
 uint8_t delta_dcd:1;
 uint8_t delta_cts:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t intr_pass:1;
 uint8_t tx_explicit:1;
 } fields[4];
 } sio_ir;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union ioc4_other_int {
 uint32_t raw;
 struct {
 uint32_t ata_int:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t ata_memerr:1;
 uint32_t memerr:4;
 uint32_t kbd_int:1;
 uint32_t reserved:16;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t rt_int:1;
 uint32_t gen_int:8;
 } fields;
 } other_ir;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union ioc4_sio_int sio_ies;
 union ioc4_other_int other_ies;
 union ioc4_sio_int sio_iec;
 union ioc4_other_int other_iec;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union ioc4_sio_cr {
 uint32_t raw;
 struct {
 uint32_t cmd_pulse:4;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t arb_diag:3;
 uint32_t sio_diag_idle:1;
 uint32_t ata_diag_idle:1;
 uint32_t ata_diag_active:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t reserved:22;
 } fields;
 } sio_cr;
 uint32_t unused1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union ioc4_int_out {
 uint32_t raw;
 struct {
 uint32_t count:16;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t mode:3;
 uint32_t reserved:11;
 uint32_t diag:1;
 uint32_t int_out:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } fields;
 } int_out;
 uint32_t unused2;
 union ioc4_gpcr {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t raw;
 struct {
 uint32_t dir:8;
 uint32_t edge:8;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t reserved1:4;
 uint32_t int_out_en:1;
 uint32_t reserved2:11;
 } fields;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } gpcr_s;
 union ioc4_gpcr gpcr_c;
 union ioc4_gpdr {
 uint32_t raw;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 uint32_t gen_pin:8;
 uint32_t reserved:24;
 } fields;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } gpdr;
 uint32_t unused3;
 union ioc4_gppr {
 uint32_t raw;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 uint32_t gen_pin:1;
 uint32_t reserved:31;
 } fields;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } gppr[8];
};
#define IOC4_GPCR_DIR_0 0x01
#define IOC4_GPCR_DIR_1 0x02
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IOC4_GPCR_DIR_2 0x04
#define IOC4_GPCR_DIR_3 0x08
#define IOC4_GPCR_DIR_4 0x10
#define IOC4_GPCR_DIR_5 0x20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IOC4_GPCR_DIR_6 0x40
#define IOC4_GPCR_DIR_7 0x80
#define IOC4_GPCR_EDGE_0 0x01
#define IOC4_GPCR_EDGE_1 0x02
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IOC4_GPCR_EDGE_2 0x04
#define IOC4_GPCR_EDGE_3 0x08
#define IOC4_GPCR_EDGE_4 0x10
#define IOC4_GPCR_EDGE_5 0x20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IOC4_GPCR_EDGE_6 0x40
#define IOC4_GPCR_EDGE_7 0x80
#define IOC4_VARIANT_IO9 0x0900
#define IOC4_VARIANT_PCI_RT 0x0901
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IOC4_VARIANT_IO10 0x1000
struct ioc4_driver_data {
 unsigned long idd_bar0;
 struct pci_dev *idd_pdev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct pci_device_id *idd_pci_id;
 struct ioc4_misc_regs __iomem *idd_misc_regs;
 unsigned long count_period;
 void *idd_serial_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int idd_variant;
};
struct ioc4_submodule {
 char *is_name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct module *is_owner;
 int (*is_probe) (struct ioc4_driver_data *);
 int (*is_remove) (struct ioc4_driver_data *);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IOC4_NUM_CARDS 8
#endif
