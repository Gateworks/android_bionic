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
#ifndef _PLATFORM_DEVICE_H_
#define _PLATFORM_DEVICE_H_
#include <linux/device.h>
#include <linux/mod_devicetable.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PLATFORM_DEVID_NONE (-1)
#define PLATFORM_DEVID_AUTO (-2)
struct mfd_cell;
struct platform_device {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *name;
 int id;
 bool id_auto;
 struct device dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 num_resources;
 struct resource *resource;
 const struct platform_device_id *id_entry;
 struct mfd_cell *mfd_cell;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pdev_archdata archdata;
};
#define platform_get_device_id(pdev) ((pdev)->id_entry)
#define to_platform_device(x) container_of((x), struct platform_device, dev)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct platform_device_info {
 struct device *parent;
 struct acpi_dev_node acpi_node;
 const char *name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int id;
 const struct resource *res;
 unsigned int num_res;
 const void *data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t size_data;
 u64 dma_mask;
};
struct platform_driver {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*probe)(struct platform_device *);
 int (*remove)(struct platform_device *);
 void (*shutdown)(struct platform_device *);
 int (*suspend)(struct platform_device *, pm_message_t state);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*resume)(struct platform_device *);
 struct device_driver driver;
 const struct platform_device_id *id_table;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define module_platform_driver(__platform_driver)   module_driver(__platform_driver, platform_driver_register,   platform_driver_unregister)
#define module_platform_driver_probe(__platform_driver, __platform_probe)  static int __init __platform_driver##_init(void)  {   return platform_driver_probe(&(__platform_driver),   __platform_probe);  }  module_init(__platform_driver##_init);  static void __exit __platform_driver##_exit(void)  {   platform_driver_unregister(&(__platform_driver));  }  module_exit(__platform_driver##_exit);
struct early_platform_driver {
 const char *class_str;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct platform_driver *pdrv;
 int requested_id;
 char *buffer;
 int bufsize;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define EARLY_PLATFORM_ID_UNSET -2
#define EARLY_PLATFORM_ID_ERROR -3
#define early_platform_init(class_string, platdrv)   early_platform_init_buffer(class_string, platdrv, NULL, 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef MODULE
#define early_platform_init_buffer(class_string, platdrv, buf, bufsiz)  static __initdata struct early_platform_driver early_driver = {   .class_str = class_string,   .buffer = buf,   .bufsize = bufsiz,   .pdrv = platdrv,   .requested_id = EARLY_PLATFORM_ID_UNSET,  };  static int __init early_platform_driver_setup_func(char *buffer)  {   return early_platform_driver_register(&early_driver, buffer);  }  early_param(class_string, early_platform_driver_setup_func)
#else
#define early_platform_init_buffer(class_string, platdrv, buf, bufsiz)  static inline char *early_platform_driver_setup_func(void)  {   return bufsiz ? buf : NULL;  }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define platform_pm_suspend NULL
#define platform_pm_resume NULL
#define platform_pm_freeze NULL
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define platform_pm_thaw NULL
#define platform_pm_poweroff NULL
#define platform_pm_restore NULL
#define USE_PLATFORM_PM_SLEEP_OPS
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
