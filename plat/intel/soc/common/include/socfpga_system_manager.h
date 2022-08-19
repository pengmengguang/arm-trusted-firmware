/*
 * Copyright (c) 2019-2022, Intel Corporation. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef SOCFPGA_SYSTEMMANAGER_H
#define SOCFPGA_SYSTEMMANAGER_H

#include "socfpga_plat_def.h"

/* System Manager Register Map */

#define SOCFPGA_SYSMGR_SDMMC				0x28

#define SOCFPGA_SYSMGR_FPGAINTF_EN_2			0x6c

#define SOCFPGA_SYSMGR_EMAC_0				0x44
#define SOCFPGA_SYSMGR_EMAC_1				0x48
#define SOCFPGA_SYSMGR_EMAC_2				0x4c
#define SOCFPGA_SYSMGR_FPGAINTF_EN_3			0x70

#define SOCFPGA_SYSMGR_NOC_TIMEOUT			0xc0
#define SOCFPGA_SYSMGR_NOC_IDLEREQ_SET			0xc4
#define SOCFPGA_SYSMGR_NOC_IDLEREQ_CLR			0xc8
#define SOCFPGA_SYSMGR_NOC_IDLEREQ_VAL			0xcc
#define SOCFPGA_SYSMGR_NOC_IDLEACK			0xd0
#define SOCFPGA_SYSMGR_NOC_IDLESTATUS			0xd4

#define SOCFPGA_SYSMGR_BOOT_SCRATCH_COLD_0		0x200
#define SOCFPGA_SYSMGR_BOOT_SCRATCH_COLD_1		0x204
#define SOCFPGA_SYSMGR_BOOT_SCRATCH_COLD_2		0x208
#define SOCFPGA_SYSMGR_BOOT_SCRATCH_COLD_8		0x220
#define SOCFPGA_SYSMGR_BOOT_SCRATCH_COLD_9		0x224

/* Field Masking */

#define SYSMGR_SDMMC_DRVSEL(x)			(((x) & 0x7) << 0)
#define SYSMGR_SDMMC_SMPLSEL(x)			(((x) & 0x7) << 4)

#define IDLE_DATA_LWSOC2FPGA				BIT(4)
#define IDLE_DATA_SOC2FPGA				BIT(0)
#define IDLE_DATA_MASK		(IDLE_DATA_LWSOC2FPGA | IDLE_DATA_SOC2FPGA)

#define SYSMGR_QSPI_REFCLK_MASK				GENMASK(27, 0)

#define SYSMGR_ECC_OCRAM_MASK				BIT(1)
#define SYSMGR_ECC_DDR0_MASK				BIT(16)
#define SYSMGR_ECC_DDR1_MASK				BIT(17)

/* Macros */

#define SOCFPGA_SYSMGR(_reg)		(SOCFPGA_SYSMGR_REG_BASE \
						+ (SOCFPGA_SYSMGR_##_reg))

#endif /* SOCFPGA_SYSTEMMANAGER_H */
