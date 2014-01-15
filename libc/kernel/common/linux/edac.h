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
#ifndef _LINUX_EDAC_H_
#define _LINUX_EDAC_H_
#include <linux/atomic.h>
#include <linux/device.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/completion.h>
#include <linux/workqueue.h>
#include <linux/debugfs.h>
struct device;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EDAC_OPSTATE_INVAL -1
#define EDAC_OPSTATE_POLL 0
#define EDAC_OPSTATE_NMI 1
#define EDAC_OPSTATE_INT 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EDAC_MC_LABEL_LEN 31
#define LOCATION_SIZE 80
#define EDAC_MAX_LABELS 8
#define OTHER_LABEL " or "
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum dev_type {
 DEV_UNKNOWN = 0,
 DEV_X1,
 DEV_X2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DEV_X4,
 DEV_X8,
 DEV_X16,
 DEV_X32,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 DEV_X64
};
#define DEV_FLAG_UNKNOWN BIT(DEV_UNKNOWN)
#define DEV_FLAG_X1 BIT(DEV_X1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DEV_FLAG_X2 BIT(DEV_X2)
#define DEV_FLAG_X4 BIT(DEV_X4)
#define DEV_FLAG_X8 BIT(DEV_X8)
#define DEV_FLAG_X16 BIT(DEV_X16)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DEV_FLAG_X32 BIT(DEV_X32)
#define DEV_FLAG_X64 BIT(DEV_X64)
enum hw_event_mc_err_type {
 HW_EVENT_ERR_CORRECTED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 HW_EVENT_ERR_UNCORRECTED,
 HW_EVENT_ERR_FATAL,
 HW_EVENT_ERR_INFO,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum mem_type {
 MEM_EMPTY = 0,
 MEM_RESERVED,
 MEM_UNKNOWN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MEM_FPM,
 MEM_EDO,
 MEM_BEDO,
 MEM_SDR,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MEM_RDR,
 MEM_DDR,
 MEM_RDDR,
 MEM_RMBS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MEM_DDR2,
 MEM_FB_DDR2,
 MEM_RDDR2,
 MEM_XDR,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MEM_DDR3,
 MEM_RDDR3,
};
#define MEM_FLAG_EMPTY BIT(MEM_EMPTY)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MEM_FLAG_RESERVED BIT(MEM_RESERVED)
#define MEM_FLAG_UNKNOWN BIT(MEM_UNKNOWN)
#define MEM_FLAG_FPM BIT(MEM_FPM)
#define MEM_FLAG_EDO BIT(MEM_EDO)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MEM_FLAG_BEDO BIT(MEM_BEDO)
#define MEM_FLAG_SDR BIT(MEM_SDR)
#define MEM_FLAG_RDR BIT(MEM_RDR)
#define MEM_FLAG_DDR BIT(MEM_DDR)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MEM_FLAG_RDDR BIT(MEM_RDDR)
#define MEM_FLAG_RMBS BIT(MEM_RMBS)
#define MEM_FLAG_DDR2 BIT(MEM_DDR2)
#define MEM_FLAG_FB_DDR2 BIT(MEM_FB_DDR2)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MEM_FLAG_RDDR2 BIT(MEM_RDDR2)
#define MEM_FLAG_XDR BIT(MEM_XDR)
#define MEM_FLAG_DDR3 BIT(MEM_DDR3)
#define MEM_FLAG_RDDR3 BIT(MEM_RDDR3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum edac_type {
 EDAC_UNKNOWN = 0,
 EDAC_NONE,
 EDAC_RESERVED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 EDAC_PARITY,
 EDAC_EC,
 EDAC_SECDED,
 EDAC_S2ECD2ED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 EDAC_S4ECD4ED,
 EDAC_S8ECD8ED,
 EDAC_S16ECD16ED,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EDAC_FLAG_UNKNOWN BIT(EDAC_UNKNOWN)
#define EDAC_FLAG_NONE BIT(EDAC_NONE)
#define EDAC_FLAG_PARITY BIT(EDAC_PARITY)
#define EDAC_FLAG_EC BIT(EDAC_EC)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EDAC_FLAG_SECDED BIT(EDAC_SECDED)
#define EDAC_FLAG_S2ECD2ED BIT(EDAC_S2ECD2ED)
#define EDAC_FLAG_S4ECD4ED BIT(EDAC_S4ECD4ED)
#define EDAC_FLAG_S8ECD8ED BIT(EDAC_S8ECD8ED)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EDAC_FLAG_S16ECD16ED BIT(EDAC_S16ECD16ED)
enum scrub_type {
 SCRUB_UNKNOWN = 0,
 SCRUB_NONE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SCRUB_SW_PROG,
 SCRUB_SW_SRC,
 SCRUB_SW_PROG_SRC,
 SCRUB_SW_TUNABLE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 SCRUB_HW_PROG,
 SCRUB_HW_SRC,
 SCRUB_HW_PROG_SRC,
 SCRUB_HW_TUNABLE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define SCRUB_FLAG_SW_PROG BIT(SCRUB_SW_PROG)
#define SCRUB_FLAG_SW_SRC BIT(SCRUB_SW_SRC)
#define SCRUB_FLAG_SW_PROG_SRC BIT(SCRUB_SW_PROG_SRC)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SCRUB_FLAG_SW_TUN BIT(SCRUB_SW_SCRUB_TUNABLE)
#define SCRUB_FLAG_HW_PROG BIT(SCRUB_HW_PROG)
#define SCRUB_FLAG_HW_SRC BIT(SCRUB_HW_SRC)
#define SCRUB_FLAG_HW_PROG_SRC BIT(SCRUB_HW_PROG_SRC)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SCRUB_FLAG_HW_TUN BIT(SCRUB_HW_TUNABLE)
#define OP_ALLOC 0x100
#define OP_RUNNING_POLL 0x201
#define OP_RUNNING_INTERRUPT 0x202
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define OP_RUNNING_POLL_INTR 0x203
#define OP_OFFLINE 0x300
enum edac_mc_layer_type {
 EDAC_MC_LAYER_BRANCH,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 EDAC_MC_LAYER_CHANNEL,
 EDAC_MC_LAYER_SLOT,
 EDAC_MC_LAYER_CHIP_SELECT,
 EDAC_MC_LAYER_ALL_MEM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct edac_mc_layer {
 enum edac_mc_layer_type type;
 unsigned size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool is_virt_csrow;
};
#define EDAC_MAX_LAYERS 3
#define EDAC_DIMM_OFF(layers, nlayers, layer0, layer1, layer2) ({   int __i;   if ((nlayers) == 1)   __i = layer0;   else if ((nlayers) == 2)   __i = (layer1) + ((layers[1]).size * (layer0));   else if ((nlayers) == 3)   __i = (layer2) + ((layers[2]).size * ((layer1) +   ((layers[1]).size * (layer0))));   else   __i = -EINVAL;   __i;  })
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define EDAC_DIMM_PTR(layers, var, nlayers, layer0, layer1, layer2) ({   typeof(*var) __p;   int ___i = EDAC_DIMM_OFF(layers, nlayers, layer0, layer1, layer2);   if (___i < 0)   __p = NULL;   else   __p = (var)[___i];   __p;  })
struct dimm_info {
 struct device dev;
 char label[EDAC_MC_LABEL_LEN + 1];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned location[EDAC_MAX_LAYERS];
 struct mem_ctl_info *mci;
 u32 grain;
 enum dev_type dtype;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum mem_type mtype;
 enum edac_type edac_mode;
 u32 nr_pages;
 unsigned csrow, cschannel;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct rank_info {
 int chan_idx;
 struct csrow_info *csrow;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct dimm_info *dimm;
 u32 ce_count;
};
struct csrow_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device dev;
 unsigned long first_page;
 unsigned long last_page;
 unsigned long page_mask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int csrow_idx;
 u32 ue_count;
 u32 ce_count;
 struct mem_ctl_info *mci;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 nr_channels;
 struct rank_info **channels;
};
struct errcount_attribute_data {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int n_layers;
 int pos[EDAC_MAX_LAYERS];
 int layer0, layer1, layer2;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct edac_raw_error_desc {
 char location[LOCATION_SIZE];
 char label[(EDAC_MC_LABEL_LEN + 1 + sizeof(OTHER_LABEL)) * EDAC_MAX_LABELS];
 long grain;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u16 error_count;
 int top_layer;
 int mid_layer;
 int low_layer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long page_frame_number;
 unsigned long offset_in_page;
 unsigned long syndrome;
 const char *msg;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *other_detail;
 bool enable_per_layer_report;
};
struct mem_ctl_info {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device dev;
 struct bus_type *bus;
 struct module *owner;
 unsigned long mtype_cap;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long edac_ctl_cap;
 unsigned long edac_cap;
 unsigned long scrub_cap;
 enum scrub_type scrub_mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*set_sdram_scrub_rate) (struct mem_ctl_info * mci, u32 bw);
 int (*get_sdram_scrub_rate) (struct mem_ctl_info * mci);
 void (*edac_check) (struct mem_ctl_info * mci);
 unsigned long (*ctl_page_to_phys) (struct mem_ctl_info * mci,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned long page);
 int mc_idx;
 struct csrow_info **csrows;
 unsigned nr_csrows, num_cschannel;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 unsigned n_layers;
 struct edac_mc_layer *layers;
 bool csbased;
 unsigned tot_dimms;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct dimm_info **dimms;
 struct device *pdev;
 const char *mod_name;
 const char *mod_ver;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *ctl_name;
 const char *dev_name;
 void *pvt_info;
 unsigned long start_time;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 ce_noinfo_count, ue_noinfo_count;
 u32 ue_mc, ce_mc;
 u32 *ce_per_layer[EDAC_MAX_LAYERS], *ue_per_layer[EDAC_MAX_LAYERS];
 struct completion complete;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct mcidev_sysfs_attribute *mc_driver_sysfs_attributes;
 struct delayed_work work;
 struct edac_raw_error_desc error_desc;
 int op_state;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define EDAC_MAX_MCS 16
#endif
