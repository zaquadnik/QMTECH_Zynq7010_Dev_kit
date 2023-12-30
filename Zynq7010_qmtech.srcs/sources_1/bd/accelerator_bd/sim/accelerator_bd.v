//Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2019.2 (win64) Build 2708876 Wed Nov  6 21:40:23 MST 2019
//Date        : Sat Apr 30 17:08:35 2022
//Host        : quad_core running 64-bit Service Pack 1  (build 7601)
//Command     : generate_target accelerator_bd.bd
//Design      : accelerator_bd
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CORE_GENERATION_INFO = "accelerator_bd,IP_Integrator,{x_ipVendor=xilinx.com,x_ipLibrary=BlockDiagram,x_ipName=accelerator_bd,x_ipVersion=1.00.a,x_ipLanguage=VERILOG,numBlks=1,numReposBlks=1,numNonXlnxBlks=0,numHierBlks=0,maxHierDepth=0,numSysgenBlks=0,numHlsBlks=0,numHdlrefBlks=0,numPkgbdBlks=0,bdsource=USER,synth_mode=OOC_per_IP}" *) (* HW_HANDOFF = "accelerator_bd.hwdef" *) 
module accelerator_bd
   ();

  wire processing_system7_0_FCLK_CLK0;

  accelerator_bd_processing_system7_0_0 processing_system7_0
       (.DMA0_ACLK(processing_system7_0_FCLK_CLK0),
        .DMA0_DAREADY(1'b1),
        .DMA0_DRLAST(1'b0),
        .DMA0_DRTYPE({1'b0,1'b0}),
        .DMA0_DRVALID(1'b0),
        .DMA1_ACLK(processing_system7_0_FCLK_CLK0),
        .DMA1_DAREADY(1'b1),
        .DMA1_DRLAST(1'b0),
        .DMA1_DRTYPE({1'b0,1'b0}),
        .DMA1_DRVALID(1'b0),
        .DMA2_ACLK(processing_system7_0_FCLK_CLK0),
        .DMA2_DAREADY(1'b1),
        .DMA2_DRLAST(1'b0),
        .DMA2_DRTYPE({1'b0,1'b0}),
        .DMA2_DRVALID(1'b0),
        .DMA3_ACLK(processing_system7_0_FCLK_CLK0),
        .DMA3_DAREADY(1'b1),
        .DMA3_DRLAST(1'b0),
        .DMA3_DRTYPE({1'b0,1'b0}),
        .DMA3_DRVALID(1'b0),
        .FCLK_CLK0(processing_system7_0_FCLK_CLK0),
        .I2C0_SCL_I(1'b0),
        .I2C0_SDA_I(1'b0),
        .I2C1_SCL_I(1'b0),
        .I2C1_SDA_I(1'b0),
        .M_AXI_GP0_ACLK(processing_system7_0_FCLK_CLK0),
        .M_AXI_GP0_ARREADY(1'b0),
        .M_AXI_GP0_AWREADY(1'b0),
        .M_AXI_GP0_BID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .M_AXI_GP0_BRESP({1'b0,1'b0}),
        .M_AXI_GP0_BVALID(1'b0),
        .M_AXI_GP0_RDATA({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .M_AXI_GP0_RID({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .M_AXI_GP0_RLAST(1'b0),
        .M_AXI_GP0_RRESP({1'b0,1'b0}),
        .M_AXI_GP0_RVALID(1'b0),
        .M_AXI_GP0_WREADY(1'b0),
        .PJTAG_TCK(1'b0),
        .PJTAG_TDI(1'b0),
        .PJTAG_TMS(1'b0),
        .SPI0_MISO_I(1'b0),
        .SPI0_MOSI_I(1'b0),
        .SPI0_SCLK_I(1'b0),
        .SPI0_SS_I(1'b0),
        .SPI1_MISO_I(1'b0),
        .SPI1_MOSI_I(1'b0),
        .SPI1_SCLK_I(1'b0),
        .SPI1_SS_I(1'b0),
        .TRACE_CLK(1'b0),
        .UART0_RX(1'b1),
        .USB0_VBUS_PWRFAULT(1'b0));
endmodule
