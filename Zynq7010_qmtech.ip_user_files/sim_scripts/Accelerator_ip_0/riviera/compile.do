vlib work
vlib riviera

vlib riviera/xilinx_vip
vlib riviera/xil_defaultlib

vmap xilinx_vip riviera/xilinx_vip
vmap xil_defaultlib riviera/xil_defaultlib

vlog -work xilinx_vip  -sv2k12 "+incdir+E:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi4stream_vip_axi4streampc.sv" \
"E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi_vip_axi4pc.sv" \
"E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/xil_common_vip_pkg.sv" \
"E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi4stream_vip_pkg.sv" \
"E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi_vip_pkg.sv" \
"E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi4stream_vip_if.sv" \
"E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi_vip_if.sv" \
"E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/clk_vip_if.sv" \
"E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/rst_vip_if.sv" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/ip/Accelerator_ip_0/drivers/Accelerator_ip_v1_0/src" "+incdir+E:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../Zynq7010_qmtech.srcs/sources_1/ip/Accelerator_ip_0/hdl/Accelerator_ip_v1_0_S00_AXI.v" \
"../../../../Zynq7010_qmtech.srcs/sources_1/ip/Accelerator_ip_0/hdl/Accelerator_ip_v1_0_S_AXI_INTR.v" \
"../../../../Zynq7010_qmtech.srcs/sources_1/ip/Accelerator_ip_0/hdl/Accelerator_ip_v1_0.v" \
"../../../../Zynq7010_qmtech.srcs/sources_1/ip/Accelerator_ip_0/sim/Accelerator_ip_0.v" \

vlog -work xil_defaultlib \
"glbl.v"

