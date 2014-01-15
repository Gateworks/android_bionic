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
#ifndef _GPIO_MOUSE_H
#define _GPIO_MOUSE_H
#define GPIO_MOUSE_POLARITY_ACT_HIGH 0x00
#define GPIO_MOUSE_POLARITY_ACT_LOW 0x01
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GPIO_MOUSE_PIN_UP 0
#define GPIO_MOUSE_PIN_DOWN 1
#define GPIO_MOUSE_PIN_LEFT 2
#define GPIO_MOUSE_PIN_RIGHT 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GPIO_MOUSE_PIN_BLEFT 4
#define GPIO_MOUSE_PIN_BMIDDLE 5
#define GPIO_MOUSE_PIN_BRIGHT 6
#define GPIO_MOUSE_PIN_MAX 7
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct gpio_mouse_platform_data {
 int scan_ms;
 int polarity;
 union {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct {
 int up;
 int down;
 int left;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int right;
 int bleft;
 int bmiddle;
 int bright;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 };
 int pins[GPIO_MOUSE_PIN_MAX];
 };
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
