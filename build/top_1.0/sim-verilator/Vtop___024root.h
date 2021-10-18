// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
VL_MODULE(Vtop___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*1:0*/ top__DOT__pc_sel;
    CData/*0:0*/ top__DOT__reg_write1;
    CData/*0:0*/ top__DOT__branch1;
    CData/*0:0*/ top__DOT__store1;
    CData/*0:0*/ top__DOT__load1;
    CData/*1:0*/ top__DOT__op_a1;
    CData/*0:0*/ top__DOT__op_b1;
    CData/*1:0*/ top__DOT__imm_sel1;
    CData/*2:0*/ top__DOT__alu_op1;
    CData/*3:0*/ top__DOT__alu_control1;
    CData/*0:0*/ top__DOT__branch_out1;
    CData/*0:0*/ top__DOT__ag__DOT__Y_sel;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(output1,31,0);
    IData/*31:0*/ top__DOT__pc_reg;
    IData/*31:0*/ top__DOT__inst;
    IData/*31:0*/ top__DOT__SB_Type1;
    IData/*31:0*/ top__DOT__SB_Type2;
    IData/*31:0*/ top__DOT__jal1;
    IData/*31:0*/ top__DOT__imm;
    IData/*31:0*/ top__DOT__write_data1;
    IData/*31:0*/ top__DOT__read_data1;
    IData/*31:0*/ top__DOT__read_data2;
    IData/*31:0*/ top__DOT__mux_out_1;
    IData/*31:0*/ top__DOT__mux_out_2;
    IData/*31:0*/ top__DOT__out1;
    IData/*31:0*/ top__DOT__ig_inst__DOT__ax;
    IData/*31:0*/ top__DOT__ig_inst__DOT__ay;
    IData/*31:0*/ top__DOT__ig_inst__DOT__I_Type;
    IData/*31:0*/ top__DOT__ig_inst__DOT__S_Type;
    IData/*31:0*/ top__DOT__ig_inst__DOT__U_Type;
    VlUnpacked<IData/*31:0*/, 4096> top__DOT__im1__DOT__ROM;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__rf1__DOT__reg_array;
    VlUnpacked<IData/*31:0*/, 256> top__DOT__m1__DOT__memory;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vtop___024root(const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
