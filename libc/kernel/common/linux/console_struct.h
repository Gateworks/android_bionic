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
#ifndef _LINUX_CONSOLE_STRUCT_H
#define _LINUX_CONSOLE_STRUCT_H
#include <linux/wait.h>
#include <linux/vt.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/workqueue.h>
struct vt_struct;
#define NPAR 16
struct vc_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct tty_port port;
 unsigned short vc_num;
 unsigned int vc_cols;
 unsigned int vc_rows;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int vc_size_row;
 unsigned int vc_scan_lines;
 unsigned long vc_origin;
 unsigned long vc_scr_end;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long vc_visible_origin;
 unsigned int vc_top, vc_bottom;
 const struct consw *vc_sw;
 unsigned short *vc_screenbuf;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int vc_screenbuf_size;
 unsigned char vc_mode;
 unsigned char vc_attr;
 unsigned char vc_def_color;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char vc_color;
 unsigned char vc_s_color;
 unsigned char vc_ulcolor;
 unsigned char vc_itcolor;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char vc_halfcolor;
 unsigned int vc_cursor_type;
 unsigned short vc_complement_mask;
 unsigned short vc_s_complement_mask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int vc_x, vc_y;
 unsigned int vc_saved_x, vc_saved_y;
 unsigned long vc_pos;
 unsigned short vc_hi_font_mask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct console_font vc_font;
 unsigned short vc_video_erase_char;
 unsigned int vc_state;
 unsigned int vc_npar,vc_par[NPAR];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct vt_mode vt_mode;
 struct pid *vt_pid;
 int vt_newvt;
 wait_queue_head_t paste_wait;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int vc_charset : 1;
 unsigned int vc_s_charset : 1;
 unsigned int vc_disp_ctrl : 1;
 unsigned int vc_toggle_meta : 1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int vc_decscnm : 1;
 unsigned int vc_decom : 1;
 unsigned int vc_decawm : 1;
 unsigned int vc_deccm : 1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int vc_decim : 1;
 unsigned int vc_deccolm : 1;
 unsigned int vc_intensity : 2;
 unsigned int vc_italic:1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int vc_underline : 1;
 unsigned int vc_blink : 1;
 unsigned int vc_reverse : 1;
 unsigned int vc_s_intensity : 2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int vc_s_italic:1;
 unsigned int vc_s_underline : 1;
 unsigned int vc_s_blink : 1;
 unsigned int vc_s_reverse : 1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int vc_ques : 1;
 unsigned int vc_need_wrap : 1;
 unsigned int vc_can_do_color : 1;
 unsigned int vc_report_mouse : 2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char vc_utf : 1;
 unsigned char vc_utf_count;
 int vc_utf_char;
 unsigned int vc_tab_stop[8];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char vc_palette[16*3];
 unsigned short * vc_translate;
 unsigned char vc_G0_charset;
 unsigned char vc_G1_charset;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned char vc_saved_G0;
 unsigned char vc_saved_G1;
 unsigned int vc_resize_user;
 unsigned int vc_bell_pitch;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int vc_bell_duration;
 struct vc_data **vc_display_fg;
 unsigned long vc_uni_pagedir;
 unsigned long *vc_uni_pagedir_loc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool vc_panic_force_write;
};
struct vc {
 struct vc_data *d;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define CUR_DEF 0
#define CUR_NONE 1
#define CUR_UNDERLINE 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CUR_LOWER_THIRD 3
#define CUR_LOWER_HALF 4
#define CUR_TWO_THIRDS 5
#define CUR_BLOCK 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define CUR_HWMASK 0x0f
#define CUR_SWMASK 0xfff0
#define CUR_DEFAULT CUR_UNDERLINE
#define CON_IS_VISIBLE(conp) (*conp->vc_display_fg == conp)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
