vlib modelsim_lib/work
vlib modelsim_lib/msim

vlib modelsim_lib/msim/xilinx_vip
vlib modelsim_lib/msim/axi_infrastructure_v1_1_0
vlib modelsim_lib/msim/axi_vip_v1_1_6
vlib modelsim_lib/msim/processing_system7_vip_v1_0_8
vlib modelsim_lib/msim/xil_defaultlib

vmap xilinx_vip modelsim_lib/msim/xilinx_vip
vmap axi_infrastructure_v1_1_0 modelsim_lib/msim/axi_infrastructure_v1_1_0
vmap axi_vip_v1_1_6 modelsim_lib/msim/axi_vip_v1_1_6
vmap processing_system7_vip_v1_0_8 modelsim_lib/msim/processing_system7_vip_v1_0_8
vmap xil_defaultlib modelsim_lib/msim/xil_defaultlib

vlog -work xilinx_vip -64 -incr -sv -L axi_vip_v1_1_6 -L processing_system7_vip_v1_0_8 -L xilinx_vip "+incdir+E:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi4stream_vip_axi4streampc.sv" \
"E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi_vip_axi4pc.sv" \
"E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/xil_common_vip_pkg.sv" \
"E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi4stream_vip_pkg.sv" \
"E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi_vip_pkg.sv" \
"E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi4stream_vip_if.sv" \
"E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/axi_vip_if.sv" \
"E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/clk_vip_if.sv" \
"E:/Xilinx/Vivado/2019.2/data/xilinx_vip/hdl/rst_vip_if.sv" \

vlog -work axi_infrastructure_v1_1_0 -64 -incr "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/ec67/hdl" "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/2d50/hdl" "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ip/accelerator_bd_processing_system7_0_0" "+incdir+E:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/ec67/hdl/axi_infrastructure_v1_1_vl_rfs.v" \

vlog -work axi_vip_v1_1_6 -64 -incr -sv -L axi_vip_v1_1_6 -L processing_system7_vip_v1_0_8 -L xilinx_vip "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/ec67/hdl" "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/2d50/hdl" "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ip/accelerator_bd_processing_system7_0_0" "+incdir+E:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/dc12/hdl/axi_vip_v1_1_vl_rfs.sv" \

vlog -work processing_system7_vip_v1_0_8 -64 -incr -sv -L axi_vip_v1_1_6 -L processing_system7_vip_v1_0_8 -L xilinx_vip "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/ec67/hdl" "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/2d50/hdl" "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ip/accelerator_bd_processing_system7_0_0" "+incdir+E:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/2d50/hdl/processing_system7_vip_v1_0_vl_rfs.sv" \

vlog -work xil_defaultlib -64 -incr "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/ec67/hdl" "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ipshared/2d50/hdl" "+incdir+../../../../Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ip/accelerator_bd_processing_system7_0_0" "+incdir+E:/Xilinx/Vivado/2019.2/data/xilinx_vip/include" \
"../../../bd/accelerator_bd/ip/accelerator_bd_processing_system7_0_0/sim/accelerator_bd_processing_system7_0_0.v" \
"../../../bd/accelerator_bd/sim/accelerator_bd.v" \

vlog -work xil_defaultlib \
"glbl.v"

