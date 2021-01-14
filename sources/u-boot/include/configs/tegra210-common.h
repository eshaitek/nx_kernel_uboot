/*
 * Copyright (c) 2013-2020, NVIDIA CORPORATION. All rights reserved.
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */

#ifndef _TEGRA210_COMMON_H_
#define _TEGRA210_COMMON_H_

#include "tegra-common.h"

/* Cortex-A57 uses a cache line size of 64 bytes */
#define CONFIG_SYS_CACHELINE_SIZE	64

/*
 * NS16550 Configuration
 */
#define V_NS16550_CLK		408000000	/* 408MHz (pllp_out0) */

/*-----------------------------------------------------------------------
 * Physical Memory Map
 */
#define CONFIG_SYS_TEXT_BASE	0x80080000	/* chainloaded as faux kernel */

/* Generic Interrupt Controller */
#define CONFIG_GICV2

/* Offset of environment data in flash map from boot1 end */
#define OFFSET_OF_UBOOT_ENV	0x28000

/*
 * Memory layout for where various images get loaded by boot scripts:
 *
 * scriptaddr can be pretty much anywhere that doesn't conflict with something
 *   else. Put it above BOOTMAPSZ to eliminate conflicts.
 *
 * pxefile_addr_r can be pretty much anywhere that doesn't conflict with
 *   something else. Put it above BOOTMAPSZ to eliminate conflicts.
 *
 * kernel_addr_r must be within the first 128M of RAM in order for the
 *   kernel's CONFIG_AUTO_ZRELADDR option to work. Since the kernel will
 *   decompress itself to 0x8000 after the start of RAM, kernel_addr_r
 *   should not overlap that area, or the kernel will have to copy itself
 *   somewhere else before decompression. Similarly, the address of any other
 *   data passed to the kernel shouldn't overlap the start of RAM. Pushing
 *   this up to 512K allows for a sizable kernel to be decompressed below the
 *   compressed load address.
 *
 * fdt_addr_r simply shouldn't overlap anything else. Choosing 40M allows for
 *   the compressed kernel to be up to 16M too.
 *
 * ramdisk_addr_r simply shouldn't overlap anything else. Choosing 50M allows
 *   for the FDT/DTB to be up to 1M, which is hopefully plenty.
 */
#define CONFIG_LOADADDR 0x80080000
#define MEM_LAYOUT_ENV_SETTINGS \
	"scriptaddr=0x90000000\0" \
	"pxefile_addr_r=0x90100000\0" \
	"kernel_addr_r=" __stringify(CONFIG_LOADADDR) "\0" \
	"fdt_addr_r=0x83000000\0" \
	"ramdisk_addr_r=0x83200000\0" \
	"calculated_vars=kernel_addr_r fdt_addr_r scriptaddr pxefile_addr_r " \
		"ramdisk_addr_r\0" \
	"kernel_addr_r_align=00200000\0" \
	"kernel_addr_r_offset=00080000\0" \
	"kernel_addr_r_size=08000000\0" \
	"kernel_addr_r_aliases=loadaddr\0" \
	"fdt_addr_r_align=00200000\0" \
	"fdt_addr_r_offset=00000000\0" \
	"fdt_addr_r_size=00200000\0" \
	"scriptaddr_align=00200000\0" \
	"scriptaddr_offset=00000000\0" \
	"scriptaddr_size=00200000\0" \
	"pxefile_addr_r_align=00200000\0" \
	"pxefile_addr_r_offset=00000000\0" \
	"pxefile_addr_r_size=00200000\0" \
	"ramdisk_addr_r_align=00200000\0" \
	"ramdisk_addr_r_offset=00000000\0" \
	"ramdisk_addr_r_size=02000000\0" \
	"fdt_del_prop_paths=/pinmux@700008d4/pinctrl-names\0" \
	"fdt_copy_node_paths=" \
		"/chosen/plugin-manager:" \
		"/chosen/reset:" \
		"/chosen/display-board:" \
		"/chosen/proc-board:" \
		"/chosen/pmu-board:" \
		"/external-memory-controller@7001b000:" \
		"/memory@80000000\0" \
	"fdt_copy_prop_paths=" \
		"/bpmp/carveout-start:" \
		"/bpmp/carveout-size:" \
		"/chosen/nvidia,ethernet-mac:" \
		"/chosen/uuid:" \
		"/chosen/linux,initrd-start:" \
		"/chosen/linux,initrd-end:" \
		"/psci/nvidia,system-lp0-disable:" \
		"/serial-number\0"

/* For USB EHCI controller */
#define CONFIG_EHCI_IS_TDI
#define CONFIG_USB_EHCI_TXFIFO_THRESH	0x10
#define CONFIG_SYS_USB_EHCI_MAX_ROOT_PORTS 1

/* GPU needs setup */
#define CONFIG_TEGRA_GPU

/* PMC secure access */
#define CONFIG_ACCESS_PMC_VIA_SMC

#endif /* _TEGRA210_COMMON_H_ */
