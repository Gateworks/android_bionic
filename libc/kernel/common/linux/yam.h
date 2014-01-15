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
#define SIOCYAMRESERVED (0)
#define SIOCYAMSCFG (1)
#define SIOCYAMGCFG (2)
#define SIOCYAMSMCS (3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define YAM_IOBASE (1 << 0)
#define YAM_IRQ (1 << 1)
#define YAM_BITRATE (1 << 2)
#define YAM_MODE (1 << 3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define YAM_HOLDDLY (1 << 4)
#define YAM_TXDELAY (1 << 5)
#define YAM_TXTAIL (1 << 6)
#define YAM_PERSIST (1 << 7)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define YAM_SLOTTIME (1 << 8)
#define YAM_BAUDRATE (1 << 9)
#define YAM_MAXBITRATE 57600
#define YAM_MAXBAUDRATE 115200
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define YAM_MAXMODE 2
#define YAM_MAXHOLDDLY 99
#define YAM_MAXTXDELAY 999
#define YAM_MAXTXTAIL 999
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define YAM_MAXPERSIST 255
#define YAM_MAXSLOTTIME 999
#define YAM_FPGA_SIZE 5302
struct yamcfg {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int mask;
 unsigned int iobase;
 unsigned int irq;
 unsigned int bitrate;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int baudrate;
 unsigned int txdelay;
 unsigned int txtail;
 unsigned int persist;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int slottime;
 unsigned int mode;
 unsigned int holddly;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct yamdrv_ioctl_cfg {
 int cmd;
 struct yamcfg cfg;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct yamdrv_ioctl_mcs {
 int cmd;
 int bitrate;
 unsigned char bits[YAM_FPGA_SIZE];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
