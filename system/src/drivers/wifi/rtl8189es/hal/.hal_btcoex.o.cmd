cmd_/home2/Kay2/SDK_backup/1395/Android_P_AOSP/190116/trunk-9.0/1395_ANDROID_P_AOSP_190116_SDK/phoenix/system/src/drivers/wifi/rtl8189es/hal/hal_btcoex.o := arm-linux-gnueabi-gcc -Wp,-MD,/home2/Kay2/SDK_backup/1395/Android_P_AOSP/190116/trunk-9.0/1395_ANDROID_P_AOSP_190116_SDK/phoenix/system/src/drivers/wifi/rtl8189es/hal/.hal_btcoex.o.d  -nostdinc -isystem /home2/Kay2/SDK_backup/1395/Android_P_AOSP/190116/trunk-9.0/1395_ANDROID_P_AOSP_190116_SDK/phoenix/toolchain/asdk-6.4.1-a53-EL-4.9-g2.26-a32nut-180831/bin/../lib/gcc/arm-linux-gnueabi/6.4.1/include -I./arch/arm/include -I./arch/arm/include/generated/uapi -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-rtd139x/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-PIE -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv8-a -msoft-float -Uarm -fno-delete-null-pointer-checks -Wno-frame-address -O2 --param=allow-store-data-races=0 -DCC_HAVE_ASM_GOTO -Wframe-larger-than=1024 -fstack-protector-strong -Wno-unused-but-set-variable -Wno-unused-const-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -g -pg -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fno-merge-all-constants -fmerge-constants -fno-stack-check -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -Werror=date-time -Werror=incompatible-pointer-types -O1 -Wno-unused-variable -Wno-unused-value -Wno-unused-label -Wno-unused-parameter -Wno-unused-function -Wno-unused -Wno-date-time -I/home2/Kay2/SDK_backup/1395/Android_P_AOSP/190116/trunk-9.0/1395_ANDROID_P_AOSP_190116_SDK/phoenix/system/src/drivers/wifi/rtl8189es/include -I/home2/Kay2/SDK_backup/1395/Android_P_AOSP/190116/trunk-9.0/1395_ANDROID_P_AOSP_190116_SDK/phoenix/system/src/drivers/wifi/rtl8189es/platform -I/home2/Kay2/SDK_backup/1395/Android_P_AOSP/190116/trunk-9.0/1395_ANDROID_P_AOSP_190116_SDK/phoenix/system/src/drivers/wifi/rtl8189es/hal/btc -DCONFIG_RTL8188E -DCONFIG_MP_INCLUDED -DCONFIG_POWER_SAVING -DCONFIG_EFUSE_CONFIG_FILE -DEFUSE_MAP_PATH=\"/system/etc/wifi/wifi_efuse_8189e.map\" -DWIFIMAC_PATH=\"/data/wifimac.txt\" -DCONFIG_LOAD_PHY_PARA_FROM_FILE -DREALTEK_CONFIG_PATH=\"/lib/firmware/\" -DCONFIG_TXPWR_BY_RATE_EN=1 -DCONFIG_TXPWR_LIMIT_EN=0 -DCONFIG_RTW_ADAPTIVITY_EN=0 -DCONFIG_RTW_ADAPTIVITY_MODE=0 -DCONFIG_RTW_SDIO_PM_KEEP_POWER -DCONFIG_BR_EXT '-DCONFIG_BR_EXT_BRNAME="'br0'"' -DCONFIG_RTW_NAPI -DCONFIG_RTW_GRO -DCONFIG_RTW_NETIF_SG -DCONFIG_RTW_WIFI_HAL -DCONFIG_RTW_CFGVEDNOR_LLSTATS -DCONFIG_RTW_DEBUG -DRTW_LOG_LEVEL=4 -DDM_ODM_SUPPORT_TYPE=0x04 -DCONFIG_LITTLE_ENDIAN -DCONFIG_TRAFFIC_PROTECT -DCONFIG_CONCURRENT_MODE -DCONFIG_IOCTL_CFG80211 -DRTW_USE_CFG80211_STA_EVENT -DCONFIG_QOS_OPTIMIZATION -Wno-error=date-time -DCONFIG_RADIO_WORK -I/home2/Kay2/SDK_backup/1395/Android_P_AOSP/190116/trunk-9.0/1395_ANDROID_P_AOSP_190116_SDK/phoenix/system/src/drivers/wifi/rtl8189es/hal/phydm   -DMODULE  -DKBUILD_BASENAME='"hal_btcoex"'  -DKBUILD_MODNAME='"8189es"' -c -o /home2/Kay2/SDK_backup/1395/Android_P_AOSP/190116/trunk-9.0/1395_ANDROID_P_AOSP_190116_SDK/phoenix/system/src/drivers/wifi/rtl8189es/hal/.tmp_hal_btcoex.o /home2/Kay2/SDK_backup/1395/Android_P_AOSP/190116/trunk-9.0/1395_ANDROID_P_AOSP_190116_SDK/phoenix/system/src/drivers/wifi/rtl8189es/hal/hal_btcoex.c

source_/home2/Kay2/SDK_backup/1395/Android_P_AOSP/190116/trunk-9.0/1395_ANDROID_P_AOSP_190116_SDK/phoenix/system/src/drivers/wifi/rtl8189es/hal/hal_btcoex.o := /home2/Kay2/SDK_backup/1395/Android_P_AOSP/190116/trunk-9.0/1395_ANDROID_P_AOSP_190116_SDK/phoenix/system/src/drivers/wifi/rtl8189es/hal/hal_btcoex.c

deps_/home2/Kay2/SDK_backup/1395/Android_P_AOSP/190116/trunk-9.0/1395_ANDROID_P_AOSP_190116_SDK/phoenix/system/src/drivers/wifi/rtl8189es/hal/hal_btcoex.o := \
    $(wildcard include/config/bt/coexist.h) \
    $(wildcard include/config/lps/lclk.h) \
    $(wildcard include/config/mcc/mode.h) \
    $(wildcard include/config/p2p.h) \
    $(wildcard include/config/bt/coexist/socket/trx.h) \
    $(wildcard include/config/rf4ce/coexist.h) \
    $(wildcard include/config/rtl8192e.h) \
    $(wildcard include/config/rtl8821a.h) \
    $(wildcard include/config/rtl8723b.h) \
    $(wildcard include/config/rtl8812a.h) \
    $(wildcard include/config/rtl8703b.h) \
    $(wildcard include/config/rtl8822b.h) \
    $(wildcard include/config/rtl8723d.h) \
    $(wildcard include/config/rtl8821c.h) \
    $(wildcard include/config/pci/hci.h) \
    $(wildcard include/config/usb/hci.h) \
    $(wildcard include/config/sdio/hci.h) \
    $(wildcard include/config/gspi/hci.h) \
    $(wildcard include/config/fw/multi/port/support.h) \
    $(wildcard include/config/load/phy/para/from/file.h) \

/home2/Kay2/SDK_backup/1395/Android_P_AOSP/190116/trunk-9.0/1395_ANDROID_P_AOSP_190116_SDK/phoenix/system/src/drivers/wifi/rtl8189es/hal/hal_btcoex.o: $(deps_/home2/Kay2/SDK_backup/1395/Android_P_AOSP/190116/trunk-9.0/1395_ANDROID_P_AOSP_190116_SDK/phoenix/system/src/drivers/wifi/rtl8189es/hal/hal_btcoex.o)

$(deps_/home2/Kay2/SDK_backup/1395/Android_P_AOSP/190116/trunk-9.0/1395_ANDROID_P_AOSP_190116_SDK/phoenix/system/src/drivers/wifi/rtl8189es/hal/hal_btcoex.o):
