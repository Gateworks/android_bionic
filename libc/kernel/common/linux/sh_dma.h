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
#ifndef SH_DMA_H
#define SH_DMA_H
#include <linux/dmaengine.h>
#include <linux/list.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/shdma-base.h>
#include <linux/types.h>
struct device;
struct sh_dmae_slave {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct shdma_slave shdma_slave;
};
struct sh_dmae_slave_config {
 int slave_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 dma_addr_t addr;
 u32 chcr;
 char mid_rid;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct sh_dmae_channel {
 unsigned int offset;
 unsigned int dmars;
 unsigned int dmars_bit;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int chclr_offset;
};
struct sh_dmae_pdata {
 const struct sh_dmae_slave_config *slave;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int slave_num;
 const struct sh_dmae_channel *channel;
 int channel_num;
 unsigned int ts_low_shift;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int ts_low_mask;
 unsigned int ts_high_shift;
 unsigned int ts_high_mask;
 const unsigned int *ts_shift;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int ts_shift_num;
 u16 dmaor_init;
 unsigned int chcr_offset;
 u32 chcr_ie_bit;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int dmaor_is_32bit:1;
 unsigned int needs_tend_set:1;
 unsigned int no_dmars:1;
 unsigned int chclr_present:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int slave_only:1;
};
#define SAR 0x00
#define DAR 0x04
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TCR 0x08
#define CHCR 0x0C
#define DMAOR 0x40
#define TEND 0x18
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DMAOR_AE 0x00000004
#define DMAOR_NMIF 0x00000002
#define DMAOR_DME 0x00000001
#define REQ_L 0x00000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define REQ_E 0x00080000
#define RACK_H 0x00000000
#define RACK_L 0x00040000
#define ACK_R 0x00000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ACK_W 0x00020000
#define ACK_H 0x00000000
#define ACK_L 0x00010000
#define DM_INC 0x00004000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DM_DEC 0x00008000
#define DM_FIX 0x0000c000
#define SM_INC 0x00001000
#define SM_DEC 0x00002000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SM_FIX 0x00003000
#define RS_IN 0x00000200
#define RS_OUT 0x00000300
#define TS_BLK 0x00000040
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TM_BUR 0x00000020
#define CHCR_DE 0x00000001
#define CHCR_TE 0x00000002
#define CHCR_IE 0x00000004
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
