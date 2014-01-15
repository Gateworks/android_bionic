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
#ifndef _LINUX_GPIO_EVENT_H
#define _LINUX_GPIO_EVENT_H
#include <linux/input.h>
struct gpio_event_input_devs {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int count;
 struct input_dev *dev[];
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 GPIO_EVENT_FUNC_UNINIT = 0x0,
 GPIO_EVENT_FUNC_INIT = 0x1,
 GPIO_EVENT_FUNC_SUSPEND = 0x2,
 GPIO_EVENT_FUNC_RESUME = 0x3,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct gpio_event_info {
 int (*func)(struct gpio_event_input_devs *input_devs,
 struct gpio_event_info *info,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void **data, int func);
 int (*event)(struct gpio_event_input_devs *input_devs,
 struct gpio_event_info *info,
 void **data, unsigned int dev, unsigned int type,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int code, int value);
 bool no_suspend;
};
struct gpio_event_platform_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *name;
 struct gpio_event_info **info;
 size_t info_count;
 int (*power)(const struct gpio_event_platform_data *pdata, bool on);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *names[];
};
#define GPIO_EVENT_DEV_NAME "gpio-event"
enum gpio_event_matrix_flags {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 GPIOKPF_ACTIVE_HIGH = 1U << 0,
 GPIOKPF_DEBOUNCE = 1U << 1,
 GPIOKPF_REMOVE_SOME_PHANTOM_KEYS = 1U << 2,
 GPIOKPF_REMOVE_PHANTOM_KEYS = GPIOKPF_REMOVE_SOME_PHANTOM_KEYS |
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 GPIOKPF_DEBOUNCE,
 GPIOKPF_DRIVE_INACTIVE = 1U << 3,
 GPIOKPF_LEVEL_TRIGGERED_IRQ = 1U << 4,
 GPIOKPF_PRINT_UNMAPPED_KEYS = 1U << 16,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 GPIOKPF_PRINT_MAPPED_KEYS = 1U << 17,
 GPIOKPF_PRINT_PHANTOM_KEYS = 1U << 18,
};
#define MATRIX_CODE_BITS (10)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MATRIX_KEY_MASK ((1U << MATRIX_CODE_BITS) - 1)
#define MATRIX_KEY(dev, code)   (((dev) << MATRIX_CODE_BITS) | (code & MATRIX_KEY_MASK))
struct gpio_event_matrix_info {
 struct gpio_event_info info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const unsigned short *keymap;
 unsigned int *input_gpios;
 unsigned int *output_gpios;
 unsigned int ninputs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned int noutputs;
 ktime_t settle_time;
 ktime_t debounce_delay;
 ktime_t poll_time;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned flags;
};
enum gpio_event_direct_flags {
 GPIOEDF_ACTIVE_HIGH = 1U << 0,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 GPIOEDF_PRINT_KEYS = 1U << 8,
 GPIOEDF_PRINT_KEY_DEBOUNCE = 1U << 9,
 GPIOEDF_PRINT_KEY_UNSTABLE = 1U << 10,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct gpio_event_direct_entry {
 uint32_t gpio:16;
 uint32_t code:10;
 uint32_t dev:6;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct gpio_event_input_info {
 struct gpio_event_info info;
 ktime_t debounce_time;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 ktime_t poll_time;
 uint16_t flags;
 uint16_t type;
 const struct gpio_event_direct_entry *keymap;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 size_t keymap_size;
};
struct gpio_event_output_info {
 struct gpio_event_info info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t flags;
 uint16_t type;
 const struct gpio_event_direct_entry *keymap;
 size_t keymap_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum gpio_event_axis_flags {
 GPIOEAF_PRINT_UNKNOWN_DIRECTION = 1U << 16,
 GPIOEAF_PRINT_RAW = 1U << 17,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 GPIOEAF_PRINT_EVENT = 1U << 18,
};
struct gpio_event_axis_info {
 struct gpio_event_info info;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t count;
 uint8_t dev;
 uint8_t type;
 uint16_t code;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint16_t decoded_size;
 uint16_t (*map)(struct gpio_event_axis_info *info, uint16_t in);
 uint32_t *gpio;
 uint32_t flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define gpio_axis_2bit_gray_map gpio_axis_4bit_gray_map
#define gpio_axis_3bit_gray_map gpio_axis_4bit_gray_map
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
