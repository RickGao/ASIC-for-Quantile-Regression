// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/Users/rickgao/Desktop/quantile/vpu/vector_processor.v", 180, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_RAND_RESET_W(256, vlSelf->vec_a);
    VL_RAND_RESET_W(256, vlSelf->vec_b);
    vlSelf->scalar = VL_RAND_RESET_I(32);
    vlSelf->operation = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(256, vlSelf->result);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__vec_a);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__vec_b);
    vlSelf->vector_processor__DOT__scalar = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__operation = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__result);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__add_result);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__sub_result);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__mul_result);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__div_result);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__slt_result);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__add_inst__DOT__vec_a);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__add_inst__DOT__vec_b);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__add_inst__DOT__result);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__extended_a = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__extended_b = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__extended_result = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__extended_a = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__extended_b = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__extended_result = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__extended_a = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__extended_b = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__extended_result = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__extended_a = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__extended_b = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__extended_result = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__extended_a = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__extended_b = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__extended_result = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__extended_a = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__extended_b = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__extended_result = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__extended_a = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__extended_b = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__extended_result = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__extended_a = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__extended_b = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__extended_result = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__sub_inst__DOT__vec_a);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__sub_inst__DOT__vec_b);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__sub_inst__DOT__result);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__extended_a = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__extended_b = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__extended_result = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__extended_a = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__extended_b = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__extended_result = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__extended_a = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__extended_b = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__extended_result = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__extended_a = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__extended_b = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__extended_result = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__extended_a = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__extended_b = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__extended_result = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__extended_a = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__extended_b = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__extended_result = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__extended_a = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__extended_b = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__extended_result = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__extended_a = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__extended_b = VL_RAND_RESET_Q(48);
    vlSelf->vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__extended_result = VL_RAND_RESET_Q(48);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__mult_inst__DOT__vec_a);
    vlSelf->vector_processor__DOT__mult_inst__DOT__scalar = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__mult_inst__DOT__result);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__0__KET____DOT__multiplier__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__0__KET____DOT__multiplier__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__0__KET____DOT__multiplier__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__0__KET____DOT__multiplier__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__1__KET____DOT__multiplier__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__1__KET____DOT__multiplier__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__1__KET____DOT__multiplier__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__1__KET____DOT__multiplier__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__2__KET____DOT__multiplier__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__2__KET____DOT__multiplier__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__2__KET____DOT__multiplier__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__2__KET____DOT__multiplier__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__3__KET____DOT__multiplier__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__3__KET____DOT__multiplier__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__3__KET____DOT__multiplier__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__3__KET____DOT__multiplier__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__4__KET____DOT__multiplier__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__4__KET____DOT__multiplier__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__4__KET____DOT__multiplier__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__4__KET____DOT__multiplier__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__5__KET____DOT__multiplier__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__5__KET____DOT__multiplier__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__5__KET____DOT__multiplier__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__5__KET____DOT__multiplier__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__6__KET____DOT__multiplier__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__6__KET____DOT__multiplier__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__6__KET____DOT__multiplier__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__6__KET____DOT__multiplier__DOT__product = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__7__KET____DOT__multiplier__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__7__KET____DOT__multiplier__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__7__KET____DOT__multiplier__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__7__KET____DOT__multiplier__DOT__product = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__div_inst__DOT__vec_a);
    vlSelf->vector_processor__DOT__div_inst__DOT__scalar = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__div_inst__DOT__result);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__dividend = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__divisor = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__quotient = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__dividend = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__divisor = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__quotient = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__dividend = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__divisor = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__quotient = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__dividend = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__divisor = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__quotient = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__dividend = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__divisor = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__quotient = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__dividend = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__divisor = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__quotient = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__dividend = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__divisor = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__quotient = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__dividend = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__divisor = VL_RAND_RESET_Q(64);
    vlSelf->vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__quotient = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__comp_inst__DOT__vec_a);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__comp_inst__DOT__vec_b);
    VL_RAND_RESET_W(256, vlSelf->vector_processor__DOT__comp_inst__DOT__result);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__0__KET____DOT__comparator__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__0__KET____DOT__comparator__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__0__KET____DOT__comparator__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__1__KET____DOT__comparator__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__1__KET____DOT__comparator__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__1__KET____DOT__comparator__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__2__KET____DOT__comparator__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__2__KET____DOT__comparator__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__2__KET____DOT__comparator__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__3__KET____DOT__comparator__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__3__KET____DOT__comparator__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__3__KET____DOT__comparator__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__4__KET____DOT__comparator__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__4__KET____DOT__comparator__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__4__KET____DOT__comparator__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__5__KET____DOT__comparator__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__5__KET____DOT__comparator__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__5__KET____DOT__comparator__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__6__KET____DOT__comparator__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__6__KET____DOT__comparator__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__6__KET____DOT__comparator__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__7__KET____DOT__comparator__DOT__a = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__7__KET____DOT__comparator__DOT__b = VL_RAND_RESET_I(32);
    vlSelf->vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__7__KET____DOT__comparator__DOT__result = VL_RAND_RESET_I(32);
}
