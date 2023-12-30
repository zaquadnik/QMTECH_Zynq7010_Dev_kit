-makelib ies_lib/xilinx_vip -sv \
  "E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi4stream_vip_axi4streampc.sv" \
  "E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi_vip_axi4pc.sv" \
  "E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/xil_common_vip_pkg.sv" \
  "E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi4stream_vip_pkg.sv" \
  "E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi_vip_pkg.sv" \
  "E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi4stream_vip_if.sv" \
  "E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi_vip_if.sv" \
  "E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/clk_vip_if.sv" \
  "E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/rst_vip_if.sv" \
-endlib
-makelib ies_lib/xil_defaultlib \
  "../../../../Zynq7010_qmtech.srcs/sources_1/ip/Accelerator_ip_0/hdl/Accelerator_ip_v1_0_S00_AXI.v" \
  "../../../../Zynq7010_qmtech.srcs/sources_1/ip/Accelerator_ip_0/hdl/Accelerator_ip_v1_0_S_AXI_INTR.v" \
  "../../../../Zynq7010_qmtech.srcs/sources_1/ip/Accelerator_ip_0/hdl/Accelerator_ip_v1_0.v" \
  "../../../../Zynq7010_qmtech.srcs/sources_1/ip/Accelerator_ip_0/sim/Accelerator_ip_0.v" \
-endlib
-makelib ies_lib/xil_defaultlib \
  glbl.v
-endlib

