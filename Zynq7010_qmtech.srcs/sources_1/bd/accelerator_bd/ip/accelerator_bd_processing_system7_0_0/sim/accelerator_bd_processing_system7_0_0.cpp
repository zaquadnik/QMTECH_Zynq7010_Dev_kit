// (c) Copyright 1995-2022 Xilinx, Inc. All rights reserved.
// 
// This file contains confidential and proprietary information
// of Xilinx, Inc. and is protected under U.S. and
// international copyright and other intellectual property
// laws.
// 
// DISCLAIMER
// This disclaimer is not a license and does not grant any
// rights to the materials distributed herewith. Except as
// otherwise provided in a valid license issued to you by
// Xilinx, and to the maximum extent permitted by applicable
// law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
// WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
// AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
// BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
// INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
// (2) Xilinx shall not be liable (whether in contract or tort,
// including negligence, or under any other theory of
// liability) for any loss or damage of any kind or nature
// related to, arising under or in connection with these
// materials, including for any direct, or any indirect,
// special, incidental, or consequential loss or damage
// (including loss of data, profits, goodwill, or any type of
// loss or damage suffered as a result of any action brought
// by a third party) even if such damage or loss was
// reasonably foreseeable or Xilinx had been advised of the
// possibility of the same.
// 
// CRITICAL APPLICATIONS
// Xilinx products are not designed or intended to be fail-
// safe, or for use in any application requiring fail-safe
// performance, such as life-support or safety devices or
// systems, Class III medical devices, nuclear facilities,
// applications related to the deployment of airbags, or any
// other applications that could lead to death, personal
// injury, or severe property or environmental damage
// (individually and collectively, "Critical
// Applications"). Customer assumes the sole risk and
// liability of any use of Xilinx products in Critical
// Applications, subject only to applicable laws and
// regulations governing limitations on product liability.
// 
// THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
// PART OF THIS FILE AT ALL TIMES.
// 
// DO NOT MODIFY THIS FILE.

#include "accelerator_bd_processing_system7_0_0_sc.h"

#include "accelerator_bd_processing_system7_0_0.h"

#include "processing_system7_v5_5_tlm.h"

#include <map>
#include <string>

accelerator_bd_processing_system7_0_0::accelerator_bd_processing_system7_0_0(const sc_core::sc_module_name& nm) : accelerator_bd_processing_system7_0_0_sc(nm), I2C0_SDA_I("I2C0_SDA_I"), I2C0_SDA_O("I2C0_SDA_O"), I2C0_SDA_T("I2C0_SDA_T"), I2C0_SCL_I("I2C0_SCL_I"), I2C0_SCL_O("I2C0_SCL_O"), I2C0_SCL_T("I2C0_SCL_T"), I2C1_SDA_I("I2C1_SDA_I"), I2C1_SDA_O("I2C1_SDA_O"), I2C1_SDA_T("I2C1_SDA_T"), I2C1_SCL_I("I2C1_SCL_I"), I2C1_SCL_O("I2C1_SCL_O"), I2C1_SCL_T("I2C1_SCL_T"), PJTAG_TCK("PJTAG_TCK"), PJTAG_TMS("PJTAG_TMS"), PJTAG_TDI("PJTAG_TDI"), PJTAG_TDO("PJTAG_TDO"), SPI0_SCLK_I("SPI0_SCLK_I"), SPI0_SCLK_O("SPI0_SCLK_O"), SPI0_SCLK_T("SPI0_SCLK_T"), SPI0_MOSI_I("SPI0_MOSI_I"), SPI0_MOSI_O("SPI0_MOSI_O"), SPI0_MOSI_T("SPI0_MOSI_T"), SPI0_MISO_I("SPI0_MISO_I"), SPI0_MISO_O("SPI0_MISO_O"), SPI0_MISO_T("SPI0_MISO_T"), SPI0_SS_I("SPI0_SS_I"), SPI0_SS_O("SPI0_SS_O"), SPI0_SS1_O("SPI0_SS1_O"), SPI0_SS2_O("SPI0_SS2_O"), SPI0_SS_T("SPI0_SS_T"), SPI1_SCLK_I("SPI1_SCLK_I"), SPI1_SCLK_O("SPI1_SCLK_O"), SPI1_SCLK_T("SPI1_SCLK_T"), SPI1_MOSI_I("SPI1_MOSI_I"), SPI1_MOSI_O("SPI1_MOSI_O"), SPI1_MOSI_T("SPI1_MOSI_T"), SPI1_MISO_I("SPI1_MISO_I"), SPI1_MISO_O("SPI1_MISO_O"), SPI1_MISO_T("SPI1_MISO_T"), SPI1_SS_I("SPI1_SS_I"), SPI1_SS_O("SPI1_SS_O"), SPI1_SS1_O("SPI1_SS1_O"), SPI1_SS2_O("SPI1_SS2_O"), SPI1_SS_T("SPI1_SS_T"), UART0_TX("UART0_TX"), UART0_RX("UART0_RX"), TTC0_WAVE0_OUT("TTC0_WAVE0_OUT"), TTC0_WAVE1_OUT("TTC0_WAVE1_OUT"), TTC0_WAVE2_OUT("TTC0_WAVE2_OUT"), TTC1_WAVE0_OUT("TTC1_WAVE0_OUT"), TTC1_WAVE1_OUT("TTC1_WAVE1_OUT"), TTC1_WAVE2_OUT("TTC1_WAVE2_OUT"), WDT_RST_OUT("WDT_RST_OUT"), TRACE_CLK("TRACE_CLK"), TRACE_CLK_OUT("TRACE_CLK_OUT"), TRACE_CTL("TRACE_CTL"), TRACE_DATA("TRACE_DATA"), USB0_PORT_INDCTL("USB0_PORT_INDCTL"), USB0_VBUS_PWRSELECT("USB0_VBUS_PWRSELECT"), USB0_VBUS_PWRFAULT("USB0_VBUS_PWRFAULT"), M_AXI_GP0_ARVALID("M_AXI_GP0_ARVALID"), M_AXI_GP0_AWVALID("M_AXI_GP0_AWVALID"), M_AXI_GP0_BREADY("M_AXI_GP0_BREADY"), M_AXI_GP0_RREADY("M_AXI_GP0_RREADY"), M_AXI_GP0_WLAST("M_AXI_GP0_WLAST"), M_AXI_GP0_WVALID("M_AXI_GP0_WVALID"), M_AXI_GP0_ARID("M_AXI_GP0_ARID"), M_AXI_GP0_AWID("M_AXI_GP0_AWID"), M_AXI_GP0_WID("M_AXI_GP0_WID"), M_AXI_GP0_ARBURST("M_AXI_GP0_ARBURST"), M_AXI_GP0_ARLOCK("M_AXI_GP0_ARLOCK"), M_AXI_GP0_ARSIZE("M_AXI_GP0_ARSIZE"), M_AXI_GP0_AWBURST("M_AXI_GP0_AWBURST"), M_AXI_GP0_AWLOCK("M_AXI_GP0_AWLOCK"), M_AXI_GP0_AWSIZE("M_AXI_GP0_AWSIZE"), M_AXI_GP0_ARPROT("M_AXI_GP0_ARPROT"), M_AXI_GP0_AWPROT("M_AXI_GP0_AWPROT"), M_AXI_GP0_ARADDR("M_AXI_GP0_ARADDR"), M_AXI_GP0_AWADDR("M_AXI_GP0_AWADDR"), M_AXI_GP0_WDATA("M_AXI_GP0_WDATA"), M_AXI_GP0_ARCACHE("M_AXI_GP0_ARCACHE"), M_AXI_GP0_ARLEN("M_AXI_GP0_ARLEN"), M_AXI_GP0_ARQOS("M_AXI_GP0_ARQOS"), M_AXI_GP0_AWCACHE("M_AXI_GP0_AWCACHE"), M_AXI_GP0_AWLEN("M_AXI_GP0_AWLEN"), M_AXI_GP0_AWQOS("M_AXI_GP0_AWQOS"), M_AXI_GP0_WSTRB("M_AXI_GP0_WSTRB"), M_AXI_GP0_ACLK("M_AXI_GP0_ACLK"), M_AXI_GP0_ARREADY("M_AXI_GP0_ARREADY"), M_AXI_GP0_AWREADY("M_AXI_GP0_AWREADY"), M_AXI_GP0_BVALID("M_AXI_GP0_BVALID"), M_AXI_GP0_RLAST("M_AXI_GP0_RLAST"), M_AXI_GP0_RVALID("M_AXI_GP0_RVALID"), M_AXI_GP0_WREADY("M_AXI_GP0_WREADY"), M_AXI_GP0_BID("M_AXI_GP0_BID"), M_AXI_GP0_RID("M_AXI_GP0_RID"), M_AXI_GP0_BRESP("M_AXI_GP0_BRESP"), M_AXI_GP0_RRESP("M_AXI_GP0_RRESP"), M_AXI_GP0_RDATA("M_AXI_GP0_RDATA"), DMA0_DATYPE("DMA0_DATYPE"), DMA0_DAVALID("DMA0_DAVALID"), DMA0_DRREADY("DMA0_DRREADY"), DMA1_DATYPE("DMA1_DATYPE"), DMA1_DAVALID("DMA1_DAVALID"), DMA1_DRREADY("DMA1_DRREADY"), DMA2_DATYPE("DMA2_DATYPE"), DMA2_DAVALID("DMA2_DAVALID"), DMA2_DRREADY("DMA2_DRREADY"), DMA3_DATYPE("DMA3_DATYPE"), DMA3_DAVALID("DMA3_DAVALID"), DMA3_DRREADY("DMA3_DRREADY"), DMA0_ACLK("DMA0_ACLK"), DMA0_DAREADY("DMA0_DAREADY"), DMA0_DRLAST("DMA0_DRLAST"), DMA0_DRVALID("DMA0_DRVALID"), DMA1_ACLK("DMA1_ACLK"), DMA1_DAREADY("DMA1_DAREADY"), DMA1_DRLAST("DMA1_DRLAST"), DMA1_DRVALID("DMA1_DRVALID"), DMA2_ACLK("DMA2_ACLK"), DMA2_DAREADY("DMA2_DAREADY"), DMA2_DRLAST("DMA2_DRLAST"), DMA2_DRVALID("DMA2_DRVALID"), DMA3_ACLK("DMA3_ACLK"), DMA3_DAREADY("DMA3_DAREADY"), DMA3_DRLAST("DMA3_DRLAST"), DMA3_DRVALID("DMA3_DRVALID"), DMA0_DRTYPE("DMA0_DRTYPE"), DMA1_DRTYPE("DMA1_DRTYPE"), DMA2_DRTYPE("DMA2_DRTYPE"), DMA3_DRTYPE("DMA3_DRTYPE"), FCLK_CLK0("FCLK_CLK0"), FCLK_RESET0_N("FCLK_RESET0_N"), MIO("MIO"), DDR_CAS_n("DDR_CAS_n"), DDR_CKE("DDR_CKE"), DDR_Clk_n("DDR_Clk_n"), DDR_Clk("DDR_Clk"), DDR_CS_n("DDR_CS_n"), DDR_DRSTB("DDR_DRSTB"), DDR_ODT("DDR_ODT"), DDR_RAS_n("DDR_RAS_n"), DDR_WEB("DDR_WEB"), DDR_BankAddr("DDR_BankAddr"), DDR_Addr("DDR_Addr"), DDR_VRN("DDR_VRN"), DDR_VRP("DDR_VRP"), DDR_DM("DDR_DM"), DDR_DQ("DDR_DQ"), DDR_DQS_n("DDR_DQS_n"), DDR_DQS("DDR_DQS"), PS_SRSTB("PS_SRSTB"), PS_CLK("PS_CLK"), PS_PORB("PS_PORB")
{

  // initialize pins
  mp_impl->I2C0_SDA_I(I2C0_SDA_I);
  mp_impl->I2C0_SDA_O(I2C0_SDA_O);
  mp_impl->I2C0_SDA_T(I2C0_SDA_T);
  mp_impl->I2C0_SCL_I(I2C0_SCL_I);
  mp_impl->I2C0_SCL_O(I2C0_SCL_O);
  mp_impl->I2C0_SCL_T(I2C0_SCL_T);
  mp_impl->I2C1_SDA_I(I2C1_SDA_I);
  mp_impl->I2C1_SDA_O(I2C1_SDA_O);
  mp_impl->I2C1_SDA_T(I2C1_SDA_T);
  mp_impl->I2C1_SCL_I(I2C1_SCL_I);
  mp_impl->I2C1_SCL_O(I2C1_SCL_O);
  mp_impl->I2C1_SCL_T(I2C1_SCL_T);
  mp_impl->PJTAG_TCK(PJTAG_TCK);
  mp_impl->PJTAG_TMS(PJTAG_TMS);
  mp_impl->PJTAG_TDI(PJTAG_TDI);
  mp_impl->PJTAG_TDO(PJTAG_TDO);
  mp_impl->SPI0_SCLK_I(SPI0_SCLK_I);
  mp_impl->SPI0_SCLK_O(SPI0_SCLK_O);
  mp_impl->SPI0_SCLK_T(SPI0_SCLK_T);
  mp_impl->SPI0_MOSI_I(SPI0_MOSI_I);
  mp_impl->SPI0_MOSI_O(SPI0_MOSI_O);
  mp_impl->SPI0_MOSI_T(SPI0_MOSI_T);
  mp_impl->SPI0_MISO_I(SPI0_MISO_I);
  mp_impl->SPI0_MISO_O(SPI0_MISO_O);
  mp_impl->SPI0_MISO_T(SPI0_MISO_T);
  mp_impl->SPI0_SS_I(SPI0_SS_I);
  mp_impl->SPI0_SS_O(SPI0_SS_O);
  mp_impl->SPI0_SS1_O(SPI0_SS1_O);
  mp_impl->SPI0_SS2_O(SPI0_SS2_O);
  mp_impl->SPI0_SS_T(SPI0_SS_T);
  mp_impl->SPI1_SCLK_I(SPI1_SCLK_I);
  mp_impl->SPI1_SCLK_O(SPI1_SCLK_O);
  mp_impl->SPI1_SCLK_T(SPI1_SCLK_T);
  mp_impl->SPI1_MOSI_I(SPI1_MOSI_I);
  mp_impl->SPI1_MOSI_O(SPI1_MOSI_O);
  mp_impl->SPI1_MOSI_T(SPI1_MOSI_T);
  mp_impl->SPI1_MISO_I(SPI1_MISO_I);
  mp_impl->SPI1_MISO_O(SPI1_MISO_O);
  mp_impl->SPI1_MISO_T(SPI1_MISO_T);
  mp_impl->SPI1_SS_I(SPI1_SS_I);
  mp_impl->SPI1_SS_O(SPI1_SS_O);
  mp_impl->SPI1_SS1_O(SPI1_SS1_O);
  mp_impl->SPI1_SS2_O(SPI1_SS2_O);
  mp_impl->SPI1_SS_T(SPI1_SS_T);
  mp_impl->UART0_TX(UART0_TX);
  mp_impl->UART0_RX(UART0_RX);
  mp_impl->TTC0_WAVE0_OUT(TTC0_WAVE0_OUT);
  mp_impl->TTC0_WAVE1_OUT(TTC0_WAVE1_OUT);
  mp_impl->TTC0_WAVE2_OUT(TTC0_WAVE2_OUT);
  mp_impl->TTC1_WAVE0_OUT(TTC1_WAVE0_OUT);
  mp_impl->TTC1_WAVE1_OUT(TTC1_WAVE1_OUT);
  mp_impl->TTC1_WAVE2_OUT(TTC1_WAVE2_OUT);
  mp_impl->WDT_RST_OUT(WDT_RST_OUT);
  mp_impl->TRACE_CLK(TRACE_CLK);
  mp_impl->TRACE_CLK_OUT(TRACE_CLK_OUT);
  mp_impl->TRACE_CTL(TRACE_CTL);
  mp_impl->TRACE_DATA(TRACE_DATA);
  mp_impl->USB0_PORT_INDCTL(USB0_PORT_INDCTL);
  mp_impl->USB0_VBUS_PWRSELECT(USB0_VBUS_PWRSELECT);
  mp_impl->USB0_VBUS_PWRFAULT(USB0_VBUS_PWRFAULT);
  mp_impl->M_AXI_GP0_ACLK(M_AXI_GP0_ACLK);
  mp_impl->DMA0_ACLK(DMA0_ACLK);
  mp_impl->DMA1_ACLK(DMA1_ACLK);
  mp_impl->DMA2_ACLK(DMA2_ACLK);
  mp_impl->DMA3_ACLK(DMA3_ACLK);
  mp_impl->FCLK_CLK0(FCLK_CLK0);
  mp_impl->FCLK_RESET0_N(FCLK_RESET0_N);
  mp_impl->MIO(MIO);
  mp_impl->DDR_CAS_n(DDR_CAS_n);
  mp_impl->DDR_CKE(DDR_CKE);
  mp_impl->DDR_Clk_n(DDR_Clk_n);
  mp_impl->DDR_Clk(DDR_Clk);
  mp_impl->DDR_CS_n(DDR_CS_n);
  mp_impl->DDR_DRSTB(DDR_DRSTB);
  mp_impl->DDR_ODT(DDR_ODT);
  mp_impl->DDR_RAS_n(DDR_RAS_n);
  mp_impl->DDR_WEB(DDR_WEB);
  mp_impl->DDR_BankAddr(DDR_BankAddr);
  mp_impl->DDR_Addr(DDR_Addr);
  mp_impl->DDR_VRN(DDR_VRN);
  mp_impl->DDR_VRP(DDR_VRP);
  mp_impl->DDR_DM(DDR_DM);
  mp_impl->DDR_DQ(DDR_DQ);
  mp_impl->DDR_DQS_n(DDR_DQS_n);
  mp_impl->DDR_DQS(DDR_DQS);
  mp_impl->PS_SRSTB(PS_SRSTB);
  mp_impl->PS_CLK(PS_CLK);
  mp_impl->PS_PORB(PS_PORB);

  // initialize transactors
  mp_DMA0_REQ_transactor = NULL;
  mp_DMA0_ACK_transactor = NULL;
  mp_DMA1_REQ_transactor = NULL;
  mp_DMA1_ACK_transactor = NULL;
  mp_DMA2_REQ_transactor = NULL;
  mp_DMA2_ACK_transactor = NULL;
  mp_DMA3_REQ_transactor = NULL;
  mp_DMA3_ACK_transactor = NULL;
  mp_M_AXI_GP0_transactor = NULL;
  mp_M_AXI_GP0_ARLOCK_converter = NULL;
  mp_M_AXI_GP0_AWLOCK_converter = NULL;
  mp_M_AXI_GP0_ARLEN_converter = NULL;
  mp_M_AXI_GP0_AWLEN_converter = NULL;
}

void accelerator_bd_processing_system7_0_0::before_end_of_elaboration()
{
  // configure 'DMA0_REQ' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("accelerator_bd_processing_system7_0_0", "DMA0_REQ_TLM_MODE") != 1)
  {
    xsc::common_cpp::properties DMA0_REQ_transactor_param_props;
    DMA0_REQ_transactor_param_props.addLong("TDATA_NUM_BYTES", "0");
    DMA0_REQ_transactor_param_props.addLong("TDEST_WIDTH", "0");
    DMA0_REQ_transactor_param_props.addLong("TID_WIDTH", "0");
    DMA0_REQ_transactor_param_props.addLong("TUSER_WIDTH", "2");
    DMA0_REQ_transactor_param_props.addLong("HAS_TREADY", "1");
    DMA0_REQ_transactor_param_props.addLong("HAS_TSTRB", "0");
    DMA0_REQ_transactor_param_props.addLong("HAS_TKEEP", "0");
    DMA0_REQ_transactor_param_props.addLong("HAS_TLAST", "1");
    DMA0_REQ_transactor_param_props.addLong("FREQ_HZ", "50000000");
    DMA0_REQ_transactor_param_props.addFloat("PHASE", "0.000");
    DMA0_REQ_transactor_param_props.addString("CLK_DOMAIN", "accelerator_bd_processing_system7_0_0_FCLK_CLK0");
    DMA0_REQ_transactor_param_props.addString("LAYERED_METADATA", "undef");
    mp_DMA0_REQ_transactor = new xtlm::xaxis_pin2xtlm_t<1,2,1,1>("DMA0_REQ_transactor", DMA0_REQ_transactor_param_props);
    mp_DMA0_REQ_transactor->TREADY(DMA0_DRREADY);
    mp_DMA0_REQ_transactor->TLAST(DMA0_DRLAST);
    mp_DMA0_REQ_transactor->TVALID(DMA0_DRVALID);
    mp_DMA0_REQ_transactor->TUSER(DMA0_DRTYPE);
    mp_DMA0_REQ_transactor->CLK(DMA0_ACLK);
    m_DMA0_REQ_transactor_rst_signal.write(1);
    mp_DMA0_REQ_transactor->RST(m_DMA0_REQ_transactor_rst_signal);

    mp_impl->DMA0_REQ_socket->bind(*(mp_DMA0_REQ_transactor->socket));
  }
  // configure 'DMA0_ACK' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("accelerator_bd_processing_system7_0_0", "DMA0_ACK_TLM_MODE") != 1)
  {
    xsc::common_cpp::properties DMA0_ACK_transactor_param_props;
    DMA0_ACK_transactor_param_props.addLong("TDATA_NUM_BYTES", "0");
    DMA0_ACK_transactor_param_props.addLong("TDEST_WIDTH", "0");
    DMA0_ACK_transactor_param_props.addLong("TID_WIDTH", "0");
    DMA0_ACK_transactor_param_props.addLong("TUSER_WIDTH", "2");
    DMA0_ACK_transactor_param_props.addLong("HAS_TREADY", "1");
    DMA0_ACK_transactor_param_props.addLong("HAS_TSTRB", "0");
    DMA0_ACK_transactor_param_props.addLong("HAS_TKEEP", "0");
    DMA0_ACK_transactor_param_props.addLong("HAS_TLAST", "0");
    DMA0_ACK_transactor_param_props.addLong("FREQ_HZ", "50000000");
    DMA0_ACK_transactor_param_props.addFloat("PHASE", "0.000");
    DMA0_ACK_transactor_param_props.addString("CLK_DOMAIN", "accelerator_bd_processing_system7_0_0_FCLK_CLK0");
    DMA0_ACK_transactor_param_props.addString("LAYERED_METADATA", "undef");
    mp_DMA0_ACK_transactor = new xtlm::xaxis_xtlm2pin_t<1,2,1,1>("DMA0_ACK_transactor", DMA0_ACK_transactor_param_props);
    mp_DMA0_ACK_transactor->TUSER(DMA0_DATYPE);
    mp_DMA0_ACK_transactor->TVALID(DMA0_DAVALID);
    mp_DMA0_ACK_transactor->TREADY(DMA0_DAREADY);
    mp_DMA0_ACK_transactor->CLK(DMA0_ACLK);
    m_DMA0_ACK_transactor_rst_signal.write(1);
    mp_DMA0_ACK_transactor->RST(m_DMA0_ACK_transactor_rst_signal);

    mp_impl->DMA0_ACK_socket->bind(*(mp_DMA0_ACK_transactor->socket));
  }
  // configure 'DMA1_REQ' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("accelerator_bd_processing_system7_0_0", "DMA1_REQ_TLM_MODE") != 1)
  {
    xsc::common_cpp::properties DMA1_REQ_transactor_param_props;
    DMA1_REQ_transactor_param_props.addLong("TDATA_NUM_BYTES", "0");
    DMA1_REQ_transactor_param_props.addLong("TDEST_WIDTH", "0");
    DMA1_REQ_transactor_param_props.addLong("TID_WIDTH", "0");
    DMA1_REQ_transactor_param_props.addLong("TUSER_WIDTH", "2");
    DMA1_REQ_transactor_param_props.addLong("HAS_TREADY", "1");
    DMA1_REQ_transactor_param_props.addLong("HAS_TSTRB", "0");
    DMA1_REQ_transactor_param_props.addLong("HAS_TKEEP", "0");
    DMA1_REQ_transactor_param_props.addLong("HAS_TLAST", "1");
    DMA1_REQ_transactor_param_props.addLong("FREQ_HZ", "50000000");
    DMA1_REQ_transactor_param_props.addFloat("PHASE", "0.000");
    DMA1_REQ_transactor_param_props.addString("CLK_DOMAIN", "accelerator_bd_processing_system7_0_0_FCLK_CLK0");
    DMA1_REQ_transactor_param_props.addString("LAYERED_METADATA", "undef");
    mp_DMA1_REQ_transactor = new xtlm::xaxis_pin2xtlm_t<1,2,1,1>("DMA1_REQ_transactor", DMA1_REQ_transactor_param_props);
    mp_DMA1_REQ_transactor->TREADY(DMA1_DRREADY);
    mp_DMA1_REQ_transactor->TLAST(DMA1_DRLAST);
    mp_DMA1_REQ_transactor->TVALID(DMA1_DRVALID);
    mp_DMA1_REQ_transactor->TUSER(DMA1_DRTYPE);
    mp_DMA1_REQ_transactor->CLK(DMA1_ACLK);
    m_DMA1_REQ_transactor_rst_signal.write(1);
    mp_DMA1_REQ_transactor->RST(m_DMA1_REQ_transactor_rst_signal);

    mp_impl->DMA1_REQ_socket->bind(*(mp_DMA1_REQ_transactor->socket));
  }
  // configure 'DMA1_ACK' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("accelerator_bd_processing_system7_0_0", "DMA1_ACK_TLM_MODE") != 1)
  {
    xsc::common_cpp::properties DMA1_ACK_transactor_param_props;
    DMA1_ACK_transactor_param_props.addLong("TDATA_NUM_BYTES", "0");
    DMA1_ACK_transactor_param_props.addLong("TDEST_WIDTH", "0");
    DMA1_ACK_transactor_param_props.addLong("TID_WIDTH", "0");
    DMA1_ACK_transactor_param_props.addLong("TUSER_WIDTH", "2");
    DMA1_ACK_transactor_param_props.addLong("HAS_TREADY", "1");
    DMA1_ACK_transactor_param_props.addLong("HAS_TSTRB", "0");
    DMA1_ACK_transactor_param_props.addLong("HAS_TKEEP", "0");
    DMA1_ACK_transactor_param_props.addLong("HAS_TLAST", "0");
    DMA1_ACK_transactor_param_props.addLong("FREQ_HZ", "50000000");
    DMA1_ACK_transactor_param_props.addFloat("PHASE", "0.000");
    DMA1_ACK_transactor_param_props.addString("CLK_DOMAIN", "accelerator_bd_processing_system7_0_0_FCLK_CLK0");
    DMA1_ACK_transactor_param_props.addString("LAYERED_METADATA", "undef");
    mp_DMA1_ACK_transactor = new xtlm::xaxis_xtlm2pin_t<1,2,1,1>("DMA1_ACK_transactor", DMA1_ACK_transactor_param_props);
    mp_DMA1_ACK_transactor->TUSER(DMA1_DATYPE);
    mp_DMA1_ACK_transactor->TVALID(DMA1_DAVALID);
    mp_DMA1_ACK_transactor->TREADY(DMA1_DAREADY);
    mp_DMA1_ACK_transactor->CLK(DMA1_ACLK);
    m_DMA1_ACK_transactor_rst_signal.write(1);
    mp_DMA1_ACK_transactor->RST(m_DMA1_ACK_transactor_rst_signal);

    mp_impl->DMA1_ACK_socket->bind(*(mp_DMA1_ACK_transactor->socket));
  }
  // configure 'DMA2_REQ' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("accelerator_bd_processing_system7_0_0", "DMA2_REQ_TLM_MODE") != 1)
  {
    xsc::common_cpp::properties DMA2_REQ_transactor_param_props;
    DMA2_REQ_transactor_param_props.addLong("TDATA_NUM_BYTES", "0");
    DMA2_REQ_transactor_param_props.addLong("TDEST_WIDTH", "0");
    DMA2_REQ_transactor_param_props.addLong("TID_WIDTH", "0");
    DMA2_REQ_transactor_param_props.addLong("TUSER_WIDTH", "2");
    DMA2_REQ_transactor_param_props.addLong("HAS_TREADY", "1");
    DMA2_REQ_transactor_param_props.addLong("HAS_TSTRB", "0");
    DMA2_REQ_transactor_param_props.addLong("HAS_TKEEP", "0");
    DMA2_REQ_transactor_param_props.addLong("HAS_TLAST", "1");
    DMA2_REQ_transactor_param_props.addLong("FREQ_HZ", "50000000");
    DMA2_REQ_transactor_param_props.addFloat("PHASE", "0.000");
    DMA2_REQ_transactor_param_props.addString("CLK_DOMAIN", "accelerator_bd_processing_system7_0_0_FCLK_CLK0");
    DMA2_REQ_transactor_param_props.addString("LAYERED_METADATA", "undef");
    mp_DMA2_REQ_transactor = new xtlm::xaxis_pin2xtlm_t<1,2,1,1>("DMA2_REQ_transactor", DMA2_REQ_transactor_param_props);
    mp_DMA2_REQ_transactor->TREADY(DMA2_DRREADY);
    mp_DMA2_REQ_transactor->TLAST(DMA2_DRLAST);
    mp_DMA2_REQ_transactor->TVALID(DMA2_DRVALID);
    mp_DMA2_REQ_transactor->TUSER(DMA2_DRTYPE);
    mp_DMA2_REQ_transactor->CLK(DMA2_ACLK);
    m_DMA2_REQ_transactor_rst_signal.write(1);
    mp_DMA2_REQ_transactor->RST(m_DMA2_REQ_transactor_rst_signal);

    mp_impl->DMA2_REQ_socket->bind(*(mp_DMA2_REQ_transactor->socket));
  }
  // configure 'DMA2_ACK' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("accelerator_bd_processing_system7_0_0", "DMA2_ACK_TLM_MODE") != 1)
  {
    xsc::common_cpp::properties DMA2_ACK_transactor_param_props;
    DMA2_ACK_transactor_param_props.addLong("TDATA_NUM_BYTES", "0");
    DMA2_ACK_transactor_param_props.addLong("TDEST_WIDTH", "0");
    DMA2_ACK_transactor_param_props.addLong("TID_WIDTH", "0");
    DMA2_ACK_transactor_param_props.addLong("TUSER_WIDTH", "2");
    DMA2_ACK_transactor_param_props.addLong("HAS_TREADY", "1");
    DMA2_ACK_transactor_param_props.addLong("HAS_TSTRB", "0");
    DMA2_ACK_transactor_param_props.addLong("HAS_TKEEP", "0");
    DMA2_ACK_transactor_param_props.addLong("HAS_TLAST", "0");
    DMA2_ACK_transactor_param_props.addLong("FREQ_HZ", "50000000");
    DMA2_ACK_transactor_param_props.addFloat("PHASE", "0.000");
    DMA2_ACK_transactor_param_props.addString("CLK_DOMAIN", "accelerator_bd_processing_system7_0_0_FCLK_CLK0");
    DMA2_ACK_transactor_param_props.addString("LAYERED_METADATA", "undef");
    mp_DMA2_ACK_transactor = new xtlm::xaxis_xtlm2pin_t<1,2,1,1>("DMA2_ACK_transactor", DMA2_ACK_transactor_param_props);
    mp_DMA2_ACK_transactor->TUSER(DMA2_DATYPE);
    mp_DMA2_ACK_transactor->TVALID(DMA2_DAVALID);
    mp_DMA2_ACK_transactor->TREADY(DMA2_DAREADY);
    mp_DMA2_ACK_transactor->CLK(DMA2_ACLK);
    m_DMA2_ACK_transactor_rst_signal.write(1);
    mp_DMA2_ACK_transactor->RST(m_DMA2_ACK_transactor_rst_signal);

    mp_impl->DMA2_ACK_socket->bind(*(mp_DMA2_ACK_transactor->socket));
  }
  // configure 'DMA3_REQ' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("accelerator_bd_processing_system7_0_0", "DMA3_REQ_TLM_MODE") != 1)
  {
    xsc::common_cpp::properties DMA3_REQ_transactor_param_props;
    DMA3_REQ_transactor_param_props.addLong("TDATA_NUM_BYTES", "0");
    DMA3_REQ_transactor_param_props.addLong("TDEST_WIDTH", "0");
    DMA3_REQ_transactor_param_props.addLong("TID_WIDTH", "0");
    DMA3_REQ_transactor_param_props.addLong("TUSER_WIDTH", "2");
    DMA3_REQ_transactor_param_props.addLong("HAS_TREADY", "1");
    DMA3_REQ_transactor_param_props.addLong("HAS_TSTRB", "0");
    DMA3_REQ_transactor_param_props.addLong("HAS_TKEEP", "0");
    DMA3_REQ_transactor_param_props.addLong("HAS_TLAST", "1");
    DMA3_REQ_transactor_param_props.addLong("FREQ_HZ", "50000000");
    DMA3_REQ_transactor_param_props.addFloat("PHASE", "0.000");
    DMA3_REQ_transactor_param_props.addString("CLK_DOMAIN", "accelerator_bd_processing_system7_0_0_FCLK_CLK0");
    DMA3_REQ_transactor_param_props.addString("LAYERED_METADATA", "undef");
    mp_DMA3_REQ_transactor = new xtlm::xaxis_pin2xtlm_t<1,2,1,1>("DMA3_REQ_transactor", DMA3_REQ_transactor_param_props);
    mp_DMA3_REQ_transactor->TREADY(DMA3_DRREADY);
    mp_DMA3_REQ_transactor->TLAST(DMA3_DRLAST);
    mp_DMA3_REQ_transactor->TVALID(DMA3_DRVALID);
    mp_DMA3_REQ_transactor->TUSER(DMA3_DRTYPE);
    mp_DMA3_REQ_transactor->CLK(DMA3_ACLK);
    m_DMA3_REQ_transactor_rst_signal.write(1);
    mp_DMA3_REQ_transactor->RST(m_DMA3_REQ_transactor_rst_signal);

    mp_impl->DMA3_REQ_socket->bind(*(mp_DMA3_REQ_transactor->socket));
  }
  // configure 'DMA3_ACK' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("accelerator_bd_processing_system7_0_0", "DMA3_ACK_TLM_MODE") != 1)
  {
    xsc::common_cpp::properties DMA3_ACK_transactor_param_props;
    DMA3_ACK_transactor_param_props.addLong("TDATA_NUM_BYTES", "0");
    DMA3_ACK_transactor_param_props.addLong("TDEST_WIDTH", "0");
    DMA3_ACK_transactor_param_props.addLong("TID_WIDTH", "0");
    DMA3_ACK_transactor_param_props.addLong("TUSER_WIDTH", "2");
    DMA3_ACK_transactor_param_props.addLong("HAS_TREADY", "1");
    DMA3_ACK_transactor_param_props.addLong("HAS_TSTRB", "0");
    DMA3_ACK_transactor_param_props.addLong("HAS_TKEEP", "0");
    DMA3_ACK_transactor_param_props.addLong("HAS_TLAST", "0");
    DMA3_ACK_transactor_param_props.addLong("FREQ_HZ", "50000000");
    DMA3_ACK_transactor_param_props.addFloat("PHASE", "0.000");
    DMA3_ACK_transactor_param_props.addString("CLK_DOMAIN", "accelerator_bd_processing_system7_0_0_FCLK_CLK0");
    DMA3_ACK_transactor_param_props.addString("LAYERED_METADATA", "undef");
    mp_DMA3_ACK_transactor = new xtlm::xaxis_xtlm2pin_t<1,2,1,1>("DMA3_ACK_transactor", DMA3_ACK_transactor_param_props);
    mp_DMA3_ACK_transactor->TUSER(DMA3_DATYPE);
    mp_DMA3_ACK_transactor->TVALID(DMA3_DAVALID);
    mp_DMA3_ACK_transactor->TREADY(DMA3_DAREADY);
    mp_DMA3_ACK_transactor->CLK(DMA3_ACLK);
    m_DMA3_ACK_transactor_rst_signal.write(1);
    mp_DMA3_ACK_transactor->RST(m_DMA3_ACK_transactor_rst_signal);

    mp_impl->DMA3_ACK_socket->bind(*(mp_DMA3_ACK_transactor->socket));
  }
  // configure 'M_AXI_GP0' transactor
  if (xsc::utils::xsc_sim_manager::getInstanceParameterInt("accelerator_bd_processing_system7_0_0", "M_AXI_GP0_TLM_MODE") != 1)
  {
    xsc::common_cpp::properties M_AXI_GP0_transactor_param_props;
    M_AXI_GP0_transactor_param_props.addLong("SUPPORTS_NARROW_BURST", "0");
    M_AXI_GP0_transactor_param_props.addLong("DATA_WIDTH", "32");
    M_AXI_GP0_transactor_param_props.addLong("FREQ_HZ", "50000000");
    M_AXI_GP0_transactor_param_props.addLong("ID_WIDTH", "12");
    M_AXI_GP0_transactor_param_props.addLong("ADDR_WIDTH", "32");
    M_AXI_GP0_transactor_param_props.addLong("AWUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("ARUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("WUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("RUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("BUSER_WIDTH", "0");
    M_AXI_GP0_transactor_param_props.addLong("HAS_BURST", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_LOCK", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_PROT", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_CACHE", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_QOS", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_REGION", "0");
    M_AXI_GP0_transactor_param_props.addLong("HAS_WSTRB", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_BRESP", "1");
    M_AXI_GP0_transactor_param_props.addLong("HAS_RRESP", "1");
    M_AXI_GP0_transactor_param_props.addLong("MAX_BURST_LENGTH", "16");
    M_AXI_GP0_transactor_param_props.addLong("NUM_READ_THREADS", "4");
    M_AXI_GP0_transactor_param_props.addLong("NUM_WRITE_THREADS", "4");
    M_AXI_GP0_transactor_param_props.addLong("RUSER_BITS_PER_BYTE", "0");
    M_AXI_GP0_transactor_param_props.addLong("WUSER_BITS_PER_BYTE", "0");
    M_AXI_GP0_transactor_param_props.addFloat("PHASE", "0.000");
    M_AXI_GP0_transactor_param_props.addString("NUM_WRITE_OUTSTANDING", "8");
    M_AXI_GP0_transactor_param_props.addString("NUM_READ_OUTSTANDING", "8");
    M_AXI_GP0_transactor_param_props.addString("PROTOCOL", "AXI3");
    M_AXI_GP0_transactor_param_props.addString("READ_WRITE_MODE", "READ_WRITE");
    M_AXI_GP0_transactor_param_props.addString("CLK_DOMAIN", "accelerator_bd_processing_system7_0_0_FCLK_CLK0");
    mp_M_AXI_GP0_transactor = new xtlm::xaximm_xtlm2pin_t<32,32,12,1,1,1,1,1>("M_AXI_GP0_transactor", M_AXI_GP0_transactor_param_props);
    mp_M_AXI_GP0_transactor->ARVALID(M_AXI_GP0_ARVALID);
    mp_M_AXI_GP0_transactor->AWVALID(M_AXI_GP0_AWVALID);
    mp_M_AXI_GP0_transactor->BREADY(M_AXI_GP0_BREADY);
    mp_M_AXI_GP0_transactor->RREADY(M_AXI_GP0_RREADY);
    mp_M_AXI_GP0_transactor->WLAST(M_AXI_GP0_WLAST);
    mp_M_AXI_GP0_transactor->WVALID(M_AXI_GP0_WVALID);
    mp_M_AXI_GP0_transactor->ARID(M_AXI_GP0_ARID);
    mp_M_AXI_GP0_transactor->AWID(M_AXI_GP0_AWID);
    mp_M_AXI_GP0_transactor->ARBURST(M_AXI_GP0_ARBURST);
    mp_M_AXI_GP0_ARLOCK_converter = new xsc::common::scalar2vectorN_converter<2>("M_AXI_GP0_ARLOCK_converter");
    mp_M_AXI_GP0_ARLOCK_converter->scalar_in(m_M_AXI_GP0_ARLOCK_converter_signal);
    mp_M_AXI_GP0_ARLOCK_converter->vector_out(M_AXI_GP0_ARLOCK);
    mp_M_AXI_GP0_transactor->ARLOCK(m_M_AXI_GP0_ARLOCK_converter_signal);
    mp_M_AXI_GP0_transactor->ARSIZE(M_AXI_GP0_ARSIZE);
    mp_M_AXI_GP0_transactor->AWBURST(M_AXI_GP0_AWBURST);
    mp_M_AXI_GP0_AWLOCK_converter = new xsc::common::scalar2vectorN_converter<2>("M_AXI_GP0_AWLOCK_converter");
    mp_M_AXI_GP0_AWLOCK_converter->scalar_in(m_M_AXI_GP0_AWLOCK_converter_signal);
    mp_M_AXI_GP0_AWLOCK_converter->vector_out(M_AXI_GP0_AWLOCK);
    mp_M_AXI_GP0_transactor->AWLOCK(m_M_AXI_GP0_AWLOCK_converter_signal);
    mp_M_AXI_GP0_transactor->AWSIZE(M_AXI_GP0_AWSIZE);
    mp_M_AXI_GP0_transactor->ARPROT(M_AXI_GP0_ARPROT);
    mp_M_AXI_GP0_transactor->AWPROT(M_AXI_GP0_AWPROT);
    mp_M_AXI_GP0_transactor->ARADDR(M_AXI_GP0_ARADDR);
    mp_M_AXI_GP0_transactor->AWADDR(M_AXI_GP0_AWADDR);
    mp_M_AXI_GP0_transactor->WDATA(M_AXI_GP0_WDATA);
    mp_M_AXI_GP0_transactor->ARCACHE(M_AXI_GP0_ARCACHE);
    mp_M_AXI_GP0_ARLEN_converter = new xsc::common::vector2vector_converter<8,4>("M_AXI_GP0_ARLEN_converter");
    mp_M_AXI_GP0_ARLEN_converter->vector_in(m_M_AXI_GP0_ARLEN_converter_signal);
    mp_M_AXI_GP0_ARLEN_converter->vector_out(M_AXI_GP0_ARLEN);
    mp_M_AXI_GP0_transactor->ARLEN(m_M_AXI_GP0_ARLEN_converter_signal);
    mp_M_AXI_GP0_transactor->ARQOS(M_AXI_GP0_ARQOS);
    mp_M_AXI_GP0_transactor->AWCACHE(M_AXI_GP0_AWCACHE);
    mp_M_AXI_GP0_AWLEN_converter = new xsc::common::vector2vector_converter<8,4>("M_AXI_GP0_AWLEN_converter");
    mp_M_AXI_GP0_AWLEN_converter->vector_in(m_M_AXI_GP0_AWLEN_converter_signal);
    mp_M_AXI_GP0_AWLEN_converter->vector_out(M_AXI_GP0_AWLEN);
    mp_M_AXI_GP0_transactor->AWLEN(m_M_AXI_GP0_AWLEN_converter_signal);
    mp_M_AXI_GP0_transactor->AWQOS(M_AXI_GP0_AWQOS);
    mp_M_AXI_GP0_transactor->WSTRB(M_AXI_GP0_WSTRB);
    mp_M_AXI_GP0_transactor->ARREADY(M_AXI_GP0_ARREADY);
    mp_M_AXI_GP0_transactor->AWREADY(M_AXI_GP0_AWREADY);
    mp_M_AXI_GP0_transactor->BVALID(M_AXI_GP0_BVALID);
    mp_M_AXI_GP0_transactor->RLAST(M_AXI_GP0_RLAST);
    mp_M_AXI_GP0_transactor->RVALID(M_AXI_GP0_RVALID);
    mp_M_AXI_GP0_transactor->WREADY(M_AXI_GP0_WREADY);
    mp_M_AXI_GP0_transactor->BID(M_AXI_GP0_BID);
    mp_M_AXI_GP0_transactor->RID(M_AXI_GP0_RID);
    mp_M_AXI_GP0_transactor->BRESP(M_AXI_GP0_BRESP);
    mp_M_AXI_GP0_transactor->RRESP(M_AXI_GP0_RRESP);
    mp_M_AXI_GP0_transactor->RDATA(M_AXI_GP0_RDATA);
    mp_M_AXI_GP0_transactor->CLK(M_AXI_GP0_ACLK);
    m_M_AXI_GP0_transactor_rst_signal.write(1);
    mp_M_AXI_GP0_transactor->RST(m_M_AXI_GP0_transactor_rst_signal);

    mp_impl->M_AXI_GP0_rd_socket->bind(*(mp_M_AXI_GP0_transactor->rd_socket));
    mp_impl->M_AXI_GP0_wr_socket->bind(*(mp_M_AXI_GP0_transactor->wr_socket));
  }
}

accelerator_bd_processing_system7_0_0::~accelerator_bd_processing_system7_0_0()
{
  delete mp_DMA0_REQ_transactor;
  delete mp_DMA0_ACK_transactor;
  delete mp_DMA1_REQ_transactor;
  delete mp_DMA1_ACK_transactor;
  delete mp_DMA2_REQ_transactor;
  delete mp_DMA2_ACK_transactor;
  delete mp_DMA3_REQ_transactor;
  delete mp_DMA3_ACK_transactor;
  delete mp_M_AXI_GP0_transactor;
  delete mp_M_AXI_GP0_ARLOCK_converter;
  delete mp_M_AXI_GP0_AWLOCK_converter;
  delete mp_M_AXI_GP0_ARLEN_converter;
  delete mp_M_AXI_GP0_AWLEN_converter;
}

#ifdef MTI_SYSTEMC
SC_MODULE_EXPORT(accelerator_bd_processing_system7_0_0);
#endif

#ifdef XM_SYSTEMC
XMSC_MODULE_EXPORT(accelerator_bd_processing_system7_0_0);
#endif

#ifdef RIVIERA
SC_MODULE_EXPORT(accelerator_bd_processing_system7_0_0);
#endif
