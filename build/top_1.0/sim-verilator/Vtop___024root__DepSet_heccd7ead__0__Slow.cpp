// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlWide<9>/*287:0*/ Vtop__ConstPool__CONST_h82349ddc_0;

VL_ATTR_COLD void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Body
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(9, Vtop__ConstPool__CONST_h82349ddc_0)
                 ,  &(vlSelf->top__DOT__im1__DOT__ROM)
                 , 0, ~0ULL);
    vlSelf->top__DOT__pc_reg = 0xfffffffcU;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->output1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pc_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pc_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__reg_write1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__branch1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__store1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__load1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__op_a1 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__op_b1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imm_sel1 = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__SB_Type1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__SB_Type2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__jal1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu_op1 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__write_data1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__read_data1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__read_data2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mux_out_1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mux_out_2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu_control1 = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__out1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__branch_out1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top__DOT__im1__DOT__ROM[__Vi0] = 0;
    }
    vlSelf->top__DOT__ig_inst__DOT__ax = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ig_inst__DOT__ay = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ig_inst__DOT__I_Type = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ig_inst__DOT__S_Type = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ig_inst__DOT__U_Type = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__rf1__DOT__reg_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__m1__DOT__memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__ag__DOT__Y_sel = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
