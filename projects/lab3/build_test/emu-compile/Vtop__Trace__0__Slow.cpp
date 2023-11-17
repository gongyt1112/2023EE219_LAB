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
    tracep->declBit(c+474,"clk", false,-1);
    tracep->declBit(c+474,"pe_top clk", false,-1);
    tracep->declBus(c+476,"pe_top H", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top W", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top K", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top C", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top NLANES", false,-1, 31,0);
    tracep->declBus(c+478,"pe_top W_SIZE", false,-1, 31,0);
    tracep->declBus(c+479,"pe_top VECTOR_SIZE", false,-1, 31,0);
    tracep->declBus(c+480,"pe_top ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top W_PRECISION", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top IA_PRECISION", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top ACCUM_PRECISION", false,-1, 31,0);
    tracep->declBus(c+482,"pe_top MEM_SIZE", false,-1, 31,0);
    tracep->declBus(c+483,"pe_top IA_BASE", false,-1, 31,0);
    tracep->declBus(c+484,"pe_top WEIGHT_BASE", false,-1, 31,0);
    tracep->declBus(c+485,"pe_top OUTPUT_BASE", false,-1, 31,0);
    tracep->declBit(c+475,"pe_top rst", false,-1);
    tracep->declArray(c+417,"pe_top w_rd", false,-1, 575,0);
    tracep->declArray(c+435,"pe_top ia_rd", false,-1, 71,0);
    tracep->declBus(c+484,"pe_top w_addr_rd", false,-1, 31,0);
    tracep->declBus(c+463,"pe_top ia_addr_rd", false,-1, 31,0);
    tracep->declArray(c+464,"pe_top accumout_wr", false,-1, 191,0);
    tracep->declBus(c+470,"pe_top addr_wr", false,-1, 31,0);
    tracep->declBit(c+471,"pe_top done_PE", false,-1);
    tracep->declBit(c+438,"pe_top done", false,-1);
    tracep->declBit(c+472,"pe_top mem_wr_en", false,-1);
    tracep->declBus(c+476,"pe_top pe H", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe W", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe K", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe C", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe NLANES", false,-1, 31,0);
    tracep->declBus(c+478,"pe_top pe W_SIZE", false,-1, 31,0);
    tracep->declBus(c+479,"pe_top pe VECTOR_SIZE", false,-1, 31,0);
    tracep->declBus(c+480,"pe_top pe ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe W_PRECISION", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe IA_PRECISION", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe ACCUM_PRECISION", false,-1, 31,0);
    tracep->declBus(c+483,"pe_top pe IA_BASE", false,-1, 31,0);
    tracep->declBus(c+484,"pe_top pe WEIGHT_BASE", false,-1, 31,0);
    tracep->declBus(c+485,"pe_top pe OUTPUT_BASE", false,-1, 31,0);
    tracep->declBit(c+474,"pe_top pe clk", false,-1);
    tracep->declBit(c+475,"pe_top pe rst", false,-1);
    tracep->declArray(c+417,"pe_top pe w_rd", false,-1, 575,0);
    tracep->declArray(c+435,"pe_top pe ia_rd", false,-1, 71,0);
    tracep->declBus(c+484,"pe_top pe w_addr_rd", false,-1, 31,0);
    tracep->declBus(c+463,"pe_top pe ia_addr_rd", false,-1, 31,0);
    tracep->declArray(c+464,"pe_top pe accumout_wr", false,-1, 191,0);
    tracep->declBus(c+470,"pe_top pe addr_wr", false,-1, 31,0);
    tracep->declBit(c+471,"pe_top pe done", false,-1);
    tracep->declBit(c+472,"pe_top pe mem_wr_en", false,-1);
    tracep->declBus(c+473,"pe_top pe cnt", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac C", false,-1, 31,0);
    tracep->declBus(c+479,"pe_top pe vector_mac[1] vmac VECTOR_SIZE", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe vector_mac[1] vmac W_PRECISION", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe vector_mac[1] vmac IA_PRECISION", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac ACCUM_PRECISION", false,-1, 31,0);
    tracep->declBit(c+474,"pe_top pe vector_mac[1] vmac clk", false,-1);
    tracep->declBit(c+475,"pe_top pe vector_mac[1] vmac rst", false,-1);
    tracep->declArray(c+439,"pe_top pe vector_mac[1] vmac weight", false,-1, 71,0);
    tracep->declArray(c+435,"pe_top pe vector_mac[1] vmac input_activation", false,-1, 71,0);
    tracep->declBus(c+1,"pe_top pe vector_mac[1] vmac accum_out", false,-1, 23,0);
    tracep->declArray(c+2,"pe_top pe vector_mac[1] vmac mul", false,-1, 215,0);
    {int i; for (i=0; i<8; i++) {
            tracep->declBus(c+9+i*1,"pe_top pe vector_mac[1] vmac C_accum", true,(i+0), 23,0);}}
    tracep->declBus(c+486,"pe_top pe vector_mac[1] vmac C_cnt", false,-1, 2,0);
    tracep->declBus(c+17,"pe_top pe vector_mac[1] vmac i", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+479,"pe_top pe vector_mac[1] vmac adder NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+2,"pe_top pe vector_mac[1] vmac adder in_addends", false,-1, 215,0);
    tracep->declBus(c+18,"pe_top pe vector_mac[1] vmac adder out_sum", false,-1, 23,0);
    tracep->declBus(c+487,"pe_top pe vector_mac[1] vmac adder LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+488,"pe_top pe vector_mac[1] vmac adder LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+19,"pe_top pe vector_mac[1] vmac adder genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+20,"pe_top pe vector_mac[1] vmac adder genblk1 sum_b", false,-1, 23,0);
    tracep->declArray(c+21,"pe_top pe vector_mac[1] vmac adder genblk1 addends_a", false,-1, 95,0);
    tracep->declArray(c+24,"pe_top pe vector_mac[1] vmac adder genblk1 addends_b", false,-1, 119,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+487,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+21,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a in_addends", false,-1, 95,0);
    tracep->declBus(c+19,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+28,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+29,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declQuad(c+30,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 addends_a", false,-1, 47,0);
    tracep->declQuad(c+32,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 addends_b", false,-1, 47,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+30,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 47,0);
    tracep->declBus(c+28,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+34,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+35,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+34,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+35,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+34,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+34,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+35,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+35,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+32,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 47,0);
    tracep->declBus(c+29,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+36,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+37,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+36,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+37,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+36,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+36,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+37,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+37,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+488,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+24,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b in_addends", false,-1, 119,0);
    tracep->declBus(c+20,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+478,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+38,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+39,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declQuad(c+40,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 addends_a", false,-1, 47,0);
    tracep->declArray(c+42,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 addends_b", false,-1, 71,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+40,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 47,0);
    tracep->declBus(c+38,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+45,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+46,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+45,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+46,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+45,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+45,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+46,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+46,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+478,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+42,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 71,0);
    tracep->declBus(c+39,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+47,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+48,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+47,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declQuad(c+49,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 addends_b", false,-1, 47,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+47,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+47,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+49,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 47,0);
    tracep->declBus(c+48,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+51,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+52,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+51,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+52,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+51,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+51,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+52,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+52,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[1] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac C", false,-1, 31,0);
    tracep->declBus(c+479,"pe_top pe vector_mac[2] vmac VECTOR_SIZE", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe vector_mac[2] vmac W_PRECISION", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe vector_mac[2] vmac IA_PRECISION", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac ACCUM_PRECISION", false,-1, 31,0);
    tracep->declBit(c+474,"pe_top pe vector_mac[2] vmac clk", false,-1);
    tracep->declBit(c+475,"pe_top pe vector_mac[2] vmac rst", false,-1);
    tracep->declArray(c+442,"pe_top pe vector_mac[2] vmac weight", false,-1, 71,0);
    tracep->declArray(c+435,"pe_top pe vector_mac[2] vmac input_activation", false,-1, 71,0);
    tracep->declBus(c+53,"pe_top pe vector_mac[2] vmac accum_out", false,-1, 23,0);
    tracep->declArray(c+54,"pe_top pe vector_mac[2] vmac mul", false,-1, 215,0);
    {int i; for (i=0; i<8; i++) {
            tracep->declBus(c+61+i*1,"pe_top pe vector_mac[2] vmac C_accum", true,(i+0), 23,0);}}
    tracep->declBus(c+491,"pe_top pe vector_mac[2] vmac C_cnt", false,-1, 2,0);
    tracep->declBus(c+69,"pe_top pe vector_mac[2] vmac i", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+479,"pe_top pe vector_mac[2] vmac adder NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+54,"pe_top pe vector_mac[2] vmac adder in_addends", false,-1, 215,0);
    tracep->declBus(c+70,"pe_top pe vector_mac[2] vmac adder out_sum", false,-1, 23,0);
    tracep->declBus(c+487,"pe_top pe vector_mac[2] vmac adder LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+488,"pe_top pe vector_mac[2] vmac adder LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+71,"pe_top pe vector_mac[2] vmac adder genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+72,"pe_top pe vector_mac[2] vmac adder genblk1 sum_b", false,-1, 23,0);
    tracep->declArray(c+73,"pe_top pe vector_mac[2] vmac adder genblk1 addends_a", false,-1, 95,0);
    tracep->declArray(c+76,"pe_top pe vector_mac[2] vmac adder genblk1 addends_b", false,-1, 119,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+487,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+73,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a in_addends", false,-1, 95,0);
    tracep->declBus(c+71,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+80,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+81,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declQuad(c+82,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 addends_a", false,-1, 47,0);
    tracep->declQuad(c+84,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 addends_b", false,-1, 47,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+82,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 47,0);
    tracep->declBus(c+80,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+86,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+87,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+86,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+87,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+86,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+86,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+87,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+87,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+84,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 47,0);
    tracep->declBus(c+81,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+88,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+89,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+88,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+89,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+88,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+88,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+89,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+89,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+488,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+76,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b in_addends", false,-1, 119,0);
    tracep->declBus(c+72,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+478,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+90,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+91,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declQuad(c+92,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 addends_a", false,-1, 47,0);
    tracep->declArray(c+94,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 addends_b", false,-1, 71,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+92,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 47,0);
    tracep->declBus(c+90,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+97,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+98,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+97,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+98,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+97,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+97,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+98,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+98,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+478,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+94,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 71,0);
    tracep->declBus(c+91,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+99,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+100,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+99,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declQuad(c+101,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 addends_b", false,-1, 47,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+99,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+99,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+101,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 47,0);
    tracep->declBus(c+100,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+103,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+104,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+103,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+104,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+103,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+103,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+104,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+104,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[2] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac C", false,-1, 31,0);
    tracep->declBus(c+479,"pe_top pe vector_mac[3] vmac VECTOR_SIZE", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe vector_mac[3] vmac W_PRECISION", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe vector_mac[3] vmac IA_PRECISION", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac ACCUM_PRECISION", false,-1, 31,0);
    tracep->declBit(c+474,"pe_top pe vector_mac[3] vmac clk", false,-1);
    tracep->declBit(c+475,"pe_top pe vector_mac[3] vmac rst", false,-1);
    tracep->declArray(c+445,"pe_top pe vector_mac[3] vmac weight", false,-1, 71,0);
    tracep->declArray(c+435,"pe_top pe vector_mac[3] vmac input_activation", false,-1, 71,0);
    tracep->declBus(c+105,"pe_top pe vector_mac[3] vmac accum_out", false,-1, 23,0);
    tracep->declArray(c+106,"pe_top pe vector_mac[3] vmac mul", false,-1, 215,0);
    {int i; for (i=0; i<8; i++) {
            tracep->declBus(c+113+i*1,"pe_top pe vector_mac[3] vmac C_accum", true,(i+0), 23,0);}}
    tracep->declBus(c+492,"pe_top pe vector_mac[3] vmac C_cnt", false,-1, 2,0);
    tracep->declBus(c+121,"pe_top pe vector_mac[3] vmac i", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+479,"pe_top pe vector_mac[3] vmac adder NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+106,"pe_top pe vector_mac[3] vmac adder in_addends", false,-1, 215,0);
    tracep->declBus(c+122,"pe_top pe vector_mac[3] vmac adder out_sum", false,-1, 23,0);
    tracep->declBus(c+487,"pe_top pe vector_mac[3] vmac adder LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+488,"pe_top pe vector_mac[3] vmac adder LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+123,"pe_top pe vector_mac[3] vmac adder genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+124,"pe_top pe vector_mac[3] vmac adder genblk1 sum_b", false,-1, 23,0);
    tracep->declArray(c+125,"pe_top pe vector_mac[3] vmac adder genblk1 addends_a", false,-1, 95,0);
    tracep->declArray(c+128,"pe_top pe vector_mac[3] vmac adder genblk1 addends_b", false,-1, 119,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+487,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+125,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a in_addends", false,-1, 95,0);
    tracep->declBus(c+123,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+132,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+133,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declQuad(c+134,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 addends_a", false,-1, 47,0);
    tracep->declQuad(c+136,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 addends_b", false,-1, 47,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+134,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 47,0);
    tracep->declBus(c+132,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+138,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+139,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+138,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+139,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+138,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+138,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+139,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+139,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+136,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 47,0);
    tracep->declBus(c+133,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+140,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+141,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+140,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+141,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+140,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+140,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+141,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+141,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+488,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+128,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b in_addends", false,-1, 119,0);
    tracep->declBus(c+124,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+478,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+142,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+143,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declQuad(c+144,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 addends_a", false,-1, 47,0);
    tracep->declArray(c+146,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 addends_b", false,-1, 71,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+144,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 47,0);
    tracep->declBus(c+142,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+149,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+150,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+149,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+150,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+149,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+149,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+150,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+150,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+478,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+146,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 71,0);
    tracep->declBus(c+143,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+151,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+152,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+151,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declQuad(c+153,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 addends_b", false,-1, 47,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+151,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+151,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+153,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 47,0);
    tracep->declBus(c+152,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+155,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+156,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+155,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+156,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+155,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+155,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+156,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+156,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[3] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac C", false,-1, 31,0);
    tracep->declBus(c+479,"pe_top pe vector_mac[4] vmac VECTOR_SIZE", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe vector_mac[4] vmac W_PRECISION", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe vector_mac[4] vmac IA_PRECISION", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac ACCUM_PRECISION", false,-1, 31,0);
    tracep->declBit(c+474,"pe_top pe vector_mac[4] vmac clk", false,-1);
    tracep->declBit(c+475,"pe_top pe vector_mac[4] vmac rst", false,-1);
    tracep->declArray(c+448,"pe_top pe vector_mac[4] vmac weight", false,-1, 71,0);
    tracep->declArray(c+435,"pe_top pe vector_mac[4] vmac input_activation", false,-1, 71,0);
    tracep->declBus(c+157,"pe_top pe vector_mac[4] vmac accum_out", false,-1, 23,0);
    tracep->declArray(c+158,"pe_top pe vector_mac[4] vmac mul", false,-1, 215,0);
    {int i; for (i=0; i<8; i++) {
            tracep->declBus(c+165+i*1,"pe_top pe vector_mac[4] vmac C_accum", true,(i+0), 23,0);}}
    tracep->declBus(c+493,"pe_top pe vector_mac[4] vmac C_cnt", false,-1, 2,0);
    tracep->declBus(c+173,"pe_top pe vector_mac[4] vmac i", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+479,"pe_top pe vector_mac[4] vmac adder NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+158,"pe_top pe vector_mac[4] vmac adder in_addends", false,-1, 215,0);
    tracep->declBus(c+174,"pe_top pe vector_mac[4] vmac adder out_sum", false,-1, 23,0);
    tracep->declBus(c+487,"pe_top pe vector_mac[4] vmac adder LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+488,"pe_top pe vector_mac[4] vmac adder LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+175,"pe_top pe vector_mac[4] vmac adder genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+176,"pe_top pe vector_mac[4] vmac adder genblk1 sum_b", false,-1, 23,0);
    tracep->declArray(c+177,"pe_top pe vector_mac[4] vmac adder genblk1 addends_a", false,-1, 95,0);
    tracep->declArray(c+180,"pe_top pe vector_mac[4] vmac adder genblk1 addends_b", false,-1, 119,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+487,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+177,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a in_addends", false,-1, 95,0);
    tracep->declBus(c+175,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+184,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+185,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declQuad(c+186,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 addends_a", false,-1, 47,0);
    tracep->declQuad(c+188,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 addends_b", false,-1, 47,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+186,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 47,0);
    tracep->declBus(c+184,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+190,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+191,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+190,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+191,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+190,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+190,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+191,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+191,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+188,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 47,0);
    tracep->declBus(c+185,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+192,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+193,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+192,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+193,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+192,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+192,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+193,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+193,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+488,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+180,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b in_addends", false,-1, 119,0);
    tracep->declBus(c+176,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+478,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+194,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+195,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declQuad(c+196,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 addends_a", false,-1, 47,0);
    tracep->declArray(c+198,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 addends_b", false,-1, 71,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+196,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 47,0);
    tracep->declBus(c+194,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+201,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+202,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+201,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+202,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+201,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+201,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+202,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+202,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+478,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+198,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 71,0);
    tracep->declBus(c+195,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+203,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+204,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+203,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declQuad(c+205,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 addends_b", false,-1, 47,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+203,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+203,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+205,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 47,0);
    tracep->declBus(c+204,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+207,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+208,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+207,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+208,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+207,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+207,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+208,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+208,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[4] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac C", false,-1, 31,0);
    tracep->declBus(c+479,"pe_top pe vector_mac[5] vmac VECTOR_SIZE", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe vector_mac[5] vmac W_PRECISION", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe vector_mac[5] vmac IA_PRECISION", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac ACCUM_PRECISION", false,-1, 31,0);
    tracep->declBit(c+474,"pe_top pe vector_mac[5] vmac clk", false,-1);
    tracep->declBit(c+475,"pe_top pe vector_mac[5] vmac rst", false,-1);
    tracep->declArray(c+451,"pe_top pe vector_mac[5] vmac weight", false,-1, 71,0);
    tracep->declArray(c+435,"pe_top pe vector_mac[5] vmac input_activation", false,-1, 71,0);
    tracep->declBus(c+209,"pe_top pe vector_mac[5] vmac accum_out", false,-1, 23,0);
    tracep->declArray(c+210,"pe_top pe vector_mac[5] vmac mul", false,-1, 215,0);
    {int i; for (i=0; i<8; i++) {
            tracep->declBus(c+217+i*1,"pe_top pe vector_mac[5] vmac C_accum", true,(i+0), 23,0);}}
    tracep->declBus(c+494,"pe_top pe vector_mac[5] vmac C_cnt", false,-1, 2,0);
    tracep->declBus(c+225,"pe_top pe vector_mac[5] vmac i", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+479,"pe_top pe vector_mac[5] vmac adder NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+210,"pe_top pe vector_mac[5] vmac adder in_addends", false,-1, 215,0);
    tracep->declBus(c+226,"pe_top pe vector_mac[5] vmac adder out_sum", false,-1, 23,0);
    tracep->declBus(c+487,"pe_top pe vector_mac[5] vmac adder LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+488,"pe_top pe vector_mac[5] vmac adder LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+227,"pe_top pe vector_mac[5] vmac adder genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+228,"pe_top pe vector_mac[5] vmac adder genblk1 sum_b", false,-1, 23,0);
    tracep->declArray(c+229,"pe_top pe vector_mac[5] vmac adder genblk1 addends_a", false,-1, 95,0);
    tracep->declArray(c+232,"pe_top pe vector_mac[5] vmac adder genblk1 addends_b", false,-1, 119,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+487,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+229,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a in_addends", false,-1, 95,0);
    tracep->declBus(c+227,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+236,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+237,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declQuad(c+238,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 addends_a", false,-1, 47,0);
    tracep->declQuad(c+240,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 addends_b", false,-1, 47,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+238,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 47,0);
    tracep->declBus(c+236,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+242,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+243,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+242,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+243,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+242,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+242,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+243,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+243,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+240,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 47,0);
    tracep->declBus(c+237,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+244,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+245,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+244,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+245,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+244,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+244,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+245,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+245,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+488,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+232,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b in_addends", false,-1, 119,0);
    tracep->declBus(c+228,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+478,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+246,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+247,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declQuad(c+248,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 addends_a", false,-1, 47,0);
    tracep->declArray(c+250,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 addends_b", false,-1, 71,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+248,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 47,0);
    tracep->declBus(c+246,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+253,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+254,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+253,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+254,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+253,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+253,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+254,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+254,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+478,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+250,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 71,0);
    tracep->declBus(c+247,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+255,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+256,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+255,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declQuad(c+257,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 addends_b", false,-1, 47,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+255,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+255,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+257,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 47,0);
    tracep->declBus(c+256,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+259,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+260,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+259,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+260,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+259,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+259,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+260,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+260,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[5] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac C", false,-1, 31,0);
    tracep->declBus(c+479,"pe_top pe vector_mac[6] vmac VECTOR_SIZE", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe vector_mac[6] vmac W_PRECISION", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe vector_mac[6] vmac IA_PRECISION", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac ACCUM_PRECISION", false,-1, 31,0);
    tracep->declBit(c+474,"pe_top pe vector_mac[6] vmac clk", false,-1);
    tracep->declBit(c+475,"pe_top pe vector_mac[6] vmac rst", false,-1);
    tracep->declArray(c+454,"pe_top pe vector_mac[6] vmac weight", false,-1, 71,0);
    tracep->declArray(c+435,"pe_top pe vector_mac[6] vmac input_activation", false,-1, 71,0);
    tracep->declBus(c+261,"pe_top pe vector_mac[6] vmac accum_out", false,-1, 23,0);
    tracep->declArray(c+262,"pe_top pe vector_mac[6] vmac mul", false,-1, 215,0);
    {int i; for (i=0; i<8; i++) {
            tracep->declBus(c+269+i*1,"pe_top pe vector_mac[6] vmac C_accum", true,(i+0), 23,0);}}
    tracep->declBus(c+495,"pe_top pe vector_mac[6] vmac C_cnt", false,-1, 2,0);
    tracep->declBus(c+277,"pe_top pe vector_mac[6] vmac i", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+479,"pe_top pe vector_mac[6] vmac adder NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+262,"pe_top pe vector_mac[6] vmac adder in_addends", false,-1, 215,0);
    tracep->declBus(c+278,"pe_top pe vector_mac[6] vmac adder out_sum", false,-1, 23,0);
    tracep->declBus(c+487,"pe_top pe vector_mac[6] vmac adder LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+488,"pe_top pe vector_mac[6] vmac adder LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+279,"pe_top pe vector_mac[6] vmac adder genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+280,"pe_top pe vector_mac[6] vmac adder genblk1 sum_b", false,-1, 23,0);
    tracep->declArray(c+281,"pe_top pe vector_mac[6] vmac adder genblk1 addends_a", false,-1, 95,0);
    tracep->declArray(c+284,"pe_top pe vector_mac[6] vmac adder genblk1 addends_b", false,-1, 119,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+487,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+281,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a in_addends", false,-1, 95,0);
    tracep->declBus(c+279,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+288,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+289,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declQuad(c+290,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 addends_a", false,-1, 47,0);
    tracep->declQuad(c+292,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 addends_b", false,-1, 47,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+290,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 47,0);
    tracep->declBus(c+288,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+294,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+295,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+294,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+295,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+294,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+294,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+295,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+295,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+292,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 47,0);
    tracep->declBus(c+289,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+296,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+297,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+296,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+297,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+296,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+296,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+297,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+297,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+488,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+284,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b in_addends", false,-1, 119,0);
    tracep->declBus(c+280,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+478,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+298,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+299,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declQuad(c+300,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 addends_a", false,-1, 47,0);
    tracep->declArray(c+302,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 addends_b", false,-1, 71,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+300,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 47,0);
    tracep->declBus(c+298,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+305,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+306,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+305,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+306,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+305,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+305,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+306,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+306,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+478,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+302,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 71,0);
    tracep->declBus(c+299,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+307,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+308,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+307,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declQuad(c+309,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 addends_b", false,-1, 47,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+307,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+307,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+309,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 47,0);
    tracep->declBus(c+308,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+311,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+312,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+311,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+312,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+311,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+311,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+312,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+312,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[6] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac C", false,-1, 31,0);
    tracep->declBus(c+479,"pe_top pe vector_mac[7] vmac VECTOR_SIZE", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe vector_mac[7] vmac W_PRECISION", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe vector_mac[7] vmac IA_PRECISION", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac ACCUM_PRECISION", false,-1, 31,0);
    tracep->declBit(c+474,"pe_top pe vector_mac[7] vmac clk", false,-1);
    tracep->declBit(c+475,"pe_top pe vector_mac[7] vmac rst", false,-1);
    tracep->declArray(c+457,"pe_top pe vector_mac[7] vmac weight", false,-1, 71,0);
    tracep->declArray(c+435,"pe_top pe vector_mac[7] vmac input_activation", false,-1, 71,0);
    tracep->declBus(c+313,"pe_top pe vector_mac[7] vmac accum_out", false,-1, 23,0);
    tracep->declArray(c+314,"pe_top pe vector_mac[7] vmac mul", false,-1, 215,0);
    {int i; for (i=0; i<8; i++) {
            tracep->declBus(c+321+i*1,"pe_top pe vector_mac[7] vmac C_accum", true,(i+0), 23,0);}}
    tracep->declBus(c+496,"pe_top pe vector_mac[7] vmac C_cnt", false,-1, 2,0);
    tracep->declBus(c+329,"pe_top pe vector_mac[7] vmac i", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+479,"pe_top pe vector_mac[7] vmac adder NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+314,"pe_top pe vector_mac[7] vmac adder in_addends", false,-1, 215,0);
    tracep->declBus(c+330,"pe_top pe vector_mac[7] vmac adder out_sum", false,-1, 23,0);
    tracep->declBus(c+487,"pe_top pe vector_mac[7] vmac adder LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+488,"pe_top pe vector_mac[7] vmac adder LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+331,"pe_top pe vector_mac[7] vmac adder genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+332,"pe_top pe vector_mac[7] vmac adder genblk1 sum_b", false,-1, 23,0);
    tracep->declArray(c+333,"pe_top pe vector_mac[7] vmac adder genblk1 addends_a", false,-1, 95,0);
    tracep->declArray(c+336,"pe_top pe vector_mac[7] vmac adder genblk1 addends_b", false,-1, 119,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+487,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+333,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a in_addends", false,-1, 95,0);
    tracep->declBus(c+331,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+340,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+341,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declQuad(c+342,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 addends_a", false,-1, 47,0);
    tracep->declQuad(c+344,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 addends_b", false,-1, 47,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+342,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 47,0);
    tracep->declBus(c+340,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+346,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+347,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+346,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+347,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+346,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+346,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+347,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+347,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+344,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 47,0);
    tracep->declBus(c+341,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+348,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+349,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+348,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+349,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+348,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+348,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+349,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+349,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+488,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+336,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b in_addends", false,-1, 119,0);
    tracep->declBus(c+332,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+478,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+350,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+351,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declQuad(c+352,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 addends_a", false,-1, 47,0);
    tracep->declArray(c+354,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 addends_b", false,-1, 71,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+352,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 47,0);
    tracep->declBus(c+350,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+357,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+358,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+357,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+358,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+357,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+357,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+358,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+358,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+478,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+354,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 71,0);
    tracep->declBus(c+351,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+359,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+360,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+359,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declQuad(c+361,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 addends_b", false,-1, 47,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+359,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+359,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+361,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 47,0);
    tracep->declBus(c+360,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+363,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+364,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+363,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+364,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+363,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+363,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+364,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+364,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[7] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac C", false,-1, 31,0);
    tracep->declBus(c+479,"pe_top pe vector_mac[8] vmac VECTOR_SIZE", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe vector_mac[8] vmac W_PRECISION", false,-1, 31,0);
    tracep->declBus(c+476,"pe_top pe vector_mac[8] vmac IA_PRECISION", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac ACCUM_PRECISION", false,-1, 31,0);
    tracep->declBit(c+474,"pe_top pe vector_mac[8] vmac clk", false,-1);
    tracep->declBit(c+475,"pe_top pe vector_mac[8] vmac rst", false,-1);
    tracep->declArray(c+460,"pe_top pe vector_mac[8] vmac weight", false,-1, 71,0);
    tracep->declArray(c+435,"pe_top pe vector_mac[8] vmac input_activation", false,-1, 71,0);
    tracep->declBus(c+365,"pe_top pe vector_mac[8] vmac accum_out", false,-1, 23,0);
    tracep->declArray(c+366,"pe_top pe vector_mac[8] vmac mul", false,-1, 215,0);
    {int i; for (i=0; i<8; i++) {
            tracep->declBus(c+373+i*1,"pe_top pe vector_mac[8] vmac C_accum", true,(i+0), 23,0);}}
    tracep->declBus(c+497,"pe_top pe vector_mac[8] vmac C_cnt", false,-1, 2,0);
    tracep->declBus(c+381,"pe_top pe vector_mac[8] vmac i", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+479,"pe_top pe vector_mac[8] vmac adder NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+366,"pe_top pe vector_mac[8] vmac adder in_addends", false,-1, 215,0);
    tracep->declBus(c+382,"pe_top pe vector_mac[8] vmac adder out_sum", false,-1, 23,0);
    tracep->declBus(c+487,"pe_top pe vector_mac[8] vmac adder LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+488,"pe_top pe vector_mac[8] vmac adder LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+383,"pe_top pe vector_mac[8] vmac adder genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+384,"pe_top pe vector_mac[8] vmac adder genblk1 sum_b", false,-1, 23,0);
    tracep->declArray(c+385,"pe_top pe vector_mac[8] vmac adder genblk1 addends_a", false,-1, 95,0);
    tracep->declArray(c+388,"pe_top pe vector_mac[8] vmac adder genblk1 addends_b", false,-1, 119,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+487,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+385,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a in_addends", false,-1, 95,0);
    tracep->declBus(c+383,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+392,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+393,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declQuad(c+394,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 addends_a", false,-1, 47,0);
    tracep->declQuad(c+396,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 addends_b", false,-1, 47,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+394,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 47,0);
    tracep->declBus(c+392,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+398,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+399,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+398,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+399,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+398,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+398,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+399,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+399,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+396,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 47,0);
    tracep->declBus(c+393,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+400,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+401,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+400,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+401,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+400,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+400,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+401,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+401,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_a genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+488,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+388,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b in_addends", false,-1, 119,0);
    tracep->declBus(c+384,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+478,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+402,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+403,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declQuad(c+404,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 addends_a", false,-1, 47,0);
    tracep->declArray(c+406,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 addends_b", false,-1, 71,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+404,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 47,0);
    tracep->declBus(c+402,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+409,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+410,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+409,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+410,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+409,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+409,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+410,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+410,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_a genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+478,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declArray(c+406,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 71,0);
    tracep->declBus(c+403,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+411,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+412,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+411,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declQuad(c+413,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 addends_b", false,-1, 47,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+411,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+411,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+489,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declQuad(c+413,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 47,0);
    tracep->declBus(c+412,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+415,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 sum_a", false,-1, 23,0);
    tracep->declBus(c+416,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 sum_b", false,-1, 23,0);
    tracep->declBus(c+415,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 addends_a", false,-1, 23,0);
    tracep->declBus(c+416,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 addends_b", false,-1, 23,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+415,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a in_addends", false,-1, 23,0);
    tracep->declBus(c+415,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_a OUT_WIDTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b NUM", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+416,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b in_addends", false,-1, 23,0);
    tracep->declBus(c+416,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b out_sum", false,-1, 23,0);
    tracep->declBus(c+490,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_A", false,-1, 31,0);
    tracep->declBus(c+477,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b LENGTH_B", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_A", false,-1, 31,0);
    tracep->declBus(c+481,"pe_top pe vector_mac[8] vmac adder genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b genblk1 subtree_b OUT_WIDTH_B", false,-1, 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp_h457a7325__0;
    VlWide<4>/*127:0*/ __Vtemp_hf8103058__0;
    VlWide<3>/*95:0*/ __Vtemp_hc4b935c2__0;
    VlWide<3>/*95:0*/ __Vtemp_h6f01660d__0;
    VlWide<4>/*127:0*/ __Vtemp_h2690749f__0;
    VlWide<3>/*95:0*/ __Vtemp_ha36a55ec__0;
    VlWide<3>/*95:0*/ __Vtemp_hb26c37a5__0;
    VlWide<4>/*127:0*/ __Vtemp_h4f490c6f__0;
    VlWide<3>/*95:0*/ __Vtemp_h41a48404__0;
    VlWide<3>/*95:0*/ __Vtemp_h06e66bfa__0;
    VlWide<4>/*127:0*/ __Vtemp_hf307cd10__0;
    VlWide<3>/*95:0*/ __Vtemp_haef97793__0;
    VlWide<3>/*95:0*/ __Vtemp_hfdbadbdc__0;
    VlWide<4>/*127:0*/ __Vtemp_hb545abd5__0;
    VlWide<3>/*95:0*/ __Vtemp_h9d28abdb__0;
    VlWide<3>/*95:0*/ __Vtemp_h78a6dc3e__0;
    VlWide<4>/*127:0*/ __Vtemp_hb59bc74d__0;
    VlWide<3>/*95:0*/ __Vtemp_h45265bb4__0;
    VlWide<3>/*95:0*/ __Vtemp_hd383f5e3__0;
    VlWide<4>/*127:0*/ __Vtemp_heb3df3cb__0;
    VlWide<3>/*95:0*/ __Vtemp_h2b35cf46__0;
    VlWide<3>/*95:0*/ __Vtemp_he329b667__0;
    VlWide<4>/*127:0*/ __Vtemp_h1a848a64__0;
    VlWide<3>/*95:0*/ __Vtemp_h4452fa5d__0;
    VlWide<3>/*95:0*/ __Vtemp_h0a645864__0;
    VlWide<3>/*95:0*/ __Vtemp_h5c2e7a79__0;
    VlWide<3>/*95:0*/ __Vtemp_hef1d2440__0;
    VlWide<3>/*95:0*/ __Vtemp_h2132b98d__0;
    VlWide<3>/*95:0*/ __Vtemp_hdea3a0a9__0;
    VlWide<3>/*95:0*/ __Vtemp_hf96b848c__0;
    VlWide<3>/*95:0*/ __Vtemp_h0fa9ce88__0;
    VlWide<3>/*95:0*/ __Vtemp_hc31fb041__0;
    // Body
    tracep->fullIData(oldp+1,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum
                              [0U]),24);
    tracep->fullWData(oldp+2,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul),216);
    tracep->fullIData(oldp+9,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum[0]),24);
    tracep->fullIData(oldp+10,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum[1]),24);
    tracep->fullIData(oldp+11,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum[2]),24);
    tracep->fullIData(oldp+12,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum[3]),24);
    tracep->fullIData(oldp+13,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum[4]),24);
    tracep->fullIData(oldp+14,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum[5]),24);
    tracep->fullIData(oldp+15,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum[6]),24);
    tracep->fullIData(oldp+16,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum[7]),24);
    tracep->fullIData(oldp+17,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__i),32);
    tracep->fullIData(oldp+18,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U] 
                                               + ((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U] 
                                                     >> 0x18U))) 
                                              + (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x10U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] 
                                                     >> 0x10U)) 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                                     >> 8U)))) 
                                             + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U] 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U] 
                                                     >> 0x18U))) 
                                                + (
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                                     << 0x10U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U] 
                                                       >> 0x10U)) 
                                                   + 
                                                   (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                                      << 0x18U) 
                                                     | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                                        >> 8U)) 
                                                    + 
                                                    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[6U])))))),24);
    tracep->fullIData(oldp+19,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U] 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U] 
                                                    >> 0x18U))) 
                                             + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] 
                                                    >> 0x10U)) 
                                                + (
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                                      >> 8U)))))),24);
    tracep->fullIData(oldp+20,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U] 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U] 
                                                    >> 0x18U))) 
                                             + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U] 
                                                    >> 0x10U)) 
                                                + (
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                                     << 0x18U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                                       >> 8U)) 
                                                   + 
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[6U]))))),24);
    __Vtemp_h457a7325__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U];
    __Vtemp_h457a7325__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U];
    __Vtemp_h457a7325__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U];
    tracep->fullWData(oldp+21,(__Vtemp_h457a7325__0),96);
    __Vtemp_hf8103058__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U];
    __Vtemp_hf8103058__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U];
    __Vtemp_hf8103058__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U];
    __Vtemp_hf8103058__0[3U] = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[6U]);
    tracep->fullWData(oldp+24,(__Vtemp_hf8103058__0),120);
    tracep->fullIData(oldp+28,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U] 
                                             + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] 
                                                 << 8U) 
                                                | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U] 
                                                   >> 0x18U))))),24);
    tracep->fullIData(oldp+29,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                               << 0x10U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] 
                                                 >> 0x10U)) 
                                             + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                                 << 0x18U) 
                                                | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                                   >> 8U))))),24);
    tracep->fullQData(oldp+30,((0xffffffffffffULL & 
                                (((QData)((IData)(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U]))))),48);
    tracep->fullQData(oldp+32,((0xffffffffffffULL & 
                                (((QData)((IData)(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U])) 
                                  << 0x10U) | ((QData)((IData)(
                                                               vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U])) 
                                               >> 0x10U)))),48);
    tracep->fullIData(oldp+34,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U])),24);
    tracep->fullIData(oldp+35,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] 
                                              << 8U) 
                                             | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U] 
                                                >> 0x18U)))),24);
    tracep->fullIData(oldp+36,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                              << 0x10U) 
                                             | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] 
                                                >> 0x10U)))),24);
    tracep->fullIData(oldp+37,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                >> 8U)),24);
    tracep->fullIData(oldp+38,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U] 
                                             + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U] 
                                                 << 8U) 
                                                | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U] 
                                                   >> 0x18U))))),24);
    tracep->fullIData(oldp+39,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                               << 0x10U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U] 
                                                 >> 0x10U)) 
                                             + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                                  << 0x18U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                                    >> 8U)) 
                                                + vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[6U])))),24);
    tracep->fullQData(oldp+40,((0xffffffffffffULL & 
                                (((QData)((IData)(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U]))))),48);
    __Vtemp_hc4b935c2__0[0U] = ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                 << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U] 
                                              >> 0x10U));
    __Vtemp_hc4b935c2__0[1U] = ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[6U] 
                                 << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                              >> 0x10U));
    __Vtemp_hc4b935c2__0[2U] = (0xffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[6U] 
                                         >> 0x10U));
    tracep->fullWData(oldp+42,(__Vtemp_hc4b935c2__0),72);
    tracep->fullIData(oldp+45,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U])),24);
    tracep->fullIData(oldp+46,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U] 
                                              << 8U) 
                                             | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U] 
                                                >> 0x18U)))),24);
    tracep->fullIData(oldp+47,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                              << 0x10U) 
                                             | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U] 
                                                >> 0x10U)))),24);
    tracep->fullIData(oldp+48,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                               << 0x18U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                                 >> 8U)) 
                                             + vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[6U]))),24);
    tracep->fullQData(oldp+49,((0xffffffffffffULL & 
                                (((QData)((IData)(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[6U])) 
                                  << 0x18U) | ((QData)((IData)(
                                                               vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U])) 
                                               >> 8U)))),48);
    tracep->fullIData(oldp+51,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                >> 8U)),24);
    tracep->fullIData(oldp+52,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[6U])),24);
    tracep->fullIData(oldp+53,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum
                               [0U]),24);
    tracep->fullWData(oldp+54,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul),216);
    tracep->fullIData(oldp+61,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum[0]),24);
    tracep->fullIData(oldp+62,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum[1]),24);
    tracep->fullIData(oldp+63,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum[2]),24);
    tracep->fullIData(oldp+64,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum[3]),24);
    tracep->fullIData(oldp+65,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum[4]),24);
    tracep->fullIData(oldp+66,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum[5]),24);
    tracep->fullIData(oldp+67,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum[6]),24);
    tracep->fullIData(oldp+68,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum[7]),24);
    tracep->fullIData(oldp+69,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__i),32);
    tracep->fullIData(oldp+70,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U] 
                                               + ((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U] 
                                                     >> 0x18U))) 
                                              + (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x10U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] 
                                                     >> 0x10U)) 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                                     >> 8U)))) 
                                             + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U] 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U] 
                                                     >> 0x18U))) 
                                                + (
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                                     << 0x10U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U] 
                                                       >> 0x10U)) 
                                                   + 
                                                   (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                                      << 0x18U) 
                                                     | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                                        >> 8U)) 
                                                    + 
                                                    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[6U])))))),24);
    tracep->fullIData(oldp+71,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U] 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U] 
                                                    >> 0x18U))) 
                                             + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] 
                                                    >> 0x10U)) 
                                                + (
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                                      >> 8U)))))),24);
    tracep->fullIData(oldp+72,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U] 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U] 
                                                    >> 0x18U))) 
                                             + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U] 
                                                    >> 0x10U)) 
                                                + (
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                                     << 0x18U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                                       >> 8U)) 
                                                   + 
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[6U]))))),24);
    __Vtemp_h6f01660d__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U];
    __Vtemp_h6f01660d__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U];
    __Vtemp_h6f01660d__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U];
    tracep->fullWData(oldp+73,(__Vtemp_h6f01660d__0),96);
    __Vtemp_h2690749f__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U];
    __Vtemp_h2690749f__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U];
    __Vtemp_h2690749f__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U];
    __Vtemp_h2690749f__0[3U] = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[6U]);
    tracep->fullWData(oldp+76,(__Vtemp_h2690749f__0),120);
    tracep->fullIData(oldp+80,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U] 
                                             + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] 
                                                 << 8U) 
                                                | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U] 
                                                   >> 0x18U))))),24);
    tracep->fullIData(oldp+81,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                               << 0x10U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] 
                                                 >> 0x10U)) 
                                             + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                                 << 0x18U) 
                                                | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                                   >> 8U))))),24);
    tracep->fullQData(oldp+82,((0xffffffffffffULL & 
                                (((QData)((IData)(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U]))))),48);
    tracep->fullQData(oldp+84,((0xffffffffffffULL & 
                                (((QData)((IData)(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U])) 
                                  << 0x10U) | ((QData)((IData)(
                                                               vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U])) 
                                               >> 0x10U)))),48);
    tracep->fullIData(oldp+86,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U])),24);
    tracep->fullIData(oldp+87,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] 
                                              << 8U) 
                                             | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U] 
                                                >> 0x18U)))),24);
    tracep->fullIData(oldp+88,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                              << 0x10U) 
                                             | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] 
                                                >> 0x10U)))),24);
    tracep->fullIData(oldp+89,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                >> 8U)),24);
    tracep->fullIData(oldp+90,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U] 
                                             + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U] 
                                                 << 8U) 
                                                | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U] 
                                                   >> 0x18U))))),24);
    tracep->fullIData(oldp+91,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                               << 0x10U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U] 
                                                 >> 0x10U)) 
                                             + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                                  << 0x18U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                                    >> 8U)) 
                                                + vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[6U])))),24);
    tracep->fullQData(oldp+92,((0xffffffffffffULL & 
                                (((QData)((IData)(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U]))))),48);
    __Vtemp_ha36a55ec__0[0U] = ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                 << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U] 
                                              >> 0x10U));
    __Vtemp_ha36a55ec__0[1U] = ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[6U] 
                                 << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                              >> 0x10U));
    __Vtemp_ha36a55ec__0[2U] = (0xffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[6U] 
                                         >> 0x10U));
    tracep->fullWData(oldp+94,(__Vtemp_ha36a55ec__0),72);
    tracep->fullIData(oldp+97,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U])),24);
    tracep->fullIData(oldp+98,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U] 
                                              << 8U) 
                                             | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U] 
                                                >> 0x18U)))),24);
    tracep->fullIData(oldp+99,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                              << 0x10U) 
                                             | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U] 
                                                >> 0x10U)))),24);
    tracep->fullIData(oldp+100,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                                << 0x18U) 
                                               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                                  >> 8U)) 
                                              + vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[6U]))),24);
    tracep->fullQData(oldp+101,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[6U])) 
                                     << 0x18U) | ((QData)((IData)(
                                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U])) 
                                                  >> 8U)))),48);
    tracep->fullIData(oldp+103,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                 >> 8U)),24);
    tracep->fullIData(oldp+104,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[6U])),24);
    tracep->fullIData(oldp+105,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum
                                [0U]),24);
    tracep->fullWData(oldp+106,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul),216);
    tracep->fullIData(oldp+113,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum[0]),24);
    tracep->fullIData(oldp+114,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum[1]),24);
    tracep->fullIData(oldp+115,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum[2]),24);
    tracep->fullIData(oldp+116,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum[3]),24);
    tracep->fullIData(oldp+117,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum[4]),24);
    tracep->fullIData(oldp+118,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum[5]),24);
    tracep->fullIData(oldp+119,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum[6]),24);
    tracep->fullIData(oldp+120,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum[7]),24);
    tracep->fullIData(oldp+121,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__i),32);
    tracep->fullIData(oldp+122,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U] 
                                                + (
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U] 
                                                      >> 0x18U))) 
                                               + ((
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                                      >> 8U)))) 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U] 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U] 
                                                      >> 0x18U))) 
                                                 + 
                                                 (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                                    << 0x10U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                                     << 0x18U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                                       >> 8U)) 
                                                   + 
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[6U])))))),24);
    tracep->fullIData(oldp+123,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U] 
                                               + ((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U] 
                                                     >> 0x18U))) 
                                              + (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x10U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] 
                                                     >> 0x10U)) 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                                     >> 8U)))))),24);
    tracep->fullIData(oldp+124,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U] 
                                               + ((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U] 
                                                     >> 0x18U))) 
                                              + (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                                   << 0x10U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U] 
                                                     >> 0x10U)) 
                                                 + 
                                                 (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                                      >> 8U)) 
                                                  + 
                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[6U]))))),24);
    __Vtemp_hb26c37a5__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U];
    __Vtemp_hb26c37a5__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U];
    __Vtemp_hb26c37a5__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U];
    tracep->fullWData(oldp+125,(__Vtemp_hb26c37a5__0),96);
    __Vtemp_h4f490c6f__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U];
    __Vtemp_h4f490c6f__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U];
    __Vtemp_h4f490c6f__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U];
    __Vtemp_h4f490c6f__0[3U] = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[6U]);
    tracep->fullWData(oldp+128,(__Vtemp_h4f490c6f__0),120);
    tracep->fullIData(oldp+132,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U] 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U] 
                                                    >> 0x18U))))),24);
    tracep->fullIData(oldp+133,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                                << 0x10U) 
                                               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] 
                                                  >> 0x10U)) 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                                  << 0x18U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                                    >> 8U))))),24);
    tracep->fullQData(oldp+134,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U]))))),48);
    tracep->fullQData(oldp+136,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U])) 
                                     << 0x10U) | ((QData)((IData)(
                                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U])) 
                                                  >> 0x10U)))),48);
    tracep->fullIData(oldp+138,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U])),24);
    tracep->fullIData(oldp+139,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] 
                                               << 8U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U] 
                                                 >> 0x18U)))),24);
    tracep->fullIData(oldp+140,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                               << 0x10U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] 
                                                 >> 0x10U)))),24);
    tracep->fullIData(oldp+141,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                 >> 8U)),24);
    tracep->fullIData(oldp+142,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U] 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U] 
                                                    >> 0x18U))))),24);
    tracep->fullIData(oldp+143,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                                << 0x10U) 
                                               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U] 
                                                  >> 0x10U)) 
                                              + (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                                     >> 8U)) 
                                                 + 
                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[6U])))),24);
    tracep->fullQData(oldp+144,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U]))))),48);
    __Vtemp_h41a48404__0[0U] = ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                 << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U] 
                                              >> 0x10U));
    __Vtemp_h41a48404__0[1U] = ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[6U] 
                                 << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                              >> 0x10U));
    __Vtemp_h41a48404__0[2U] = (0xffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[6U] 
                                         >> 0x10U));
    tracep->fullWData(oldp+146,(__Vtemp_h41a48404__0),72);
    tracep->fullIData(oldp+149,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U])),24);
    tracep->fullIData(oldp+150,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U] 
                                               << 8U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U] 
                                                 >> 0x18U)))),24);
    tracep->fullIData(oldp+151,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                               << 0x10U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U] 
                                                 >> 0x10U)))),24);
    tracep->fullIData(oldp+152,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                                << 0x18U) 
                                               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                                  >> 8U)) 
                                              + vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[6U]))),24);
    tracep->fullQData(oldp+153,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[6U])) 
                                     << 0x18U) | ((QData)((IData)(
                                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U])) 
                                                  >> 8U)))),48);
    tracep->fullIData(oldp+155,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                 >> 8U)),24);
    tracep->fullIData(oldp+156,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[6U])),24);
    tracep->fullIData(oldp+157,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum
                                [0U]),24);
    tracep->fullWData(oldp+158,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul),216);
    tracep->fullIData(oldp+165,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum[0]),24);
    tracep->fullIData(oldp+166,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum[1]),24);
    tracep->fullIData(oldp+167,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum[2]),24);
    tracep->fullIData(oldp+168,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum[3]),24);
    tracep->fullIData(oldp+169,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum[4]),24);
    tracep->fullIData(oldp+170,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum[5]),24);
    tracep->fullIData(oldp+171,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum[6]),24);
    tracep->fullIData(oldp+172,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum[7]),24);
    tracep->fullIData(oldp+173,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__i),32);
    tracep->fullIData(oldp+174,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U] 
                                                + (
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U] 
                                                      >> 0x18U))) 
                                               + ((
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                                      >> 8U)))) 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U] 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U] 
                                                      >> 0x18U))) 
                                                 + 
                                                 (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                                    << 0x10U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                                     << 0x18U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                                       >> 8U)) 
                                                   + 
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[6U])))))),24);
    tracep->fullIData(oldp+175,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U] 
                                               + ((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U] 
                                                     >> 0x18U))) 
                                              + (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x10U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] 
                                                     >> 0x10U)) 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                                     >> 8U)))))),24);
    tracep->fullIData(oldp+176,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U] 
                                               + ((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U] 
                                                     >> 0x18U))) 
                                              + (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                                   << 0x10U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U] 
                                                     >> 0x10U)) 
                                                 + 
                                                 (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                                      >> 8U)) 
                                                  + 
                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[6U]))))),24);
    __Vtemp_h06e66bfa__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U];
    __Vtemp_h06e66bfa__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U];
    __Vtemp_h06e66bfa__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U];
    tracep->fullWData(oldp+177,(__Vtemp_h06e66bfa__0),96);
    __Vtemp_hf307cd10__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U];
    __Vtemp_hf307cd10__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U];
    __Vtemp_hf307cd10__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U];
    __Vtemp_hf307cd10__0[3U] = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[6U]);
    tracep->fullWData(oldp+180,(__Vtemp_hf307cd10__0),120);
    tracep->fullIData(oldp+184,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U] 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U] 
                                                    >> 0x18U))))),24);
    tracep->fullIData(oldp+185,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                                << 0x10U) 
                                               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] 
                                                  >> 0x10U)) 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                                  << 0x18U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                                    >> 8U))))),24);
    tracep->fullQData(oldp+186,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U]))))),48);
    tracep->fullQData(oldp+188,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U])) 
                                     << 0x10U) | ((QData)((IData)(
                                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U])) 
                                                  >> 0x10U)))),48);
    tracep->fullIData(oldp+190,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U])),24);
    tracep->fullIData(oldp+191,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] 
                                               << 8U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U] 
                                                 >> 0x18U)))),24);
    tracep->fullIData(oldp+192,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                               << 0x10U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] 
                                                 >> 0x10U)))),24);
    tracep->fullIData(oldp+193,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                 >> 8U)),24);
    tracep->fullIData(oldp+194,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U] 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U] 
                                                    >> 0x18U))))),24);
    tracep->fullIData(oldp+195,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                                << 0x10U) 
                                               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U] 
                                                  >> 0x10U)) 
                                              + (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                                     >> 8U)) 
                                                 + 
                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[6U])))),24);
    tracep->fullQData(oldp+196,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U]))))),48);
    __Vtemp_haef97793__0[0U] = ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                 << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U] 
                                              >> 0x10U));
    __Vtemp_haef97793__0[1U] = ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[6U] 
                                 << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                              >> 0x10U));
    __Vtemp_haef97793__0[2U] = (0xffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[6U] 
                                         >> 0x10U));
    tracep->fullWData(oldp+198,(__Vtemp_haef97793__0),72);
    tracep->fullIData(oldp+201,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U])),24);
    tracep->fullIData(oldp+202,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U] 
                                               << 8U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U] 
                                                 >> 0x18U)))),24);
    tracep->fullIData(oldp+203,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                               << 0x10U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U] 
                                                 >> 0x10U)))),24);
    tracep->fullIData(oldp+204,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                                << 0x18U) 
                                               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                                  >> 8U)) 
                                              + vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[6U]))),24);
    tracep->fullQData(oldp+205,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[6U])) 
                                     << 0x18U) | ((QData)((IData)(
                                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U])) 
                                                  >> 8U)))),48);
    tracep->fullIData(oldp+207,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                 >> 8U)),24);
    tracep->fullIData(oldp+208,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[6U])),24);
    tracep->fullIData(oldp+209,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum
                                [0U]),24);
    tracep->fullWData(oldp+210,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul),216);
    tracep->fullIData(oldp+217,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum[0]),24);
    tracep->fullIData(oldp+218,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum[1]),24);
    tracep->fullIData(oldp+219,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum[2]),24);
    tracep->fullIData(oldp+220,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum[3]),24);
    tracep->fullIData(oldp+221,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum[4]),24);
    tracep->fullIData(oldp+222,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum[5]),24);
    tracep->fullIData(oldp+223,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum[6]),24);
    tracep->fullIData(oldp+224,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum[7]),24);
    tracep->fullIData(oldp+225,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__i),32);
    tracep->fullIData(oldp+226,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U] 
                                                + (
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U] 
                                                      >> 0x18U))) 
                                               + ((
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                                      >> 8U)))) 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U] 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U] 
                                                      >> 0x18U))) 
                                                 + 
                                                 (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                                    << 0x10U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                                     << 0x18U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                                       >> 8U)) 
                                                   + 
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[6U])))))),24);
    tracep->fullIData(oldp+227,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U] 
                                               + ((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U] 
                                                     >> 0x18U))) 
                                              + (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x10U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] 
                                                     >> 0x10U)) 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                                     >> 8U)))))),24);
    tracep->fullIData(oldp+228,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U] 
                                               + ((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U] 
                                                     >> 0x18U))) 
                                              + (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                                   << 0x10U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U] 
                                                     >> 0x10U)) 
                                                 + 
                                                 (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                                      >> 8U)) 
                                                  + 
                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[6U]))))),24);
    __Vtemp_hfdbadbdc__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U];
    __Vtemp_hfdbadbdc__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U];
    __Vtemp_hfdbadbdc__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U];
    tracep->fullWData(oldp+229,(__Vtemp_hfdbadbdc__0),96);
    __Vtemp_hb545abd5__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U];
    __Vtemp_hb545abd5__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U];
    __Vtemp_hb545abd5__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U];
    __Vtemp_hb545abd5__0[3U] = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[6U]);
    tracep->fullWData(oldp+232,(__Vtemp_hb545abd5__0),120);
    tracep->fullIData(oldp+236,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U] 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U] 
                                                    >> 0x18U))))),24);
    tracep->fullIData(oldp+237,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                                << 0x10U) 
                                               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] 
                                                  >> 0x10U)) 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                                  << 0x18U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                                    >> 8U))))),24);
    tracep->fullQData(oldp+238,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U]))))),48);
    tracep->fullQData(oldp+240,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U])) 
                                     << 0x10U) | ((QData)((IData)(
                                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U])) 
                                                  >> 0x10U)))),48);
    tracep->fullIData(oldp+242,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U])),24);
    tracep->fullIData(oldp+243,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] 
                                               << 8U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U] 
                                                 >> 0x18U)))),24);
    tracep->fullIData(oldp+244,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                               << 0x10U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] 
                                                 >> 0x10U)))),24);
    tracep->fullIData(oldp+245,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                 >> 8U)),24);
    tracep->fullIData(oldp+246,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U] 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U] 
                                                    >> 0x18U))))),24);
    tracep->fullIData(oldp+247,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                                << 0x10U) 
                                               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U] 
                                                  >> 0x10U)) 
                                              + (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                                     >> 8U)) 
                                                 + 
                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[6U])))),24);
    tracep->fullQData(oldp+248,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U]))))),48);
    __Vtemp_h9d28abdb__0[0U] = ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                 << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U] 
                                              >> 0x10U));
    __Vtemp_h9d28abdb__0[1U] = ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[6U] 
                                 << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                              >> 0x10U));
    __Vtemp_h9d28abdb__0[2U] = (0xffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[6U] 
                                         >> 0x10U));
    tracep->fullWData(oldp+250,(__Vtemp_h9d28abdb__0),72);
    tracep->fullIData(oldp+253,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U])),24);
    tracep->fullIData(oldp+254,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U] 
                                               << 8U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U] 
                                                 >> 0x18U)))),24);
    tracep->fullIData(oldp+255,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                               << 0x10U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U] 
                                                 >> 0x10U)))),24);
    tracep->fullIData(oldp+256,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                                << 0x18U) 
                                               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                                  >> 8U)) 
                                              + vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[6U]))),24);
    tracep->fullQData(oldp+257,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[6U])) 
                                     << 0x18U) | ((QData)((IData)(
                                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U])) 
                                                  >> 8U)))),48);
    tracep->fullIData(oldp+259,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                 >> 8U)),24);
    tracep->fullIData(oldp+260,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[6U])),24);
    tracep->fullIData(oldp+261,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum
                                [0U]),24);
    tracep->fullWData(oldp+262,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul),216);
    tracep->fullIData(oldp+269,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum[0]),24);
    tracep->fullIData(oldp+270,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum[1]),24);
    tracep->fullIData(oldp+271,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum[2]),24);
    tracep->fullIData(oldp+272,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum[3]),24);
    tracep->fullIData(oldp+273,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum[4]),24);
    tracep->fullIData(oldp+274,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum[5]),24);
    tracep->fullIData(oldp+275,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum[6]),24);
    tracep->fullIData(oldp+276,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum[7]),24);
    tracep->fullIData(oldp+277,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__i),32);
    tracep->fullIData(oldp+278,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U] 
                                                + (
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U] 
                                                      >> 0x18U))) 
                                               + ((
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                                      >> 8U)))) 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U] 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U] 
                                                      >> 0x18U))) 
                                                 + 
                                                 (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                                    << 0x10U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                                     << 0x18U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                                       >> 8U)) 
                                                   + 
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[6U])))))),24);
    tracep->fullIData(oldp+279,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U] 
                                               + ((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U] 
                                                     >> 0x18U))) 
                                              + (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x10U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] 
                                                     >> 0x10U)) 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                                     >> 8U)))))),24);
    tracep->fullIData(oldp+280,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U] 
                                               + ((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U] 
                                                     >> 0x18U))) 
                                              + (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                                   << 0x10U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U] 
                                                     >> 0x10U)) 
                                                 + 
                                                 (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                                      >> 8U)) 
                                                  + 
                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[6U]))))),24);
    __Vtemp_h78a6dc3e__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U];
    __Vtemp_h78a6dc3e__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U];
    __Vtemp_h78a6dc3e__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U];
    tracep->fullWData(oldp+281,(__Vtemp_h78a6dc3e__0),96);
    __Vtemp_hb59bc74d__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U];
    __Vtemp_hb59bc74d__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U];
    __Vtemp_hb59bc74d__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U];
    __Vtemp_hb59bc74d__0[3U] = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[6U]);
    tracep->fullWData(oldp+284,(__Vtemp_hb59bc74d__0),120);
    tracep->fullIData(oldp+288,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U] 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U] 
                                                    >> 0x18U))))),24);
    tracep->fullIData(oldp+289,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                                << 0x10U) 
                                               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] 
                                                  >> 0x10U)) 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                                  << 0x18U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                                    >> 8U))))),24);
    tracep->fullQData(oldp+290,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U]))))),48);
    tracep->fullQData(oldp+292,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U])) 
                                     << 0x10U) | ((QData)((IData)(
                                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U])) 
                                                  >> 0x10U)))),48);
    tracep->fullIData(oldp+294,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U])),24);
    tracep->fullIData(oldp+295,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] 
                                               << 8U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U] 
                                                 >> 0x18U)))),24);
    tracep->fullIData(oldp+296,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                               << 0x10U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] 
                                                 >> 0x10U)))),24);
    tracep->fullIData(oldp+297,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                 >> 8U)),24);
    tracep->fullIData(oldp+298,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U] 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U] 
                                                    >> 0x18U))))),24);
    tracep->fullIData(oldp+299,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                                << 0x10U) 
                                               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U] 
                                                  >> 0x10U)) 
                                              + (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                                     >> 8U)) 
                                                 + 
                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[6U])))),24);
    tracep->fullQData(oldp+300,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U]))))),48);
    __Vtemp_h45265bb4__0[0U] = ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                 << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U] 
                                              >> 0x10U));
    __Vtemp_h45265bb4__0[1U] = ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[6U] 
                                 << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                              >> 0x10U));
    __Vtemp_h45265bb4__0[2U] = (0xffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[6U] 
                                         >> 0x10U));
    tracep->fullWData(oldp+302,(__Vtemp_h45265bb4__0),72);
    tracep->fullIData(oldp+305,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U])),24);
    tracep->fullIData(oldp+306,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U] 
                                               << 8U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U] 
                                                 >> 0x18U)))),24);
    tracep->fullIData(oldp+307,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                               << 0x10U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U] 
                                                 >> 0x10U)))),24);
    tracep->fullIData(oldp+308,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                                << 0x18U) 
                                               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                                  >> 8U)) 
                                              + vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[6U]))),24);
    tracep->fullQData(oldp+309,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[6U])) 
                                     << 0x18U) | ((QData)((IData)(
                                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U])) 
                                                  >> 8U)))),48);
    tracep->fullIData(oldp+311,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                 >> 8U)),24);
    tracep->fullIData(oldp+312,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[6U])),24);
    tracep->fullIData(oldp+313,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum
                                [0U]),24);
    tracep->fullWData(oldp+314,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul),216);
    tracep->fullIData(oldp+321,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum[0]),24);
    tracep->fullIData(oldp+322,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum[1]),24);
    tracep->fullIData(oldp+323,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum[2]),24);
    tracep->fullIData(oldp+324,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum[3]),24);
    tracep->fullIData(oldp+325,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum[4]),24);
    tracep->fullIData(oldp+326,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum[5]),24);
    tracep->fullIData(oldp+327,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum[6]),24);
    tracep->fullIData(oldp+328,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum[7]),24);
    tracep->fullIData(oldp+329,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__i),32);
    tracep->fullIData(oldp+330,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U] 
                                                + (
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U] 
                                                      >> 0x18U))) 
                                               + ((
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                                      >> 8U)))) 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U] 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U] 
                                                      >> 0x18U))) 
                                                 + 
                                                 (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                                    << 0x10U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                                     << 0x18U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                                       >> 8U)) 
                                                   + 
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[6U])))))),24);
    tracep->fullIData(oldp+331,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U] 
                                               + ((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U] 
                                                     >> 0x18U))) 
                                              + (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x10U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] 
                                                     >> 0x10U)) 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                                     >> 8U)))))),24);
    tracep->fullIData(oldp+332,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U] 
                                               + ((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U] 
                                                     >> 0x18U))) 
                                              + (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                                   << 0x10U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U] 
                                                     >> 0x10U)) 
                                                 + 
                                                 (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                                      >> 8U)) 
                                                  + 
                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[6U]))))),24);
    __Vtemp_hd383f5e3__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U];
    __Vtemp_hd383f5e3__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U];
    __Vtemp_hd383f5e3__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U];
    tracep->fullWData(oldp+333,(__Vtemp_hd383f5e3__0),96);
    __Vtemp_heb3df3cb__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U];
    __Vtemp_heb3df3cb__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U];
    __Vtemp_heb3df3cb__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U];
    __Vtemp_heb3df3cb__0[3U] = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[6U]);
    tracep->fullWData(oldp+336,(__Vtemp_heb3df3cb__0),120);
    tracep->fullIData(oldp+340,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U] 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U] 
                                                    >> 0x18U))))),24);
    tracep->fullIData(oldp+341,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                                << 0x10U) 
                                               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] 
                                                  >> 0x10U)) 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                                  << 0x18U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                                    >> 8U))))),24);
    tracep->fullQData(oldp+342,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U]))))),48);
    tracep->fullQData(oldp+344,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U])) 
                                     << 0x10U) | ((QData)((IData)(
                                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U])) 
                                                  >> 0x10U)))),48);
    tracep->fullIData(oldp+346,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U])),24);
    tracep->fullIData(oldp+347,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] 
                                               << 8U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U] 
                                                 >> 0x18U)))),24);
    tracep->fullIData(oldp+348,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                               << 0x10U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] 
                                                 >> 0x10U)))),24);
    tracep->fullIData(oldp+349,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                 >> 8U)),24);
    tracep->fullIData(oldp+350,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U] 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U] 
                                                    >> 0x18U))))),24);
    tracep->fullIData(oldp+351,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                                << 0x10U) 
                                               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U] 
                                                  >> 0x10U)) 
                                              + (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                                     >> 8U)) 
                                                 + 
                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[6U])))),24);
    tracep->fullQData(oldp+352,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U]))))),48);
    __Vtemp_h2b35cf46__0[0U] = ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                 << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U] 
                                              >> 0x10U));
    __Vtemp_h2b35cf46__0[1U] = ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[6U] 
                                 << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                              >> 0x10U));
    __Vtemp_h2b35cf46__0[2U] = (0xffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[6U] 
                                         >> 0x10U));
    tracep->fullWData(oldp+354,(__Vtemp_h2b35cf46__0),72);
    tracep->fullIData(oldp+357,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U])),24);
    tracep->fullIData(oldp+358,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U] 
                                               << 8U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U] 
                                                 >> 0x18U)))),24);
    tracep->fullIData(oldp+359,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                               << 0x10U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U] 
                                                 >> 0x10U)))),24);
    tracep->fullIData(oldp+360,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                                << 0x18U) 
                                               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                                  >> 8U)) 
                                              + vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[6U]))),24);
    tracep->fullQData(oldp+361,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[6U])) 
                                     << 0x18U) | ((QData)((IData)(
                                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U])) 
                                                  >> 8U)))),48);
    tracep->fullIData(oldp+363,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                 >> 8U)),24);
    tracep->fullIData(oldp+364,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[6U])),24);
    tracep->fullIData(oldp+365,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum
                                [0U]),24);
    tracep->fullWData(oldp+366,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul),216);
    tracep->fullIData(oldp+373,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum[0]),24);
    tracep->fullIData(oldp+374,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum[1]),24);
    tracep->fullIData(oldp+375,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum[2]),24);
    tracep->fullIData(oldp+376,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum[3]),24);
    tracep->fullIData(oldp+377,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum[4]),24);
    tracep->fullIData(oldp+378,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum[5]),24);
    tracep->fullIData(oldp+379,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum[6]),24);
    tracep->fullIData(oldp+380,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum[7]),24);
    tracep->fullIData(oldp+381,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__i),32);
    tracep->fullIData(oldp+382,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U] 
                                                + (
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U] 
                                                      >> 0x18U))) 
                                               + ((
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                                      >> 8U)))) 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U] 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U] 
                                                      >> 0x18U))) 
                                                 + 
                                                 (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                                    << 0x10U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                                     << 0x18U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                                       >> 8U)) 
                                                   + 
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[6U])))))),24);
    tracep->fullIData(oldp+383,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U] 
                                               + ((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U] 
                                                     >> 0x18U))) 
                                              + (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x10U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] 
                                                     >> 0x10U)) 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                                     >> 8U)))))),24);
    tracep->fullIData(oldp+384,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U] 
                                               + ((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U] 
                                                     >> 0x18U))) 
                                              + (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                                   << 0x10U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U] 
                                                     >> 0x10U)) 
                                                 + 
                                                 (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                                      >> 8U)) 
                                                  + 
                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[6U]))))),24);
    __Vtemp_he329b667__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U];
    __Vtemp_he329b667__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U];
    __Vtemp_he329b667__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U];
    tracep->fullWData(oldp+385,(__Vtemp_he329b667__0),96);
    __Vtemp_h1a848a64__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U];
    __Vtemp_h1a848a64__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U];
    __Vtemp_h1a848a64__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U];
    __Vtemp_h1a848a64__0[3U] = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[6U]);
    tracep->fullWData(oldp+388,(__Vtemp_h1a848a64__0),120);
    tracep->fullIData(oldp+392,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U] 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U] 
                                                    >> 0x18U))))),24);
    tracep->fullIData(oldp+393,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                                << 0x10U) 
                                               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] 
                                                  >> 0x10U)) 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                                  << 0x18U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                                    >> 8U))))),24);
    tracep->fullQData(oldp+394,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U]))))),48);
    tracep->fullQData(oldp+396,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U])) 
                                     << 0x10U) | ((QData)((IData)(
                                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U])) 
                                                  >> 0x10U)))),48);
    tracep->fullIData(oldp+398,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U])),24);
    tracep->fullIData(oldp+399,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] 
                                               << 8U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U] 
                                                 >> 0x18U)))),24);
    tracep->fullIData(oldp+400,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                               << 0x10U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] 
                                                 >> 0x10U)))),24);
    tracep->fullIData(oldp+401,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                 >> 8U)),24);
    tracep->fullIData(oldp+402,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U] 
                                              + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U] 
                                                    >> 0x18U))))),24);
    tracep->fullIData(oldp+403,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                                << 0x10U) 
                                               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U] 
                                                  >> 0x10U)) 
                                              + (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                                     >> 8U)) 
                                                 + 
                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[6U])))),24);
    tracep->fullQData(oldp+404,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U]))))),48);
    __Vtemp_h4452fa5d__0[0U] = ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                 << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U] 
                                              >> 0x10U));
    __Vtemp_h4452fa5d__0[1U] = ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[6U] 
                                 << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                              >> 0x10U));
    __Vtemp_h4452fa5d__0[2U] = (0xffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[6U] 
                                         >> 0x10U));
    tracep->fullWData(oldp+406,(__Vtemp_h4452fa5d__0),72);
    tracep->fullIData(oldp+409,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U])),24);
    tracep->fullIData(oldp+410,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U] 
                                               << 8U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U] 
                                                 >> 0x18U)))),24);
    tracep->fullIData(oldp+411,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                               << 0x10U) 
                                              | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U] 
                                                 >> 0x10U)))),24);
    tracep->fullIData(oldp+412,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                                << 0x18U) 
                                               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                                  >> 8U)) 
                                              + vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[6U]))),24);
    tracep->fullQData(oldp+413,((0xffffffffffffULL 
                                 & (((QData)((IData)(
                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[6U])) 
                                     << 0x18U) | ((QData)((IData)(
                                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U])) 
                                                  >> 8U)))),48);
    tracep->fullIData(oldp+415,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                 >> 8U)),24);
    tracep->fullIData(oldp+416,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[6U])),24);
    tracep->fullWData(oldp+417,(vlSelf->pe_top__DOT__w_rd),576);
    tracep->fullWData(oldp+435,(vlSelf->pe_top__DOT__ia_rd),72);
    tracep->fullBit(oldp+438,(vlSelf->pe_top__DOT__done));
    __Vtemp_h0a645864__0[0U] = vlSelf->pe_top__DOT__w_rd[0U];
    __Vtemp_h0a645864__0[1U] = vlSelf->pe_top__DOT__w_rd[1U];
    __Vtemp_h0a645864__0[2U] = (0xffU & vlSelf->pe_top__DOT__w_rd[2U]);
    tracep->fullWData(oldp+439,(__Vtemp_h0a645864__0),72);
    __Vtemp_h5c2e7a79__0[0U] = ((vlSelf->pe_top__DOT__w_rd[3U] 
                                 << 0x18U) | (vlSelf->pe_top__DOT__w_rd[2U] 
                                              >> 8U));
    __Vtemp_h5c2e7a79__0[1U] = ((vlSelf->pe_top__DOT__w_rd[4U] 
                                 << 0x18U) | (vlSelf->pe_top__DOT__w_rd[3U] 
                                              >> 8U));
    __Vtemp_h5c2e7a79__0[2U] = (0xffU & (vlSelf->pe_top__DOT__w_rd[4U] 
                                         >> 8U));
    tracep->fullWData(oldp+442,(__Vtemp_h5c2e7a79__0),72);
    __Vtemp_hef1d2440__0[0U] = ((vlSelf->pe_top__DOT__w_rd[5U] 
                                 << 0x10U) | (vlSelf->pe_top__DOT__w_rd[4U] 
                                              >> 0x10U));
    __Vtemp_hef1d2440__0[1U] = ((vlSelf->pe_top__DOT__w_rd[6U] 
                                 << 0x10U) | (vlSelf->pe_top__DOT__w_rd[5U] 
                                              >> 0x10U));
    __Vtemp_hef1d2440__0[2U] = (0xffU & (vlSelf->pe_top__DOT__w_rd[6U] 
                                         >> 0x10U));
    tracep->fullWData(oldp+445,(__Vtemp_hef1d2440__0),72);
    __Vtemp_h2132b98d__0[0U] = ((vlSelf->pe_top__DOT__w_rd[7U] 
                                 << 8U) | (vlSelf->pe_top__DOT__w_rd[6U] 
                                           >> 0x18U));
    __Vtemp_h2132b98d__0[1U] = ((vlSelf->pe_top__DOT__w_rd[8U] 
                                 << 8U) | (vlSelf->pe_top__DOT__w_rd[7U] 
                                           >> 0x18U));
    __Vtemp_h2132b98d__0[2U] = (vlSelf->pe_top__DOT__w_rd[8U] 
                                >> 0x18U);
    tracep->fullWData(oldp+448,(__Vtemp_h2132b98d__0),72);
    __Vtemp_hdea3a0a9__0[0U] = vlSelf->pe_top__DOT__w_rd[9U];
    __Vtemp_hdea3a0a9__0[1U] = vlSelf->pe_top__DOT__w_rd[0xaU];
    __Vtemp_hdea3a0a9__0[2U] = (0xffU & vlSelf->pe_top__DOT__w_rd[0xbU]);
    tracep->fullWData(oldp+451,(__Vtemp_hdea3a0a9__0),72);
    __Vtemp_hf96b848c__0[0U] = ((vlSelf->pe_top__DOT__w_rd[0xcU] 
                                 << 0x18U) | (vlSelf->pe_top__DOT__w_rd[0xbU] 
                                              >> 8U));
    __Vtemp_hf96b848c__0[1U] = ((vlSelf->pe_top__DOT__w_rd[0xdU] 
                                 << 0x18U) | (vlSelf->pe_top__DOT__w_rd[0xcU] 
                                              >> 8U));
    __Vtemp_hf96b848c__0[2U] = (0xffU & (vlSelf->pe_top__DOT__w_rd[0xdU] 
                                         >> 8U));
    tracep->fullWData(oldp+454,(__Vtemp_hf96b848c__0),72);
    __Vtemp_h0fa9ce88__0[0U] = ((vlSelf->pe_top__DOT__w_rd[0xeU] 
                                 << 0x10U) | (vlSelf->pe_top__DOT__w_rd[0xdU] 
                                              >> 0x10U));
    __Vtemp_h0fa9ce88__0[1U] = ((vlSelf->pe_top__DOT__w_rd[0xfU] 
                                 << 0x10U) | (vlSelf->pe_top__DOT__w_rd[0xeU] 
                                              >> 0x10U));
    __Vtemp_h0fa9ce88__0[2U] = (0xffU & (vlSelf->pe_top__DOT__w_rd[0xfU] 
                                         >> 0x10U));
    tracep->fullWData(oldp+457,(__Vtemp_h0fa9ce88__0),72);
    __Vtemp_hc31fb041__0[0U] = ((vlSelf->pe_top__DOT__w_rd[0x10U] 
                                 << 8U) | (vlSelf->pe_top__DOT__w_rd[0xfU] 
                                           >> 0x18U));
    __Vtemp_hc31fb041__0[1U] = ((vlSelf->pe_top__DOT__w_rd[0x11U] 
                                 << 8U) | (vlSelf->pe_top__DOT__w_rd[0x10U] 
                                           >> 0x18U));
    __Vtemp_hc31fb041__0[2U] = (vlSelf->pe_top__DOT__w_rd[0x11U] 
                                >> 0x18U);
    tracep->fullWData(oldp+460,(__Vtemp_hc31fb041__0),72);
    tracep->fullIData(oldp+463,(((IData)(0x2000U) + 
                                 ((IData)(9U) * vlSelf->pe_top__DOT__pe__DOT__cnt))),32);
    tracep->fullWData(oldp+464,(vlSelf->pe_top__DOT__accumout_wr),192);
    tracep->fullIData(oldp+470,(vlSelf->pe_top__DOT__addr_wr),32);
    tracep->fullBit(oldp+471,(vlSelf->pe_top__DOT__done_PE));
    tracep->fullBit(oldp+472,(vlSelf->pe_top__DOT__mem_wr_en));
    tracep->fullIData(oldp+473,(vlSelf->pe_top__DOT__pe__DOT__cnt),24);
    tracep->fullBit(oldp+474,(vlSelf->clk));
    tracep->fullBit(oldp+475,(vlSelf->pe_top__DOT__rst));
    tracep->fullIData(oldp+476,(8U),32);
    tracep->fullIData(oldp+477,(1U),32);
    tracep->fullIData(oldp+478,(3U),32);
    tracep->fullIData(oldp+479,(9U),32);
    tracep->fullIData(oldp+480,(0x20U),32);
    tracep->fullIData(oldp+481,(0x18U),32);
    tracep->fullIData(oldp+482,(0x5000U),32);
    tracep->fullIData(oldp+483,(0x2000U),32);
    tracep->fullIData(oldp+484,(0x1000U),32);
    tracep->fullIData(oldp+485,(0x3000U),32);
    tracep->fullCData(oldp+486,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_cnt),3);
    tracep->fullIData(oldp+487,(4U),32);
    tracep->fullIData(oldp+488,(5U),32);
    tracep->fullIData(oldp+489,(2U),32);
    tracep->fullIData(oldp+490,(0U),32);
    tracep->fullCData(oldp+491,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_cnt),3);
    tracep->fullCData(oldp+492,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_cnt),3);
    tracep->fullCData(oldp+493,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_cnt),3);
    tracep->fullCData(oldp+494,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_cnt),3);
    tracep->fullCData(oldp+495,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_cnt),3);
    tracep->fullCData(oldp+496,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_cnt),3);
    tracep->fullCData(oldp+497,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_cnt),3);
}
