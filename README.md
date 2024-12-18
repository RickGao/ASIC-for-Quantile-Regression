ASIC for Quantile Regression

SIMD ASIC for Quantile Regression Algorithm

Instruction Set

| Name  | Opcode [31:28] | rs2 [27:23] | rs1 [22:18] | rd [17:13] | index [12:8] | reserve [7:0] |
|-------|----------------|-------------|-------------|------------|--------------|----------------|
| ADD   | 0000           | XXXXX       | XXXXX       | XXXXX      | 00000        | 00000000       |
| SUB   | 0001           | XXXXX       | XXXXX       | XXXXX      | 00000        | 00000000       |
| MUL   | 0010           | XXXXX       | XXXXX       | XXXXX      | XXXXX        | 00000000       |
| DIV   | 0011           | XXXXX       | XXXXX       | XXXXX      | XXXXX        | 00000000       |
| SLT   | 0100           | XXXXX       | XXXXX       | XXXXX      | 00000        | 00000000       |
| LOAD  | 1000           | 00000       | 00000       | XXXXX      | XXXXX        | 00000000       |
| STORE | 1001           | XXXXX       | 00000       | 00000      | XXXXX        | 00000000       |


Testbench develop using cocotb, please refer to cocotb tutorial

run quantile_regression_graph.py to generate test data

run make to test the design

run quantile_regression_graph to visualize the result
