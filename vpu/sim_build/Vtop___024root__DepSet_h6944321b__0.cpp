// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.vector_processor__DOT__operation = vlSelfRef.operation;
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[0U] >> 0U));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[0U] >> 0U));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0x20U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[1U] >> 0U));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0x20U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[1U] >> 0U));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0x40U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[2U] >> 0U));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0x40U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[2U] >> 0U));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0x60U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[3U] >> 0U));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0x60U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[3U] >> 0U));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0x80U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[4U] >> 0U));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0x80U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[4U] >> 0U));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0xa0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[5U] >> 0U));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0xa0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[5U] >> 0U));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0xc0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[6U] >> 0U));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0xc0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[6U] >> 0U));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0xe0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[7U] >> 0U));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0xe0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[7U] >> 0U));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[0U] >> 0U));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[0U] >> 0U));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0x20U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[1U] >> 0U));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0x20U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[1U] >> 0U));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0x40U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[2U] >> 0U));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0x40U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[2U] >> 0U));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0x60U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[3U] >> 0U));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0x60U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[3U] >> 0U));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0x80U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[4U] >> 0U));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0x80U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[4U] >> 0U));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0xa0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[5U] >> 0U));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0xa0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[5U] >> 0U));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0xc0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[6U] >> 0U));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0xc0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[6U] >> 0U));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0xe0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[7U] >> 0U));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0xe0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[7U] >> 0U));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__0__KET____DOT__multiplier__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[0U] >> 0U));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__1__KET____DOT__multiplier__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0x20U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[1U] >> 0U));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__2__KET____DOT__multiplier__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0x40U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[2U] >> 0U));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__3__KET____DOT__multiplier__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0x60U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[3U] >> 0U));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__4__KET____DOT__multiplier__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0x80U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[4U] >> 0U));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__5__KET____DOT__multiplier__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0xa0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[5U] >> 0U));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__6__KET____DOT__multiplier__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0xc0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[6U] >> 0U));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__7__KET____DOT__multiplier__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0xe0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[7U] >> 0U));
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[0U] >> 0U));
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0x20U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[1U] >> 0U));
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0x40U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[2U] >> 0U));
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0x60U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[3U] >> 0U));
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0x80U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[4U] >> 0U));
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0xa0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[5U] >> 0U));
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0xc0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[6U] >> 0U));
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0xe0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[7U] >> 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__0__KET____DOT__comparator__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[0U] >> 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__0__KET____DOT__comparator__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[0U] >> 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__1__KET____DOT__comparator__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0x20U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[1U] >> 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__1__KET____DOT__comparator__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0x20U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[1U] >> 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__2__KET____DOT__comparator__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0x40U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[2U] >> 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__2__KET____DOT__comparator__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0x40U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[2U] >> 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__3__KET____DOT__comparator__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0x60U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[3U] >> 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__3__KET____DOT__comparator__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0x60U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[3U] >> 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__4__KET____DOT__comparator__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0x80U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[4U] >> 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__4__KET____DOT__comparator__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0x80U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[4U] >> 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__5__KET____DOT__comparator__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0xa0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[5U] >> 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__5__KET____DOT__comparator__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0xa0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[5U] >> 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__6__KET____DOT__comparator__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0xc0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[6U] >> 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__6__KET____DOT__comparator__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0xc0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[6U] >> 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__7__KET____DOT__comparator__DOT__a 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_a[(((IData)(0x1fU) 
                                                 + (IData)(0xe0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_a[7U] >> 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__7__KET____DOT__comparator__DOT__b 
        = (((0U == 0U) ? 0U : (vlSelfRef.vec_b[(((IData)(0x1fU) 
                                                 + (IData)(0xe0U)) 
                                                >> 5U)] 
                               << ((IData)(0x20U) - (IData)(0U)))) 
           | (vlSelfRef.vec_b[7U] >> 0U));
    vlSelfRef.vector_processor__DOT__vec_b[0U] = vlSelfRef.vec_b[0U];
    vlSelfRef.vector_processor__DOT__vec_b[1U] = vlSelfRef.vec_b[1U];
    vlSelfRef.vector_processor__DOT__vec_b[2U] = vlSelfRef.vec_b[2U];
    vlSelfRef.vector_processor__DOT__vec_b[3U] = vlSelfRef.vec_b[3U];
    vlSelfRef.vector_processor__DOT__vec_b[4U] = vlSelfRef.vec_b[4U];
    vlSelfRef.vector_processor__DOT__vec_b[5U] = vlSelfRef.vec_b[5U];
    vlSelfRef.vector_processor__DOT__vec_b[6U] = vlSelfRef.vec_b[6U];
    vlSelfRef.vector_processor__DOT__vec_b[7U] = vlSelfRef.vec_b[7U];
    vlSelfRef.vector_processor__DOT__vec_a[0U] = vlSelfRef.vec_a[0U];
    vlSelfRef.vector_processor__DOT__vec_a[1U] = vlSelfRef.vec_a[1U];
    vlSelfRef.vector_processor__DOT__vec_a[2U] = vlSelfRef.vec_a[2U];
    vlSelfRef.vector_processor__DOT__vec_a[3U] = vlSelfRef.vec_a[3U];
    vlSelfRef.vector_processor__DOT__vec_a[4U] = vlSelfRef.vec_a[4U];
    vlSelfRef.vector_processor__DOT__vec_a[5U] = vlSelfRef.vec_a[5U];
    vlSelfRef.vector_processor__DOT__vec_a[6U] = vlSelfRef.vec_a[6U];
    vlSelfRef.vector_processor__DOT__vec_a[7U] = vlSelfRef.vec_a[7U];
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__0__KET____DOT__comparator__DOT__result 
        = (((vlSelfRef.vec_a[0U] >> 0x1fU) == (vlSelfRef.vec_b[0U] 
                                               >> 0x1fU))
            ? ((vlSelfRef.vec_a[0U] < vlSelfRef.vec_b[0U])
                ? 0x10000U : 0U) : ((vlSelfRef.vec_a[0U] 
                                     >> 0x1fU) ? 0x10000U
                                     : 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__1__KET____DOT__comparator__DOT__result 
        = (((vlSelfRef.vec_a[1U] >> 0x1fU) == (vlSelfRef.vec_b[1U] 
                                               >> 0x1fU))
            ? ((vlSelfRef.vec_a[1U] < vlSelfRef.vec_b[1U])
                ? 0x10000U : 0U) : ((vlSelfRef.vec_a[1U] 
                                     >> 0x1fU) ? 0x10000U
                                     : 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__2__KET____DOT__comparator__DOT__result 
        = (((vlSelfRef.vec_a[2U] >> 0x1fU) == (vlSelfRef.vec_b[2U] 
                                               >> 0x1fU))
            ? ((vlSelfRef.vec_a[2U] < vlSelfRef.vec_b[2U])
                ? 0x10000U : 0U) : ((vlSelfRef.vec_a[2U] 
                                     >> 0x1fU) ? 0x10000U
                                     : 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__3__KET____DOT__comparator__DOT__result 
        = (((vlSelfRef.vec_a[3U] >> 0x1fU) == (vlSelfRef.vec_b[3U] 
                                               >> 0x1fU))
            ? ((vlSelfRef.vec_a[3U] < vlSelfRef.vec_b[3U])
                ? 0x10000U : 0U) : ((vlSelfRef.vec_a[3U] 
                                     >> 0x1fU) ? 0x10000U
                                     : 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__4__KET____DOT__comparator__DOT__result 
        = (((vlSelfRef.vec_a[4U] >> 0x1fU) == (vlSelfRef.vec_b[4U] 
                                               >> 0x1fU))
            ? ((vlSelfRef.vec_a[4U] < vlSelfRef.vec_b[4U])
                ? 0x10000U : 0U) : ((vlSelfRef.vec_a[4U] 
                                     >> 0x1fU) ? 0x10000U
                                     : 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__5__KET____DOT__comparator__DOT__result 
        = (((vlSelfRef.vec_a[5U] >> 0x1fU) == (vlSelfRef.vec_b[5U] 
                                               >> 0x1fU))
            ? ((vlSelfRef.vec_a[5U] < vlSelfRef.vec_b[5U])
                ? 0x10000U : 0U) : ((vlSelfRef.vec_a[5U] 
                                     >> 0x1fU) ? 0x10000U
                                     : 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__6__KET____DOT__comparator__DOT__result 
        = (((vlSelfRef.vec_a[6U] >> 0x1fU) == (vlSelfRef.vec_b[6U] 
                                               >> 0x1fU))
            ? ((vlSelfRef.vec_a[6U] < vlSelfRef.vec_b[6U])
                ? 0x10000U : 0U) : ((vlSelfRef.vec_a[6U] 
                                     >> 0x1fU) ? 0x10000U
                                     : 0U));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__7__KET____DOT__comparator__DOT__result 
        = (((vlSelfRef.vec_a[7U] >> 0x1fU) == (vlSelfRef.vec_b[7U] 
                                               >> 0x1fU))
            ? ((vlSelfRef.vec_a[7U] < vlSelfRef.vec_b[7U])
                ? 0x10000U : 0U) : ((vlSelfRef.vec_a[7U] 
                                     >> 0x1fU) ? 0x10000U
                                     : 0U));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__0__KET____DOT__multiplier__DOT__product 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.vec_a[0U]), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.scalar));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__0__KET____DOT__multiplier__DOT__result 
        = (IData)((vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__0__KET____DOT__multiplier__DOT__product 
                   >> 0x10U));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__1__KET____DOT__multiplier__DOT__product 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.vec_a[1U]), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.scalar));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__1__KET____DOT__multiplier__DOT__result 
        = (IData)((vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__1__KET____DOT__multiplier__DOT__product 
                   >> 0x10U));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__2__KET____DOT__multiplier__DOT__product 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.vec_a[2U]), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.scalar));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__2__KET____DOT__multiplier__DOT__result 
        = (IData)((vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__2__KET____DOT__multiplier__DOT__product 
                   >> 0x10U));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__3__KET____DOT__multiplier__DOT__product 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.vec_a[3U]), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.scalar));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__3__KET____DOT__multiplier__DOT__result 
        = (IData)((vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__3__KET____DOT__multiplier__DOT__product 
                   >> 0x10U));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__4__KET____DOT__multiplier__DOT__product 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.vec_a[4U]), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.scalar));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__4__KET____DOT__multiplier__DOT__result 
        = (IData)((vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__4__KET____DOT__multiplier__DOT__product 
                   >> 0x10U));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__5__KET____DOT__multiplier__DOT__product 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.vec_a[5U]), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.scalar));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__5__KET____DOT__multiplier__DOT__result 
        = (IData)((vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__5__KET____DOT__multiplier__DOT__product 
                   >> 0x10U));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__6__KET____DOT__multiplier__DOT__product 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.vec_a[6U]), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.scalar));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__6__KET____DOT__multiplier__DOT__result 
        = (IData)((vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__6__KET____DOT__multiplier__DOT__product 
                   >> 0x10U));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__7__KET____DOT__multiplier__DOT__product 
        = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelfRef.vec_a[7U]), 
                      VL_EXTENDS_QI(64,32, vlSelfRef.scalar));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__7__KET____DOT__multiplier__DOT__result 
        = (IData)((vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__7__KET____DOT__multiplier__DOT__product 
                   >> 0x10U));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__extended_a 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_a[0U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_a[0U])));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__extended_b 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_b[0U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_b[0U])));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__extended_result 
        = (0xffffffffffffULL & (vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__extended_a 
                                + vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__extended_b));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__extended_result);
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__extended_a 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_a[1U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_a[1U])));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__extended_b 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_b[1U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_b[1U])));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__extended_result 
        = (0xffffffffffffULL & (vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__extended_a 
                                + vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__extended_b));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__extended_result);
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__extended_a 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_a[2U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_a[2U])));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__extended_b 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_b[2U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_b[2U])));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__extended_result 
        = (0xffffffffffffULL & (vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__extended_a 
                                + vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__extended_b));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__extended_result);
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__extended_a 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_a[3U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_a[3U])));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__extended_b 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_b[3U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_b[3U])));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__extended_result 
        = (0xffffffffffffULL & (vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__extended_a 
                                + vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__extended_b));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__extended_result);
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__extended_a 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_a[4U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_a[4U])));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__extended_b 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_b[4U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_b[4U])));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__extended_result 
        = (0xffffffffffffULL & (vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__extended_a 
                                + vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__extended_b));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__extended_result);
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__extended_a 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_a[5U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_a[5U])));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__extended_b 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_b[5U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_b[5U])));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__extended_result 
        = (0xffffffffffffULL & (vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__extended_a 
                                + vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__extended_b));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__extended_result);
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__extended_a 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_a[6U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_a[6U])));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__extended_b 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_b[6U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_b[6U])));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__extended_result 
        = (0xffffffffffffULL & (vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__extended_a 
                                + vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__extended_b));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__extended_result);
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__extended_a 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_a[7U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_a[7U])));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__extended_b 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_b[7U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_b[7U])));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__extended_result 
        = (0xffffffffffffULL & (vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__extended_a 
                                + vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__extended_b));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__extended_result);
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__extended_a 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_a[0U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_a[0U])));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__extended_b 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_b[0U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_b[0U])));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__extended_result 
        = (0xffffffffffffULL & (vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__extended_a 
                                - vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__extended_b));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__extended_result);
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__extended_a 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_a[1U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_a[1U])));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__extended_b 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_b[1U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_b[1U])));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__extended_result 
        = (0xffffffffffffULL & (vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__extended_a 
                                - vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__extended_b));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__extended_result);
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__extended_a 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_a[2U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_a[2U])));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__extended_b 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_b[2U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_b[2U])));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__extended_result 
        = (0xffffffffffffULL & (vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__extended_a 
                                - vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__extended_b));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__extended_result);
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__extended_a 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_a[3U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_a[3U])));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__extended_b 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_b[3U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_b[3U])));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__extended_result 
        = (0xffffffffffffULL & (vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__extended_a 
                                - vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__extended_b));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__extended_result);
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__extended_a 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_a[4U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_a[4U])));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__extended_b 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_b[4U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_b[4U])));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__extended_result 
        = (0xffffffffffffULL & (vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__extended_a 
                                - vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__extended_b));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__extended_result);
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__extended_a 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_a[5U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_a[5U])));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__extended_b 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_b[5U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_b[5U])));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__extended_result 
        = (0xffffffffffffULL & (vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__extended_a 
                                - vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__extended_b));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__extended_result);
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__extended_a 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_a[6U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_a[6U])));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__extended_b 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_b[6U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_b[6U])));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__extended_result 
        = (0xffffffffffffULL & (vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__extended_a 
                                - vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__extended_b));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__extended_result);
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__extended_a 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_a[7U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_a[7U])));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__extended_b 
        = (((QData)((IData)((0xffffU & (- (IData)((
                                                   vlSelfRef.vec_b[7U] 
                                                   >> 0x1fU)))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.vec_b[7U])));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__extended_result 
        = (0xffffffffffffULL & (vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__extended_a 
                                - vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__extended_b));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__extended_result);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__dividend 
        = VL_SHIFTL_QQI(64,64,32, (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelfRef.vec_a[0U] 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.vec_a[0U]))), 0x10U);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__divisor 
        = (((QData)((IData)((- (IData)((vlSelfRef.scalar 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.scalar)));
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__quotient 
        = VL_DIV_QQQ(64, vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__dividend, vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__divisor);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__quotient);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__dividend 
        = VL_SHIFTL_QQI(64,64,32, (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelfRef.vec_a[1U] 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.vec_a[1U]))), 0x10U);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__divisor 
        = (((QData)((IData)((- (IData)((vlSelfRef.scalar 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.scalar)));
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__quotient 
        = VL_DIV_QQQ(64, vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__dividend, vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__divisor);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__quotient);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__dividend 
        = VL_SHIFTL_QQI(64,64,32, (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelfRef.vec_a[2U] 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.vec_a[2U]))), 0x10U);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__divisor 
        = (((QData)((IData)((- (IData)((vlSelfRef.scalar 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.scalar)));
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__quotient 
        = VL_DIV_QQQ(64, vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__dividend, vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__divisor);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__quotient);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__dividend 
        = VL_SHIFTL_QQI(64,64,32, (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelfRef.vec_a[3U] 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.vec_a[3U]))), 0x10U);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__divisor 
        = (((QData)((IData)((- (IData)((vlSelfRef.scalar 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.scalar)));
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__quotient 
        = VL_DIV_QQQ(64, vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__dividend, vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__divisor);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__quotient);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__dividend 
        = VL_SHIFTL_QQI(64,64,32, (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelfRef.vec_a[4U] 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.vec_a[4U]))), 0x10U);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__divisor 
        = (((QData)((IData)((- (IData)((vlSelfRef.scalar 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.scalar)));
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__quotient 
        = VL_DIV_QQQ(64, vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__dividend, vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__divisor);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__quotient);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__dividend 
        = VL_SHIFTL_QQI(64,64,32, (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelfRef.vec_a[5U] 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.vec_a[5U]))), 0x10U);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__divisor 
        = (((QData)((IData)((- (IData)((vlSelfRef.scalar 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.scalar)));
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__quotient 
        = VL_DIV_QQQ(64, vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__dividend, vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__divisor);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__quotient);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__dividend 
        = VL_SHIFTL_QQI(64,64,32, (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelfRef.vec_a[6U] 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.vec_a[6U]))), 0x10U);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__divisor 
        = (((QData)((IData)((- (IData)((vlSelfRef.scalar 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.scalar)));
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__quotient 
        = VL_DIV_QQQ(64, vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__dividend, vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__divisor);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__quotient);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__dividend 
        = VL_SHIFTL_QQI(64,64,32, (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelfRef.vec_a[7U] 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelfRef.vec_a[7U]))), 0x10U);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__divisor 
        = (((QData)((IData)((- (IData)((vlSelfRef.scalar 
                                        >> 0x1fU))))) 
            << 0x20U) | (QData)((IData)(vlSelfRef.scalar)));
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__quotient 
        = VL_DIV_QQQ(64, vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__dividend, vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__divisor);
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__result 
        = (IData)(vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__quotient);
    vlSelfRef.vector_processor__DOT__scalar = vlSelfRef.scalar;
    vlSelfRef.vector_processor__DOT__add_inst__DOT__vec_b[0U] 
        = vlSelfRef.vector_processor__DOT__vec_b[0U];
    vlSelfRef.vector_processor__DOT__add_inst__DOT__vec_b[1U] 
        = vlSelfRef.vector_processor__DOT__vec_b[1U];
    vlSelfRef.vector_processor__DOT__add_inst__DOT__vec_b[2U] 
        = vlSelfRef.vector_processor__DOT__vec_b[2U];
    vlSelfRef.vector_processor__DOT__add_inst__DOT__vec_b[3U] 
        = vlSelfRef.vector_processor__DOT__vec_b[3U];
    vlSelfRef.vector_processor__DOT__add_inst__DOT__vec_b[4U] 
        = vlSelfRef.vector_processor__DOT__vec_b[4U];
    vlSelfRef.vector_processor__DOT__add_inst__DOT__vec_b[5U] 
        = vlSelfRef.vector_processor__DOT__vec_b[5U];
    vlSelfRef.vector_processor__DOT__add_inst__DOT__vec_b[6U] 
        = vlSelfRef.vector_processor__DOT__vec_b[6U];
    vlSelfRef.vector_processor__DOT__add_inst__DOT__vec_b[7U] 
        = vlSelfRef.vector_processor__DOT__vec_b[7U];
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__vec_b[0U] 
        = vlSelfRef.vector_processor__DOT__vec_b[0U];
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__vec_b[1U] 
        = vlSelfRef.vector_processor__DOT__vec_b[1U];
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__vec_b[2U] 
        = vlSelfRef.vector_processor__DOT__vec_b[2U];
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__vec_b[3U] 
        = vlSelfRef.vector_processor__DOT__vec_b[3U];
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__vec_b[4U] 
        = vlSelfRef.vector_processor__DOT__vec_b[4U];
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__vec_b[5U] 
        = vlSelfRef.vector_processor__DOT__vec_b[5U];
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__vec_b[6U] 
        = vlSelfRef.vector_processor__DOT__vec_b[6U];
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__vec_b[7U] 
        = vlSelfRef.vector_processor__DOT__vec_b[7U];
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__vec_b[0U] 
        = vlSelfRef.vector_processor__DOT__vec_b[0U];
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__vec_b[1U] 
        = vlSelfRef.vector_processor__DOT__vec_b[1U];
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__vec_b[2U] 
        = vlSelfRef.vector_processor__DOT__vec_b[2U];
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__vec_b[3U] 
        = vlSelfRef.vector_processor__DOT__vec_b[3U];
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__vec_b[4U] 
        = vlSelfRef.vector_processor__DOT__vec_b[4U];
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__vec_b[5U] 
        = vlSelfRef.vector_processor__DOT__vec_b[5U];
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__vec_b[6U] 
        = vlSelfRef.vector_processor__DOT__vec_b[6U];
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__vec_b[7U] 
        = vlSelfRef.vector_processor__DOT__vec_b[7U];
    vlSelfRef.vector_processor__DOT__add_inst__DOT__vec_a[0U] 
        = vlSelfRef.vector_processor__DOT__vec_a[0U];
    vlSelfRef.vector_processor__DOT__add_inst__DOT__vec_a[1U] 
        = vlSelfRef.vector_processor__DOT__vec_a[1U];
    vlSelfRef.vector_processor__DOT__add_inst__DOT__vec_a[2U] 
        = vlSelfRef.vector_processor__DOT__vec_a[2U];
    vlSelfRef.vector_processor__DOT__add_inst__DOT__vec_a[3U] 
        = vlSelfRef.vector_processor__DOT__vec_a[3U];
    vlSelfRef.vector_processor__DOT__add_inst__DOT__vec_a[4U] 
        = vlSelfRef.vector_processor__DOT__vec_a[4U];
    vlSelfRef.vector_processor__DOT__add_inst__DOT__vec_a[5U] 
        = vlSelfRef.vector_processor__DOT__vec_a[5U];
    vlSelfRef.vector_processor__DOT__add_inst__DOT__vec_a[6U] 
        = vlSelfRef.vector_processor__DOT__vec_a[6U];
    vlSelfRef.vector_processor__DOT__add_inst__DOT__vec_a[7U] 
        = vlSelfRef.vector_processor__DOT__vec_a[7U];
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__vec_a[0U] 
        = vlSelfRef.vector_processor__DOT__vec_a[0U];
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__vec_a[1U] 
        = vlSelfRef.vector_processor__DOT__vec_a[1U];
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__vec_a[2U] 
        = vlSelfRef.vector_processor__DOT__vec_a[2U];
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__vec_a[3U] 
        = vlSelfRef.vector_processor__DOT__vec_a[3U];
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__vec_a[4U] 
        = vlSelfRef.vector_processor__DOT__vec_a[4U];
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__vec_a[5U] 
        = vlSelfRef.vector_processor__DOT__vec_a[5U];
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__vec_a[6U] 
        = vlSelfRef.vector_processor__DOT__vec_a[6U];
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__vec_a[7U] 
        = vlSelfRef.vector_processor__DOT__vec_a[7U];
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__vec_a[0U] 
        = vlSelfRef.vector_processor__DOT__vec_a[0U];
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__vec_a[1U] 
        = vlSelfRef.vector_processor__DOT__vec_a[1U];
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__vec_a[2U] 
        = vlSelfRef.vector_processor__DOT__vec_a[2U];
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__vec_a[3U] 
        = vlSelfRef.vector_processor__DOT__vec_a[3U];
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__vec_a[4U] 
        = vlSelfRef.vector_processor__DOT__vec_a[4U];
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__vec_a[5U] 
        = vlSelfRef.vector_processor__DOT__vec_a[5U];
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__vec_a[6U] 
        = vlSelfRef.vector_processor__DOT__vec_a[6U];
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__vec_a[7U] 
        = vlSelfRef.vector_processor__DOT__vec_a[7U];
    vlSelfRef.vector_processor__DOT__div_inst__DOT__vec_a[0U] 
        = vlSelfRef.vector_processor__DOT__vec_a[0U];
    vlSelfRef.vector_processor__DOT__div_inst__DOT__vec_a[1U] 
        = vlSelfRef.vector_processor__DOT__vec_a[1U];
    vlSelfRef.vector_processor__DOT__div_inst__DOT__vec_a[2U] 
        = vlSelfRef.vector_processor__DOT__vec_a[2U];
    vlSelfRef.vector_processor__DOT__div_inst__DOT__vec_a[3U] 
        = vlSelfRef.vector_processor__DOT__vec_a[3U];
    vlSelfRef.vector_processor__DOT__div_inst__DOT__vec_a[4U] 
        = vlSelfRef.vector_processor__DOT__vec_a[4U];
    vlSelfRef.vector_processor__DOT__div_inst__DOT__vec_a[5U] 
        = vlSelfRef.vector_processor__DOT__vec_a[5U];
    vlSelfRef.vector_processor__DOT__div_inst__DOT__vec_a[6U] 
        = vlSelfRef.vector_processor__DOT__vec_a[6U];
    vlSelfRef.vector_processor__DOT__div_inst__DOT__vec_a[7U] 
        = vlSelfRef.vector_processor__DOT__vec_a[7U];
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__vec_a[0U] 
        = vlSelfRef.vector_processor__DOT__vec_a[0U];
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__vec_a[1U] 
        = vlSelfRef.vector_processor__DOT__vec_a[1U];
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__vec_a[2U] 
        = vlSelfRef.vector_processor__DOT__vec_a[2U];
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__vec_a[3U] 
        = vlSelfRef.vector_processor__DOT__vec_a[3U];
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__vec_a[4U] 
        = vlSelfRef.vector_processor__DOT__vec_a[4U];
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__vec_a[5U] 
        = vlSelfRef.vector_processor__DOT__vec_a[5U];
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__vec_a[6U] 
        = vlSelfRef.vector_processor__DOT__vec_a[6U];
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__vec_a[7U] 
        = vlSelfRef.vector_processor__DOT__vec_a[7U];
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[0U] 
        = vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__0__KET____DOT__comparator__DOT__result;
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[1U] 
        = vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__1__KET____DOT__comparator__DOT__result;
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[2U] 
        = vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__2__KET____DOT__comparator__DOT__result;
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[3U] 
        = vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__3__KET____DOT__comparator__DOT__result;
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[4U] 
        = vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__4__KET____DOT__comparator__DOT__result;
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[5U] 
        = vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__5__KET____DOT__comparator__DOT__result;
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[6U] 
        = (IData)((((QData)((IData)(vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__7__KET____DOT__comparator__DOT__result)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__6__KET____DOT__comparator__DOT__result))));
    vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[7U] 
        = (IData)(((((QData)((IData)(vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__7__KET____DOT__comparator__DOT__result)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.vector_processor__DOT__comp_inst__DOT__slt_loop__BRA__6__KET____DOT__comparator__DOT__result))) 
                   >> 0x20U));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[0U] 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__0__KET____DOT__multiplier__DOT__result;
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[1U] 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__1__KET____DOT__multiplier__DOT__result;
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[2U] 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__2__KET____DOT__multiplier__DOT__result;
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[3U] 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__3__KET____DOT__multiplier__DOT__result;
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[4U] 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__4__KET____DOT__multiplier__DOT__result;
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[5U] 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__5__KET____DOT__multiplier__DOT__result;
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[6U] 
        = (IData)((((QData)((IData)(vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__7__KET____DOT__multiplier__DOT__result)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__6__KET____DOT__multiplier__DOT__result))));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[7U] 
        = (IData)(((((QData)((IData)(vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__7__KET____DOT__multiplier__DOT__result)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__6__KET____DOT__multiplier__DOT__result))) 
                   >> 0x20U));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__result[0U] 
        = vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__0__KET____DOT__adder__DOT__result;
    vlSelfRef.vector_processor__DOT__add_inst__DOT__result[1U] 
        = vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__1__KET____DOT__adder__DOT__result;
    vlSelfRef.vector_processor__DOT__add_inst__DOT__result[2U] 
        = vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__2__KET____DOT__adder__DOT__result;
    vlSelfRef.vector_processor__DOT__add_inst__DOT__result[3U] 
        = vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__3__KET____DOT__adder__DOT__result;
    vlSelfRef.vector_processor__DOT__add_inst__DOT__result[4U] 
        = vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__4__KET____DOT__adder__DOT__result;
    vlSelfRef.vector_processor__DOT__add_inst__DOT__result[5U] 
        = vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__5__KET____DOT__adder__DOT__result;
    vlSelfRef.vector_processor__DOT__add_inst__DOT__result[6U] 
        = (IData)((((QData)((IData)(vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__result)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__result))));
    vlSelfRef.vector_processor__DOT__add_inst__DOT__result[7U] 
        = (IData)(((((QData)((IData)(vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__7__KET____DOT__adder__DOT__result)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.vector_processor__DOT__add_inst__DOT__add_loop__BRA__6__KET____DOT__adder__DOT__result))) 
                   >> 0x20U));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[0U] 
        = vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__0__KET____DOT__subtractor__DOT__result;
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[1U] 
        = vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__1__KET____DOT__subtractor__DOT__result;
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[2U] 
        = vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__2__KET____DOT__subtractor__DOT__result;
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[3U] 
        = vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__3__KET____DOT__subtractor__DOT__result;
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[4U] 
        = vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__4__KET____DOT__subtractor__DOT__result;
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[5U] 
        = vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__5__KET____DOT__subtractor__DOT__result;
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[6U] 
        = (IData)((((QData)((IData)(vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__result)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__result))));
    vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[7U] 
        = (IData)(((((QData)((IData)(vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__7__KET____DOT__subtractor__DOT__result)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.vector_processor__DOT__sub_inst__DOT__sub_loop__BRA__6__KET____DOT__subtractor__DOT__result))) 
                   >> 0x20U));
    vlSelfRef.vector_processor__DOT__div_inst__DOT__result[0U] 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__result;
    vlSelfRef.vector_processor__DOT__div_inst__DOT__result[1U] 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__result;
    vlSelfRef.vector_processor__DOT__div_inst__DOT__result[2U] 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__result;
    vlSelfRef.vector_processor__DOT__div_inst__DOT__result[3U] 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__result;
    vlSelfRef.vector_processor__DOT__div_inst__DOT__result[4U] 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__result;
    vlSelfRef.vector_processor__DOT__div_inst__DOT__result[5U] 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__result;
    vlSelfRef.vector_processor__DOT__div_inst__DOT__result[6U] 
        = (IData)((((QData)((IData)(vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__result)) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__result))));
    vlSelfRef.vector_processor__DOT__div_inst__DOT__result[7U] 
        = (IData)(((((QData)((IData)(vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__result)) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__result))) 
                   >> 0x20U));
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__scalar 
        = vlSelfRef.vector_processor__DOT__scalar;
    vlSelfRef.vector_processor__DOT__div_inst__DOT__scalar 
        = vlSelfRef.vector_processor__DOT__scalar;
    vlSelfRef.vector_processor__DOT__slt_result[0U] 
        = vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[0U];
    vlSelfRef.vector_processor__DOT__slt_result[1U] 
        = vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[1U];
    vlSelfRef.vector_processor__DOT__slt_result[2U] 
        = vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[2U];
    vlSelfRef.vector_processor__DOT__slt_result[3U] 
        = vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[3U];
    vlSelfRef.vector_processor__DOT__slt_result[4U] 
        = vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[4U];
    vlSelfRef.vector_processor__DOT__slt_result[5U] 
        = vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[5U];
    vlSelfRef.vector_processor__DOT__slt_result[6U] 
        = vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[6U];
    vlSelfRef.vector_processor__DOT__slt_result[7U] 
        = vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[7U];
    vlSelfRef.vector_processor__DOT__mul_result[0U] 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[0U];
    vlSelfRef.vector_processor__DOT__mul_result[1U] 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[1U];
    vlSelfRef.vector_processor__DOT__mul_result[2U] 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[2U];
    vlSelfRef.vector_processor__DOT__mul_result[3U] 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[3U];
    vlSelfRef.vector_processor__DOT__mul_result[4U] 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[4U];
    vlSelfRef.vector_processor__DOT__mul_result[5U] 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[5U];
    vlSelfRef.vector_processor__DOT__mul_result[6U] 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[6U];
    vlSelfRef.vector_processor__DOT__mul_result[7U] 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[7U];
    vlSelfRef.vector_processor__DOT__add_result[0U] 
        = vlSelfRef.vector_processor__DOT__add_inst__DOT__result[0U];
    vlSelfRef.vector_processor__DOT__add_result[1U] 
        = vlSelfRef.vector_processor__DOT__add_inst__DOT__result[1U];
    vlSelfRef.vector_processor__DOT__add_result[2U] 
        = vlSelfRef.vector_processor__DOT__add_inst__DOT__result[2U];
    vlSelfRef.vector_processor__DOT__add_result[3U] 
        = vlSelfRef.vector_processor__DOT__add_inst__DOT__result[3U];
    vlSelfRef.vector_processor__DOT__add_result[4U] 
        = vlSelfRef.vector_processor__DOT__add_inst__DOT__result[4U];
    vlSelfRef.vector_processor__DOT__add_result[5U] 
        = vlSelfRef.vector_processor__DOT__add_inst__DOT__result[5U];
    vlSelfRef.vector_processor__DOT__add_result[6U] 
        = vlSelfRef.vector_processor__DOT__add_inst__DOT__result[6U];
    vlSelfRef.vector_processor__DOT__add_result[7U] 
        = vlSelfRef.vector_processor__DOT__add_inst__DOT__result[7U];
    vlSelfRef.vector_processor__DOT__sub_result[0U] 
        = vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[0U];
    vlSelfRef.vector_processor__DOT__sub_result[1U] 
        = vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[1U];
    vlSelfRef.vector_processor__DOT__sub_result[2U] 
        = vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[2U];
    vlSelfRef.vector_processor__DOT__sub_result[3U] 
        = vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[3U];
    vlSelfRef.vector_processor__DOT__sub_result[4U] 
        = vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[4U];
    vlSelfRef.vector_processor__DOT__sub_result[5U] 
        = vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[5U];
    vlSelfRef.vector_processor__DOT__sub_result[6U] 
        = vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[6U];
    vlSelfRef.vector_processor__DOT__sub_result[7U] 
        = vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[7U];
    vlSelfRef.vector_processor__DOT__div_result[0U] 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__result[0U];
    vlSelfRef.vector_processor__DOT__div_result[1U] 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__result[1U];
    vlSelfRef.vector_processor__DOT__div_result[2U] 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__result[2U];
    vlSelfRef.vector_processor__DOT__div_result[3U] 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__result[3U];
    vlSelfRef.vector_processor__DOT__div_result[4U] 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__result[4U];
    vlSelfRef.vector_processor__DOT__div_result[5U] 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__result[5U];
    vlSelfRef.vector_processor__DOT__div_result[6U] 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__result[6U];
    vlSelfRef.vector_processor__DOT__div_result[7U] 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__result[7U];
    if ((0U == (IData)(vlSelfRef.operation))) {
        vlSelfRef.result[0U] = vlSelfRef.vector_processor__DOT__add_inst__DOT__result[0U];
        vlSelfRef.result[1U] = vlSelfRef.vector_processor__DOT__add_inst__DOT__result[1U];
        vlSelfRef.result[2U] = vlSelfRef.vector_processor__DOT__add_inst__DOT__result[2U];
        vlSelfRef.result[3U] = vlSelfRef.vector_processor__DOT__add_inst__DOT__result[3U];
        vlSelfRef.result[4U] = vlSelfRef.vector_processor__DOT__add_inst__DOT__result[4U];
        vlSelfRef.result[5U] = vlSelfRef.vector_processor__DOT__add_inst__DOT__result[5U];
        vlSelfRef.result[6U] = vlSelfRef.vector_processor__DOT__add_inst__DOT__result[6U];
        vlSelfRef.result[7U] = vlSelfRef.vector_processor__DOT__add_inst__DOT__result[7U];
    } else if ((1U == (IData)(vlSelfRef.operation))) {
        vlSelfRef.result[0U] = vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[0U];
        vlSelfRef.result[1U] = vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[1U];
        vlSelfRef.result[2U] = vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[2U];
        vlSelfRef.result[3U] = vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[3U];
        vlSelfRef.result[4U] = vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[4U];
        vlSelfRef.result[5U] = vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[5U];
        vlSelfRef.result[6U] = vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[6U];
        vlSelfRef.result[7U] = vlSelfRef.vector_processor__DOT__sub_inst__DOT__result[7U];
    } else if ((2U == (IData)(vlSelfRef.operation))) {
        vlSelfRef.result[0U] = vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[0U];
        vlSelfRef.result[1U] = vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[1U];
        vlSelfRef.result[2U] = vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[2U];
        vlSelfRef.result[3U] = vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[3U];
        vlSelfRef.result[4U] = vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[4U];
        vlSelfRef.result[5U] = vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[5U];
        vlSelfRef.result[6U] = vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[6U];
        vlSelfRef.result[7U] = vlSelfRef.vector_processor__DOT__mult_inst__DOT__result[7U];
    } else if ((3U == (IData)(vlSelfRef.operation))) {
        vlSelfRef.result[0U] = vlSelfRef.vector_processor__DOT__div_inst__DOT__result[0U];
        vlSelfRef.result[1U] = vlSelfRef.vector_processor__DOT__div_inst__DOT__result[1U];
        vlSelfRef.result[2U] = vlSelfRef.vector_processor__DOT__div_inst__DOT__result[2U];
        vlSelfRef.result[3U] = vlSelfRef.vector_processor__DOT__div_inst__DOT__result[3U];
        vlSelfRef.result[4U] = vlSelfRef.vector_processor__DOT__div_inst__DOT__result[4U];
        vlSelfRef.result[5U] = vlSelfRef.vector_processor__DOT__div_inst__DOT__result[5U];
        vlSelfRef.result[6U] = vlSelfRef.vector_processor__DOT__div_inst__DOT__result[6U];
        vlSelfRef.result[7U] = vlSelfRef.vector_processor__DOT__div_inst__DOT__result[7U];
    } else if ((4U == (IData)(vlSelfRef.operation))) {
        vlSelfRef.result[0U] = vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[0U];
        vlSelfRef.result[1U] = vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[1U];
        vlSelfRef.result[2U] = vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[2U];
        vlSelfRef.result[3U] = vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[3U];
        vlSelfRef.result[4U] = vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[4U];
        vlSelfRef.result[5U] = vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[5U];
        vlSelfRef.result[6U] = vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[6U];
        vlSelfRef.result[7U] = vlSelfRef.vector_processor__DOT__comp_inst__DOT__result[7U];
    } else {
        vlSelfRef.result[0U] = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.result[1U] = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.result[2U] = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.result[3U] = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.result[4U] = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.result[5U] = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.result[6U] = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.result[7U] = Vtop__ConstPool__CONST_h9e67c271_0[7U];
    }
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__0__KET____DOT__multiplier__DOT__b 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__scalar;
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__1__KET____DOT__multiplier__DOT__b 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__scalar;
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__2__KET____DOT__multiplier__DOT__b 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__scalar;
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__3__KET____DOT__multiplier__DOT__b 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__scalar;
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__4__KET____DOT__multiplier__DOT__b 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__scalar;
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__5__KET____DOT__multiplier__DOT__b 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__scalar;
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__6__KET____DOT__multiplier__DOT__b 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__scalar;
    vlSelfRef.vector_processor__DOT__mult_inst__DOT__mul_loop__BRA__7__KET____DOT__multiplier__DOT__b 
        = vlSelfRef.vector_processor__DOT__mult_inst__DOT__scalar;
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__0__KET____DOT__divider__DOT__b 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__scalar;
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__1__KET____DOT__divider__DOT__b 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__scalar;
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__2__KET____DOT__divider__DOT__b 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__scalar;
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__3__KET____DOT__divider__DOT__b 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__scalar;
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__4__KET____DOT__divider__DOT__b 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__scalar;
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__5__KET____DOT__divider__DOT__b 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__scalar;
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__6__KET____DOT__divider__DOT__b 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__scalar;
    vlSelfRef.vector_processor__DOT__div_inst__DOT__div_loop__BRA__7__KET____DOT__divider__DOT__b 
        = vlSelfRef.vector_processor__DOT__div_inst__DOT__scalar;
    vlSelfRef.vector_processor__DOT__result[0U] = vlSelfRef.result[0U];
    vlSelfRef.vector_processor__DOT__result[1U] = vlSelfRef.result[1U];
    vlSelfRef.vector_processor__DOT__result[2U] = vlSelfRef.result[2U];
    vlSelfRef.vector_processor__DOT__result[3U] = vlSelfRef.result[3U];
    vlSelfRef.vector_processor__DOT__result[4U] = vlSelfRef.result[4U];
    vlSelfRef.vector_processor__DOT__result[5U] = vlSelfRef.result[5U];
    vlSelfRef.vector_processor__DOT__result[6U] = vlSelfRef.result[6U];
    vlSelfRef.vector_processor__DOT__result[7U] = vlSelfRef.result[7U];
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/Users/rickgao/Desktop/quantile/vpu/vector_processor.v", 180, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/Users/rickgao/Desktop/quantile/vpu/vector_processor.v", 180, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/Users/rickgao/Desktop/quantile/vpu/vector_processor.v", 180, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.operation & 0xf8U))) {
        Verilated::overWidthError("operation");}
}
#endif  // VL_DEBUG
