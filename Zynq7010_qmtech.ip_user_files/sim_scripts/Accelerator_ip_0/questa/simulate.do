onbreak {quit -f}
onerror {quit -f}

vsim -t 1ps -lib xil_defaultlib Accelerator_ip_0_opt

do {wave.do}

view wave
view structure
view signals

do {Accelerator_ip_0.udo}

run -all

quit -force
