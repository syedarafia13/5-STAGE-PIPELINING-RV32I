// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub_0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub_0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    tracep->declBit(c+73,"reset", false,-1);
    tracep->declBit(c+74,"clk", false,-1);
    tracep->declBus(c+75,"output1", false,-1, 31,0);
    tracep->declBit(c+73,"top reset", false,-1);
    tracep->declBit(c+74,"top clk", false,-1);
    tracep->declBus(c+75,"top output1", false,-1, 31,0);
    tracep->declBus(c+78,"top width", false,-1, 31,0);
    tracep->declBus(c+1,"top pc_reg", false,-1, 31,0);
    tracep->declBus(c+36,"top inst", false,-1, 31,0);
    tracep->declBus(c+2,"top pc_4", false,-1, 31,0);
    tracep->declBus(c+37,"top pc_sel", false,-1, 1,0);
    tracep->declBit(c+76,"top EN", false,-1);
    tracep->declBit(c+38,"top reg_write1", false,-1);
    tracep->declBit(c+39,"top branch1", false,-1);
    tracep->declBit(c+40,"top store1", false,-1);
    tracep->declBit(c+41,"top load1", false,-1);
    tracep->declBus(c+42,"top op_a1", false,-1, 1,0);
    tracep->declBit(c+43,"top op_b1", false,-1);
    tracep->declBus(c+44,"top imm_sel1", false,-1, 1,0);
    tracep->declBus(c+45,"top SB_Type1", false,-1, 31,0);
    tracep->declBus(c+46,"top SB_Type2", false,-1, 31,0);
    tracep->declBus(c+47,"top jal1", false,-1, 31,0);
    tracep->declBus(c+48,"top imm", false,-1, 31,0);
    tracep->declBus(c+49,"top alu_op1", false,-1, 2,0);
    tracep->declBus(c+50,"top write_data1", false,-1, 31,0);
    tracep->declBus(c+51,"top read_data1", false,-1, 31,0);
    tracep->declBus(c+52,"top read_data2", false,-1, 31,0);
    tracep->declBus(c+79,"top zeros", false,-1, 31,0);
    tracep->declBus(c+53,"top mux_out_1", false,-1, 31,0);
    tracep->declBus(c+54,"top mux_out_2", false,-1, 31,0);
    tracep->declBus(c+55,"top alu_control1", false,-1, 3,0);
    tracep->declBus(c+56,"top out1", false,-1, 31,0);
    tracep->declBit(c+57,"top func71", false,-1);
    tracep->declBit(c+58,"top branch_out1", false,-1);
    tracep->declBus(c+77,"top mem_read_data1", false,-1, 31,0);
    tracep->declBit(c+76,"top im1 EN", false,-1);
    tracep->declBus(c+3,"top im1 addr", false,-1, 11,0);
    tracep->declBus(c+36,"top im1 rd", false,-1, 31,0);
    tracep->declBus(c+59,"top cu opcode", false,-1, 6,0);
    tracep->declBus(c+49,"top cu alu_op", false,-1, 2,0);
    tracep->declBit(c+38,"top cu reg_write", false,-1);
    tracep->declBit(c+39,"top cu branch", false,-1);
    tracep->declBit(c+40,"top cu store", false,-1);
    tracep->declBit(c+41,"top cu load", false,-1);
    tracep->declBus(c+42,"top cu op_a", false,-1, 1,0);
    tracep->declBit(c+43,"top cu op_b", false,-1);
    tracep->declBus(c+44,"top cu imm_sel", false,-1, 1,0);
    tracep->declBus(c+37,"top cu next_sel", false,-1, 1,0);
    tracep->declBus(c+60,"top ig_inst instr", false,-1, 24,0);
    tracep->declBus(c+1,"top ig_inst pc", false,-1, 31,0);
    tracep->declBus(c+44,"top ig_inst imm_sel", false,-1, 1,0);
    tracep->declBus(c+45,"top ig_inst SB_Type", false,-1, 31,0);
    tracep->declBus(c+47,"top ig_inst UJ_Type", false,-1, 31,0);
    tracep->declBus(c+48,"top ig_inst imm", false,-1, 31,0);
    tracep->declBus(c+61,"top ig_inst ax", false,-1, 31,0);
    tracep->declBus(c+62,"top ig_inst ay", false,-1, 31,0);
    tracep->declBus(c+63,"top ig_inst I_Type", false,-1, 31,0);
    tracep->declBus(c+64,"top ig_inst S_Type", false,-1, 31,0);
    tracep->declBus(c+65,"top ig_inst U_Type", false,-1, 31,0);
    tracep->declBit(c+74,"top rf1 clk", false,-1);
    tracep->declBit(c+38,"top rf1 write_enable", false,-1);
    tracep->declBus(c+66,"top rf1 rs1", false,-1, 4,0);
    tracep->declBus(c+67,"top rf1 rs2", false,-1, 4,0);
    tracep->declBus(c+68,"top rf1 rd", false,-1, 4,0);
    tracep->declBus(c+50,"top rf1 write_data", false,-1, 31,0);
    tracep->declBus(c+51,"top rf1 readdata1", false,-1, 31,0);
    tracep->declBus(c+52,"top rf1 readdata2", false,-1, 31,0);
    tracep->declBus(c+75,"top rf1 out", false,-1, 31,0);
    {int i; for (i=0; i<32; i++) {
            tracep->declBus(c+4+i*1,"top rf1 reg_array", true,(i+0), 31,0);}}
    tracep->declBus(c+49,"top alu_cntrl1 ALUOp", false,-1, 2,0);
    tracep->declBus(c+69,"top alu_cntrl1 func3", false,-1, 2,0);
    tracep->declBit(c+57,"top alu_cntrl1 func7", false,-1);
    tracep->declBus(c+55,"top alu_cntrl1 result", false,-1, 3,0);
    tracep->declBus(c+70,"top alu_cntrl1 ALU_Cntrl_In", false,-1, 6,0);
    tracep->declBus(c+51,"top am rdata1", false,-1, 31,0);
    tracep->declBus(c+2,"top am pc4", false,-1, 31,0);
    tracep->declBus(c+1,"top am pc_in", false,-1, 31,0);
    tracep->declBus(c+79,"top am zeros", false,-1, 31,0);
    tracep->declBus(c+52,"top am rdata2", false,-1, 31,0);
    tracep->declBus(c+48,"top am imm_mux", false,-1, 31,0);
    tracep->declBus(c+42,"top am operand_A", false,-1, 1,0);
    tracep->declBit(c+43,"top am operand_B", false,-1);
    tracep->declBus(c+53,"top am mux_out_1", false,-1, 31,0);
    tracep->declBus(c+54,"top am mux_out_2", false,-1, 31,0);
    tracep->declBus(c+53,"top alu1 a", false,-1, 31,0);
    tracep->declBus(c+54,"top alu1 b", false,-1, 31,0);
    tracep->declBus(c+55,"top alu1 alu_control", false,-1, 3,0);
    tracep->declBus(c+56,"top alu1 out", false,-1, 31,0);
    tracep->declBus(c+80,"top m1 addr_width", false,-1, 31,0);
    tracep->declBus(c+78,"top m1 width", false,-1, 31,0);
    tracep->declBit(c+74,"top m1 clk", false,-1);
    tracep->declBit(c+40,"top m1 write_en", false,-1);
    tracep->declBus(c+71,"top m1 mem_addr", false,-1, 7,0);
    tracep->declBus(c+52,"top m1 mem_write_data", false,-1, 31,0);
    tracep->declBus(c+77,"top m1 mem_read_data", false,-1, 31,0);
    tracep->declBus(c+56,"top mux2 alu_in", false,-1, 31,0);
    tracep->declBus(c+77,"top mux2 d_in", false,-1, 31,0);
    tracep->declBit(c+41,"top mux2 data_sel", false,-1);
    tracep->declBus(c+50,"top mux2 out", false,-1, 31,0);
    tracep->declBus(c+51,"top br1 a", false,-1, 31,0);
    tracep->declBus(c+52,"top br1 b", false,-1, 31,0);
    tracep->declBus(c+69,"top br1 func3", false,-1, 2,0);
    tracep->declBit(c+58,"top br1 branch_out", false,-1);
    tracep->declBus(c+2,"top ag pc_branch", false,-1, 31,0);
    tracep->declBus(c+45,"top ag sb_add", false,-1, 31,0);
    tracep->declBit(c+39,"top ag op_branch", false,-1);
    tracep->declBit(c+58,"top ag B_alu_true", false,-1);
    tracep->declBus(c+46,"top ag B_add", false,-1, 31,0);
    tracep->declBit(c+72,"top ag Y_sel", false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(vlSelf->top__DOT__pc_reg),32);
    tracep->fullIData(oldp+2,(((IData)(4U) + vlSelf->top__DOT__pc_reg)),32);
    tracep->fullSData(oldp+3,((0xfffU & (vlSelf->top__DOT__pc_reg 
                                         >> 2U))),12);
    tracep->fullIData(oldp+4,(vlSelf->top__DOT__rf1__DOT__reg_array[0]),32);
    tracep->fullIData(oldp+5,(vlSelf->top__DOT__rf1__DOT__reg_array[1]),32);
    tracep->fullIData(oldp+6,(vlSelf->top__DOT__rf1__DOT__reg_array[2]),32);
    tracep->fullIData(oldp+7,(vlSelf->top__DOT__rf1__DOT__reg_array[3]),32);
    tracep->fullIData(oldp+8,(vlSelf->top__DOT__rf1__DOT__reg_array[4]),32);
    tracep->fullIData(oldp+9,(vlSelf->top__DOT__rf1__DOT__reg_array[5]),32);
    tracep->fullIData(oldp+10,(vlSelf->top__DOT__rf1__DOT__reg_array[6]),32);
    tracep->fullIData(oldp+11,(vlSelf->top__DOT__rf1__DOT__reg_array[7]),32);
    tracep->fullIData(oldp+12,(vlSelf->top__DOT__rf1__DOT__reg_array[8]),32);
    tracep->fullIData(oldp+13,(vlSelf->top__DOT__rf1__DOT__reg_array[9]),32);
    tracep->fullIData(oldp+14,(vlSelf->top__DOT__rf1__DOT__reg_array[10]),32);
    tracep->fullIData(oldp+15,(vlSelf->top__DOT__rf1__DOT__reg_array[11]),32);
    tracep->fullIData(oldp+16,(vlSelf->top__DOT__rf1__DOT__reg_array[12]),32);
    tracep->fullIData(oldp+17,(vlSelf->top__DOT__rf1__DOT__reg_array[13]),32);
    tracep->fullIData(oldp+18,(vlSelf->top__DOT__rf1__DOT__reg_array[14]),32);
    tracep->fullIData(oldp+19,(vlSelf->top__DOT__rf1__DOT__reg_array[15]),32);
    tracep->fullIData(oldp+20,(vlSelf->top__DOT__rf1__DOT__reg_array[16]),32);
    tracep->fullIData(oldp+21,(vlSelf->top__DOT__rf1__DOT__reg_array[17]),32);
    tracep->fullIData(oldp+22,(vlSelf->top__DOT__rf1__DOT__reg_array[18]),32);
    tracep->fullIData(oldp+23,(vlSelf->top__DOT__rf1__DOT__reg_array[19]),32);
    tracep->fullIData(oldp+24,(vlSelf->top__DOT__rf1__DOT__reg_array[20]),32);
    tracep->fullIData(oldp+25,(vlSelf->top__DOT__rf1__DOT__reg_array[21]),32);
    tracep->fullIData(oldp+26,(vlSelf->top__DOT__rf1__DOT__reg_array[22]),32);
    tracep->fullIData(oldp+27,(vlSelf->top__DOT__rf1__DOT__reg_array[23]),32);
    tracep->fullIData(oldp+28,(vlSelf->top__DOT__rf1__DOT__reg_array[24]),32);
    tracep->fullIData(oldp+29,(vlSelf->top__DOT__rf1__DOT__reg_array[25]),32);
    tracep->fullIData(oldp+30,(vlSelf->top__DOT__rf1__DOT__reg_array[26]),32);
    tracep->fullIData(oldp+31,(vlSelf->top__DOT__rf1__DOT__reg_array[27]),32);
    tracep->fullIData(oldp+32,(vlSelf->top__DOT__rf1__DOT__reg_array[28]),32);
    tracep->fullIData(oldp+33,(vlSelf->top__DOT__rf1__DOT__reg_array[29]),32);
    tracep->fullIData(oldp+34,(vlSelf->top__DOT__rf1__DOT__reg_array[30]),32);
    tracep->fullIData(oldp+35,(vlSelf->top__DOT__rf1__DOT__reg_array[31]),32);
    tracep->fullIData(oldp+36,(vlSelf->top__DOT__inst),32);
    tracep->fullCData(oldp+37,(vlSelf->top__DOT__pc_sel),2);
    tracep->fullBit(oldp+38,(vlSelf->top__DOT__reg_write1));
    tracep->fullBit(oldp+39,(vlSelf->top__DOT__branch1));
    tracep->fullBit(oldp+40,(vlSelf->top__DOT__store1));
    tracep->fullBit(oldp+41,(vlSelf->top__DOT__load1));
    tracep->fullCData(oldp+42,(vlSelf->top__DOT__op_a1),2);
    tracep->fullBit(oldp+43,(vlSelf->top__DOT__op_b1));
    tracep->fullCData(oldp+44,(vlSelf->top__DOT__imm_sel1),2);
    tracep->fullIData(oldp+45,(vlSelf->top__DOT__SB_Type1),32);
    tracep->fullIData(oldp+46,(vlSelf->top__DOT__SB_Type2),32);
    tracep->fullIData(oldp+47,(vlSelf->top__DOT__jal1),32);
    tracep->fullIData(oldp+48,(vlSelf->top__DOT__imm),32);
    tracep->fullCData(oldp+49,(vlSelf->top__DOT__alu_op1),3);
    tracep->fullIData(oldp+50,(vlSelf->top__DOT__write_data1),32);
    tracep->fullIData(oldp+51,(vlSelf->top__DOT__read_data1),32);
    tracep->fullIData(oldp+52,(vlSelf->top__DOT__read_data2),32);
    tracep->fullIData(oldp+53,(vlSelf->top__DOT__mux_out_1),32);
    tracep->fullIData(oldp+54,(vlSelf->top__DOT__mux_out_2),32);
    tracep->fullCData(oldp+55,(vlSelf->top__DOT__alu_control1),4);
    tracep->fullIData(oldp+56,(vlSelf->top__DOT__out1),32);
    tracep->fullBit(oldp+57,((1U & (vlSelf->top__DOT__inst 
                                    >> 0x1eU))));
    tracep->fullBit(oldp+58,(vlSelf->top__DOT__branch_out1));
    tracep->fullCData(oldp+59,((0x7fU & vlSelf->top__DOT__inst)),7);
    tracep->fullIData(oldp+60,((vlSelf->top__DOT__inst 
                                >> 7U)),25);
    tracep->fullIData(oldp+61,(vlSelf->top__DOT__ig_inst__DOT__ax),32);
    tracep->fullIData(oldp+62,(vlSelf->top__DOT__ig_inst__DOT__ay),32);
    tracep->fullIData(oldp+63,(vlSelf->top__DOT__ig_inst__DOT__I_Type),32);
    tracep->fullIData(oldp+64,(vlSelf->top__DOT__ig_inst__DOT__S_Type),32);
    tracep->fullIData(oldp+65,(vlSelf->top__DOT__ig_inst__DOT__U_Type),32);
    tracep->fullCData(oldp+66,((0x1fU & (vlSelf->top__DOT__inst 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+67,((0x1fU & (vlSelf->top__DOT__inst 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+68,((0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U))),5);
    tracep->fullCData(oldp+69,((7U & (vlSelf->top__DOT__inst 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+70,((((IData)(vlSelf->top__DOT__alu_op1) 
                                 << 4U) | ((0xeU & 
                                            (vlSelf->top__DOT__inst 
                                             >> 0xbU)) 
                                           | (1U & 
                                              (vlSelf->top__DOT__inst 
                                               >> 0x1eU))))),7);
    tracep->fullCData(oldp+71,((0xffU & (vlSelf->top__DOT__out1 
                                         >> 2U))),8);
    tracep->fullBit(oldp+72,(vlSelf->top__DOT__ag__DOT__Y_sel));
    tracep->fullBit(oldp+73,(vlSelf->reset));
    tracep->fullBit(oldp+74,(vlSelf->clk));
    tracep->fullIData(oldp+75,(vlSelf->output1),32);
    tracep->fullBit(oldp+76,((1U & (~ (IData)(vlSelf->reset)))));
    tracep->fullIData(oldp+77,(vlSelf->top__DOT__m1__DOT__memory
                               [(0xffU & (vlSelf->top__DOT__out1 
                                          >> 2U))]),32);
    tracep->fullIData(oldp+78,(0x20U),32);
    tracep->fullIData(oldp+79,(0U),32);
    tracep->fullIData(oldp+80,(8U),32);
}
