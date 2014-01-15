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
#ifndef __LINUX_PINCTRL_MACHINE_H
#define __LINUX_PINCTRL_MACHINE_H
#include <linux/bug.h>
#include <linux/pinctrl/pinctrl-state.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum pinctrl_map_type {
 PIN_MAP_TYPE_INVALID,
 PIN_MAP_TYPE_DUMMY_STATE,
 PIN_MAP_TYPE_MUX_GROUP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PIN_MAP_TYPE_CONFIGS_PIN,
 PIN_MAP_TYPE_CONFIGS_GROUP,
};
struct pinctrl_map_mux {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *group;
 const char *function;
};
struct pinctrl_map_configs {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *group_or_pin;
 unsigned long *configs;
 unsigned num_configs;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct pinctrl_map {
 const char *dev_name;
 const char *name;
 enum pinctrl_map_type type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *ctrl_dev_name;
 union {
 struct pinctrl_map_mux mux;
 struct pinctrl_map_configs configs;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 } data;
};
#define PIN_MAP_DUMMY_STATE(dev, state)   {   .dev_name = dev,   .name = state,   .type = PIN_MAP_TYPE_DUMMY_STATE,   }
#define PIN_MAP_MUX_GROUP(dev, state, pinctrl, grp, func)   {   .dev_name = dev,   .name = state,   .type = PIN_MAP_TYPE_MUX_GROUP,   .ctrl_dev_name = pinctrl,   .data.mux = {   .group = grp,   .function = func,   },   }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PIN_MAP_MUX_GROUP_DEFAULT(dev, pinctrl, grp, func)   PIN_MAP_MUX_GROUP(dev, PINCTRL_STATE_DEFAULT, pinctrl, grp, func)
#define PIN_MAP_MUX_GROUP_HOG(dev, state, grp, func)   PIN_MAP_MUX_GROUP(dev, state, dev, grp, func)
#define PIN_MAP_MUX_GROUP_HOG_DEFAULT(dev, grp, func)   PIN_MAP_MUX_GROUP(dev, PINCTRL_STATE_DEFAULT, dev, grp, func)
#define PIN_MAP_CONFIGS_PIN(dev, state, pinctrl, pin, cfgs)   {   .dev_name = dev,   .name = state,   .type = PIN_MAP_TYPE_CONFIGS_PIN,   .ctrl_dev_name = pinctrl,   .data.configs = {   .group_or_pin = pin,   .configs = cfgs,   .num_configs = ARRAY_SIZE(cfgs),   },   }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PIN_MAP_CONFIGS_PIN_DEFAULT(dev, pinctrl, pin, cfgs)   PIN_MAP_CONFIGS_PIN(dev, PINCTRL_STATE_DEFAULT, pinctrl, pin, cfgs)
#define PIN_MAP_CONFIGS_PIN_HOG(dev, state, pin, cfgs)   PIN_MAP_CONFIGS_PIN(dev, state, dev, pin, cfgs)
#define PIN_MAP_CONFIGS_PIN_HOG_DEFAULT(dev, pin, cfgs)   PIN_MAP_CONFIGS_PIN(dev, PINCTRL_STATE_DEFAULT, dev, pin, cfgs)
#define PIN_MAP_CONFIGS_GROUP(dev, state, pinctrl, grp, cfgs)   {   .dev_name = dev,   .name = state,   .type = PIN_MAP_TYPE_CONFIGS_GROUP,   .ctrl_dev_name = pinctrl,   .data.configs = {   .group_or_pin = grp,   .configs = cfgs,   .num_configs = ARRAY_SIZE(cfgs),   },   }
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PIN_MAP_CONFIGS_GROUP_DEFAULT(dev, pinctrl, grp, cfgs)   PIN_MAP_CONFIGS_GROUP(dev, PINCTRL_STATE_DEFAULT, pinctrl, grp, cfgs)
#define PIN_MAP_CONFIGS_GROUP_HOG(dev, state, grp, cfgs)   PIN_MAP_CONFIGS_GROUP(dev, state, dev, grp, cfgs)
#define PIN_MAP_CONFIGS_GROUP_HOG_DEFAULT(dev, grp, cfgs)   PIN_MAP_CONFIGS_GROUP(dev, PINCTRL_STATE_DEFAULT, dev, grp, cfgs)
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
