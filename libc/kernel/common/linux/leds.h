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
#ifndef __LINUX_LEDS_H_INCLUDED
#define __LINUX_LEDS_H_INCLUDED
#include <linux/list.h>
#include <linux/spinlock.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/rwsem.h>
#include <linux/timer.h>
#include <linux/workqueue.h>
struct device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum led_brightness {
 LED_OFF = 0,
 LED_HALF = 127,
 LED_FULL = 255,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct led_classdev {
 const char *name;
 int brightness;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int max_brightness;
 int flags;
#define LED_SUSPENDED (1 << 0)
#define LED_CORE_SUSPENDRESUME (1 << 16)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LED_BLINK_ONESHOT (1 << 17)
#define LED_BLINK_ONESHOT_STOP (1 << 18)
#define LED_BLINK_INVERT (1 << 19)
 void (*brightness_set)(struct led_classdev *led_cdev,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum led_brightness brightness);
 enum led_brightness (*brightness_get)(struct led_classdev *led_cdev);
 int (*blink_set)(struct led_classdev *led_cdev,
 unsigned long *delay_on,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long *delay_off);
 struct device *dev;
 const char *default_trigger;
 unsigned long blink_delay_on, blink_delay_off;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct timer_list blink_timer;
 int blink_brightness;
 struct work_struct set_brightness_work;
 int delayed_set_value;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define DEFINE_LED_TRIGGER(x) static struct led_trigger *x;
#define DEFINE_LED_TRIGGER_GLOBAL(x) struct led_trigger *x;
struct led_trigger {};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct led_info {
 const char *name;
 const char *default_trigger;
 int flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct led_platform_data {
 int num_leds;
 struct led_info *leds;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct gpio_led {
 const char *name;
 const char *default_trigger;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned gpio;
 unsigned active_low : 1;
 unsigned retain_state_suspended : 1;
 unsigned default_state : 2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define LEDS_GPIO_DEFSTATE_OFF 0
#define LEDS_GPIO_DEFSTATE_ON 1
#define LEDS_GPIO_DEFSTATE_KEEP 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct gpio_led_platform_data {
 int num_leds;
 const struct gpio_led *leds;
#define GPIO_LED_NO_BLINK_LOW 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define GPIO_LED_NO_BLINK_HIGH 1
#define GPIO_LED_BLINK 2
 int (*gpio_blink_set)(unsigned gpio, int state,
 unsigned long *delay_on,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long *delay_off);
};
struct platform_device *gpio_led_register_device(
 int id, const struct gpio_led_platform_data *pdata);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum cpu_led_event {
 CPU_LED_IDLE_START,
 CPU_LED_IDLE_END,
 CPU_LED_START,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 CPU_LED_STOP,
 CPU_LED_HALTED,
};
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
