vlib work
vlib riviera

vlib riviera/xilinx_vip
vlib riviera/axi_infrastructure_v1_1_0
vlib riviera/axi_vip_v1_1_6
vlib riviera/processing_system7_vip_v1_0_8
vlib riviera/xil_defaultlib

vmap xilinx_vip riviera/xilinx_vip
vmap axi_infrastructure_v1_1_0 riviera/axi_infrastructure_v1_1_0
vmap axi_vip_v1_1_6 riviera/axi_vip_v1_1_6
vmap processing_system7_vip_v1_0_8 riviera/processing_system7_vip_v1_0_8
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

vlog -work axi_infrastructure_v1_1_0  -v2k5 "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/ec67/hdl" "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/2d50/hdl" "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ip/accelerator_bd_processing_system7_0_0" "+incdir+E:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/ec67/hdl/axi_infrastructure_v1_1_vl_rfs.v" \

vlog -work axi_vip_v1_1_6  -sv2k12 "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/ec67/hdl" "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/2d50/hdl" "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ip/accelerator_bd_processing_system7_0_0" "+incdir+E:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/dc12/hdl/axi_vip_v1_1_vl_rfs.sv" \

vlog -work processing_system7_vip_v1_0_8  -sv2k12 "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/ec67/hdl" "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/2d50/hdl" "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ip/accelerator_bd_processing_system7_0_0" "+incdir+E:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/2d50/hdl/processing_system7_vip_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib  -v2k5 "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/ec67/hdl" "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/2d50/hdl" "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ip/accelerator_bd_processing_system7_0_0" "+incdir+E:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../bd/accelerator_bd/ip/accelerator_bd_processing_system7_0_0/sim/accelerator_bd_processing_system7_0_0.v" \
"../../../bd/accelerator_bd/sim/accelerator_bd.v" \

vlog -work xil_defaultlib \
"glbl.v"

