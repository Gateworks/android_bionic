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
#ifndef __SUNGEM_PHY_H__
#define __SUNGEM_PHY_H__
struct mii_phy;
struct mii_phy_ops
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
{
 int (*init)(struct mii_phy *phy);
 int (*suspend)(struct mii_phy *phy);
 int (*setup_aneg)(struct mii_phy *phy, u32 advertise);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*setup_forced)(struct mii_phy *phy, int speed, int fd);
 int (*poll_link)(struct mii_phy *phy);
 int (*read_link)(struct mii_phy *phy);
 int (*enable_fiber)(struct mii_phy *phy, int autoneg);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct mii_phy_def
{
 u32 phy_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 phy_id_mask;
 u32 features;
 int magic_aneg;
 const char* name;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const struct mii_phy_ops* ops;
};
enum {
 BCM54XX_COPPER,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 BCM54XX_FIBER,
 BCM54XX_GBIC,
 BCM54XX_SGMII,
 BCM54XX_UNKNOWN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct mii_phy
{
 struct mii_phy_def* def;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 advertising;
 int mii_id;
 int autoneg;
 int speed;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int duplex;
 int pause;
 struct net_device *dev;
 int (*mdio_read) (struct net_device *dev, int mii_id, int reg);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 void (*mdio_write) (struct net_device *dev, int mii_id, int reg, int val);
 void *platform_data;
};
#define BMCR_SPD2 0x0040
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define LPA_PAUSE 0x0400
#define MII_BCM5201_INTERRUPT 0x1A
#define MII_BCM5201_INTERRUPT_INTENABLE 0x4000
#define MII_BCM5201_AUXMODE2 0x1B
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MII_BCM5201_AUXMODE2_LOWPOWER 0x0008
#define MII_BCM5201_MULTIPHY 0x1E
#define MII_BCM5201_MULTIPHY_SERIALMODE 0x0002
#define MII_BCM5201_MULTIPHY_SUPERISOLATE 0x0008
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MII_BCM5221_TEST 0x1f
#define MII_BCM5221_TEST_ENABLE_SHADOWS 0x0080
#define MII_BCM5221_SHDOW_AUX_STAT2 0x1b
#define MII_BCM5221_SHDOW_AUX_STAT2_APD 0x0020
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MII_BCM5221_SHDOW_AUX_MODE4 0x1a
#define MII_BCM5221_SHDOW_AUX_MODE4_IDDQMODE 0x0001
#define MII_BCM5221_SHDOW_AUX_MODE4_CLKLOPWR 0x0004
#define MII_BCM5241_SHDOW_AUX_MODE4_STANDBYPWR 0x0008
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MII_BCM5400_GB_CONTROL 0x09
#define MII_BCM5400_GB_CONTROL_FULLDUPLEXCAP 0x0200
#define MII_BCM5400_AUXCONTROL 0x18
#define MII_BCM5400_AUXCONTROL_PWR10BASET 0x0004
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MII_BCM5400_AUXSTATUS 0x19
#define MII_BCM5400_AUXSTATUS_LINKMODE_MASK 0x0700
#define MII_BCM5400_AUXSTATUS_LINKMODE_SHIFT 8
#define MII_1000BASETCONTROL 0x09
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MII_1000BASETCONTROL_FULLDUPLEXCAP 0x0200
#define MII_1000BASETCONTROL_HALFDUPLEXCAP 0x0100
#define MII_M1011_PHY_SPEC_CONTROL 0x10
#define MII_M1011_PHY_SPEC_CONTROL_MANUAL_MDIX 0x20
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MII_M1011_PHY_SPEC_CONTROL_AUTO_MDIX 0x40
#define MII_M1011_PHY_SPEC_STATUS 0x11
#define MII_M1011_PHY_SPEC_STATUS_1000 0x8000
#define MII_M1011_PHY_SPEC_STATUS_100 0x4000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MII_M1011_PHY_SPEC_STATUS_SPD_MASK 0xc000
#define MII_M1011_PHY_SPEC_STATUS_FULLDUPLEX 0x2000
#define MII_M1011_PHY_SPEC_STATUS_RESOLVED 0x0800
#define MII_M1011_PHY_SPEC_STATUS_TX_PAUSE 0x0008
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MII_M1011_PHY_SPEC_STATUS_RX_PAUSE 0x0004
#endif
