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
#ifndef _LINUX_ACPI_H
#define _LINUX_ACPI_H
#include <linux/errno.h>
#include <linux/ioport.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/device.h>
#define acpi_disabled 1
struct acpi_table_header;
struct acpi_device_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define ACPI_PTR(_ptr) (NULL)
#define acpi_os_set_prepare_sleep(func, pm1a_ctrl, pm1b_ctrl) do { } while (0)
#define acpi_handle_emerg(handle, fmt, ...)   acpi_handle_printk(KERN_EMERG, handle, fmt, ##__VA_ARGS__)
#define acpi_handle_alert(handle, fmt, ...)   acpi_handle_printk(KERN_ALERT, handle, fmt, ##__VA_ARGS__)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define acpi_handle_crit(handle, fmt, ...)   acpi_handle_printk(KERN_CRIT, handle, fmt, ##__VA_ARGS__)
#define acpi_handle_err(handle, fmt, ...)   acpi_handle_printk(KERN_ERR, handle, fmt, ##__VA_ARGS__)
#define acpi_handle_warn(handle, fmt, ...)   acpi_handle_printk(KERN_WARNING, handle, fmt, ##__VA_ARGS__)
#define acpi_handle_notice(handle, fmt, ...)   acpi_handle_printk(KERN_NOTICE, handle, fmt, ##__VA_ARGS__)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define acpi_handle_info(handle, fmt, ...)   acpi_handle_printk(KERN_INFO, handle, fmt, ##__VA_ARGS__)
#ifdef DEBUG
#define acpi_handle_debug(handle, fmt, ...)   acpi_handle_printk(KERN_DEBUG, handle, fmt, ##__VA_ARGS__)
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define acpi_handle_debug(handle, fmt, ...)  ({   if (0)   acpi_handle_printk(KERN_DEBUG, handle, fmt, ##__VA_ARGS__);   0;  })
#endif
#endif
