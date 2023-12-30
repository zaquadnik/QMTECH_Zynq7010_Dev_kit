onbreak {quit -force}
onerror {quit -force}

asim -t 1ps +access +r +m+Accelerator_ip_0 -L xilinx_vip -L xil_defaultlib -L xilinx_vip -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.Accelerator_ip_0 xil_defaultlib.glbl

do {wave.do}

view wave
view structure

do {Accelerator_ip_0.udo}

run -all

endsim

quit -force
