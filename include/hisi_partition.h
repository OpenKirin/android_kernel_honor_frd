/*
*分区表公共头文件
*/
#ifndef _HISI_PARTITION_TABLE_H_
#define _HISI_PARTITION_TABLE_H_

enum {
	EMMC_USER_PART = 0x0,
	EMMC_BOOT_MAJOR_PART = 0x1,
	EMMC_BOOT_BACKUP_PART = 0x2,
};

enum {
	UFS_BOOT_MAJOR_PART = 0x0,
	UFS_BOOT_BACKUP_PART = 0x1,
	UFS_NORMAL_PART = 0x2,
};

#define PART_NAMELEN                   (36)
#define VRL_INDEX			(6)
#define BACKVRL_INDEX			(6)

#define MAX_UFS_LUN			8
#define UFS_OFFSET_128KB		(128*1024)
#define UFS_PTABLE_SIZE_17KB		(17*1024)

#define FASTBOOT_VRL_INDEX		6
#define SECBOOT_PTN_EFI_START		(0)
#define SECBOOT_PTN_EFI_SIZE		(512 * 1024)
#define SECBOOT_PTN_XLOADER_START	(0)
#define SECBOOT_PTN_XLOADER_SIZE	(256 * 1024)
#define SECBOOT_PTN_VRL_P_START		(512 * 1024)
#define SECBOOT_PTN_VRL_M_START		(768 * 1024)
#define SECBOOT_PTN_VRLP_SIZE		(256 * 1024)
#define SECBOOT_PTN_VRLM_SIZE		(256 * 1024)
#define SECBOOT_PTN_FASTBOOT_START	(2048 * 1024)
#define SECBOOT_PTN_FASTBOOT_SIZE	(4096 * 1024)

/*分区名字*/
#define PART_XLOADER                   "xloader"
#define PART_PTABLE                    "ptable"
#define PART_VRL                       "vrl"
#define PART_VRL_BACKUP                "vrl_backup"
#define PART_FW_LPM3                   "fw_lpm3"
#define PART_FRP                       "frp"
#define PART_FASTBOOT                  "fastboot"
#define PART_MODEMNVM_FACTORY          "modemnvm_factory"
#define PART_NVME                      "nvme"
#define PART_OEMINFO                   "oeminfo"
#define PART_MODEMNVM_BACKUP           "modemnvm_backup"
#define PART_MODEMNVM_IMG              "modemnvm_img"
#define PART_MODEMNVM_SYSTEM           "modemnvm_system"
#define PART_SECURE_STORAGE            "secure_storage"
#define PART_3RDMODEMNVM               "3rdmodemnvm"
#define PART_3RDMODEMNVMBKP            "3rdmodemnvmbkp"
#define PART_PERSIST                   "persist"
#define PART_MODEM_OM                  "modem_om"
#define PART_SPLASH                    "splash"
#define PART_SPLASH2                   "splash2"
#define PART_MISC                      "misc"
#define PART_MODEMNVM_UPDATE           "modemnvm_update"
#define PART_RECOVERY2                 "recovery2"
#define PART_TEEOS                     "teeos"
#define PART_TRUSTFIRMWARE             "trustfirmware"
#define PART_SENSORHUB                 "sensorhub"
#define PART_FW_HIFI                   "fw_hifi"
#define PART_BOOT                      "boot"
#define PART_RECOVERY                  "recovery"
#define PART_DTS                       "dts"
#define PART_MODEM                     "modem"
#define PART_MODEM_DSP                 "modem_dsp"
#define PART_MODEM_DTB                 "modem_dtb"
#define PART_MODEM_FW                  "modem_fw"
#define PART_DFX                       "dfx"
#define PART_3RDMODEM                  "3rdmodem"
#define PART_CACHE                     "cache"
#define PART_HISITEST0                 "hisitest0"
#define PART_HISITEST1                 "hisitest1"
#define PART_HISITEST2                 "hisitest2"
#define PART_SYSTEM                    "system"
#define PART_CUST                      "cust"
#define PART_USERDATA                  "userdata"
#define PART_RESERVED0                 "reserved0"
#define PART_RESERVED1                 "reserved1"
#define PART_RESERVED2                 "reserved2"
#define PART_RESERVED3                 "reserved3"
#define PART_RESERVED4                 "reserved4"
#define PART_RESERVED5                 "reserved5"
#define PART_RESERVED6                 "reserved6"
#define PART_RESERVED7                 "reserved7"
#define PART_RESERVED8                 "reserved8"
#define PART_ISP_BOOT                  "isp_boot"
#define PART_ISP_FIRMWARE              "isp_firmware"
#define PART_ISP_DTS                   "isp_dts"
#define PART_HISEE_FS                  "hisee_fs"
#define PART_HISEE_IMG                 "hisee_img"
#define PART_VECTOR                    "vector"

#endif
