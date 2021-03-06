#ifndef _ALTERA_HPS_SOC_SYSTEM_H_
#define _ALTERA_HPS_SOC_SYSTEM_H_

/*
 * This file was automatically generated by the swinfo2header utility.
 * 
 * Created from SOPC Builder system 'tag_nios_system' in
 * file 'de1_hardware/hps_fpga/tag_nios_system.sopcinfo'.
 */

/*
 * This file contains macros for module 'ARM_A9_HPS' and devices
 * connected to the following masters:
 *   h2f_axi_master
 *   h2f_lw_axi_master
 * 
 * Do not include this header file and another header file created for a
 * different module or master group at the same time.
 * Doing so may result in duplicate macro names.
 * Instead, use the system header file which has macros with unique names.
 */

/*
 * Macros for device 'dnn_accelerator', class 'dnn_accelerator'
 * The macros are prefixed with 'DNN_ACCELERATOR_'.
 * The prefix is the slave descriptor.
 */
#define DNN_ACCELERATOR_COMPONENT_TYPE dnn_accelerator
#define DNN_ACCELERATOR_COMPONENT_NAME dnn_accelerator
#define DNN_ACCELERATOR_BASE 0x0
#define DNN_ACCELERATOR_SPAN 64
#define DNN_ACCELERATOR_END 0x3f

/*
 * Macros for device 'dma_hps_to_fpga', class 'altera_avalon_dma'
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_'.
 * The prefix is the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_COMPONENT_TYPE altera_avalon_dma
#define DMA_HPS_TO_FPGA_COMPONENT_NAME dma_hps_to_fpga
#define DMA_HPS_TO_FPGA_BASE 0x40
#define DMA_HPS_TO_FPGA_SPAN 64
#define DMA_HPS_TO_FPGA_END 0x7f
#define DMA_HPS_TO_FPGA_IRQ 1
#define DMA_HPS_TO_FPGA_ALLOW_BYTE_TRANSACTIONS 1
#define DMA_HPS_TO_FPGA_ALLOW_DOUBLEWORD_TRANSACTIONS 1
#define DMA_HPS_TO_FPGA_ALLOW_HW_TRANSACTIONS 1
#define DMA_HPS_TO_FPGA_ALLOW_QUADWORD_TRANSACTIONS 1
#define DMA_HPS_TO_FPGA_ALLOW_WORD_TRANSACTIONS 1
#define DMA_HPS_TO_FPGA_LENGTHWIDTH 16
#define DMA_HPS_TO_FPGA_MAX_BURST_SIZE 128

/*
 * Macros for device 'ARM_A9_HPS_axi_sdram', class 'axi_sdram'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_SDRAM_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_SDRAM_COMPONENT_TYPE axi_sdram
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_SDRAM_COMPONENT_NAME ARM_A9_HPS_axi_sdram
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_SDRAM_BASE 0x0
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_SDRAM_SPAN 0x80000000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_SDRAM_END 0x7fffffff
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_SDRAM_SIZE_MULTIPLE 1
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_SDRAM_SIZE_VALUE 1<<31
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_SDRAM_WRITABLE 1
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_SDRAM_MEMORY_INFO_GENERATE_DAT_SYM 0
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_SDRAM_MEMORY_INFO_GENERATE_HEX 0
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_SDRAM_MEMORY_INFO_MEM_INIT_DATA_WIDTH 31

/*
 * Macros for device 'ARM_A9_HPS_gmac0', class 'stmmac'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GMAC0_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GMAC0_COMPONENT_TYPE stmmac
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GMAC0_COMPONENT_NAME ARM_A9_HPS_gmac0
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GMAC0_BASE 0xff700000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GMAC0_SPAN 8192
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GMAC0_END 0xff701fff

/*
 * Macros for device 'ARM_A9_HPS_gmac1', class 'stmmac'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GMAC1_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GMAC1_COMPONENT_TYPE stmmac
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GMAC1_COMPONENT_NAME ARM_A9_HPS_gmac1
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GMAC1_BASE 0xff702000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GMAC1_SPAN 8192
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GMAC1_END 0xff703fff

/*
 * Macros for device 'ARM_A9_HPS_sdmmc', class 'sdmmc'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SDMMC_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SDMMC_COMPONENT_TYPE sdmmc
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SDMMC_COMPONENT_NAME ARM_A9_HPS_sdmmc
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SDMMC_BASE 0xff704000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SDMMC_SPAN 4096
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SDMMC_END 0xff704fff

/*
 * Macros for device 'ARM_A9_HPS_qspi', class 'qspi'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_QSPI_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_QSPI_COMPONENT_TYPE qspi
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_QSPI_COMPONENT_NAME ARM_A9_HPS_qspi
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_QSPI_BASE 0xff705000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_QSPI_SPAN 256
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_QSPI_END 0xff7050ff

/*
 * Macros for device 'ARM_A9_HPS_fpgamgr', class 'fpgamgr'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_FPGAMGR_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_FPGAMGR_COMPONENT_TYPE fpgamgr
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_FPGAMGR_COMPONENT_NAME ARM_A9_HPS_fpgamgr
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_FPGAMGR_BASE 0xff706000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_FPGAMGR_SPAN 4096
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_FPGAMGR_END 0xff706fff

/*
 * Macros for device 'ARM_A9_HPS_gpio0', class 'dw_gpio'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GPIO0_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GPIO0_COMPONENT_TYPE dw_gpio
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GPIO0_COMPONENT_NAME ARM_A9_HPS_gpio0
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GPIO0_BASE 0xff708000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GPIO0_SPAN 256
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GPIO0_END 0xff7080ff

/*
 * Macros for device 'ARM_A9_HPS_gpio1', class 'dw_gpio'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GPIO1_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GPIO1_COMPONENT_TYPE dw_gpio
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GPIO1_COMPONENT_NAME ARM_A9_HPS_gpio1
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GPIO1_BASE 0xff709000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GPIO1_SPAN 256
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GPIO1_END 0xff7090ff

/*
 * Macros for device 'ARM_A9_HPS_gpio2', class 'dw_gpio'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GPIO2_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GPIO2_COMPONENT_TYPE dw_gpio
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GPIO2_COMPONENT_NAME ARM_A9_HPS_gpio2
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GPIO2_BASE 0xff70a000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GPIO2_SPAN 256
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_GPIO2_END 0xff70a0ff

/*
 * Macros for device 'ARM_A9_HPS_l3regs', class 'l3regs'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_L3REGS_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_L3REGS_COMPONENT_TYPE l3regs
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_L3REGS_COMPONENT_NAME ARM_A9_HPS_l3regs
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_L3REGS_BASE 0xff800000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_L3REGS_SPAN 4096
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_L3REGS_END 0xff800fff

/*
 * Macros for device 'ARM_A9_HPS_nand0', class 'denali_nand'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_NAND0_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_NAND0_COMPONENT_TYPE denali_nand
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_NAND0_COMPONENT_NAME ARM_A9_HPS_nand0
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_NAND0_BASE 0xff900000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_NAND0_SPAN 65536
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_NAND0_END 0xff90ffff

/*
 * Macros for device 'ARM_A9_HPS_usb0', class 'usb'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_USB0_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_USB0_COMPONENT_TYPE usb
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_USB0_COMPONENT_NAME ARM_A9_HPS_usb0
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_USB0_BASE 0xffb00000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_USB0_SPAN 262144
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_USB0_END 0xffb3ffff

/*
 * Macros for device 'ARM_A9_HPS_usb1', class 'usb'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_USB1_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_USB1_COMPONENT_TYPE usb
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_USB1_COMPONENT_NAME ARM_A9_HPS_usb1
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_USB1_BASE 0xffb40000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_USB1_SPAN 262144
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_USB1_END 0xffb7ffff

/*
 * Macros for device 'ARM_A9_HPS_dcan0', class 'bosch_dcan'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_DCAN0_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_DCAN0_COMPONENT_TYPE bosch_dcan
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_DCAN0_COMPONENT_NAME ARM_A9_HPS_dcan0
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_DCAN0_BASE 0xffc00000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_DCAN0_SPAN 4096
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_DCAN0_END 0xffc00fff

/*
 * Macros for device 'ARM_A9_HPS_dcan1', class 'bosch_dcan'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_DCAN1_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_DCAN1_COMPONENT_TYPE bosch_dcan
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_DCAN1_COMPONENT_NAME ARM_A9_HPS_dcan1
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_DCAN1_BASE 0xffc01000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_DCAN1_SPAN 4096
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_DCAN1_END 0xffc01fff

/*
 * Macros for device 'ARM_A9_HPS_uart0', class 'snps_uart'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART0_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART0_COMPONENT_TYPE snps_uart
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART0_COMPONENT_NAME ARM_A9_HPS_uart0
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART0_BASE 0xffc02000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART0_SPAN 256
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART0_END 0xffc020ff
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART0_FIFO_DEPTH 128
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART0_FIFO_HWFC 0
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART0_FIFO_MODE 1
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART0_FIFO_SWFC 0
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART0_FREQ 100000000

/*
 * Macros for device 'ARM_A9_HPS_uart1', class 'snps_uart'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART1_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART1_COMPONENT_TYPE snps_uart
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART1_COMPONENT_NAME ARM_A9_HPS_uart1
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART1_BASE 0xffc03000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART1_SPAN 256
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART1_END 0xffc030ff
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART1_FIFO_DEPTH 128
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART1_FIFO_HWFC 0
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART1_FIFO_MODE 1
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART1_FIFO_SWFC 0
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_UART1_FREQ 100000000

/*
 * Macros for device 'ARM_A9_HPS_i2c0', class 'designware_i2c'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C0_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C0_COMPONENT_TYPE designware_i2c
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C0_COMPONENT_NAME ARM_A9_HPS_i2c0
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C0_BASE 0xffc04000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C0_SPAN 256
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C0_END 0xffc040ff

/*
 * Macros for device 'ARM_A9_HPS_i2c1', class 'designware_i2c'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C1_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C1_COMPONENT_TYPE designware_i2c
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C1_COMPONENT_NAME ARM_A9_HPS_i2c1
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C1_BASE 0xffc05000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C1_SPAN 256
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C1_END 0xffc050ff

/*
 * Macros for device 'ARM_A9_HPS_i2c2', class 'designware_i2c'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C2_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C2_COMPONENT_TYPE designware_i2c
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C2_COMPONENT_NAME ARM_A9_HPS_i2c2
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C2_BASE 0xffc06000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C2_SPAN 256
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C2_END 0xffc060ff

/*
 * Macros for device 'ARM_A9_HPS_i2c3', class 'designware_i2c'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C3_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C3_COMPONENT_TYPE designware_i2c
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C3_COMPONENT_NAME ARM_A9_HPS_i2c3
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C3_BASE 0xffc07000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C3_SPAN 256
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_I2C3_END 0xffc070ff

/*
 * Macros for device 'ARM_A9_HPS_timer0', class 'dw_apb_timer_sp'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER0_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER0_COMPONENT_TYPE dw_apb_timer_sp
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER0_COMPONENT_NAME ARM_A9_HPS_timer0
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER0_BASE 0xffc08000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER0_SPAN 256
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER0_END 0xffc080ff

/*
 * Macros for device 'ARM_A9_HPS_timer1', class 'dw_apb_timer_sp'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER1_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER1_COMPONENT_TYPE dw_apb_timer_sp
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER1_COMPONENT_NAME ARM_A9_HPS_timer1
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER1_BASE 0xffc09000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER1_SPAN 256
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER1_END 0xffc090ff

/*
 * Macros for device 'ARM_A9_HPS_sdrctl', class 'sdrctl'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SDRCTL_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SDRCTL_COMPONENT_TYPE sdrctl
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SDRCTL_COMPONENT_NAME ARM_A9_HPS_sdrctl
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SDRCTL_BASE 0xffc25000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SDRCTL_SPAN 4096
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SDRCTL_END 0xffc25fff

/*
 * Macros for device 'ARM_A9_HPS_timer2', class 'dw_apb_timer_osc'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER2_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER2_COMPONENT_TYPE dw_apb_timer_osc
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER2_COMPONENT_NAME ARM_A9_HPS_timer2
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER2_BASE 0xffd00000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER2_SPAN 256
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER2_END 0xffd000ff

/*
 * Macros for device 'ARM_A9_HPS_timer3', class 'dw_apb_timer_osc'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER3_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER3_COMPONENT_TYPE dw_apb_timer_osc
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER3_COMPONENT_NAME ARM_A9_HPS_timer3
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER3_BASE 0xffd01000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER3_SPAN 256
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER3_END 0xffd010ff

/*
 * Macros for device 'ARM_A9_HPS_clkmgr', class 'clkmgr'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_CLKMGR_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_CLKMGR_COMPONENT_TYPE clkmgr
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_CLKMGR_COMPONENT_NAME ARM_A9_HPS_clkmgr
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_CLKMGR_BASE 0xffd04000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_CLKMGR_SPAN 4096
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_CLKMGR_END 0xffd04fff

/*
 * Macros for device 'ARM_A9_HPS_rstmgr', class 'rstmgr'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_RSTMGR_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_RSTMGR_COMPONENT_TYPE rstmgr
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_RSTMGR_COMPONENT_NAME ARM_A9_HPS_rstmgr
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_RSTMGR_BASE 0xffd05000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_RSTMGR_SPAN 256
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_RSTMGR_END 0xffd050ff

/*
 * Macros for device 'ARM_A9_HPS_sysmgr', class 'sysmgr'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SYSMGR_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SYSMGR_COMPONENT_TYPE sysmgr
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SYSMGR_COMPONENT_NAME ARM_A9_HPS_sysmgr
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SYSMGR_BASE 0xffd08000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SYSMGR_SPAN 1024
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SYSMGR_END 0xffd083ff

/*
 * Macros for device 'ARM_A9_HPS_dma', class 'dma'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_DMA_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_DMA_COMPONENT_TYPE dma
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_DMA_COMPONENT_NAME ARM_A9_HPS_dma
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_DMA_BASE 0xffe01000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_DMA_SPAN 4096
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_DMA_END 0xffe01fff

/*
 * Macros for device 'ARM_A9_HPS_spim0', class 'spi'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SPIM0_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SPIM0_COMPONENT_TYPE spi
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SPIM0_COMPONENT_NAME ARM_A9_HPS_spim0
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SPIM0_BASE 0xfff00000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SPIM0_SPAN 256
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SPIM0_END 0xfff000ff

/*
 * Macros for device 'ARM_A9_HPS_spim1', class 'spi'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SPIM1_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SPIM1_COMPONENT_TYPE spi
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SPIM1_COMPONENT_NAME ARM_A9_HPS_spim1
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SPIM1_BASE 0xfff01000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SPIM1_SPAN 256
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_SPIM1_END 0xfff010ff

/*
 * Macros for device 'ARM_A9_HPS_timer', class 'timer'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER_COMPONENT_TYPE timer
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER_COMPONENT_NAME ARM_A9_HPS_timer
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER_BASE 0xfffec600
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER_SPAN 256
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_TIMER_END 0xfffec6ff

/*
 * Macros for device 'ARM_A9_HPS_arm_gic_0', class 'arm_gic'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_ARM_GIC_0_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_ARM_GIC_0_COMPONENT_TYPE arm_gic
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_ARM_GIC_0_COMPONENT_NAME ARM_A9_HPS_arm_gic_0
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_ARM_GIC_0_BASE 0xfffed000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_ARM_GIC_0_SPAN 4096
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_ARM_GIC_0_END 0xfffedfff

/*
 * Macros for device 'ARM_A9_HPS_L2', class 'L2'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_L2_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_L2_COMPONENT_TYPE L2
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_L2_COMPONENT_NAME ARM_A9_HPS_L2
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_L2_BASE 0xfffef000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_L2_SPAN 4096
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_L2_END 0xfffeffff

/*
 * Macros for device 'ARM_A9_HPS_axi_ocram', class 'axi_ocram'
 * Path to the device is from the master group 'dma_hps_to_fpga_read_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_OCRAM_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_OCRAM_COMPONENT_TYPE axi_ocram
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_OCRAM_COMPONENT_NAME ARM_A9_HPS_axi_ocram
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_OCRAM_BASE 0xffff0000
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_OCRAM_SPAN 65536
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_OCRAM_END 0xffffffff
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_OCRAM_SIZE_MULTIPLE 1
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_OCRAM_SIZE_VALUE 1<<16
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_OCRAM_WRITABLE 1
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_OCRAM_MEMORY_INFO_GENERATE_DAT_SYM 0
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_OCRAM_MEMORY_INFO_GENERATE_HEX 0
#define DMA_HPS_TO_FPGA_READ_MASTER_ARM_A9_HPS_AXI_OCRAM_MEMORY_INFO_MEM_INIT_DATA_WIDTH 16

/*
 * Macros for device 'onchip_sram', class 'altera_avalon_onchip_memory2'
 * Path to the device is from the master group 'dma_hps_to_fpga_write_master'.
 * The macros are prefixed with 'DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_'.
 * The prefix is the master group descriptor and the slave descriptor.
 */
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_COMPONENT_TYPE altera_avalon_onchip_memory2
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_COMPONENT_NAME onchip_sram
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_BASE 0x20000
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_SPAN 53248
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_END 0x2cfff
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_CONTENTS_INFO ""
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_DUAL_PORT 0
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_GUI_RAM_BLOCK_TYPE AUTO
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_INIT_CONTENTS_FILE tag_nios_system_onchip_sram
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_INIT_MEM_CONTENT 1
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_INSTANCE_ID NONE
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_RAM_BLOCK_TYPE AUTO
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_READ_DURING_WRITE_MODE DONT_CARE
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_SINGLE_CLOCK_OP 0
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_SIZE_MULTIPLE 1
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_SIZE_VALUE 53248
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_WRITABLE 1
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_MEMORY_INFO_DAT_SYM_INSTALL_DIR SIM_DIR
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_MEMORY_INFO_GENERATE_DAT_SYM 1
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_MEMORY_INFO_GENERATE_HEX 1
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_MEMORY_INFO_HAS_BYTE_LANE 0
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_MEMORY_INFO_HEX_INSTALL_DIR QPF_DIR
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_MEMORY_INFO_MEM_INIT_DATA_WIDTH 32
#define DMA_HPS_TO_FPGA_WRITE_MASTER_ONCHIP_SRAM_MEMORY_INFO_MEM_INIT_FILENAME tag_nios_system_onchip_sram

/*
 * Macros for device 'jtag_uart_arm_1', class 'altera_avalon_jtag_uart'
 * The macros are prefixed with 'JTAG_UART_ARM_1_'.
 * The prefix is the slave descriptor.
 */
#define JTAG_UART_ARM_1_COMPONENT_TYPE altera_avalon_jtag_uart
#define JTAG_UART_ARM_1_COMPONENT_NAME jtag_uart_arm_1
#define JTAG_UART_ARM_1_BASE 0x60
#define JTAG_UART_ARM_1_SPAN 16
#define JTAG_UART_ARM_1_END 0x6f
#define JTAG_UART_ARM_1_IRQ 0
#define JTAG_UART_ARM_1_READ_DEPTH 64
#define JTAG_UART_ARM_1_READ_THRESHOLD 8
#define JTAG_UART_ARM_1_WRITE_DEPTH 64
#define JTAG_UART_ARM_1_WRITE_THRESHOLD 8

/*
 * Macros for device 'jtag_uart_arm_0', class 'altera_avalon_jtag_uart'
 * The macros are prefixed with 'JTAG_UART_ARM_0_'.
 * The prefix is the slave descriptor.
 */
#define JTAG_UART_ARM_0_COMPONENT_TYPE altera_avalon_jtag_uart
#define JTAG_UART_ARM_0_COMPONENT_NAME jtag_uart_arm_0
#define JTAG_UART_ARM_0_BASE 0x68
#define JTAG_UART_ARM_0_SPAN 16
#define JTAG_UART_ARM_0_END 0x77
#define JTAG_UART_ARM_0_IRQ 0
#define JTAG_UART_ARM_0_READ_DEPTH 64
#define JTAG_UART_ARM_0_READ_THRESHOLD 8
#define JTAG_UART_ARM_0_WRITE_DEPTH 64
#define JTAG_UART_ARM_0_WRITE_THRESHOLD 8


#endif /* _ALTERA_HPS_SOC_SYSTEM_H_ */
