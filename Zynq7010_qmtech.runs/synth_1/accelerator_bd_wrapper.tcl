# 
# Synthesis run script generated by Vivado
# 

set TIME_start [clock seconds] 
proc create_report { reportName command } {
  set status "."
  append status $reportName ".fail"
  if { [file exists $status] } {
    eval file delete [glob $status]
  }
  send_msg_id runtcl-4 info "Executing : $command"
  set retval [eval catch { $command } msg]
  if { $retval != 0 } {
    set fp [open $status w]
    close $fp
    send_msg_id runtcl-5 warning "$msg"
  }
}
create_project -in_memory -part xc7z010clg400-2

set_param project.singleFileAddWarning.threshold 0
set_param project.compositeFile.enableAutoGeneration 0
set_param synth.vivado.isSynthRun true
set_msg_config -source 4 -id {IP_Flow 19-2162} -severity warning -new_severity info
set_property webtalk.parent_dir D:/Engineering/Projekty/FPGA/Xilinx/Zynq7010_qmtech/Zynq7010_qmtech.cache/wt [current_project]
set_property parent.project_path D:/Engineering/Projekty/FPGA/Xilinx/Zynq7010_qmtech/Zynq7010_qmtech.xpr [current_project]
set_property default_lib xil_defaultlib [current_project]
set_property target_language Verilog [current_project]
set_property ip_output_repo d:/Engineering/Projekty/FPGA/Xilinx/Zynq7010_qmtech/Zynq7010_qmtech.cache/ip [current_project]
set_property ip_cache_permissions {read write} [current_project]
read_verilog -library xil_defaultlib D:/Engineering/Projekty/FPGA/Xilinx/Zynq7010_qmtech/Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/hdl/accelerator_bd_wrapper.v
add_files D:/Engineering/Projekty/FPGA/Xilinx/Zynq7010_qmtech/Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/accelerator_bd.bd
set_property used_in_implementation false [get_files -all d:/Engineering/Projekty/FPGA/Xilinx/Zynq7010_qmtech/Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/ip/accelerator_bd_processing_system7_0_0/accelerator_bd_processing_system7_0_0.xdc]
set_property used_in_implementation false [get_files -all D:/Engineering/Projekty/FPGA/Xilinx/Zynq7010_qmtech/Zynq7010_qmtech.srcs/sources_1/bd/accelerator_bd/accelerator_bd_ooc.xdc]

# Mark all dcp files as not used in implementation to prevent them from being
# stitched into the results of this synthesis run. Any black boxes in the
# design are intentionally left as such for best results. Dcp files will be
# stitched into the design at a later time, either when this synthesis run is
# opened, or when it is stitched into a dependent implementation run.
foreach dcp [get_files -quiet -all -filter file_type=="Design\ Checkpoint"] {
  set_property used_in_implementation false $dcp
}
read_xdc dont_touch.xdc
set_property used_in_implementation false [get_files dont_touch.xdc]
set_param ips.enableIPCacheLiteLoad 1
close [open __synthesis_is_running__ w]

synth_design -top accelerator_bd_wrapper -part xc7z010clg400-2


# disable binary constraint mode for synth run checkpoints
set_param constraints.enableBinaryConstraints false
write_checkpoint -force -noxdef accelerator_bd_wrapper.dcp
create_report "synth_1_synth_report_utilization_0" "report_utilization -file accelerator_bd_wrapper_utilization_synth.rpt -pb accelerator_bd_wrapper_utilization_synth.pb"
file delete __synthesis_is_running__
close [open __synthesis_is_complete__ w]
