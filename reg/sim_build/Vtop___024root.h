// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(read_addr_a,4,0);
    VL_IN8(read_addr_b,4,0);
    VL_IN8(write_addr,4,0);
    VL_IN8(we,0,0);
    VL_IN8(index,2,0);
    VL_IN8(index_mode,0,0);
    CData/*0:0*/ vector_register__DOT__clk;
    CData/*0:0*/ vector_register__DOT__rst_n;
    CData/*4:0*/ vector_register__DOT__read_addr_a;
    CData/*4:0*/ vector_register__DOT__read_addr_b;
    CData/*4:0*/ vector_register__DOT__write_addr;
    CData/*0:0*/ vector_register__DOT__we;
    CData/*2:0*/ vector_register__DOT__index;
    CData/*0:0*/ vector_register__DOT__index_mode;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VL_INW(write_vec,255,0,8);
    VL_IN(write_scalar,31,0);
    VL_OUTW(read_vec_a,255,0,8);
    VL_OUTW(read_vec_b,255,0,8);
    VL_OUT(read_scalar,31,0);
    VlWide<8>/*255:0*/ vector_register__DOT__write_vec;
    IData/*31:0*/ vector_register__DOT__write_scalar;
    VlWide<8>/*255:0*/ vector_register__DOT__read_vec_a;
    VlWide<8>/*255:0*/ vector_register__DOT__read_vec_b;
    IData/*31:0*/ vector_register__DOT__read_scalar;
    IData/*31:0*/ vector_register__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<VlWide<8>/*255:0*/, 32> vector_register__DOT__reg_file;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
