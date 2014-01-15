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
#ifndef DCA_H
#define DCA_H
#include <linux/pci.h>
#define DCA_PROVIDER_ADD 0x0001
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define DCA_PROVIDER_REMOVE 0x0002
struct dca_provider {
 struct dca_ops *ops;
 struct device *cd;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int id;
};
struct dca_domain {
 struct pci_bus *pci_rc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct dca_ops {
 int (*add_requester) (struct dca_provider *, struct device *);
 int (*remove_requester) (struct dca_provider *, struct device *);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u8 (*get_tag) (struct dca_provider *, struct device *,
 int cpu);
 int (*dev_managed) (struct dca_provider *, struct device *);
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct dca_provider *alloc_dca_provider(struct dca_ops *ops, int priv_size);
#define DCA_GET_TAG_TWO_ARGS
#endif
