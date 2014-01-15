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
#ifndef _LINUX_VEXPRESS_H
#define _LINUX_VEXPRESS_H
#include <linux/device.h>
#define VEXPRESS_SITE_MB 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VEXPRESS_SITE_DB1 1
#define VEXPRESS_SITE_DB2 2
#define VEXPRESS_SITE_MASTER 0xf
#define VEXPRESS_CONFIG_STATUS_DONE 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VEXPRESS_CONFIG_STATUS_WAIT 1
#define VEXPRESS_GPIO_MMC_CARDIN 0
#define VEXPRESS_GPIO_MMC_WPROT 1
#define VEXPRESS_GPIO_FLASH_WPn 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VEXPRESS_GPIO_LED0 3
#define VEXPRESS_GPIO_LED1 4
#define VEXPRESS_GPIO_LED2 5
#define VEXPRESS_GPIO_LED3 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VEXPRESS_GPIO_LED4 7
#define VEXPRESS_GPIO_LED5 8
#define VEXPRESS_GPIO_LED6 9
#define VEXPRESS_GPIO_LED7 10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VEXPRESS_RES_FUNC(_site, _func)  {   .start = (_site),   .end = (_func),   .flags = IORESOURCE_BUS,  }
struct vexpress_config_bridge_info {
 const char *name;
 void *(*func_get)(struct device *dev, struct device_node *node);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*func_put)(void *func);
 int (*func_exec)(void *func, int offset, bool write, u32 *data);
};
struct vexpress_config_bridge;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct vexpress_config_bridge *vexpress_config_bridge_register(
 struct device_node *node,
 struct vexpress_config_bridge_info *info);
struct vexpress_config_func;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct vexpress_config_func *__vexpress_config_func_get(struct device *dev,
 struct device_node *node);
#define vexpress_config_func_get_by_dev(dev)   __vexpress_config_func_get(dev, NULL)
#define vexpress_config_func_get_by_node(node)   __vexpress_config_func_get(NULL, node)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define vexpress_get_site_by_node(node) __vexpress_get_site(NULL, node)
#define vexpress_get_site_by_dev(dev) __vexpress_get_site(dev, NULL)
struct clk *vexpress_osc_setup(struct device *dev);
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
