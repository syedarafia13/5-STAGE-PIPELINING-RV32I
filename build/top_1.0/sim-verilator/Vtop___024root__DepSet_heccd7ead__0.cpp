// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__rf1__DOT__reg_array__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__rf1__DOT__reg_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__rf1__DOT__reg_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__rf1__DOT__reg_array__v1;
    CData/*7:0*/ __Vdlyvdim0__top__DOT__m1__DOT__memory__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__m1__DOT__memory__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__m1__DOT__memory__v0;
    // Body
    __Vdlyvset__top__DOT__m1__DOT__memory__v0 = 0U;
    __Vdlyvset__top__DOT__rf1__DOT__reg_array__v0 = 0U;
    __Vdlyvset__top__DOT__rf1__DOT__reg_array__v1 = 0U;
    if (vlSelf->top__DOT__reg_write1) {
        vlSelf->output1 = vlSelf->top__DOT__write_data1;
    }
    if (vlSelf->top__DOT__store1) {
        __Vdlyvval__top__DOT__m1__DOT__memory__v0 = vlSelf->top__DOT__read_data2;
        __Vdlyvset__top__DOT__m1__DOT__memory__v0 = 1U;
        __Vdlyvdim0__top__DOT__m1__DOT__memory__v0 
            = (0xffU & (vlSelf->top__DOT__out1 >> 2U));
    }
    if (vlSelf->top__DOT__reg_write1) {
        if ((0U != (0x1fU & (vlSelf->top__DOT__inst 
                             >> 7U)))) {
            __Vdlyvval__top__DOT__rf1__DOT__reg_array__v0 
                = vlSelf->top__DOT__write_data1;
            __Vdlyvset__top__DOT__rf1__DOT__reg_array__v0 = 1U;
            __Vdlyvdim0__top__DOT__rf1__DOT__reg_array__v0 
                = (0x1fU & (vlSelf->top__DOT__inst 
                            >> 7U));
        }
        __Vdlyvset__top__DOT__rf1__DOT__reg_array__v1 = 1U;
    }
    vlSelf->top__DOT__pc_reg = ((IData)(vlSelf->reset)
                                 ? 0xfffffffcU : ((2U 
                                                   & (IData)(vlSelf->top__DOT__pc_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__pc_sel))
                                                    ? vlSelf->top__DOT__SB_Type2
                                                    : vlSelf->top__DOT__jal1)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__pc_sel))
                                                    ? 
                                                   (vlSelf->top__DOT__read_data1 
                                                    + vlSelf->top__DOT__imm)
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__pc_reg))));
    if (__Vdlyvset__top__DOT__m1__DOT__memory__v0) {
        vlSelf->top__DOT__m1__DOT__memory[__Vdlyvdim0__top__DOT__m1__DOT__memory__v0] 
            = __Vdlyvval__top__DOT__m1__DOT__memory__v0;
    }
    if (__Vdlyvset__top__DOT__rf1__DOT__reg_array__v0) {
        vlSelf->top__DOT__rf1__DOT__reg_array[__Vdlyvdim0__top__DOT__rf1__DOT__reg_array__v0] 
            = __Vdlyvval__top__DOT__rf1__DOT__reg_array__v0;
    }
    if (__Vdlyvset__top__DOT__rf1__DOT__reg_array__v1) {
        vlSelf->top__DOT__rf1__DOT__reg_array[0U] = 0U;
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h49c31b92_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h891bc50c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h516c5250_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h74f58f08_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h95704579_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h518a4454_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_haf712a06_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h2f05c4f4_0;
extern const VlUnpacked<SData/*8:0*/, 128> Vtop__ConstPool__TABLE_hc0a28adb_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vtop__ConstPool__TABLE_h42554304_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vtop__ConstPool__TABLE_h5eebaff6_0;

VL_INLINE_OPT void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    // Body
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        vlSelf->top__DOT__inst = vlSelf->top__DOT__im1__DOT__ROM
            [(0xfffU & (vlSelf->top__DOT__pc_reg >> 2U))];
    }
    vlSelf->top__DOT__ig_inst__DOT__ay = ((0xffe007ffU 
                                           & vlSelf->top__DOT__ig_inst__DOT__ay) 
                                          | ((0x100000U 
                                              & (vlSelf->top__DOT__inst 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & vlSelf->top__DOT__inst) 
                                                | (0x800U 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 9U)))));
    vlSelf->top__DOT__ig_inst__DOT__ay = ((0xfffff800U 
                                           & vlSelf->top__DOT__ig_inst__DOT__ay) 
                                          | (0x7feU 
                                             & (vlSelf->top__DOT__inst 
                                                >> 0x14U)));
    vlSelf->top__DOT__ig_inst__DOT__ay = (0x1fffffU 
                                          & vlSelf->top__DOT__ig_inst__DOT__ay);
    vlSelf->top__DOT__jal1 = (vlSelf->top__DOT__ig_inst__DOT__ay 
                              + vlSelf->top__DOT__pc_reg);
    vlSelf->top__DOT__ig_inst__DOT__ax = ((0xffffe01fU 
                                           & vlSelf->top__DOT__ig_inst__DOT__ax) 
                                          | ((0x1000U 
                                              & (vlSelf->top__DOT__inst 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlSelf->top__DOT__inst 
                                                    << 4U)) 
                                                | (0x7e0U 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0x14U)))));
    vlSelf->top__DOT__ig_inst__DOT__ax = ((0xffffffe0U 
                                           & vlSelf->top__DOT__ig_inst__DOT__ax) 
                                          | (0x1eU 
                                             & (vlSelf->top__DOT__inst 
                                                >> 7U)));
    vlSelf->top__DOT__ig_inst__DOT__ax = (0x1fffU & vlSelf->top__DOT__ig_inst__DOT__ax);
    vlSelf->top__DOT__SB_Type1 = (vlSelf->top__DOT__ig_inst__DOT__ax 
                                  + vlSelf->top__DOT__pc_reg);
    vlSelf->top__DOT__read_data1 = vlSelf->top__DOT__rf1__DOT__reg_array
        [(0x1fU & (vlSelf->top__DOT__inst >> 0xfU))];
    vlSelf->top__DOT__read_data2 = vlSelf->top__DOT__rf1__DOT__reg_array
        [(0x1fU & (vlSelf->top__DOT__inst >> 0x14U))];
    __Vtableidx1 = (0x7fU & vlSelf->top__DOT__inst);
    vlSelf->top__DOT__reg_write1 = Vtop__ConstPool__TABLE_h49c31b92_0
        [__Vtableidx1];
    vlSelf->top__DOT__branch1 = Vtop__ConstPool__TABLE_h891bc50c_0
        [__Vtableidx1];
    vlSelf->top__DOT__store1 = Vtop__ConstPool__TABLE_h516c5250_0
        [__Vtableidx1];
    vlSelf->top__DOT__load1 = Vtop__ConstPool__TABLE_h74f58f08_0
        [__Vtableidx1];
    vlSelf->top__DOT__op_a1 = Vtop__ConstPool__TABLE_h95704579_0
        [__Vtableidx1];
    vlSelf->top__DOT__op_b1 = Vtop__ConstPool__TABLE_h518a4454_0
        [__Vtableidx1];
    vlSelf->top__DOT__imm_sel1 = Vtop__ConstPool__TABLE_haf712a06_0
        [__Vtableidx1];
    vlSelf->top__DOT__pc_sel = Vtop__ConstPool__TABLE_h2f05c4f4_0
        [__Vtableidx1];
    if ((0x100U & Vtop__ConstPool__TABLE_hc0a28adb_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__alu_op1 = Vtop__ConstPool__TABLE_h42554304_0
            [__Vtableidx1];
    }
    vlSelf->top__DOT__branch_out1 = 0U;
    if ((0x4000U & vlSelf->top__DOT__inst)) {
        if ((0x2000U & vlSelf->top__DOT__inst)) {
            if ((0x1000U & vlSelf->top__DOT__inst)) {
                if ((vlSelf->top__DOT__read_data1 >= vlSelf->top__DOT__read_data2)) {
                    vlSelf->top__DOT__branch_out1 = 1U;
                }
            } else if ((vlSelf->top__DOT__read_data1 
                        < vlSelf->top__DOT__read_data2)) {
                vlSelf->top__DOT__branch_out1 = 1U;
            }
        } else if ((0x1000U & vlSelf->top__DOT__inst)) {
            if ((vlSelf->top__DOT__read_data1 >= vlSelf->top__DOT__read_data2)) {
                vlSelf->top__DOT__branch_out1 = 1U;
            }
        } else if ((vlSelf->top__DOT__read_data1 < vlSelf->top__DOT__read_data2)) {
            vlSelf->top__DOT__branch_out1 = 1U;
        }
    } else if ((0x2000U & vlSelf->top__DOT__inst)) {
        vlSelf->top__DOT__branch_out1 = 0U;
    } else if ((0x1000U & vlSelf->top__DOT__inst)) {
        if ((vlSelf->top__DOT__read_data1 != vlSelf->top__DOT__read_data2)) {
            vlSelf->top__DOT__branch_out1 = 1U;
        }
    } else if ((vlSelf->top__DOT__read_data1 == vlSelf->top__DOT__read_data2)) {
        vlSelf->top__DOT__branch_out1 = 1U;
    }
    vlSelf->top__DOT__mux_out_1 = ((2U & (IData)(vlSelf->top__DOT__op_a1))
                                    ? ((1U & (IData)(vlSelf->top__DOT__op_a1))
                                        ? 0U : vlSelf->top__DOT__pc_reg)
                                    : ((1U & (IData)(vlSelf->top__DOT__op_a1))
                                        ? ((IData)(4U) 
                                           + vlSelf->top__DOT__pc_reg)
                                        : vlSelf->top__DOT__read_data1));
    __Vtableidx2 = (((IData)(vlSelf->top__DOT__alu_op1) 
                     << 4U) | ((0xeU & (vlSelf->top__DOT__inst 
                                        >> 0xbU)) | 
                               (1U & (vlSelf->top__DOT__inst 
                                      >> 0x1eU))));
    vlSelf->top__DOT__alu_control1 = Vtop__ConstPool__TABLE_h5eebaff6_0
        [__Vtableidx2];
    if ((2U == (IData)(vlSelf->top__DOT__imm_sel1))) {
        vlSelf->top__DOT__ig_inst__DOT__I_Type = (vlSelf->top__DOT__inst 
                                                  >> 0x14U);
        vlSelf->top__DOT__imm = vlSelf->top__DOT__ig_inst__DOT__I_Type;
    } else if ((0U == (IData)(vlSelf->top__DOT__imm_sel1))) {
        vlSelf->top__DOT__ig_inst__DOT__S_Type = ((0xfe0U 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->top__DOT__inst 
                                                        >> 7U)));
        vlSelf->top__DOT__imm = vlSelf->top__DOT__ig_inst__DOT__S_Type;
    } else if ((1U == (IData)(vlSelf->top__DOT__imm_sel1))) {
        vlSelf->top__DOT__ig_inst__DOT__U_Type = (vlSelf->top__DOT__inst 
                                                  >> 0xcU);
        vlSelf->top__DOT__ig_inst__DOT__U_Type = (vlSelf->top__DOT__ig_inst__DOT__U_Type 
                                                  << 0xcU);
        vlSelf->top__DOT__imm = vlSelf->top__DOT__ig_inst__DOT__U_Type;
    }
    vlSelf->top__DOT__ag__DOT__Y_sel = ((IData)(vlSelf->top__DOT__branch1) 
                                        & (IData)(vlSelf->top__DOT__branch_out1));
    if (vlSelf->top__DOT__op_b1) {
        if (vlSelf->top__DOT__op_b1) {
            vlSelf->top__DOT__mux_out_2 = vlSelf->top__DOT__imm;
        }
    } else {
        vlSelf->top__DOT__mux_out_2 = vlSelf->top__DOT__read_data2;
    }
    if (vlSelf->top__DOT__ag__DOT__Y_sel) {
        if (vlSelf->top__DOT__ag__DOT__Y_sel) {
            vlSelf->top__DOT__SB_Type2 = vlSelf->top__DOT__SB_Type1;
        }
    } else {
        vlSelf->top__DOT__SB_Type2 = ((IData)(4U) + vlSelf->top__DOT__pc_reg);
    }
    vlSelf->top__DOT__out1 = ((8U & (IData)(vlSelf->top__DOT__alu_control1))
                               ? ((4U & (IData)(vlSelf->top__DOT__alu_control1))
                                   ? ((2U & (IData)(vlSelf->top__DOT__alu_control1))
                                       ? ((1U & (IData)(vlSelf->top__DOT__alu_control1))
                                           ? vlSelf->top__DOT__mux_out_1
                                           : (vlSelf->top__DOT__mux_out_1 
                                              + vlSelf->top__DOT__mux_out_2))
                                       : (vlSelf->top__DOT__mux_out_1 
                                          + vlSelf->top__DOT__mux_out_2))
                                   : ((2U & (IData)(vlSelf->top__DOT__alu_control1))
                                       ? (vlSelf->top__DOT__mux_out_1 
                                          + vlSelf->top__DOT__mux_out_2)
                                       : ((1U & (IData)(vlSelf->top__DOT__alu_control1))
                                           ? ((0x1fU 
                                               >= vlSelf->top__DOT__mux_out_2)
                                               ? (vlSelf->top__DOT__mux_out_1 
                                                  >> vlSelf->top__DOT__mux_out_2)
                                               : 0U)
                                           : 0U))) : 
                              ((4U & (IData)(vlSelf->top__DOT__alu_control1))
                                ? ((2U & (IData)(vlSelf->top__DOT__alu_control1))
                                    ? ((1U & (IData)(vlSelf->top__DOT__alu_control1))
                                        ? ((vlSelf->top__DOT__mux_out_1 
                                            < vlSelf->top__DOT__mux_out_2)
                                            ? 1U : 0U)
                                        : ((0x1fU >= vlSelf->top__DOT__mux_out_2)
                                            ? (vlSelf->top__DOT__mux_out_1 
                                               >> vlSelf->top__DOT__mux_out_2)
                                            : 0U)) : 
                                   ((1U & (IData)(vlSelf->top__DOT__alu_control1))
                                     ? ((0x1fU >= vlSelf->top__DOT__mux_out_2)
                                         ? (vlSelf->top__DOT__mux_out_1 
                                            << vlSelf->top__DOT__mux_out_2)
                                         : 0U) : (vlSelf->top__DOT__mux_out_1 
                                                  & vlSelf->top__DOT__mux_out_2)))
                                : ((2U & (IData)(vlSelf->top__DOT__alu_control1))
                                    ? ((1U & (IData)(vlSelf->top__DOT__alu_control1))
                                        ? (vlSelf->top__DOT__mux_out_1 
                                           | vlSelf->top__DOT__mux_out_2)
                                        : (vlSelf->top__DOT__mux_out_1 
                                           ^ vlSelf->top__DOT__mux_out_2))
                                    : ((1U & (IData)(vlSelf->top__DOT__alu_control1))
                                        ? (vlSelf->top__DOT__mux_out_1 
                                           - vlSelf->top__DOT__mux_out_2)
                                        : (vlSelf->top__DOT__mux_out_1 
                                           + vlSelf->top__DOT__mux_out_2)))));
    vlSelf->top__DOT__write_data1 = ((IData)(vlSelf->top__DOT__load1)
                                      ? ((IData)(vlSelf->top__DOT__load1)
                                          ? vlSelf->top__DOT__m1__DOT__memory
                                         [(0xffU & 
                                           (vlSelf->top__DOT__out1 
                                            >> 2U))]
                                          : 0U) : vlSelf->top__DOT__out1);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
