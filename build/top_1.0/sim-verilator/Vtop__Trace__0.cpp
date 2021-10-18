// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+0,(vlSelf->top__DOT__pc_reg),32);
        tracep->chgIData(oldp+1,(((IData)(4U) + vlSelf->top__DOT__pc_reg)),32);
        tracep->chgSData(oldp+2,((0xfffU & (vlSelf->top__DOT__pc_reg 
                                            >> 2U))),12);
        tracep->chgIData(oldp+3,(vlSelf->top__DOT__rf1__DOT__reg_array[0]),32);
        tracep->chgIData(oldp+4,(vlSelf->top__DOT__rf1__DOT__reg_array[1]),32);
        tracep->chgIData(oldp+5,(vlSelf->top__DOT__rf1__DOT__reg_array[2]),32);
        tracep->chgIData(oldp+6,(vlSelf->top__DOT__rf1__DOT__reg_array[3]),32);
        tracep->chgIData(oldp+7,(vlSelf->top__DOT__rf1__DOT__reg_array[4]),32);
        tracep->chgIData(oldp+8,(vlSelf->top__DOT__rf1__DOT__reg_array[5]),32);
        tracep->chgIData(oldp+9,(vlSelf->top__DOT__rf1__DOT__reg_array[6]),32);
        tracep->chgIData(oldp+10,(vlSelf->top__DOT__rf1__DOT__reg_array[7]),32);
        tracep->chgIData(oldp+11,(vlSelf->top__DOT__rf1__DOT__reg_array[8]),32);
        tracep->chgIData(oldp+12,(vlSelf->top__DOT__rf1__DOT__reg_array[9]),32);
        tracep->chgIData(oldp+13,(vlSelf->top__DOT__rf1__DOT__reg_array[10]),32);
        tracep->chgIData(oldp+14,(vlSelf->top__DOT__rf1__DOT__reg_array[11]),32);
        tracep->chgIData(oldp+15,(vlSelf->top__DOT__rf1__DOT__reg_array[12]),32);
        tracep->chgIData(oldp+16,(vlSelf->top__DOT__rf1__DOT__reg_array[13]),32);
        tracep->chgIData(oldp+17,(vlSelf->top__DOT__rf1__DOT__reg_array[14]),32);
        tracep->chgIData(oldp+18,(vlSelf->top__DOT__rf1__DOT__reg_array[15]),32);
        tracep->chgIData(oldp+19,(vlSelf->top__DOT__rf1__DOT__reg_array[16]),32);
        tracep->chgIData(oldp+20,(vlSelf->top__DOT__rf1__DOT__reg_array[17]),32);
        tracep->chgIData(oldp+21,(vlSelf->top__DOT__rf1__DOT__reg_array[18]),32);
        tracep->chgIData(oldp+22,(vlSelf->top__DOT__rf1__DOT__reg_array[19]),32);
        tracep->chgIData(oldp+23,(vlSelf->top__DOT__rf1__DOT__reg_array[20]),32);
        tracep->chgIData(oldp+24,(vlSelf->top__DOT__rf1__DOT__reg_array[21]),32);
        tracep->chgIData(oldp+25,(vlSelf->top__DOT__rf1__DOT__reg_array[22]),32);
        tracep->chgIData(oldp+26,(vlSelf->top__DOT__rf1__DOT__reg_array[23]),32);
        tracep->chgIData(oldp+27,(vlSelf->top__DOT__rf1__DOT__reg_array[24]),32);
        tracep->chgIData(oldp+28,(vlSelf->top__DOT__rf1__DOT__reg_array[25]),32);
        tracep->chgIData(oldp+29,(vlSelf->top__DOT__rf1__DOT__reg_array[26]),32);
        tracep->chgIData(oldp+30,(vlSelf->top__DOT__rf1__DOT__reg_array[27]),32);
        tracep->chgIData(oldp+31,(vlSelf->top__DOT__rf1__DOT__reg_array[28]),32);
        tracep->chgIData(oldp+32,(vlSelf->top__DOT__rf1__DOT__reg_array[29]),32);
        tracep->chgIData(oldp+33,(vlSelf->top__DOT__rf1__DOT__reg_array[30]),32);
        tracep->chgIData(oldp+34,(vlSelf->top__DOT__rf1__DOT__reg_array[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgIData(oldp+35,(vlSelf->top__DOT__inst),32);
        tracep->chgCData(oldp+36,(vlSelf->top__DOT__pc_sel),2);
        tracep->chgBit(oldp+37,(vlSelf->top__DOT__reg_write1));
        tracep->chgBit(oldp+38,(vlSelf->top__DOT__branch1));
        tracep->chgBit(oldp+39,(vlSelf->top__DOT__store1));
        tracep->chgBit(oldp+40,(vlSelf->top__DOT__load1));
        tracep->chgCData(oldp+41,(vlSelf->top__DOT__op_a1),2);
        tracep->chgBit(oldp+42,(vlSelf->top__DOT__op_b1));
        tracep->chgCData(oldp+43,(vlSelf->top__DOT__imm_sel1),2);
        tracep->chgIData(oldp+44,(vlSelf->top__DOT__SB_Type1),32);
        tracep->chgIData(oldp+45,(vlSelf->top__DOT__SB_Type2),32);
        tracep->chgIData(oldp+46,(vlSelf->top__DOT__jal1),32);
        tracep->chgIData(oldp+47,(vlSelf->top__DOT__imm),32);
        tracep->chgCData(oldp+48,(vlSelf->top__DOT__alu_op1),3);
        tracep->chgIData(oldp+49,(vlSelf->top__DOT__write_data1),32);
        tracep->chgIData(oldp+50,(vlSelf->top__DOT__read_data1),32);
        tracep->chgIData(oldp+51,(vlSelf->top__DOT__read_data2),32);
        tracep->chgIData(oldp+52,(vlSelf->top__DOT__mux_out_1),32);
        tracep->chgIData(oldp+53,(vlSelf->top__DOT__mux_out_2),32);
        tracep->chgCData(oldp+54,(vlSelf->top__DOT__alu_control1),4);
        tracep->chgIData(oldp+55,(vlSelf->top__DOT__out1),32);
        tracep->chgBit(oldp+56,((1U & (vlSelf->top__DOT__inst 
                                       >> 0x1eU))));
        tracep->chgBit(oldp+57,(vlSelf->top__DOT__branch_out1));
        tracep->chgCData(oldp+58,((0x7fU & vlSelf->top__DOT__inst)),7);
        tracep->chgIData(oldp+59,((vlSelf->top__DOT__inst 
                                   >> 7U)),25);
        tracep->chgIData(oldp+60,(vlSelf->top__DOT__ig_inst__DOT__ax),32);
        tracep->chgIData(oldp+61,(vlSelf->top__DOT__ig_inst__DOT__ay),32);
        tracep->chgIData(oldp+62,(vlSelf->top__DOT__ig_inst__DOT__I_Type),32);
        tracep->chgIData(oldp+63,(vlSelf->top__DOT__ig_inst__DOT__S_Type),32);
        tracep->chgIData(oldp+64,(vlSelf->top__DOT__ig_inst__DOT__U_Type),32);
        tracep->chgCData(oldp+65,((0x1fU & (vlSelf->top__DOT__inst 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+66,((0x1fU & (vlSelf->top__DOT__inst 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+67,((0x1fU & (vlSelf->top__DOT__inst 
                                            >> 7U))),5);
        tracep->chgCData(oldp+68,((7U & (vlSelf->top__DOT__inst 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+69,((((IData)(vlSelf->top__DOT__alu_op1) 
                                    << 4U) | ((0xeU 
                                               & (vlSelf->top__DOT__inst 
                                                  >> 0xbU)) 
                                              | (1U 
                                                 & (vlSelf->top__DOT__inst 
                                                    >> 0x1eU))))),7);
        tracep->chgCData(oldp+70,((0xffU & (vlSelf->top__DOT__out1 
                                            >> 2U))),8);
        tracep->chgBit(oldp+71,(vlSelf->top__DOT__ag__DOT__Y_sel));
    }
    tracep->chgBit(oldp+72,(vlSelf->reset));
    tracep->chgBit(oldp+73,(vlSelf->clk));
    tracep->chgIData(oldp+74,(vlSelf->output1),32);
    tracep->chgBit(oldp+75,((1U & (~ (IData)(vlSelf->reset)))));
    tracep->chgIData(oldp+76,(vlSelf->top__DOT__m1__DOT__memory
                              [(0xffU & (vlSelf->top__DOT__out1 
                                         >> 2U))]),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
