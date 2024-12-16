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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(operation,2,0);
        CData/*2:0*/ vector_processor__DOT__operation;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VactContinue;
        VL_INW(vec_a,255,0,8);
        VL_INW(vec_b,255,0,8);
        VL_IN(scalar,31,0);
        VL_OUTW(result,255,0,8);
        VlWide<8>/*255:0*/ vector_processor__DOT__vec_a;
        VlWide<8>/*255:0*/ vector_processor__DOT__vec_b;
        IData/*31:0*/ vector_processor__DOT__scalar;
        VlWide<8>/*255:0*/ vector_processor__DOT__result;
        VlWide<8>/*255:0*/ vector_processor__DOT__add_result;
        VlWide<8>/*255:0*/ vector_processor__DOT__sub_result;
        VlWide<8>/*255:0*/ vector_processor__DOT__mul_result;
        VlWide<8>/*255:0*/ vector_processor__DOT__div_result;
        VlWide<8>/*255:0*/ vector_processor__DOT__slt_result;
        VlWide<8>/*255:0*/ vector_processor__DOT__add_inst__DOT__vec_a;
        VlWide<8>/*255:0*/ vector_processor__DOT__add_inst__DOT__vec_b;
        VlWide<8>/*255:0*/ vector_processor__DOT__add_inst__DOT__result;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__a;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__b;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__result;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__a;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__b;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__result;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__a;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__b;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__result;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__a;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__b;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__result;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__a;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__b;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__result;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__a;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__b;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__result;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__a;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__b;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__result;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__a;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__b;
        IData/*31:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__result;
        VlWide<8>/*255:0*/ vector_processor__DOT__sub_inst__DOT__vec_a;
        VlWide<8>/*255:0*/ vector_processor__DOT__sub_inst__DOT__vec_b;
        VlWide<8>/*255:0*/ vector_processor__DOT__sub_inst__DOT__result;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__a;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__b;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__result;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__a;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__b;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__result;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__a;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__b;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__result;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__a;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__b;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__result;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__a;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__b;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__result;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__a;
    };
    struct {
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__b;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__result;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__a;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__b;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__result;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__a;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__b;
        IData/*31:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__result;
        VlWide<8>/*255:0*/ vector_processor__DOT__mult_inst__DOT__vec_a;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__scalar;
        VlWide<8>/*255:0*/ vector_processor__DOT__mult_inst__DOT__result;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__0__KET____DOT__multiplier__DOT__a;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__0__KET____DOT__multiplier__DOT__b;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__0__KET____DOT__multiplier__DOT__result;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__1__KET____DOT__multiplier__DOT__a;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__1__KET____DOT__multiplier__DOT__b;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__1__KET____DOT__multiplier__DOT__result;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__2__KET____DOT__multiplier__DOT__a;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__2__KET____DOT__multiplier__DOT__b;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__2__KET____DOT__multiplier__DOT__result;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__3__KET____DOT__multiplier__DOT__a;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__3__KET____DOT__multiplier__DOT__b;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__3__KET____DOT__multiplier__DOT__result;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__4__KET____DOT__multiplier__DOT__a;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__4__KET____DOT__multiplier__DOT__b;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__4__KET____DOT__multiplier__DOT__result;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__5__KET____DOT__multiplier__DOT__a;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__5__KET____DOT__multiplier__DOT__b;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__5__KET____DOT__multiplier__DOT__result;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__6__KET____DOT__multiplier__DOT__a;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__6__KET____DOT__multiplier__DOT__b;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__6__KET____DOT__multiplier__DOT__result;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__7__KET____DOT__multiplier__DOT__a;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__7__KET____DOT__multiplier__DOT__b;
        IData/*31:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__7__KET____DOT__multiplier__DOT__result;
        VlWide<8>/*255:0*/ vector_processor__DOT__div_inst__DOT__vec_a;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__scalar;
        VlWide<8>/*255:0*/ vector_processor__DOT__div_inst__DOT__result;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__a;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__b;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__result;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__a;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__b;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__result;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__a;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__b;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__result;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__a;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__b;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__result;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__a;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__b;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__result;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__a;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__b;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__result;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__a;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__b;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__result;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__a;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__b;
        IData/*31:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__result;
        VlWide<8>/*255:0*/ vector_processor__DOT__comp_inst__DOT__vec_a;
        VlWide<8>/*255:0*/ vector_processor__DOT__comp_inst__DOT__vec_b;
    };
    struct {
        VlWide<8>/*255:0*/ vector_processor__DOT__comp_inst__DOT__result;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__0__KET____DOT__comparator__DOT__a;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__0__KET____DOT__comparator__DOT__b;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__0__KET____DOT__comparator__DOT__result;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__1__KET____DOT__comparator__DOT__a;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__1__KET____DOT__comparator__DOT__b;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__1__KET____DOT__comparator__DOT__result;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__2__KET____DOT__comparator__DOT__a;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__2__KET____DOT__comparator__DOT__b;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__2__KET____DOT__comparator__DOT__result;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__3__KET____DOT__comparator__DOT__a;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__3__KET____DOT__comparator__DOT__b;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__3__KET____DOT__comparator__DOT__result;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__4__KET____DOT__comparator__DOT__a;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__4__KET____DOT__comparator__DOT__b;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__4__KET____DOT__comparator__DOT__result;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__5__KET____DOT__comparator__DOT__a;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__5__KET____DOT__comparator__DOT__b;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__5__KET____DOT__comparator__DOT__result;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__6__KET____DOT__comparator__DOT__a;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__6__KET____DOT__comparator__DOT__b;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__6__KET____DOT__comparator__DOT__result;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__7__KET____DOT__comparator__DOT__a;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__7__KET____DOT__comparator__DOT__b;
        IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__7__KET____DOT__comparator__DOT__result;
        IData/*31:0*/ __VactIterCount;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__extended_a;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__extended_b;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__extended_result;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__extended_a;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__extended_b;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__extended_result;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__extended_a;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__extended_b;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__extended_result;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__extended_a;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__extended_b;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__extended_result;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__extended_a;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__extended_b;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__extended_result;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__extended_a;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__extended_b;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__extended_result;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__extended_a;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__extended_b;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__extended_result;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__extended_a;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__extended_b;
        QData/*47:0*/ vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__extended_result;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__extended_a;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__extended_b;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__extended_result;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__extended_a;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__extended_b;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__extended_result;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__extended_a;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__extended_b;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__extended_result;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__extended_a;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__extended_b;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__extended_result;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__extended_a;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__extended_b;
    };
    struct {
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__extended_result;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__extended_a;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__extended_b;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__extended_result;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__extended_a;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__extended_b;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__extended_result;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__extended_a;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__extended_b;
        QData/*47:0*/ vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__extended_result;
        QData/*63:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__0__KET____DOT__multiplier__DOT__product;
        QData/*63:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__1__KET____DOT__multiplier__DOT__product;
        QData/*63:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__2__KET____DOT__multiplier__DOT__product;
        QData/*63:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__3__KET____DOT__multiplier__DOT__product;
        QData/*63:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__4__KET____DOT__multiplier__DOT__product;
        QData/*63:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__5__KET____DOT__multiplier__DOT__product;
        QData/*63:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__6__KET____DOT__multiplier__DOT__product;
        QData/*63:0*/ vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__7__KET____DOT__multiplier__DOT__product;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__dividend;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__divisor;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__quotient;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__dividend;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__divisor;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__quotient;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__dividend;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__divisor;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__quotient;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__dividend;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__divisor;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__quotient;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__dividend;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__divisor;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__quotient;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__dividend;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__divisor;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__quotient;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__dividend;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__divisor;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__quotient;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__dividend;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__divisor;
        QData/*63:0*/ vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__quotient;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__0__KET____DOT__comparator__DOT__FIXED_POINT_ONE = 0x00010000U;
    static constexpr IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__0__KET____DOT__comparator__DOT__FIXED_POINT_ZERO = 0U;
    static constexpr IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__1__KET____DOT__comparator__DOT__FIXED_POINT_ONE = 0x00010000U;
    static constexpr IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__1__KET____DOT__comparator__DOT__FIXED_POINT_ZERO = 0U;
    static constexpr IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__2__KET____DOT__comparator__DOT__FIXED_POINT_ONE = 0x00010000U;
    static constexpr IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__2__KET____DOT__comparator__DOT__FIXED_POINT_ZERO = 0U;
    static constexpr IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__3__KET____DOT__comparator__DOT__FIXED_POINT_ONE = 0x00010000U;
    static constexpr IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__3__KET____DOT__comparator__DOT__FIXED_POINT_ZERO = 0U;
    static constexpr IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__4__KET____DOT__comparator__DOT__FIXED_POINT_ONE = 0x00010000U;
    static constexpr IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__4__KET____DOT__comparator__DOT__FIXED_POINT_ZERO = 0U;
    static constexpr IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__5__KET____DOT__comparator__DOT__FIXED_POINT_ONE = 0x00010000U;
    static constexpr IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__5__KET____DOT__comparator__DOT__FIXED_POINT_ZERO = 0U;
    static constexpr IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__6__KET____DOT__comparator__DOT__FIXED_POINT_ONE = 0x00010000U;
    static constexpr IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__6__KET____DOT__comparator__DOT__FIXED_POINT_ZERO = 0U;
    static constexpr IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__7__KET____DOT__comparator__DOT__FIXED_POINT_ONE = 0x00010000U;
    static constexpr IData/*31:0*/ vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__7__KET____DOT__comparator__DOT__FIXED_POINT_ZERO = 0U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
