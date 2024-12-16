// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"
#include "Vtop.h"
#include "Vtop___024root.h"

// FUNCTIONS
Vtop__Syms::~Vtop__Syms()
{

    // Tear down scope hierarchy
    __Vhier.remove(0, &__Vscope_vector_register);
    __Vhier.remove(&__Vscope_vector_register, &__Vscope_vector_register__unnamedblk1);

}

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(109);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_TOP.configure(this, name(), "TOP", "TOP", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_vector_register.configure(this, name(), "vector_register", "vector_register", -9, VerilatedScope::SCOPE_MODULE);
    __Vscope_vector_register__unnamedblk1.configure(this, name(), "vector_register.unnamedblk1", "unnamedblk1", -9, VerilatedScope::SCOPE_OTHER);

    // Set up scope hierarchy
    __Vhier.add(0, &__Vscope_vector_register);
    __Vhier.add(&__Vscope_vector_register, &__Vscope_vector_register__unnamedblk1);

    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_TOP.varInsert(__Vfinal,"clk", &(TOP.clk), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"index", &(TOP.index), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,2,0);
        __Vscope_TOP.varInsert(__Vfinal,"index_mode", &(TOP.index_mode), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"read_addr_a", &(TOP.read_addr_a), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"read_addr_b", &(TOP.read_addr_b), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"read_scalar", &(TOP.read_scalar), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"read_vec_a", &(TOP.read_vec_a), false, VLVT_WDATA,VLVD_OUT|VLVF_PUB_RW,1 ,255,0);
        __Vscope_TOP.varInsert(__Vfinal,"read_vec_b", &(TOP.read_vec_b), false, VLVT_WDATA,VLVD_OUT|VLVF_PUB_RW,1 ,255,0);
        __Vscope_TOP.varInsert(__Vfinal,"rst_n", &(TOP.rst_n), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"we", &(TOP.we), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,0);
        __Vscope_TOP.varInsert(__Vfinal,"write_addr", &(TOP.write_addr), false, VLVT_UINT8,VLVD_IN|VLVF_PUB_RW,1 ,4,0);
        __Vscope_TOP.varInsert(__Vfinal,"write_scalar", &(TOP.write_scalar), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_TOP.varInsert(__Vfinal,"write_vec", &(TOP.write_vec), false, VLVT_WDATA,VLVD_IN|VLVF_PUB_RW,1 ,255,0);
        __Vscope_vector_register.varInsert(__Vfinal,"clk", &(TOP.vector_register__DOT__clk), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_vector_register.varInsert(__Vfinal,"index", &(TOP.vector_register__DOT__index), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_vector_register.varInsert(__Vfinal,"index_mode", &(TOP.vector_register__DOT__index_mode), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_vector_register.varInsert(__Vfinal,"read_addr_a", &(TOP.vector_register__DOT__read_addr_a), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_vector_register.varInsert(__Vfinal,"read_addr_b", &(TOP.vector_register__DOT__read_addr_b), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_vector_register.varInsert(__Vfinal,"read_scalar", &(TOP.vector_register__DOT__read_scalar), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_vector_register.varInsert(__Vfinal,"read_vec_a", &(TOP.vector_register__DOT__read_vec_a), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,255,0);
        __Vscope_vector_register.varInsert(__Vfinal,"read_vec_b", &(TOP.vector_register__DOT__read_vec_b), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,255,0);
        __Vscope_vector_register.varInsert(__Vfinal,"reg_file", &(TOP.vector_register__DOT__reg_file), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,2 ,255,0 ,31,0);
        __Vscope_vector_register.varInsert(__Vfinal,"rst_n", &(TOP.vector_register__DOT__rst_n), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_vector_register.varInsert(__Vfinal,"we", &(TOP.vector_register__DOT__we), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_vector_register.varInsert(__Vfinal,"write_addr", &(TOP.vector_register__DOT__write_addr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,4,0);
        __Vscope_vector_register.varInsert(__Vfinal,"write_scalar", &(TOP.vector_register__DOT__write_scalar), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_vector_register.varInsert(__Vfinal,"write_vec", &(TOP.vector_register__DOT__write_vec), false, VLVT_WDATA,VLVD_NODIR|VLVF_PUB_RW,1 ,255,0);
        __Vscope_vector_register__unnamedblk1.varInsert(__Vfinal,"i", &(TOP.vector_register__DOT__unnamedblk1__DOT__i), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,1 ,31,0);
    }
}
