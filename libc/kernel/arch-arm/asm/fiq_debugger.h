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
#ifndef _ARCH_ARM_MACH_TEGRA_FIQ_DEBUGGER_H_
#define _ARCH_ARM_MACH_TEGRA_FIQ_DEBUGGER_H_
#include <linux/serial_core.h>
#define FIQ_DEBUGGER_NO_CHAR NO_POLL_CHAR
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define FIQ_DEBUGGER_BREAK 0x00ff0100
#define FIQ_DEBUGGER_FIQ_IRQ_NAME "fiq"
#define FIQ_DEBUGGER_SIGNAL_IRQ_NAME "signal"
#define FIQ_DEBUGGER_WAKEUP_IRQ_NAME "wakeup"
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct fiq_debugger_pdata {
 int (*uart_init)(struct platform_device *pdev);
 void (*uart_free)(struct platform_device *pdev);
 int (*uart_resume)(struct platform_device *pdev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*uart_getc)(struct platform_device *pdev);
 void (*uart_putc)(struct platform_device *pdev, unsigned int c);
 void (*uart_flush)(struct platform_device *pdev);
 void (*uart_enable)(struct platform_device *pdev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*uart_disable)(struct platform_device *pdev);
 int (*uart_dev_suspend)(struct platform_device *pdev);
 int (*uart_dev_resume)(struct platform_device *pdev);
 void (*fiq_enable)(struct platform_device *pdev, unsigned int fiq,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool enable);
 void (*fiq_ack)(struct platform_device *pdev, unsigned int fiq);
 void (*force_irq)(struct platform_device *pdev, unsigned int irq);
 void (*force_irq_ack)(struct platform_device *pdev, unsigned int irq);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#endif
