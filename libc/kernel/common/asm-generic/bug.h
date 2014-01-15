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
#ifndef _ASM_GENERIC_BUG_H
#define _ASM_GENERIC_BUG_H
#include <linux/compiler.h>
#ifndef __ASSEMBLY__
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/kernel.h>
#ifndef HAVE_ARCH_BUG
#define BUG() do {} while(0)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef HAVE_ARCH_BUG_ON
#define BUG_ON(condition) do { if (condition) ; } while(0)
#endif
#ifndef HAVE_ARCH_WARN_ON
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WARN_ON(condition) ({   int __ret_warn_on = !!(condition);   unlikely(__ret_warn_on);  })
#endif
#define WARN_TAINT(condition, taint, format...) WARN_ON(condition)
#define WARN_ON_ONCE(condition) ({   static bool __section(.data.unlikely) __warned;   int __ret_warn_once = !!(condition);     if (unlikely(__ret_warn_once))   if (WARN_ON(!__warned))   __warned = true;   unlikely(__ret_warn_once);  })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define WARN_ONCE(condition, format...) ({   static bool __section(.data.unlikely) __warned;   int __ret_warn_once = !!(condition);     if (unlikely(__ret_warn_once))   if (WARN(!__warned, format))   __warned = true;   unlikely(__ret_warn_once);  })
#define WARN_TAINT_ONCE(condition, taint, format...) ({   static bool __section(.data.unlikely) __warned;   int __ret_warn_once = !!(condition);     if (unlikely(__ret_warn_once))   if (WARN_TAINT(!__warned, taint, format))   __warned = true;   unlikely(__ret_warn_once);  })
#define WARN_ON_SMP(x) ({0;})
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
