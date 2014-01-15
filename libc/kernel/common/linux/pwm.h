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
#ifndef __LINUX_PWM_H
#define __LINUX_PWM_H
#include <linux/err.h>
#include <linux/of.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct pwm_device;
struct seq_file;
#if ??? || ???
struct pwm_device *pwm_request(int pwm_id, const char *label);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#else
#endif
struct pwm_chip;
enum pwm_polarity {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PWM_POLARITY_NORMAL,
 PWM_POLARITY_INVERSED,
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PWMF_REQUESTED = 1 << 0,
 PWMF_ENABLED = 1 << 1,
};
struct pwm_device {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *label;
 unsigned long flags;
 unsigned int hwpwm;
 unsigned int pwm;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pwm_chip *chip;
 void *chip_data;
 unsigned int period;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct pwm_ops {
 int (*request)(struct pwm_chip *chip,
 struct pwm_device *pwm);
 void (*free)(struct pwm_chip *chip,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pwm_device *pwm);
 int (*config)(struct pwm_chip *chip,
 struct pwm_device *pwm,
 int duty_ns, int period_ns);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*set_polarity)(struct pwm_chip *chip,
 struct pwm_device *pwm,
 enum pwm_polarity polarity);
 int (*enable)(struct pwm_chip *chip,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct pwm_device *pwm);
 void (*disable)(struct pwm_chip *chip,
 struct pwm_device *pwm);
 struct module *owner;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct pwm_chip {
 struct device *dev;
 const struct pwm_ops *ops;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int base;
 unsigned int npwm;
 struct pwm_device *pwms;
 struct pwm_device * (*of_xlate)(struct pwm_chip *pc,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct of_phandle_args *args);
 unsigned int of_pwm_n_cells;
 bool can_sleep;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if ???
struct pwm_device *pwm_request_from_chip(struct pwm_chip *chip,
 unsigned int index,
 const char *label);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct pwm_device *of_pwm_xlate_with_flags(struct pwm_chip *pc,
 const struct of_phandle_args *args);
struct pwm_device *pwm_get(struct device *dev, const char *con_id);
struct pwm_device *of_pwm_get(struct device_node *np, const char *con_id);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct pwm_device *devm_pwm_get(struct device *dev, const char *con_id);
struct pwm_device *devm_of_pwm_get(struct device *dev, struct device_node *np,
 const char *con_id);
#else
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
struct pwm_lookup {
 const char *provider;
 unsigned int index;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *dev_id;
 const char *con_id;
};
#define PWM_LOOKUP(_provider, _index, _dev_id, _con_id)   {   .provider = _provider,   .index = _index,   .dev_id = _dev_id,   .con_id = _con_id,   }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#if ???
#else
#endif
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
