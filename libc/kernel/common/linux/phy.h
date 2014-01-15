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
#ifndef __PHY_H
#define __PHY_H
#include <linux/spinlock.h>
#include <linux/ethtool.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/mii.h>
#include <linux/timer.h>
#include <linux/workqueue.h>
#include <linux/mod_devicetable.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/atomic.h>
#define PHY_BASIC_FEATURES (SUPPORTED_10baseT_Half |   SUPPORTED_10baseT_Full |   SUPPORTED_100baseT_Half |   SUPPORTED_100baseT_Full |   SUPPORTED_Autoneg |   SUPPORTED_TP |   SUPPORTED_MII)
#define PHY_GBIT_FEATURES (PHY_BASIC_FEATURES |   SUPPORTED_1000baseT_Half |   SUPPORTED_1000baseT_Full)
#define PHY_POLL -1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PHY_IGNORE_INTERRUPT -2
#define PHY_HAS_INTERRUPT 0x00000001
#define PHY_HAS_MAGICANEG 0x00000002
typedef enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PHY_INTERFACE_MODE_NA,
 PHY_INTERFACE_MODE_MII,
 PHY_INTERFACE_MODE_GMII,
 PHY_INTERFACE_MODE_SGMII,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PHY_INTERFACE_MODE_TBI,
 PHY_INTERFACE_MODE_RMII,
 PHY_INTERFACE_MODE_RGMII,
 PHY_INTERFACE_MODE_RGMII_ID,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PHY_INTERFACE_MODE_RGMII_RXID,
 PHY_INTERFACE_MODE_RGMII_TXID,
 PHY_INTERFACE_MODE_RTBI,
 PHY_INTERFACE_MODE_SMII,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
} phy_interface_t;
#define PHY_INIT_TIMEOUT 100000
#define PHY_STATE_TIME 1
#define PHY_FORCE_TIMEOUT 10
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PHY_AN_TIMEOUT 10
#define PHY_MAX_ADDR 32
#define PHY_ID_FMT "%s:%02x"
#define MII_BUS_ID_SIZE (20 - 3)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MII_ADDR_C45 (1<<30)
struct device;
struct sk_buff;
struct mii_bus {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *name;
 char id[MII_BUS_ID_SIZE];
 void *priv;
 int (*read)(struct mii_bus *bus, int phy_id, int regnum);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*write)(struct mii_bus *bus, int phy_id, int regnum, u16 val);
 int (*reset)(struct mii_bus *bus);
 struct mutex mdio_lock;
 struct device *parent;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 enum {
 MDIOBUS_ALLOCATED = 1,
 MDIOBUS_REGISTERED,
 MDIOBUS_UNREGISTERED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MDIOBUS_RELEASED,
 } state;
 struct device dev;
 struct phy_device *phy_map[PHY_MAX_ADDR];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 phy_mask;
 int *irq;
};
#define to_mii_bus(d) container_of(d, struct mii_bus, dev)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct mii_bus *mdiobus_alloc_size(size_t);
struct phy_device *mdiobus_scan(struct mii_bus *bus, int addr);
#define PHY_INTERRUPT_DISABLED 0x0
#define PHY_INTERRUPT_ENABLED 0x80000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum phy_state {
 PHY_DOWN=0,
 PHY_STARTING,
 PHY_READY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PHY_PENDING,
 PHY_UP,
 PHY_AN,
 PHY_RUNNING,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PHY_NOLINK,
 PHY_FORCING,
 PHY_CHANGELINK,
 PHY_HALTED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 PHY_RESUMING
};
struct phy_c45_device_ids {
 u32 devices_in_package;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 device_ids[8];
};
struct phy_device {
 struct phy_driver *drv;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct mii_bus *bus;
 struct device dev;
 u32 phy_id;
 struct phy_c45_device_ids c45_ids;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 bool is_c45;
 enum phy_state state;
 u32 dev_flags;
 phy_interface_t interface;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int addr;
 int speed;
 int duplex;
 int pause;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int asym_pause;
 int link;
 u32 interrupts;
 u32 supported;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 advertising;
 int autoneg;
 int link_timeout;
 int irq;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void *priv;
 atomic_t irq_disable;
 struct mutex lock;
 struct net_device *attached_dev;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*adjust_link)(struct net_device *dev);
 void (*adjust_state)(struct net_device *dev);
};
#define to_phy_device(d) container_of(d, struct phy_device, dev)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct phy_driver {
 u32 phy_id;
 char *name;
 unsigned int phy_id_mask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 features;
 u32 flags;
 int (*config_init)(struct phy_device *phydev);
 int (*probe)(struct phy_device *phydev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*suspend)(struct phy_device *phydev);
 int (*resume)(struct phy_device *phydev);
 int (*config_aneg)(struct phy_device *phydev);
 int (*read_status)(struct phy_device *phydev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*ack_interrupt)(struct phy_device *phydev);
 int (*config_intr)(struct phy_device *phydev);
 int (*did_interrupt)(struct phy_device *phydev);
 void (*remove)(struct phy_device *phydev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*match_phy_device)(struct phy_device *phydev);
 int (*ts_info)(struct phy_device *phydev, struct ethtool_ts_info *ti);
 int (*hwtstamp)(struct phy_device *phydev, struct ifreq *ifr);
 bool (*rxtstamp)(struct phy_device *dev, struct sk_buff *skb, int type);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*txtstamp)(struct phy_device *dev, struct sk_buff *skb, int type);
 int (*set_wol)(struct phy_device *dev, struct ethtool_wolinfo *wol);
 void (*get_wol)(struct phy_device *dev, struct ethtool_wolinfo *wol);
 struct device_driver driver;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define to_phy_driver(d) container_of(d, struct phy_driver, driver)
#define PHY_ANY_ID "MATCH ANY PHY"
#define PHY_ANY_UID 0xffffffff
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct phy_fixup {
 char bus_id[20];
 u32 phy_uid;
 u32 phy_uid_mask;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*run)(struct phy_device *phydev);
};
struct phy_device *phy_device_create(struct mii_bus *bus, int addr, int phy_id,
 bool is_c45, struct phy_c45_device_ids *c45_ids);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct phy_device *get_phy_device(struct mii_bus *bus, int addr, bool is_c45);
struct phy_device * phy_attach(struct net_device *dev,
 const char *bus_id, phy_interface_t interface);
struct phy_device *phy_find_first(struct mii_bus *bus);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct phy_device * phy_connect(struct net_device *dev, const char *bus_id,
 void (*handler)(struct net_device *),
 phy_interface_t interface);
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
