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
struct ntb_transport_qp;
struct ntb_client {
 struct device_driver driver;
 int (*probe) (struct pci_dev *pdev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*remove) (struct pci_dev *pdev);
};
struct ntb_queue_handlers {
 void (*rx_handler) (struct ntb_transport_qp *qp, void *qp_data,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *data, int len);
 void (*tx_handler) (struct ntb_transport_qp *qp, void *qp_data,
 void *data, int len);
 void (*event_handler) (void *data, int status);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct ntb_transport_qp *
ntb_transport_create_queue(void *data, struct pci_dev *pdev,
 const struct ntb_queue_handlers *handlers);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
