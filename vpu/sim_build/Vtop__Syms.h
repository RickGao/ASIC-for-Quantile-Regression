// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop.h"

// INCLUDE MODULE CLASSES
#include "Vtop___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop___024root                 TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_vector_processor;
    VerilatedScope __Vscope_vector_processor__add_inst;
    VerilatedScope __Vscope_vector_processor__add_inst__add_loop__BRA__0__KET____adder;
    VerilatedScope __Vscope_vector_processor__add_inst__add_loop__BRA__1__KET____adder;
    VerilatedScope __Vscope_vector_processor__add_inst__add_loop__BRA__2__KET____adder;
    VerilatedScope __Vscope_vector_processor__add_inst__add_loop__BRA__3__KET____adder;
    VerilatedScope __Vscope_vector_processor__add_inst__add_loop__BRA__4__KET____adder;
    VerilatedScope __Vscope_vector_processor__add_inst__add_loop__BRA__5__KET____adder;
    VerilatedScope __Vscope_vector_processor__add_inst__add_loop__BRA__6__KET____adder;
    VerilatedScope __Vscope_vector_processor__add_inst__add_loop__BRA__7__KET____adder;
    VerilatedScope __Vscope_vector_processor__comp_inst;
    VerilatedScope __Vscope_vector_processor__comp_inst__slt_loop__BRA__0__KET____comparator;
    VerilatedScope __Vscope_vector_processor__comp_inst__slt_loop__BRA__1__KET____comparator;
    VerilatedScope __Vscope_vector_processor__comp_inst__slt_loop__BRA__2__KET____comparator;
    VerilatedScope __Vscope_vector_processor__comp_inst__slt_loop__BRA__3__KET____comparator;
    VerilatedScope __Vscope_vector_processor__comp_inst__slt_loop__BRA__4__KET____comparator;
    VerilatedScope __Vscope_vector_processor__comp_inst__slt_loop__BRA__5__KET____comparator;
    VerilatedScope __Vscope_vector_processor__comp_inst__slt_loop__BRA__6__KET____comparator;
    VerilatedScope __Vscope_vector_processor__comp_inst__slt_loop__BRA__7__KET____comparator;
    VerilatedScope __Vscope_vector_processor__div_inst;
    VerilatedScope __Vscope_vector_processor__div_inst__div_loop__BRA__0__KET____divider;
    VerilatedScope __Vscope_vector_processor__div_inst__div_loop__BRA__1__KET____divider;
    VerilatedScope __Vscope_vector_processor__div_inst__div_loop__BRA__2__KET____divider;
    VerilatedScope __Vscope_vector_processor__div_inst__div_loop__BRA__3__KET____divider;
    VerilatedScope __Vscope_vector_processor__div_inst__div_loop__BRA__4__KET____divider;
    VerilatedScope __Vscope_vector_processor__div_inst__div_loop__BRA__5__KET____divider;
    VerilatedScope __Vscope_vector_processor__div_inst__div_loop__BRA__6__KET____divider;
    VerilatedScope __Vscope_vector_processor__div_inst__div_loop__BRA__7__KET____divider;
    VerilatedScope __Vscope_vector_processor__mult_inst;
    VerilatedScope __Vscope_vector_processor__mult_inst__mul_loop__BRA__0__KET____multiplier;
    VerilatedScope __Vscope_vector_processor__mult_inst__mul_loop__BRA__1__KET____multiplier;
    VerilatedScope __Vscope_vector_processor__mult_inst__mul_loop__BRA__2__KET____multiplier;
    VerilatedScope __Vscope_vector_processor__mult_inst__mul_loop__BRA__3__KET____multiplier;
    VerilatedScope __Vscope_vector_processor__mult_inst__mul_loop__BRA__4__KET____multiplier;
    VerilatedScope __Vscope_vector_processor__mult_inst__mul_loop__BRA__5__KET____multiplier;
    VerilatedScope __Vscope_vector_processor__mult_inst__mul_loop__BRA__6__KET____multiplier;
    VerilatedScope __Vscope_vector_processor__mult_inst__mul_loop__BRA__7__KET____multiplier;
    VerilatedScope __Vscope_vector_processor__sub_inst;
    VerilatedScope __Vscope_vector_processor__sub_inst__sub_loop__BRA__0__KET____subtractor;
    VerilatedScope __Vscope_vector_processor__sub_inst__sub_loop__BRA__1__KET____subtractor;
    VerilatedScope __Vscope_vector_processor__sub_inst__sub_loop__BRA__2__KET____subtractor;
    VerilatedScope __Vscope_vector_processor__sub_inst__sub_loop__BRA__3__KET____subtractor;
    VerilatedScope __Vscope_vector_processor__sub_inst__sub_loop__BRA__4__KET____subtractor;
    VerilatedScope __Vscope_vector_processor__sub_inst__sub_loop__BRA__5__KET____subtractor;
    VerilatedScope __Vscope_vector_processor__sub_inst__sub_loop__BRA__6__KET____subtractor;
    VerilatedScope __Vscope_vector_processor__sub_inst__sub_loop__BRA__7__KET____subtractor;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp);
    ~Vtop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
