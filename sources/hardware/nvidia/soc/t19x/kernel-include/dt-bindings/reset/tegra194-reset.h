/*
 * Copyright (c) 2016-2018, NVIDIA CORPORATION. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef BPMP_ABI_MACH_T194_RESET_H
#define BPMP_ABI_MACH_T194_RESET_H

/**
 * @file
 * @defgroup bpmp_reset_ids Reset ID's
 * @brief Identifiers for Resets controllable by firmware
 * @{
 */
#define TEGRA194_RESET_ACTMON			1U
#define TEGRA194_RESET_ADSP_ALL			2U
#define TEGRA194_RESET_AFI			3U
#define TEGRA194_RESET_CAN1			4U
#define TEGRA194_RESET_CAN2			5U
#define TEGRA194_RESET_DLA0			6U
#define TEGRA194_RESET_DLA1			7U
#define TEGRA194_RESET_DPAUX			8U
#define TEGRA194_RESET_DPAUX1			9U
#define TEGRA194_RESET_DPAUX2			10U
#define TEGRA194_RESET_DPAUX3			11U
#define TEGRA194_RESET_EQOS			17U
#define TEGRA194_RESET_GPCDMA			18U
#define TEGRA194_RESET_GPU			19U
#define TEGRA194_RESET_HDA			20U
#define TEGRA194_RESET_HDA2CODEC_2X		21U
#define TEGRA194_RESET_HDA2HDMICODEC		22U
#define TEGRA194_RESET_HOST1X			23U
#define TEGRA194_RESET_I2C1			24U
#define TEGRA194_RESET_I2C10			25U
#define TEGRA194_RESET_RSVD_26			26U
#define TEGRA194_RESET_RSVD_27			27U
#define TEGRA194_RESET_RSVD_28			28U
#define TEGRA194_RESET_I2C2			29U
#define TEGRA194_RESET_I2C3			30U
#define TEGRA194_RESET_I2C4			31U
#define TEGRA194_RESET_I2C6			32U
#define TEGRA194_RESET_I2C7			33U
#define TEGRA194_RESET_I2C8			34U
#define TEGRA194_RESET_I2C9			35U
#define TEGRA194_RESET_ISP			36U
#define TEGRA194_RESET_MIPI_CAL			37U
#define TEGRA194_RESET_MPHY_CLK_CTL		38U
#define TEGRA194_RESET_MPHY_L0_RX		39U
#define TEGRA194_RESET_MPHY_L0_TX		40U
#define TEGRA194_RESET_MPHY_L1_RX		41U
#define TEGRA194_RESET_MPHY_L1_TX		42U
#define TEGRA194_RESET_NVCSI			43U
#define TEGRA194_RESET_NVDEC			44U
#define TEGRA194_RESET_NVDISPLAY0_HEAD0		45U
#define TEGRA194_RESET_NVDISPLAY0_HEAD1		46U
#define TEGRA194_RESET_NVDISPLAY0_HEAD2		47U
#define TEGRA194_RESET_NVDISPLAY0_HEAD3		48U
#define TEGRA194_RESET_NVDISPLAY0_MISC		49U
#define TEGRA194_RESET_NVDISPLAY0_WGRP0		50U
#define TEGRA194_RESET_NVDISPLAY0_WGRP1		51U
#define TEGRA194_RESET_NVDISPLAY0_WGRP2		52U
#define TEGRA194_RESET_NVDISPLAY0_WGRP3		53U
#define TEGRA194_RESET_NVDISPLAY0_WGRP4		54U
#define TEGRA194_RESET_NVDISPLAY0_WGRP5		55U
#define TEGRA194_RESET_RSVD_56			56U
#define TEGRA194_RESET_RSVD_57			57U
#define TEGRA194_RESET_RSVD_58			58U
#define TEGRA194_RESET_NVENC			59U
#define TEGRA194_RESET_NVENC1			60U
#define TEGRA194_RESET_NVJPG			61U
#define TEGRA194_RESET_PCIE			62U
#define TEGRA194_RESET_PCIEXCLK			63U
#define TEGRA194_RESET_RSVD_64			64U
#define TEGRA194_RESET_RSVD_65			65U
#define TEGRA194_RESET_PVA0_ALL			66U
#define TEGRA194_RESET_PVA1_ALL			67U
#define TEGRA194_RESET_PWM1			68U
#define TEGRA194_RESET_PWM2			69U
#define TEGRA194_RESET_PWM3			70U
#define TEGRA194_RESET_PWM4			71U
#define TEGRA194_RESET_PWM5			72U
#define TEGRA194_RESET_PWM6			73U
#define TEGRA194_RESET_PWM7			74U
#define TEGRA194_RESET_PWM8			75U
#define TEGRA194_RESET_QSPI0			76U
#define TEGRA194_RESET_QSPI1			77U
#define TEGRA194_RESET_SATA			78U
#define TEGRA194_RESET_SATACOLD			79U
#define TEGRA194_RESET_SCE_ALL			80U
#define TEGRA194_RESET_RCE_ALL			81U
#define TEGRA194_RESET_SDMMC1			82U
#define TEGRA194_RESET_RSVD_83			83U
#define TEGRA194_RESET_SDMMC3			84U
#define TEGRA194_RESET_SDMMC4			85U
#define TEGRA194_RESET_SE			86U
#define TEGRA194_RESET_SOR0			87U
#define TEGRA194_RESET_SOR1			88U
#define TEGRA194_RESET_SOR2			89U
#define TEGRA194_RESET_SOR3			90U
#define TEGRA194_RESET_SPI1			91U
#define TEGRA194_RESET_SPI2			92U
#define TEGRA194_RESET_SPI3			93U
#define TEGRA194_RESET_SPI4			94U
#define TEGRA194_RESET_TACH			95U
#define TEGRA194_RESET_RSVD_96			96U
#define TEGRA194_RESET_TSCTNVI			97U
#define TEGRA194_RESET_TSEC			98U
#define TEGRA194_RESET_TSECB			99U
#define TEGRA194_RESET_UARTA			100U
#define TEGRA194_RESET_UARTB			101U
#define TEGRA194_RESET_UARTC			102U
#define TEGRA194_RESET_UARTD			103U
#define TEGRA194_RESET_UARTE			104U
#define TEGRA194_RESET_UARTF			105U
#define TEGRA194_RESET_UARTG			106U
#define TEGRA194_RESET_UARTH			107U
#define TEGRA194_RESET_UFSHC			108U
#define TEGRA194_RESET_UFSHC_AXI_M		109U
#define TEGRA194_RESET_UFSHC_LP_SEQ		110U
#define TEGRA194_RESET_RSVD_111			111U
#define TEGRA194_RESET_VI			112U
#define TEGRA194_RESET_VIC			113U
#define TEGRA194_RESET_XUSB_PADCTL		114U
#define TEGRA194_RESET_NVDEC1			115U
#define TEGRA194_RESET_PEX0_CORE_0		116U
#define TEGRA194_RESET_PEX0_CORE_1		117U
#define TEGRA194_RESET_PEX0_CORE_2		118U
#define TEGRA194_RESET_PEX0_CORE_3		119U
#define TEGRA194_RESET_PEX0_CORE_4		120U
#define TEGRA194_RESET_PEX0_CORE_0_APB		121U
#define TEGRA194_RESET_PEX0_CORE_1_APB		122U
#define TEGRA194_RESET_PEX0_CORE_2_APB		123U
#define TEGRA194_RESET_PEX0_CORE_3_APB		124U
#define TEGRA194_RESET_PEX0_CORE_4_APB		125U
#define TEGRA194_RESET_PEX0_COMMON_APB		126U
#define TEGRA194_RESET_SLVSEC			127U
#define TEGRA194_RESET_NVLINK			128U
#define TEGRA194_RESET_PEX1_CORE_5		129U
#define TEGRA194_RESET_PEX1_CORE_5_APB		130U
#define TEGRA194_RESET_CVNAS			131U
#define TEGRA194_RESET_CVNAS_FCM		132U
#define TEGRA194_RESET_NVHS_UPHY		133U
#define TEGRA194_RESET_NVHS_UPHY_PLL0		134U
#define TEGRA194_RESET_NVHS_UPHY_L0		135U
#define TEGRA194_RESET_NVHS_UPHY_L1		136U
#define TEGRA194_RESET_NVHS_UPHY_L2		137U
#define TEGRA194_RESET_NVHS_UPHY_L3		138U
#define TEGRA194_RESET_NVHS_UPHY_L4		139U
#define TEGRA194_RESET_NVHS_UPHY_L5		140U
#define TEGRA194_RESET_NVHS_UPHY_L6		141U
#define TEGRA194_RESET_NVHS_UPHY_L7		142U
#define TEGRA194_RESET_NVHS_UPHY_PM		143U
#define TEGRA194_RESET_DMIC5			144U
#define TEGRA194_RESET_APE			145U
#define TEGRA194_RESET_PEX_USB_UPHY		146U
#define TEGRA194_RESET_PEX_USB_UPHY_L0		147U
#define TEGRA194_RESET_PEX_USB_UPHY_L1		148U
#define TEGRA194_RESET_PEX_USB_UPHY_L2		149U
#define TEGRA194_RESET_PEX_USB_UPHY_L3		150U
#define TEGRA194_RESET_PEX_USB_UPHY_L4		151U
#define TEGRA194_RESET_PEX_USB_UPHY_L5		152U
#define TEGRA194_RESET_PEX_USB_UPHY_L6		153U
#define TEGRA194_RESET_PEX_USB_UPHY_L7		154U
#define TEGRA194_RESET_PEX_USB_UPHY_L8		155U
#define TEGRA194_RESET_PEX_USB_UPHY_L9		156U
#define TEGRA194_RESET_PEX_USB_UPHY_L10		157U
#define TEGRA194_RESET_PEX_USB_UPHY_L11		158U
#define TEGRA194_RESET_PEX_USB_UPHY_PLL0	159U
#define TEGRA194_RESET_PEX_USB_UPHY_PLL1	160U
#define TEGRA194_RESET_PEX_USB_UPHY_PLL2	161U
#define TEGRA194_RESET_PEX_USB_UPHY_PLL3	162U
#define TEGRA194_RESET_MSSNVL			180U

/** @} */

#endif
