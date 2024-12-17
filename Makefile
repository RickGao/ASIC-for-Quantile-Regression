# Makefile

# defaults
SIM ?= icarus
# SIM = verilator
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += $(PWD)/quantile.v
VERILOG_SOURCES += $(PWD)/vector_register.v
VERILOG_SOURCES += $(PWD)/vector_processor.v
# use VHDL_SOURCES for VHDL files

# TOPLEVEL is the name of the toplevel module in your Verilog or VHDL file
TOPLEVEL = quantile

# MODULE is the basename of the Python test file
# MODULE = test_quantile
# MODULE = test_quantile_comprehensive
MODULE = test_quantile_regression

# include cocotb's make rules to take care of the simulator setup
include $(shell cocotb-config --makefiles)/Makefile.sim
