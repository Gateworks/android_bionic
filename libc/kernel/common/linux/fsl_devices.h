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
#ifndef _FSL_DEVICE_H_
#define _FSL_DEVICE_H_
#define FSL_UTMI_PHY_DLY 10
#define FSL_USB_PHY_CLK_TIMEOUT 10000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FSL_USB_VER_OLD 0
#define FSL_USB_VER_1_6 1
#define FSL_USB_VER_2_2 2
#define FSL_USB_VER_2_4 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/types.h>
enum fsl_usb2_operating_modes {
 FSL_USB2_MPH_HOST,
 FSL_USB2_DR_HOST,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FSL_USB2_DR_DEVICE,
 FSL_USB2_DR_OTG,
};
enum fsl_usb2_phy_modes {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FSL_USB2_PHY_NONE,
 FSL_USB2_PHY_ULPI,
 FSL_USB2_PHY_UTMI,
 FSL_USB2_PHY_UTMI_WIDE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 FSL_USB2_PHY_SERIAL,
};
struct clk;
struct platform_device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct fsl_usb2_platform_data {
 int controller_ver;
 enum fsl_usb2_operating_modes operating_mode;
 enum fsl_usb2_phy_modes phy_mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int port_enables;
 unsigned int workaround;
 int (*init)(struct platform_device *);
 void (*exit)(struct platform_device *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void __iomem *regs;
 struct clk *clk;
 unsigned power_budget;
 unsigned big_endian_mmio:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned big_endian_desc:1;
 unsigned es:1;
 unsigned le_setup_buf:1;
 unsigned have_sysif_regs:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned invert_drvvbus:1;
 unsigned invert_pwr_fault:1;
 unsigned suspended:1;
 unsigned already_suspended:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 pm_command;
 u32 pm_status;
 u32 pm_intr_enable;
 u32 pm_frame_index;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 pm_segment;
 u32 pm_frame_list;
 u32 pm_async_next;
 u32 pm_configured_flag;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 pm_portsc;
 u32 pm_usbgenctrl;
};
#define FSL_USB2_PORT0_ENABLED 0x00000001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FSL_USB2_PORT1_ENABLED 0x00000002
#define FLS_USB2_WORKAROUND_ENGCM09152 (1 << 0)
struct spi_device;
struct fsl_spi_platform_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 initial_spmode;
 s16 bus_num;
 unsigned int flags;
#define SPI_QE_CPU_MODE (1 << 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SPI_CPM_MODE (1 << 1)
#define SPI_CPM1 (1 << 2)
#define SPI_CPM2 (1 << 3)
#define SPI_QE (1 << 4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 max_chipselect;
 void (*cs_control)(struct spi_device *spi, bool on);
 u32 sysclk;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mpc8xx_pcmcia_ops {
 void(*hw_ctrl)(int slot, int enable);
 int(*voltage_set)(int slot, int vcc, int vpp);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
