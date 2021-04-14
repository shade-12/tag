/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2_gen2_0' in SOPC Builder design 'tag_nios_system'
 * SOPC Builder design path: D:/tag2/de1_hardware/hps_fpga/tag_nios_system.sopcinfo
 *
 * Generated: Mon Apr 12 15:57:57 PDT 2021
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * ARM_A9_HPS_L2 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_L2_BASE 0xfffef000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_L2_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_L2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_L2_NAME "/dev/ARM_A9_HPS_L2"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_L2_SPAN 4096
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_L2_TYPE "L2"


/*
 * ARM_A9_HPS_arm_gic_0 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_ARM_GIC_0_BASE 0xfffed000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_ARM_GIC_0_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_ARM_GIC_0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_ARM_GIC_0_NAME "/dev/ARM_A9_HPS_arm_gic_0"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_ARM_GIC_0_SPAN 4096
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_ARM_GIC_0_TYPE "arm_gic"


/*
 * ARM_A9_HPS_axi_ocram configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_AXI_OCRAM_BASE 0xffff0000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_AXI_OCRAM_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_AXI_OCRAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_AXI_OCRAM_NAME "/dev/ARM_A9_HPS_axi_ocram"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_AXI_OCRAM_SIZE_MULTIPLE 1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_AXI_OCRAM_SIZE_VALUE 1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_AXI_OCRAM_SPAN 65536
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_AXI_OCRAM_TYPE "axi_ocram"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_AXI_OCRAM_WRITABLE 1


/*
 * ARM_A9_HPS_axi_sdram configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_AXI_SDRAM_BASE 0x0
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_AXI_SDRAM_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_AXI_SDRAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_AXI_SDRAM_NAME "/dev/ARM_A9_HPS_axi_sdram"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_AXI_SDRAM_SIZE_MULTIPLE 1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_AXI_SDRAM_SIZE_VALUE 1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_AXI_SDRAM_SPAN 2147483648
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_AXI_SDRAM_TYPE "axi_sdram"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_AXI_SDRAM_WRITABLE 1


/*
 * ARM_A9_HPS_clkmgr configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_CLKMGR_BASE 0xffd04000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_CLKMGR_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_CLKMGR_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_CLKMGR_NAME "/dev/ARM_A9_HPS_clkmgr"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_CLKMGR_SPAN 4096
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_CLKMGR_TYPE "clkmgr"


/*
 * ARM_A9_HPS_dcan0 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_DCAN0_BASE 0xffc00000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_DCAN0_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_DCAN0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_DCAN0_NAME "/dev/ARM_A9_HPS_dcan0"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_DCAN0_SPAN 4096
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_DCAN0_TYPE "bosch_dcan"


/*
 * ARM_A9_HPS_dcan1 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_DCAN1_BASE 0xffc01000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_DCAN1_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_DCAN1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_DCAN1_NAME "/dev/ARM_A9_HPS_dcan1"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_DCAN1_SPAN 4096
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_DCAN1_TYPE "bosch_dcan"


/*
 * ARM_A9_HPS_dma configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_DMA_BASE 0xffe01000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_DMA_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_DMA_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_DMA_NAME "/dev/ARM_A9_HPS_dma"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_DMA_SPAN 4096
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_DMA_TYPE "dma"


/*
 * ARM_A9_HPS_fpgamgr configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_FPGAMGR_BASE 0xff706000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_FPGAMGR_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_FPGAMGR_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_FPGAMGR_NAME "/dev/ARM_A9_HPS_fpgamgr"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_FPGAMGR_SPAN 4096
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_FPGAMGR_TYPE "fpgamgr"


/*
 * ARM_A9_HPS_gmac0 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GMAC0_BASE 0xff700000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GMAC0_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GMAC0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GMAC0_NAME "/dev/ARM_A9_HPS_gmac0"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GMAC0_SPAN 8192
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GMAC0_TYPE "stmmac"


/*
 * ARM_A9_HPS_gmac1 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GMAC1_BASE 0xff702000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GMAC1_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GMAC1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GMAC1_NAME "/dev/ARM_A9_HPS_gmac1"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GMAC1_SPAN 8192
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GMAC1_TYPE "stmmac"


/*
 * ARM_A9_HPS_gpio0 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GPIO0_BASE 0xff708000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GPIO0_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GPIO0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GPIO0_NAME "/dev/ARM_A9_HPS_gpio0"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GPIO0_SPAN 256
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GPIO0_TYPE "dw_gpio"


/*
 * ARM_A9_HPS_gpio1 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GPIO1_BASE 0xff709000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GPIO1_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GPIO1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GPIO1_NAME "/dev/ARM_A9_HPS_gpio1"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GPIO1_SPAN 256
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GPIO1_TYPE "dw_gpio"


/*
 * ARM_A9_HPS_gpio2 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GPIO2_BASE 0xff70a000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GPIO2_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GPIO2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GPIO2_NAME "/dev/ARM_A9_HPS_gpio2"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GPIO2_SPAN 256
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_GPIO2_TYPE "dw_gpio"


/*
 * ARM_A9_HPS_i2c0 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C0_BASE 0xffc04000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C0_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C0_NAME "/dev/ARM_A9_HPS_i2c0"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C0_SPAN 256
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C0_TYPE "designware_i2c"


/*
 * ARM_A9_HPS_i2c1 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C1_BASE 0xffc05000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C1_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C1_NAME "/dev/ARM_A9_HPS_i2c1"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C1_SPAN 256
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C1_TYPE "designware_i2c"


/*
 * ARM_A9_HPS_i2c2 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C2_BASE 0xffc06000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C2_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C2_NAME "/dev/ARM_A9_HPS_i2c2"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C2_SPAN 256
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C2_TYPE "designware_i2c"


/*
 * ARM_A9_HPS_i2c3 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C3_BASE 0xffc07000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C3_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C3_NAME "/dev/ARM_A9_HPS_i2c3"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C3_SPAN 256
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_I2C3_TYPE "designware_i2c"


/*
 * ARM_A9_HPS_l3regs configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_L3REGS_BASE 0xff800000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_L3REGS_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_L3REGS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_L3REGS_NAME "/dev/ARM_A9_HPS_l3regs"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_L3REGS_SPAN 4096
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_L3REGS_TYPE "l3regs"


/*
 * ARM_A9_HPS_nand0 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_NAND0_BASE 0xff900000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_NAND0_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_NAND0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_NAND0_NAME "/dev/ARM_A9_HPS_nand0"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_NAND0_SPAN 65536
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_NAND0_TYPE "denali_nand"


/*
 * ARM_A9_HPS_qspi configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_QSPI_BASE 0xff705000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_QSPI_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_QSPI_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_QSPI_NAME "/dev/ARM_A9_HPS_qspi"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_QSPI_SPAN 256
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_QSPI_TYPE "qspi"


/*
 * ARM_A9_HPS_rstmgr configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_RSTMGR_BASE 0xffd05000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_RSTMGR_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_RSTMGR_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_RSTMGR_NAME "/dev/ARM_A9_HPS_rstmgr"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_RSTMGR_SPAN 256
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_RSTMGR_TYPE "rstmgr"


/*
 * ARM_A9_HPS_sdmmc configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SDMMC_BASE 0xff704000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SDMMC_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SDMMC_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SDMMC_NAME "/dev/ARM_A9_HPS_sdmmc"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SDMMC_SPAN 4096
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SDMMC_TYPE "sdmmc"


/*
 * ARM_A9_HPS_sdrctl configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SDRCTL_BASE 0xffc25000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SDRCTL_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SDRCTL_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SDRCTL_NAME "/dev/ARM_A9_HPS_sdrctl"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SDRCTL_SPAN 4096
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SDRCTL_TYPE "sdrctl"


/*
 * ARM_A9_HPS_spim0 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SPIM0_BASE 0xfff00000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SPIM0_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SPIM0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SPIM0_NAME "/dev/ARM_A9_HPS_spim0"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SPIM0_SPAN 256
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SPIM0_TYPE "spi"


/*
 * ARM_A9_HPS_spim1 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SPIM1_BASE 0xfff01000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SPIM1_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SPIM1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SPIM1_NAME "/dev/ARM_A9_HPS_spim1"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SPIM1_SPAN 256
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SPIM1_TYPE "spi"


/*
 * ARM_A9_HPS_sysmgr configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SYSMGR_BASE 0xffd08000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SYSMGR_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SYSMGR_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SYSMGR_NAME "/dev/ARM_A9_HPS_sysmgr"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SYSMGR_SPAN 1024
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_SYSMGR_TYPE "sysmgr"


/*
 * ARM_A9_HPS_timer configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER_BASE 0xfffec600
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER_NAME "/dev/ARM_A9_HPS_timer"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER_SPAN 256
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER_TYPE "timer"


/*
 * ARM_A9_HPS_timer0 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER0_BASE 0xffc08000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER0_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER0_NAME "/dev/ARM_A9_HPS_timer0"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER0_SPAN 256
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER0_TYPE "dw_apb_timer_sp"


/*
 * ARM_A9_HPS_timer1 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER1_BASE 0xffc09000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER1_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER1_NAME "/dev/ARM_A9_HPS_timer1"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER1_SPAN 256
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER1_TYPE "dw_apb_timer_sp"


/*
 * ARM_A9_HPS_timer2 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER2_BASE 0xffd00000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER2_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER2_NAME "/dev/ARM_A9_HPS_timer2"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER2_SPAN 256
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER2_TYPE "dw_apb_timer_osc"


/*
 * ARM_A9_HPS_timer3 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER3_BASE 0xffd01000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER3_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER3_NAME "/dev/ARM_A9_HPS_timer3"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER3_SPAN 256
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_TIMER3_TYPE "dw_apb_timer_osc"


/*
 * ARM_A9_HPS_uart0 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART0_BASE 0xffc02000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART0_FIFO_DEPTH 128
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART0_FIFO_HWFC 0
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART0_FIFO_MODE 1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART0_FIFO_SWFC 0
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART0_FREQ 100000000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART0_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART0_NAME "/dev/ARM_A9_HPS_uart0"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART0_SPAN 256
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART0_TYPE "snps_uart"


/*
 * ARM_A9_HPS_uart1 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART1_BASE 0xffc03000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART1_FIFO_DEPTH 128
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART1_FIFO_HWFC 0
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART1_FIFO_MODE 1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART1_FIFO_SWFC 0
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART1_FREQ 100000000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART1_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART1_NAME "/dev/ARM_A9_HPS_uart1"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART1_SPAN 256
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_UART1_TYPE "snps_uart"


/*
 * ARM_A9_HPS_usb0 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_USB0_BASE 0xffb00000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_USB0_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_USB0_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_USB0_NAME "/dev/ARM_A9_HPS_usb0"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_USB0_SPAN 262144
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_USB0_TYPE "usb"


/*
 * ARM_A9_HPS_usb1 configuration as viewed by dma_fpga_to_hps_write_master
 *
 */

#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_USB1_BASE 0xffb40000
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_USB1_IRQ -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_USB1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_USB1_NAME "/dev/ARM_A9_HPS_usb1"
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_USB1_SPAN 262144
#define DMA_FPGA_TO_HPS_WRITE_MASTER_ARM_A9_HPS_USB1_TYPE "usb"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00000820
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1c
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x08000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0x1c
#define ALT_CPU_NAME "nios2_gen2_0"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x08000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00000820
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x1c
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x08000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0x1c
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x08000000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_DMA
#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_NIOS2_GEN2
#define __ALTERA_UP_AVALON_RS232


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_IRQ_BASE NULL
#define ALT_LEGACY_INTERRUPT_API_PRESENT
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_0"
#define ALT_STDERR_BASE 0x1000
#define ALT_STDERR_DEV jtag_uart_0
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_0"
#define ALT_STDIN_BASE 0x1000
#define ALT_STDIN_DEV jtag_uart_0
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_0"
#define ALT_STDOUT_BASE 0x1000
#define ALT_STDOUT_DEV jtag_uart_0
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "tag_nios_system"


/*
 * bt_rs232_uart configuration
 *
 */

#define ALT_MODULE_CLASS_bt_rs232_uart altera_up_avalon_rs232
#define BT_RS232_UART_BASE 0x0
#define BT_RS232_UART_IRQ 1
#define BT_RS232_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define BT_RS232_UART_NAME "/dev/bt_rs232_uart"
#define BT_RS232_UART_SPAN 8
#define BT_RS232_UART_TYPE "altera_up_avalon_rs232"


/*
 * dma_fpga_to_hps configuration
 *
 */

#define ALT_MODULE_CLASS_dma_fpga_to_hps altera_avalon_dma
#define DMA_FPGA_TO_HPS_ALLOW_BYTE_TRANSACTIONS 1
#define DMA_FPGA_TO_HPS_ALLOW_DOUBLEWORD_TRANSACTIONS 1
#define DMA_FPGA_TO_HPS_ALLOW_HW_TRANSACTIONS 1
#define DMA_FPGA_TO_HPS_ALLOW_QUADWORD_TRANSACTIONS 1
#define DMA_FPGA_TO_HPS_ALLOW_WORD_TRANSACTIONS 1
#define DMA_FPGA_TO_HPS_BASE 0x40
#define DMA_FPGA_TO_HPS_IRQ 3
#define DMA_FPGA_TO_HPS_IRQ_INTERRUPT_CONTROLLER_ID 0
#define DMA_FPGA_TO_HPS_LENGTHWIDTH 16
#define DMA_FPGA_TO_HPS_MAX_BURST_SIZE 128
#define DMA_FPGA_TO_HPS_NAME "/dev/dma_fpga_to_hps"
#define DMA_FPGA_TO_HPS_SPAN 64
#define DMA_FPGA_TO_HPS_TYPE "altera_avalon_dma"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart_0 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_0 altera_avalon_jtag_uart
#define JTAG_UART_0_BASE 0x1000
#define JTAG_UART_0_IRQ 0
#define JTAG_UART_0_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_0_NAME "/dev/jtag_uart_0"
#define JTAG_UART_0_READ_DEPTH 64
#define JTAG_UART_0_READ_THRESHOLD 8
#define JTAG_UART_0_SPAN 16
#define JTAG_UART_0_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_0_WRITE_DEPTH 64
#define JTAG_UART_0_WRITE_THRESHOLD 8


/*
 * leds configuration
 *
 */

#define ALT_MODULE_CLASS_leds altera_avalon_pio
#define LEDS_BASE 0x1010
#define LEDS_BIT_CLEARING_EDGE_REGISTER 0
#define LEDS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDS_CAPTURE 0
#define LEDS_DATA_WIDTH 10
#define LEDS_DO_TEST_BENCH_WIRING 0
#define LEDS_DRIVEN_SIM_VALUE 0
#define LEDS_EDGE_TYPE "NONE"
#define LEDS_FREQ 50000000
#define LEDS_HAS_IN 0
#define LEDS_HAS_OUT 1
#define LEDS_HAS_TRI 0
#define LEDS_IRQ -1
#define LEDS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDS_IRQ_TYPE "NONE"
#define LEDS_NAME "/dev/leds"
#define LEDS_RESET_VALUE 0
#define LEDS_SPAN 32
#define LEDS_TYPE "altera_avalon_pio"


/*
 * sdram_controller configuration
 *
 */

#define ALT_MODULE_CLASS_sdram_controller altera_avalon_new_sdram_controller
#define SDRAM_CONTROLLER_BASE 0x8000000
#define SDRAM_CONTROLLER_CAS_LATENCY 3
#define SDRAM_CONTROLLER_CONTENTS_INFO
#define SDRAM_CONTROLLER_INIT_NOP_DELAY 0.0
#define SDRAM_CONTROLLER_INIT_REFRESH_COMMANDS 2
#define SDRAM_CONTROLLER_IRQ -1
#define SDRAM_CONTROLLER_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SDRAM_CONTROLLER_IS_INITIALIZED 1
#define SDRAM_CONTROLLER_NAME "/dev/sdram_controller"
#define SDRAM_CONTROLLER_POWERUP_DELAY 100.0
#define SDRAM_CONTROLLER_REFRESH_PERIOD 7.8125
#define SDRAM_CONTROLLER_REGISTER_DATA_IN 1
#define SDRAM_CONTROLLER_SDRAM_ADDR_WIDTH 0x19
#define SDRAM_CONTROLLER_SDRAM_BANK_WIDTH 2
#define SDRAM_CONTROLLER_SDRAM_COL_WIDTH 10
#define SDRAM_CONTROLLER_SDRAM_DATA_WIDTH 16
#define SDRAM_CONTROLLER_SDRAM_NUM_BANKS 4
#define SDRAM_CONTROLLER_SDRAM_NUM_CHIPSELECTS 1
#define SDRAM_CONTROLLER_SDRAM_ROW_WIDTH 13
#define SDRAM_CONTROLLER_SHARED_DATA 0
#define SDRAM_CONTROLLER_SIM_MODEL_BASE 1
#define SDRAM_CONTROLLER_SPAN 67108864
#define SDRAM_CONTROLLER_STARVATION_INDICATOR 0
#define SDRAM_CONTROLLER_TRISTATE_BRIDGE_SLAVE ""
#define SDRAM_CONTROLLER_TYPE "altera_avalon_new_sdram_controller"
#define SDRAM_CONTROLLER_T_AC 5.4
#define SDRAM_CONTROLLER_T_MRD 3
#define SDRAM_CONTROLLER_T_RCD 15.0
#define SDRAM_CONTROLLER_T_RFC 70.0
#define SDRAM_CONTROLLER_T_RP 15.0
#define SDRAM_CONTROLLER_T_WR 14.0


/*
 * sdram_controller configuration as viewed by dma_fpga_to_hps_read_master
 *
 */

#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_BASE 0x8000000
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_CAS_LATENCY 3
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_CONTENTS_INFO
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_INIT_NOP_DELAY 0.0
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_INIT_REFRESH_COMMANDS 2
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_IRQ -1
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_IS_INITIALIZED 1
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_NAME "/dev/sdram_controller"
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_POWERUP_DELAY 100.0
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_REFRESH_PERIOD 7.8125
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_REGISTER_DATA_IN 1
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_SDRAM_ADDR_WIDTH 0x19
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_SDRAM_BANK_WIDTH 2
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_SDRAM_COL_WIDTH 10
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_SDRAM_DATA_WIDTH 16
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_SDRAM_NUM_BANKS 4
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_SDRAM_NUM_CHIPSELECTS 1
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_SDRAM_ROW_WIDTH 13
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_SHARED_DATA 0
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_SIM_MODEL_BASE 1
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_SPAN 67108864
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_STARVATION_INDICATOR 0
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_TRISTATE_BRIDGE_SLAVE ""
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_TYPE "altera_avalon_new_sdram_controller"
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_T_AC 5.4
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_T_MRD 3
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_T_RCD 15.0
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_T_RFC 70.0
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_T_RP 15.0
#define DMA_FPGA_TO_HPS_READ_MASTER_SDRAM_CONTROLLER_T_WR 14.0


/*
 * switches configuration
 *
 */

#define ALT_MODULE_CLASS_switches altera_avalon_pio
#define SWITCHES_BASE 0x70
#define SWITCHES_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCHES_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCHES_CAPTURE 0
#define SWITCHES_DATA_WIDTH 10
#define SWITCHES_DO_TEST_BENCH_WIRING 0
#define SWITCHES_DRIVEN_SIM_VALUE 0
#define SWITCHES_EDGE_TYPE "NONE"
#define SWITCHES_FREQ 50000000
#define SWITCHES_HAS_IN 1
#define SWITCHES_HAS_OUT 0
#define SWITCHES_HAS_TRI 0
#define SWITCHES_IRQ -1
#define SWITCHES_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SWITCHES_IRQ_TYPE "NONE"
#define SWITCHES_NAME "/dev/switches"
#define SWITCHES_RESET_VALUE 127
#define SWITCHES_SPAN 32
#define SWITCHES_TYPE "altera_avalon_pio"


/*
 * sysid configuration
 *
 */

#define ALT_MODULE_CLASS_sysid altera_avalon_sysid_qsys
#define SYSID_BASE 0x8
#define SYSID_ID 0
#define SYSID_IRQ -1
#define SYSID_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_NAME "/dev/sysid"
#define SYSID_SPAN 8
#define SYSID_TIMESTAMP 1618249170
#define SYSID_TYPE "altera_avalon_sysid_qsys"


/*
 * wifi_reset configuration
 *
 */

#define ALT_MODULE_CLASS_wifi_reset altera_avalon_pio
#define WIFI_RESET_BASE 0x60
#define WIFI_RESET_BIT_CLEARING_EDGE_REGISTER 0
#define WIFI_RESET_BIT_MODIFYING_OUTPUT_REGISTER 0
#define WIFI_RESET_CAPTURE 0
#define WIFI_RESET_DATA_WIDTH 1
#define WIFI_RESET_DO_TEST_BENCH_WIRING 0
#define WIFI_RESET_DRIVEN_SIM_VALUE 0
#define WIFI_RESET_EDGE_TYPE "NONE"
#define WIFI_RESET_FREQ 50000000
#define WIFI_RESET_HAS_IN 0
#define WIFI_RESET_HAS_OUT 1
#define WIFI_RESET_HAS_TRI 0
#define WIFI_RESET_IRQ -1
#define WIFI_RESET_IRQ_INTERRUPT_CONTROLLER_ID -1
#define WIFI_RESET_IRQ_TYPE "NONE"
#define WIFI_RESET_NAME "/dev/wifi_reset"
#define WIFI_RESET_RESET_VALUE 1
#define WIFI_RESET_SPAN 32
#define WIFI_RESET_TYPE "altera_avalon_pio"


/*
 * wifi_rs232_uart configuration
 *
 */

#define ALT_MODULE_CLASS_wifi_rs232_uart altera_up_avalon_rs232
#define WIFI_RS232_UART_BASE 0x10
#define WIFI_RS232_UART_IRQ 2
#define WIFI_RS232_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define WIFI_RS232_UART_NAME "/dev/wifi_rs232_uart"
#define WIFI_RS232_UART_SPAN 8
#define WIFI_RS232_UART_TYPE "altera_up_avalon_rs232"

#endif /* __SYSTEM_H_ */