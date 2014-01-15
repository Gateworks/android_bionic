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
#ifndef _LINUX_CONSOLE_H_
#define _LINUX_CONSOLE_H_ 1
#include <linux/types.h>
struct vc_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct console_font_op;
struct console_font;
struct module;
struct tty_struct;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VT100ID "\033[?1;2c"
#define VT102ID "\033[?6c"
struct consw {
 struct module *owner;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *(*con_startup)(void);
 void (*con_init)(struct vc_data *, int);
 void (*con_deinit)(struct vc_data *);
 void (*con_clear)(struct vc_data *, int, int, int, int);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*con_putc)(struct vc_data *, int, int, int);
 void (*con_putcs)(struct vc_data *, const unsigned short *, int, int, int);
 void (*con_cursor)(struct vc_data *, int);
 int (*con_scroll)(struct vc_data *, int, int, int, int);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*con_bmove)(struct vc_data *, int, int, int, int, int, int);
 int (*con_switch)(struct vc_data *);
 int (*con_blank)(struct vc_data *, int, int);
 int (*con_font_set)(struct vc_data *, struct console_font *, unsigned);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*con_font_get)(struct vc_data *, struct console_font *);
 int (*con_font_default)(struct vc_data *, struct console_font *, char *);
 int (*con_font_copy)(struct vc_data *, int);
 int (*con_resize)(struct vc_data *, unsigned int, unsigned int,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int);
 int (*con_set_palette)(struct vc_data *, unsigned char *);
 int (*con_scrolldelta)(struct vc_data *, int);
 int (*con_set_origin)(struct vc_data *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*con_save_screen)(struct vc_data *);
 u8 (*con_build_attr)(struct vc_data *, u8, u8, u8, u8, u8, u8);
 void (*con_invert_region)(struct vc_data *, u16 *, int);
 u16 *(*con_screen_pos)(struct vc_data *, int);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long (*con_getxy)(struct vc_data *, unsigned long, int *, int *);
 int (*con_debug_enter)(struct vc_data *);
 int (*con_debug_leave)(struct vc_data *);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SM_UP (1)
#define SM_DOWN (2)
#define CM_DRAW (1)
#define CM_ERASE (2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CM_MOVE (3)
#define CON_PRINTBUFFER (1)
#define CON_CONSDEV (2)
#define CON_ENABLED (4)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CON_BOOT (8)
#define CON_ANYTIME (16)
#define CON_BRL (32)
struct console {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 char name[16];
 void (*write)(struct console *, const char *, unsigned);
 int (*read)(struct console *, char *, unsigned);
 struct tty_driver *(*device)(struct console *, int *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*unblank)(void);
 int (*setup)(struct console *, char *);
 int (*early_setup)(void);
 short flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 short index;
 int cflag;
 void *data;
 struct console *next;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define for_each_console(con)   for (con = console_drivers; con != NULL; con = con->next)
#define WARN_CONSOLE_UNLOCKED() WARN_ON(!is_console_locked() && !oops_in_progress)
#define VESA_NO_BLANKING 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define VESA_VSYNC_SUSPEND 1
#define VESA_HSYNC_SUSPEND 2
#define VESA_POWERDOWN 3
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
