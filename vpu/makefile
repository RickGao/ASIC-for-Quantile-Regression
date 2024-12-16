# 指定使用 Verilator 仿真器
SIM = verilator

# 顶层语言类型
TOPLEVEL_LANG = verilog

# Verilog/SystemVerilog 源文件
VERILOG_SOURCES = $(PWD)/vector_processor.v

# 顶层模块名称
TOPLEVEL = vector_processor

# Python 测试模块名称（不带 `.py` 后缀）
MODULE = test_vector_processor

# 启用 Cocotb 的日志格式
export COCOTB_REDUCED_LOG_FMT=1

# 引入 Cocotb 的默认 Makefile
include $(shell cocotb-config --makefiles)/Makefile.sim
