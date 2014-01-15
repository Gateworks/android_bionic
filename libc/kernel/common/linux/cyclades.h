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
#ifndef _LINUX_CYCLADES_H
#define _LINUX_CYCLADES_H
#include <uapi/linux/cyclades.h>
struct cyclades_card {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void __iomem *base_addr;
 union {
 void __iomem *p9050;
 struct RUNTIME_9060 __iomem *p9060;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } ctl_addr;
 struct BOARD_CTRL __iomem *board_ctrl;
 int irq;
 unsigned int num_chips;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int first_line;
 unsigned int nports;
 int bus_index;
 int intr_enabled;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 hw_ver;
 spinlock_t card_lock;
 struct cyclades_port *ports;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define cy_writeb(port,val) do { writeb((val), (port)); mb(); } while (0)
#define cy_writew(port,val) do { writew((val), (port)); mb(); } while (0)
#define cy_writel(port,val) do { writel((val), (port)); mb(); } while (0)
struct cyclades_icount {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 __u32 cts, dsr, rng, dcd, tx, rx;
 __u32 frame, parity, overrun, brk;
 __u32 buf_overrun;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct cyclades_port {
 int magic;
 struct tty_port port;
 struct cyclades_card *card;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 union {
 struct {
 void __iomem *base_addr;
 } cyy;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 struct CH_CTRL __iomem *ch_ctrl;
 struct BUF_CTRL __iomem *buf_ctrl;
 } cyz;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } u;
 int line;
 int flags;
 int type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int read_status_mask;
 int ignore_status_mask;
 int timeout;
 int xmit_fifo_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int cor1,cor2,cor3,cor4,cor5;
 int tbpr,tco,rbpr,rco;
 int baud;
 int rflow;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int rtsdtr_inv;
 int chip_rev;
 int custom_divisor;
 u8 x_char;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int breakon;
 int breakoff;
 int xmit_head;
 int xmit_tail;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int xmit_cnt;
 int default_threshold;
 int default_timeout;
 unsigned long rflush_count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct cyclades_monitor mon;
 struct cyclades_idle_stats idle_stats;
 struct cyclades_icount icount;
 struct completion shutdown_wait;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int throttle;
};
#define CLOSING_WAIT_DELAY 30*HZ
#define CY_CLOSING_WAIT_NONE ASYNC_CLOSING_WAIT_NONE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CY_CLOSING_WAIT_INF ASYNC_CLOSING_WAIT_INF
#define CyMAX_CHIPS_PER_CARD 8
#define CyMAX_CHAR_FIFO 12
#define CyPORTS_PER_CHIP 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CD1400_MAX_SPEED 115200
#define CyISA_Ywin 0x2000
#define CyPCI_Ywin 0x4000
#define CyPCI_Yctl 0x80
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyPCI_Zctl CTRL_WINDOW_SIZE
#define CyPCI_Zwin 0x80000
#define CyPCI_Ze_win (2 * CyPCI_Zwin)
#define PCI_DEVICE_ID_MASK 0x06
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CD1400_REV_G 0x46
#define CD1400_REV_J 0x48
#define CyRegSize 0x0400
#define Cy_HwReset 0x1400
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define Cy_ClrIntr 0x1800
#define Cy_EpldRev 0x1e00
#define CyGFRCR (0x40*2)
#define CyRevE (44)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyCAR (0x68*2)
#define CyCHAN_0 (0x00)
#define CyCHAN_1 (0x01)
#define CyCHAN_2 (0x02)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyCHAN_3 (0x03)
#define CyGCR (0x4B*2)
#define CyCH0_SERIAL (0x00)
#define CyCH0_PARALLEL (0x80)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CySVRR (0x67*2)
#define CySRModem (0x04)
#define CySRTransmit (0x02)
#define CySRReceive (0x01)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyRICR (0x44*2)
#define CyTICR (0x45*2)
#define CyMICR (0x46*2)
#define CyICR0 (0x00)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyICR1 (0x01)
#define CyICR2 (0x02)
#define CyICR3 (0x03)
#define CyRIR (0x6B*2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyTIR (0x6A*2)
#define CyMIR (0x69*2)
#define CyIRDirEq (0x80)
#define CyIRBusy (0x40)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyIRUnfair (0x20)
#define CyIRContext (0x1C)
#define CyIRChannel (0x03)
#define CyPPR (0x7E*2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyCLOCK_20_1MS (0x27)
#define CyCLOCK_25_1MS (0x31)
#define CyCLOCK_25_5MS (0xf4)
#define CyCLOCK_60_1MS (0x75)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyCLOCK_60_2MS (0xea)
#define CyRIVR (0x43*2)
#define CyTIVR (0x42*2)
#define CyMIVR (0x41*2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyIVRMask (0x07)
#define CyIVRRxEx (0x07)
#define CyIVRRxOK (0x03)
#define CyIVRTxOK (0x02)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyIVRMdmOK (0x01)
#define CyTDR (0x63*2)
#define CyRDSR (0x62*2)
#define CyTIMEOUT (0x80)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CySPECHAR (0x70)
#define CyBREAK (0x08)
#define CyPARITY (0x04)
#define CyFRAME (0x02)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyOVERRUN (0x01)
#define CyMISR (0x4C*2)
#define CyEOSRR (0x60*2)
#define CyLIVR (0x18*2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyMscsr (0x01)
#define CyTdsr (0x02)
#define CyRgdsr (0x03)
#define CyRedsr (0x07)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyCCR (0x05*2)
#define CyCHAN_RESET (0x80)
#define CyCHIP_RESET (0x81)
#define CyFlushTransFIFO (0x82)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyCOR_CHANGE (0x40)
#define CyCOR1ch (0x02)
#define CyCOR2ch (0x04)
#define CyCOR3ch (0x08)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CySEND_SPEC_1 (0x21)
#define CySEND_SPEC_2 (0x22)
#define CySEND_SPEC_3 (0x23)
#define CySEND_SPEC_4 (0x24)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyCHAN_CTL (0x10)
#define CyDIS_RCVR (0x01)
#define CyENB_RCVR (0x02)
#define CyDIS_XMTR (0x04)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyENB_XMTR (0x08)
#define CySRER (0x06*2)
#define CyMdmCh (0x80)
#define CyRxData (0x10)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyTxRdy (0x04)
#define CyTxMpty (0x02)
#define CyNNDT (0x01)
#define CyCOR1 (0x08*2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyPARITY_NONE (0x00)
#define CyPARITY_0 (0x20)
#define CyPARITY_1 (0xA0)
#define CyPARITY_E (0x40)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyPARITY_O (0xC0)
#define Cy_1_STOP (0x00)
#define Cy_1_5_STOP (0x04)
#define Cy_2_STOP (0x08)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define Cy_5_BITS (0x00)
#define Cy_6_BITS (0x01)
#define Cy_7_BITS (0x02)
#define Cy_8_BITS (0x03)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyCOR2 (0x09*2)
#define CyIXM (0x80)
#define CyTxIBE (0x40)
#define CyETC (0x20)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyAUTO_TXFL (0x60)
#define CyLLM (0x10)
#define CyRLM (0x08)
#define CyRtsAO (0x04)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyCtsAE (0x02)
#define CyDsrAE (0x01)
#define CyCOR3 (0x0A*2)
#define CySPL_CH_DRANGE (0x80)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CySPL_CH_DET1 (0x40)
#define CyFL_CTRL_TRNSP (0x20)
#define CySPL_CH_DET2 (0x10)
#define CyREC_FIFO (0x0F)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyCOR4 (0x1E*2)
#define CyCOR5 (0x1F*2)
#define CyCCSR (0x0B*2)
#define CyRxEN (0x80)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyRxFloff (0x40)
#define CyRxFlon (0x20)
#define CyTxEN (0x08)
#define CyTxFloff (0x04)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyTxFlon (0x02)
#define CyRDCR (0x0E*2)
#define CySCHR1 (0x1A*2)
#define CySCHR2 (0x1B*2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CySCHR3 (0x1C*2)
#define CySCHR4 (0x1D*2)
#define CySCRL (0x22*2)
#define CySCRH (0x23*2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyLNC (0x24*2)
#define CyMCOR1 (0x15*2)
#define CyMCOR2 (0x16*2)
#define CyRTPR (0x21*2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyMSVR1 (0x6C*2)
#define CyMSVR2 (0x6D*2)
#define CyANY_DELTA (0xF0)
#define CyDSR (0x80)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyCTS (0x40)
#define CyRI (0x20)
#define CyDCD (0x10)
#define CyDTR (0x02)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyRTS (0x01)
#define CyPVSR (0x6F*2)
#define CyRBPR (0x78*2)
#define CyRCOR (0x7C*2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CyTBPR (0x72*2)
#define CyTCOR (0x76*2)
#define CyPLX_VER (0x3400)
#define PLX_9050 0x0b
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PLX_9060 0x0c
#define PLX_9080 0x0d
#endif
