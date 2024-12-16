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

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.vector_register__DOT__clk = vlSelfRef.clk;
    vlSelfRef.vector_register__DOT__rst_n = vlSelfRef.rst_n;
    vlSelfRef.vector_register__DOT__read_addr_a = vlSelfRef.read_addr_a;
    vlSelfRef.vector_register__DOT__read_addr_b = vlSelfRef.read_addr_b;
    vlSelfRef.vector_register__DOT__write_addr = vlSelfRef.write_addr;
    vlSelfRef.vector_register__DOT__we = vlSelfRef.we;
    vlSelfRef.vector_register__DOT__write_vec[0U] = 
        vlSelfRef.write_vec[0U];
    vlSelfRef.vector_register__DOT__write_vec[1U] = 
        vlSelfRef.write_vec[1U];
    vlSelfRef.vector_register__DOT__write_vec[2U] = 
        vlSelfRef.write_vec[2U];
    vlSelfRef.vector_register__DOT__write_vec[3U] = 
        vlSelfRef.write_vec[3U];
    vlSelfRef.vector_register__DOT__write_vec[4U] = 
        vlSelfRef.write_vec[4U];
    vlSelfRef.vector_register__DOT__write_vec[5U] = 
        vlSelfRef.write_vec[5U];
    vlSelfRef.vector_register__DOT__write_vec[6U] = 
        vlSelfRef.write_vec[6U];
    vlSelfRef.vector_register__DOT__write_vec[7U] = 
        vlSelfRef.write_vec[7U];
    vlSelfRef.vector_register__DOT__write_scalar = vlSelfRef.write_scalar;
    vlSelfRef.vector_register__DOT__index = vlSelfRef.index;
    vlSelfRef.vector_register__DOT__index_mode = vlSelfRef.index_mode;
    vlSelfRef.read_vec_a[0U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_a][0U];
    vlSelfRef.read_vec_a[1U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_a][1U];
    vlSelfRef.read_vec_a[2U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_a][2U];
    vlSelfRef.read_vec_a[3U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_a][3U];
    vlSelfRef.read_vec_a[4U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_a][4U];
    vlSelfRef.read_vec_a[5U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_a][5U];
    vlSelfRef.read_vec_a[6U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_a][6U];
    vlSelfRef.read_vec_a[7U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_a][7U];
    vlSelfRef.read_vec_b[0U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_b][0U];
    vlSelfRef.read_vec_b[1U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_b][1U];
    vlSelfRef.read_vec_b[2U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_b][2U];
    vlSelfRef.read_vec_b[3U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_b][3U];
    vlSelfRef.read_vec_b[4U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_b][4U];
    vlSelfRef.read_vec_b[5U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_b][5U];
    vlSelfRef.read_vec_b[6U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_b][6U];
    vlSelfRef.read_vec_b[7U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_b][7U];
    vlSelfRef.vector_register__DOT__read_vec_a[0U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_a][0U];
    vlSelfRef.vector_register__DOT__read_vec_a[1U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_a][1U];
    vlSelfRef.vector_register__DOT__read_vec_a[2U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_a][2U];
    vlSelfRef.vector_register__DOT__read_vec_a[3U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_a][3U];
    vlSelfRef.vector_register__DOT__read_vec_a[4U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_a][4U];
    vlSelfRef.vector_register__DOT__read_vec_a[5U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_a][5U];
    vlSelfRef.vector_register__DOT__read_vec_a[6U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_a][6U];
    vlSelfRef.vector_register__DOT__read_vec_a[7U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_a][7U];
    vlSelfRef.vector_register__DOT__read_vec_b[0U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_b][0U];
    vlSelfRef.vector_register__DOT__read_vec_b[1U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_b][1U];
    vlSelfRef.vector_register__DOT__read_vec_b[2U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_b][2U];
    vlSelfRef.vector_register__DOT__read_vec_b[3U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_b][3U];
    vlSelfRef.vector_register__DOT__read_vec_b[4U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_b][4U];
    vlSelfRef.vector_register__DOT__read_vec_b[5U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_b][5U];
    vlSelfRef.vector_register__DOT__read_vec_b[6U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_b][6U];
    vlSelfRef.vector_register__DOT__read_vec_b[7U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_b][7U];
    vlSelfRef.read_scalar = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.index), 5U)))
                               ? 0U : (vlSelfRef.vector_register__DOT__reg_file
                                       [vlSelfRef.read_addr_b][
                                       (((IData)(0x1fU) 
                                         + (0xffU & 
                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.index), 5U))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.index), 5U))))) 
                             | (vlSelfRef.vector_register__DOT__reg_file
                                [vlSelfRef.read_addr_b][
                                (7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.index), 5U) 
                                       >> 5U))] >> 
                                (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.index), 5U))));
    vlSelfRef.vector_register__DOT__read_scalar = vlSelfRef.read_scalar;
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

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

extern const VlWide<8>/*255:0*/ Vtop__ConstPool__CONST_h9e67c271_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VdlyVal__vector_register__DOT__reg_file__v0;
    __VdlyVal__vector_register__DOT__reg_file__v0 = 0;
    CData/*7:0*/ __VdlyLsb__vector_register__DOT__reg_file__v0;
    __VdlyLsb__vector_register__DOT__reg_file__v0 = 0;
    CData/*4:0*/ __VdlyDim0__vector_register__DOT__reg_file__v0;
    __VdlyDim0__vector_register__DOT__reg_file__v0 = 0;
    CData/*0:0*/ __VdlySet__vector_register__DOT__reg_file__v0;
    __VdlySet__vector_register__DOT__reg_file__v0 = 0;
    VlWide<8>/*255:0*/ __VdlyVal__vector_register__DOT__reg_file__v1;
    VL_ZERO_W(256, __VdlyVal__vector_register__DOT__reg_file__v1);
    CData/*4:0*/ __VdlyDim0__vector_register__DOT__reg_file__v1;
    __VdlyDim0__vector_register__DOT__reg_file__v1 = 0;
    CData/*0:0*/ __VdlySet__vector_register__DOT__reg_file__v1;
    __VdlySet__vector_register__DOT__reg_file__v1 = 0;
    CData/*0:0*/ __VdlySet__vector_register__DOT__reg_file__v2;
    __VdlySet__vector_register__DOT__reg_file__v2 = 0;
    // Body
    __VdlySet__vector_register__DOT__reg_file__v0 = 0U;
    __VdlySet__vector_register__DOT__reg_file__v1 = 0U;
    __VdlySet__vector_register__DOT__reg_file__v2 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.rst_n)))) {
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 1U;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 2U;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 3U;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 4U;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 5U;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 6U;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 7U;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 8U;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 9U;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0xaU;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0xbU;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0xcU;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0xdU;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0xeU;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0xfU;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0x10U;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0x11U;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0x12U;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0x13U;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0x14U;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0x15U;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0x16U;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0x17U;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0x18U;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0x19U;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0x1aU;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0x1bU;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0x1cU;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0x1dU;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0x1eU;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0x1fU;
        vlSelfRef.vector_register__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    if (vlSelfRef.rst_n) {
        if (vlSelfRef.index_mode) {
            if (((IData)(vlSelfRef.we) & (0U != (IData)(vlSelfRef.write_addr)))) {
                __VdlyVal__vector_register__DOT__reg_file__v0 
                    = vlSelfRef.write_scalar;
                __VdlyLsb__vector_register__DOT__reg_file__v0 
                    = (0xffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.index), 5U));
                __VdlyDim0__vector_register__DOT__reg_file__v0 
                    = vlSelfRef.write_addr;
                __VdlySet__vector_register__DOT__reg_file__v0 = 1U;
            }
        } else if (((IData)(vlSelfRef.we) & (0U != (IData)(vlSelfRef.write_addr)))) {
            __VdlyVal__vector_register__DOT__reg_file__v1[0U] 
                = vlSelfRef.write_vec[0U];
            __VdlyVal__vector_register__DOT__reg_file__v1[1U] 
                = vlSelfRef.write_vec[1U];
            __VdlyVal__vector_register__DOT__reg_file__v1[2U] 
                = vlSelfRef.write_vec[2U];
            __VdlyVal__vector_register__DOT__reg_file__v1[3U] 
                = vlSelfRef.write_vec[3U];
            __VdlyVal__vector_register__DOT__reg_file__v1[4U] 
                = vlSelfRef.write_vec[4U];
            __VdlyVal__vector_register__DOT__reg_file__v1[5U] 
                = vlSelfRef.write_vec[5U];
            __VdlyVal__vector_register__DOT__reg_file__v1[6U] 
                = vlSelfRef.write_vec[6U];
            __VdlyVal__vector_register__DOT__reg_file__v1[7U] 
                = vlSelfRef.write_vec[7U];
            __VdlyDim0__vector_register__DOT__reg_file__v1 
                = vlSelfRef.write_addr;
            __VdlySet__vector_register__DOT__reg_file__v1 = 1U;
        }
    } else {
        __VdlySet__vector_register__DOT__reg_file__v2 = 1U;
    }
    if (__VdlySet__vector_register__DOT__reg_file__v0) {
        VL_ASSIGNSEL_WI(256,32,(IData)(__VdlyLsb__vector_register__DOT__reg_file__v0), 
                        vlSelfRef.vector_register__DOT__reg_file
                        [__VdlyDim0__vector_register__DOT__reg_file__v0], __VdlyVal__vector_register__DOT__reg_file__v0);
    }
    if (__VdlySet__vector_register__DOT__reg_file__v1) {
        vlSelfRef.vector_register__DOT__reg_file[__VdlyDim0__vector_register__DOT__reg_file__v1][0U] 
            = __VdlyVal__vector_register__DOT__reg_file__v1[0U];
        vlSelfRef.vector_register__DOT__reg_file[__VdlyDim0__vector_register__DOT__reg_file__v1][1U] 
            = __VdlyVal__vector_register__DOT__reg_file__v1[1U];
        vlSelfRef.vector_register__DOT__reg_file[__VdlyDim0__vector_register__DOT__reg_file__v1][2U] 
            = __VdlyVal__vector_register__DOT__reg_file__v1[2U];
        vlSelfRef.vector_register__DOT__reg_file[__VdlyDim0__vector_register__DOT__reg_file__v1][3U] 
            = __VdlyVal__vector_register__DOT__reg_file__v1[3U];
        vlSelfRef.vector_register__DOT__reg_file[__VdlyDim0__vector_register__DOT__reg_file__v1][4U] 
            = __VdlyVal__vector_register__DOT__reg_file__v1[4U];
        vlSelfRef.vector_register__DOT__reg_file[__VdlyDim0__vector_register__DOT__reg_file__v1][5U] 
            = __VdlyVal__vector_register__DOT__reg_file__v1[5U];
        vlSelfRef.vector_register__DOT__reg_file[__VdlyDim0__vector_register__DOT__reg_file__v1][6U] 
            = __VdlyVal__vector_register__DOT__reg_file__v1[6U];
        vlSelfRef.vector_register__DOT__reg_file[__VdlyDim0__vector_register__DOT__reg_file__v1][7U] 
            = __VdlyVal__vector_register__DOT__reg_file__v1[7U];
    }
    if (__VdlySet__vector_register__DOT__reg_file__v2) {
        vlSelfRef.vector_register__DOT__reg_file[0U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[1U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[1U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[1U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[1U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[1U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[1U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[1U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[1U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[2U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[2U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[2U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[2U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[2U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[2U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[2U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[2U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[3U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[3U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[3U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[3U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[3U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[3U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[3U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[3U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[4U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[4U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[4U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[4U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[4U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[4U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[4U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[4U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[5U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[5U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[5U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[5U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[5U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[5U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[5U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[5U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[6U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[6U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[6U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[6U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[6U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[6U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[6U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[6U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[7U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[7U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[7U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[7U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[7U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[7U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[7U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[7U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[8U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[8U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[8U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[8U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[8U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[8U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[8U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[8U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[9U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[9U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[9U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[9U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[9U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[9U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[9U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[9U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0xaU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0xaU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0xaU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0xaU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0xaU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0xaU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0xaU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0xaU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0xbU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0xbU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0xbU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0xbU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0xbU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0xbU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0xbU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0xbU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0xcU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0xcU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0xcU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0xcU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0xcU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0xcU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0xcU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0xcU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0xdU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0xdU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0xdU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0xdU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0xdU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0xdU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0xdU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0xdU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0xeU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0xeU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0xeU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0xeU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0xeU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0xeU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0xeU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0xeU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0xfU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0xfU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0xfU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0xfU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0xfU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0xfU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0xfU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0xfU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0x10U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0x10U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0x10U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0x10U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0x10U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0x10U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0x10U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0x10U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0x11U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0x11U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0x11U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0x11U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0x11U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0x11U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0x11U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0x11U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0x12U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0x12U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0x12U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0x12U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0x12U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0x12U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0x12U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0x12U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0x13U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0x13U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0x13U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0x13U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0x13U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0x13U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0x13U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0x13U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0x14U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0x14U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0x14U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0x14U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0x14U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0x14U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0x14U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0x14U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0x15U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0x15U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0x15U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0x15U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0x15U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0x15U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0x15U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0x15U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0x16U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0x16U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0x16U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0x16U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0x16U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0x16U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0x16U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0x16U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0x17U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0x17U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0x17U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0x17U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0x17U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0x17U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0x17U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0x17U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0x18U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0x18U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0x18U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0x18U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0x18U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0x18U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0x18U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0x18U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0x19U][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0x19U][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0x19U][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0x19U][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0x19U][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0x19U][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0x19U][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0x19U][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0x1aU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0x1aU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0x1aU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0x1aU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0x1aU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0x1aU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0x1aU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0x1aU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0x1bU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0x1bU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0x1bU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0x1bU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0x1bU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0x1bU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0x1bU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0x1bU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0x1cU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0x1cU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0x1cU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0x1cU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0x1cU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0x1cU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0x1cU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0x1cU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0x1dU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0x1dU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0x1dU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0x1dU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0x1dU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0x1dU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0x1dU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0x1dU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0x1eU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0x1eU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0x1eU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0x1eU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0x1eU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0x1eU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0x1eU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0x1eU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
        vlSelfRef.vector_register__DOT__reg_file[0x1fU][0U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[0U];
        vlSelfRef.vector_register__DOT__reg_file[0x1fU][1U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[1U];
        vlSelfRef.vector_register__DOT__reg_file[0x1fU][2U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[2U];
        vlSelfRef.vector_register__DOT__reg_file[0x1fU][3U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[3U];
        vlSelfRef.vector_register__DOT__reg_file[0x1fU][4U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[4U];
        vlSelfRef.vector_register__DOT__reg_file[0x1fU][5U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[5U];
        vlSelfRef.vector_register__DOT__reg_file[0x1fU][6U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[6U];
        vlSelfRef.vector_register__DOT__reg_file[0x1fU][7U] 
            = Vtop__ConstPool__CONST_h9e67c271_0[7U];
    }
    vlSelfRef.read_vec_a[0U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_a][0U];
    vlSelfRef.read_vec_a[1U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_a][1U];
    vlSelfRef.read_vec_a[2U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_a][2U];
    vlSelfRef.read_vec_a[3U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_a][3U];
    vlSelfRef.read_vec_a[4U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_a][4U];
    vlSelfRef.read_vec_a[5U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_a][5U];
    vlSelfRef.read_vec_a[6U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_a][6U];
    vlSelfRef.read_vec_a[7U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_a][7U];
    vlSelfRef.read_vec_b[0U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_b][0U];
    vlSelfRef.read_vec_b[1U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_b][1U];
    vlSelfRef.read_vec_b[2U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_b][2U];
    vlSelfRef.read_vec_b[3U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_b][3U];
    vlSelfRef.read_vec_b[4U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_b][4U];
    vlSelfRef.read_vec_b[5U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_b][5U];
    vlSelfRef.read_vec_b[6U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_b][6U];
    vlSelfRef.read_vec_b[7U] = vlSelfRef.vector_register__DOT__reg_file
        [vlSelfRef.read_addr_b][7U];
    vlSelfRef.vector_register__DOT__read_vec_a[0U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_a][0U];
    vlSelfRef.vector_register__DOT__read_vec_a[1U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_a][1U];
    vlSelfRef.vector_register__DOT__read_vec_a[2U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_a][2U];
    vlSelfRef.vector_register__DOT__read_vec_a[3U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_a][3U];
    vlSelfRef.vector_register__DOT__read_vec_a[4U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_a][4U];
    vlSelfRef.vector_register__DOT__read_vec_a[5U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_a][5U];
    vlSelfRef.vector_register__DOT__read_vec_a[6U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_a][6U];
    vlSelfRef.vector_register__DOT__read_vec_a[7U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_a][7U];
    vlSelfRef.vector_register__DOT__read_vec_b[0U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_b][0U];
    vlSelfRef.vector_register__DOT__read_vec_b[1U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_b][1U];
    vlSelfRef.vector_register__DOT__read_vec_b[2U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_b][2U];
    vlSelfRef.vector_register__DOT__read_vec_b[3U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_b][3U];
    vlSelfRef.vector_register__DOT__read_vec_b[4U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_b][4U];
    vlSelfRef.vector_register__DOT__read_vec_b[5U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_b][5U];
    vlSelfRef.vector_register__DOT__read_vec_b[6U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_b][6U];
    vlSelfRef.vector_register__DOT__read_vec_b[7U] 
        = vlSelfRef.vector_register__DOT__reg_file[vlSelfRef.read_addr_b][7U];
    vlSelfRef.read_scalar = (((0U == (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.index), 5U)))
                               ? 0U : (vlSelfRef.vector_register__DOT__reg_file
                                       [vlSelfRef.read_addr_b][
                                       (((IData)(0x1fU) 
                                         + (0xffU & 
                                            VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.index), 5U))) 
                                        >> 5U)] << 
                                       ((IData)(0x20U) 
                                        - (0x1fU & 
                                           VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.index), 5U))))) 
                             | (vlSelfRef.vector_register__DOT__reg_file
                                [vlSelfRef.read_addr_b][
                                (7U & (VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.index), 5U) 
                                       >> 5U))] >> 
                                (0x1fU & VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.index), 5U))));
    vlSelfRef.vector_register__DOT__read_scalar = vlSelfRef.read_scalar;
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
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
            VL_FATAL_MT("/Users/rickgao/Desktop/quantile/reg/vector_register.v", 3, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("/Users/rickgao/Desktop/quantile/reg/vector_register.v", 3, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/Users/rickgao/Desktop/quantile/reg/vector_register.v", 3, "", "Active region did not converge.");
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
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelfRef.read_addr_a & 0xe0U))) {
        Verilated::overWidthError("read_addr_a");}
    if (VL_UNLIKELY((vlSelfRef.read_addr_b & 0xe0U))) {
        Verilated::overWidthError("read_addr_b");}
    if (VL_UNLIKELY((vlSelfRef.write_addr & 0xe0U))) {
        Verilated::overWidthError("write_addr");}
    if (VL_UNLIKELY((vlSelfRef.we & 0xfeU))) {
        Verilated::overWidthError("we");}
    if (VL_UNLIKELY((vlSelfRef.index & 0xf8U))) {
        Verilated::overWidthError("index");}
    if (VL_UNLIKELY((vlSelfRef.index_mode & 0xfeU))) {
        Verilated::overWidthError("index_mode");}
}
#endif  // VL_DEBUG
