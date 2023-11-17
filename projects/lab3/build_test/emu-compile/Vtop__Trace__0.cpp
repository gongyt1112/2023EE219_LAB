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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+0,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum
                                 [0U]),24);
        tracep->chgWData(oldp+1,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul),216);
        tracep->chgIData(oldp+8,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum[0]),24);
        tracep->chgIData(oldp+9,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum[1]),24);
        tracep->chgIData(oldp+10,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum[2]),24);
        tracep->chgIData(oldp+11,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum[3]),24);
        tracep->chgIData(oldp+12,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum[4]),24);
        tracep->chgIData(oldp+13,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum[5]),24);
        tracep->chgIData(oldp+14,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum[6]),24);
        tracep->chgIData(oldp+15,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum[7]),24);
        tracep->chgIData(oldp+16,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__i),32);
        tracep->chgIData(oldp+17,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U] 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U] 
                                                      >> 0x18U))) 
                                                 + 
                                                 (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                                      >> 8U)))) 
                                                + (
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U] 
                                                    + 
                                                    ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U] 
                                                      << 8U) 
                                                     | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U] 
                                                        >> 0x18U))) 
                                                   + 
                                                   (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
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
        tracep->chgIData(oldp+18,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U] 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U] 
                                                     >> 0x18U))) 
                                                + (
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                                     << 0x10U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] 
                                                       >> 0x10U)) 
                                                   + 
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                                     << 0x18U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                                       >> 8U)))))),24);
        tracep->chgIData(oldp+19,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U] 
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
                                                    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[6U]))))),24);
        __Vtemp_h457a7325__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U];
        __Vtemp_h457a7325__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U];
        __Vtemp_h457a7325__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U];
        tracep->chgWData(oldp+20,(__Vtemp_h457a7325__0),96);
        __Vtemp_hf8103058__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U];
        __Vtemp_hf8103058__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U];
        __Vtemp_hf8103058__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U];
        __Vtemp_hf8103058__0[3U] = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[6U]);
        tracep->chgWData(oldp+23,(__Vtemp_hf8103058__0),120);
        tracep->chgIData(oldp+27,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U] 
                                                + (
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U] 
                                                      >> 0x18U))))),24);
        tracep->chgIData(oldp+28,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] 
                                                    >> 0x10U)) 
                                                + (
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                                      >> 8U))))),24);
        tracep->chgQData(oldp+29,((0xffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U]))))),48);
        tracep->chgQData(oldp+31,((0xffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U])) 
                                       << 0x10U) | 
                                      ((QData)((IData)(
                                                       vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U])) 
                                       >> 0x10U)))),48);
        tracep->chgIData(oldp+33,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U])),24);
        tracep->chgIData(oldp+34,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] 
                                                 << 8U) 
                                                | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U] 
                                                   >> 0x18U)))),24);
        tracep->chgIData(oldp+35,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                                 << 0x10U) 
                                                | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] 
                                                   >> 0x10U)))),24);
        tracep->chgIData(oldp+36,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                   >> 8U)),24);
        tracep->chgIData(oldp+37,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U] 
                                                + (
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U] 
                                                      >> 0x18U))))),24);
        tracep->chgIData(oldp+38,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U] 
                                                    >> 0x10U)) 
                                                + (
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                                     << 0x18U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                                       >> 8U)) 
                                                   + 
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[6U])))),24);
        tracep->chgQData(oldp+39,((0xffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U])) 
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
        tracep->chgWData(oldp+41,(__Vtemp_hc4b935c2__0),72);
        tracep->chgIData(oldp+44,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U])),24);
        tracep->chgIData(oldp+45,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U] 
                                                 << 8U) 
                                                | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U] 
                                                   >> 0x18U)))),24);
        tracep->chgIData(oldp+46,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U] 
                                                   >> 0x10U)))),24);
        tracep->chgIData(oldp+47,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                                  << 0x18U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                                    >> 8U)) 
                                                + vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[6U]))),24);
        tracep->chgQData(oldp+48,((0xffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[6U])) 
                                       << 0x18U) | 
                                      ((QData)((IData)(
                                                       vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U])) 
                                       >> 8U)))),48);
        tracep->chgIData(oldp+50,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                   >> 8U)),24);
        tracep->chgIData(oldp+51,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[6U])),24);
        tracep->chgIData(oldp+52,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum
                                  [0U]),24);
        tracep->chgWData(oldp+53,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul),216);
        tracep->chgIData(oldp+60,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum[0]),24);
        tracep->chgIData(oldp+61,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum[1]),24);
        tracep->chgIData(oldp+62,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum[2]),24);
        tracep->chgIData(oldp+63,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum[3]),24);
        tracep->chgIData(oldp+64,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum[4]),24);
        tracep->chgIData(oldp+65,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum[5]),24);
        tracep->chgIData(oldp+66,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum[6]),24);
        tracep->chgIData(oldp+67,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum[7]),24);
        tracep->chgIData(oldp+68,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__i),32);
        tracep->chgIData(oldp+69,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U] 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U] 
                                                      >> 0x18U))) 
                                                 + 
                                                 (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                                      >> 8U)))) 
                                                + (
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U] 
                                                    + 
                                                    ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U] 
                                                      << 8U) 
                                                     | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U] 
                                                        >> 0x18U))) 
                                                   + 
                                                   (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
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
        tracep->chgIData(oldp+70,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U] 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U] 
                                                     >> 0x18U))) 
                                                + (
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                                     << 0x10U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] 
                                                       >> 0x10U)) 
                                                   + 
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                                     << 0x18U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                                       >> 8U)))))),24);
        tracep->chgIData(oldp+71,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U] 
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
                                                    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[6U]))))),24);
        __Vtemp_h6f01660d__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U];
        __Vtemp_h6f01660d__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U];
        __Vtemp_h6f01660d__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U];
        tracep->chgWData(oldp+72,(__Vtemp_h6f01660d__0),96);
        __Vtemp_h2690749f__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U];
        __Vtemp_h2690749f__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U];
        __Vtemp_h2690749f__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U];
        __Vtemp_h2690749f__0[3U] = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[6U]);
        tracep->chgWData(oldp+75,(__Vtemp_h2690749f__0),120);
        tracep->chgIData(oldp+79,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U] 
                                                + (
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U] 
                                                      >> 0x18U))))),24);
        tracep->chgIData(oldp+80,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] 
                                                    >> 0x10U)) 
                                                + (
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                                      >> 8U))))),24);
        tracep->chgQData(oldp+81,((0xffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U]))))),48);
        tracep->chgQData(oldp+83,((0xffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U])) 
                                       << 0x10U) | 
                                      ((QData)((IData)(
                                                       vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U])) 
                                       >> 0x10U)))),48);
        tracep->chgIData(oldp+85,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U])),24);
        tracep->chgIData(oldp+86,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] 
                                                 << 8U) 
                                                | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U] 
                                                   >> 0x18U)))),24);
        tracep->chgIData(oldp+87,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                                 << 0x10U) 
                                                | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] 
                                                   >> 0x10U)))),24);
        tracep->chgIData(oldp+88,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                   >> 8U)),24);
        tracep->chgIData(oldp+89,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U] 
                                                + (
                                                   (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U] 
                                                      >> 0x18U))))),24);
        tracep->chgIData(oldp+90,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U] 
                                                    >> 0x10U)) 
                                                + (
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                                     << 0x18U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                                       >> 8U)) 
                                                   + 
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[6U])))),24);
        tracep->chgQData(oldp+91,((0xffffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U])) 
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
        tracep->chgWData(oldp+93,(__Vtemp_ha36a55ec__0),72);
        tracep->chgIData(oldp+96,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U])),24);
        tracep->chgIData(oldp+97,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U] 
                                                 << 8U) 
                                                | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U] 
                                                   >> 0x18U)))),24);
        tracep->chgIData(oldp+98,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                                 << 0x10U) 
                                                | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U] 
                                                   >> 0x10U)))),24);
        tracep->chgIData(oldp+99,((0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                                  << 0x18U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                                    >> 8U)) 
                                                + vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[6U]))),24);
        tracep->chgQData(oldp+100,((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[6U])) 
                                        << 0x18U) | 
                                       ((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U])) 
                                        >> 8U)))),48);
        tracep->chgIData(oldp+102,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                    >> 8U)),24);
        tracep->chgIData(oldp+103,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[6U])),24);
        tracep->chgIData(oldp+104,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum
                                   [0U]),24);
        tracep->chgWData(oldp+105,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul),216);
        tracep->chgIData(oldp+112,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum[0]),24);
        tracep->chgIData(oldp+113,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum[1]),24);
        tracep->chgIData(oldp+114,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum[2]),24);
        tracep->chgIData(oldp+115,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum[3]),24);
        tracep->chgIData(oldp+116,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum[4]),24);
        tracep->chgIData(oldp+117,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum[5]),24);
        tracep->chgIData(oldp+118,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum[6]),24);
        tracep->chgIData(oldp+119,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum[7]),24);
        tracep->chgIData(oldp+120,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__i),32);
        tracep->chgIData(oldp+121,((0xffffffU & (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U] 
                                                   + 
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] 
                                                     << 8U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U] 
                                                       >> 0x18U))) 
                                                  + 
                                                  (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                                     << 0x10U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] 
                                                       >> 0x10U)) 
                                                   + 
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                                     << 0x18U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                                       >> 8U)))) 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U] 
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
        tracep->chgIData(oldp+122,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U] 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U] 
                                                      >> 0x18U))) 
                                                 + 
                                                 (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                                      >> 8U)))))),24);
        tracep->chgIData(oldp+123,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U] 
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
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[6U]))))),24);
        __Vtemp_hb26c37a5__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U];
        __Vtemp_hb26c37a5__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U];
        __Vtemp_hb26c37a5__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U];
        tracep->chgWData(oldp+124,(__Vtemp_hb26c37a5__0),96);
        __Vtemp_h4f490c6f__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U];
        __Vtemp_h4f490c6f__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U];
        __Vtemp_h4f490c6f__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U];
        __Vtemp_h4f490c6f__0[3U] = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[6U]);
        tracep->chgWData(oldp+127,(__Vtemp_h4f490c6f__0),120);
        tracep->chgIData(oldp+131,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U] 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U] 
                                                     >> 0x18U))))),24);
        tracep->chgIData(oldp+132,((0xffffffU & (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x10U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] 
                                                     >> 0x10U)) 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                                     >> 8U))))),24);
        tracep->chgQData(oldp+133,((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U]))))),48);
        tracep->chgQData(oldp+135,((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U])) 
                                        << 0x10U) | 
                                       ((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U])) 
                                        >> 0x10U)))),48);
        tracep->chgIData(oldp+137,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U])),24);
        tracep->chgIData(oldp+138,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U] 
                                                    >> 0x18U)))),24);
        tracep->chgIData(oldp+139,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] 
                                                    >> 0x10U)))),24);
        tracep->chgIData(oldp+140,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                    >> 8U)),24);
        tracep->chgIData(oldp+141,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U] 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U] 
                                                     >> 0x18U))))),24);
        tracep->chgIData(oldp+142,((0xffffffU & (((
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
                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[6U])))),24);
        tracep->chgQData(oldp+143,((0xffffffffffffULL 
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
        tracep->chgWData(oldp+145,(__Vtemp_h41a48404__0),72);
        tracep->chgIData(oldp+148,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U])),24);
        tracep->chgIData(oldp+149,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U] 
                                                    >> 0x18U)))),24);
        tracep->chgIData(oldp+150,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U] 
                                                    >> 0x10U)))),24);
        tracep->chgIData(oldp+151,((0xffffffU & (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                                     >> 8U)) 
                                                 + 
                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[6U]))),24);
        tracep->chgQData(oldp+152,((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[6U])) 
                                        << 0x18U) | 
                                       ((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U])) 
                                        >> 8U)))),48);
        tracep->chgIData(oldp+154,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                    >> 8U)),24);
        tracep->chgIData(oldp+155,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[6U])),24);
        tracep->chgIData(oldp+156,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum
                                   [0U]),24);
        tracep->chgWData(oldp+157,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul),216);
        tracep->chgIData(oldp+164,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum[0]),24);
        tracep->chgIData(oldp+165,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum[1]),24);
        tracep->chgIData(oldp+166,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum[2]),24);
        tracep->chgIData(oldp+167,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum[3]),24);
        tracep->chgIData(oldp+168,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum[4]),24);
        tracep->chgIData(oldp+169,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum[5]),24);
        tracep->chgIData(oldp+170,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum[6]),24);
        tracep->chgIData(oldp+171,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum[7]),24);
        tracep->chgIData(oldp+172,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__i),32);
        tracep->chgIData(oldp+173,((0xffffffU & (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U] 
                                                   + 
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] 
                                                     << 8U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U] 
                                                       >> 0x18U))) 
                                                  + 
                                                  (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                                     << 0x10U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] 
                                                       >> 0x10U)) 
                                                   + 
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                                     << 0x18U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                                       >> 8U)))) 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U] 
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
        tracep->chgIData(oldp+174,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U] 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U] 
                                                      >> 0x18U))) 
                                                 + 
                                                 (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                                      >> 8U)))))),24);
        tracep->chgIData(oldp+175,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U] 
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
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[6U]))))),24);
        __Vtemp_h06e66bfa__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U];
        __Vtemp_h06e66bfa__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U];
        __Vtemp_h06e66bfa__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U];
        tracep->chgWData(oldp+176,(__Vtemp_h06e66bfa__0),96);
        __Vtemp_hf307cd10__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U];
        __Vtemp_hf307cd10__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U];
        __Vtemp_hf307cd10__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U];
        __Vtemp_hf307cd10__0[3U] = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[6U]);
        tracep->chgWData(oldp+179,(__Vtemp_hf307cd10__0),120);
        tracep->chgIData(oldp+183,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U] 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U] 
                                                     >> 0x18U))))),24);
        tracep->chgIData(oldp+184,((0xffffffU & (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x10U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] 
                                                     >> 0x10U)) 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                                     >> 8U))))),24);
        tracep->chgQData(oldp+185,((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U]))))),48);
        tracep->chgQData(oldp+187,((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U])) 
                                        << 0x10U) | 
                                       ((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U])) 
                                        >> 0x10U)))),48);
        tracep->chgIData(oldp+189,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U])),24);
        tracep->chgIData(oldp+190,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U] 
                                                    >> 0x18U)))),24);
        tracep->chgIData(oldp+191,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] 
                                                    >> 0x10U)))),24);
        tracep->chgIData(oldp+192,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                    >> 8U)),24);
        tracep->chgIData(oldp+193,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U] 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U] 
                                                     >> 0x18U))))),24);
        tracep->chgIData(oldp+194,((0xffffffU & (((
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
                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[6U])))),24);
        tracep->chgQData(oldp+195,((0xffffffffffffULL 
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
        tracep->chgWData(oldp+197,(__Vtemp_haef97793__0),72);
        tracep->chgIData(oldp+200,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U])),24);
        tracep->chgIData(oldp+201,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U] 
                                                    >> 0x18U)))),24);
        tracep->chgIData(oldp+202,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U] 
                                                    >> 0x10U)))),24);
        tracep->chgIData(oldp+203,((0xffffffU & (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                                     >> 8U)) 
                                                 + 
                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[6U]))),24);
        tracep->chgQData(oldp+204,((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[6U])) 
                                        << 0x18U) | 
                                       ((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U])) 
                                        >> 8U)))),48);
        tracep->chgIData(oldp+206,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                    >> 8U)),24);
        tracep->chgIData(oldp+207,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[6U])),24);
        tracep->chgIData(oldp+208,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum
                                   [0U]),24);
        tracep->chgWData(oldp+209,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul),216);
        tracep->chgIData(oldp+216,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum[0]),24);
        tracep->chgIData(oldp+217,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum[1]),24);
        tracep->chgIData(oldp+218,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum[2]),24);
        tracep->chgIData(oldp+219,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum[3]),24);
        tracep->chgIData(oldp+220,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum[4]),24);
        tracep->chgIData(oldp+221,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum[5]),24);
        tracep->chgIData(oldp+222,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum[6]),24);
        tracep->chgIData(oldp+223,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum[7]),24);
        tracep->chgIData(oldp+224,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__i),32);
        tracep->chgIData(oldp+225,((0xffffffU & (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U] 
                                                   + 
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] 
                                                     << 8U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U] 
                                                       >> 0x18U))) 
                                                  + 
                                                  (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                                     << 0x10U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] 
                                                       >> 0x10U)) 
                                                   + 
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                                     << 0x18U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                                       >> 8U)))) 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U] 
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
        tracep->chgIData(oldp+226,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U] 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U] 
                                                      >> 0x18U))) 
                                                 + 
                                                 (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                                      >> 8U)))))),24);
        tracep->chgIData(oldp+227,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U] 
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
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[6U]))))),24);
        __Vtemp_hfdbadbdc__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U];
        __Vtemp_hfdbadbdc__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U];
        __Vtemp_hfdbadbdc__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U];
        tracep->chgWData(oldp+228,(__Vtemp_hfdbadbdc__0),96);
        __Vtemp_hb545abd5__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U];
        __Vtemp_hb545abd5__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U];
        __Vtemp_hb545abd5__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U];
        __Vtemp_hb545abd5__0[3U] = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[6U]);
        tracep->chgWData(oldp+231,(__Vtemp_hb545abd5__0),120);
        tracep->chgIData(oldp+235,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U] 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U] 
                                                     >> 0x18U))))),24);
        tracep->chgIData(oldp+236,((0xffffffU & (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x10U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] 
                                                     >> 0x10U)) 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                                     >> 8U))))),24);
        tracep->chgQData(oldp+237,((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U]))))),48);
        tracep->chgQData(oldp+239,((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U])) 
                                        << 0x10U) | 
                                       ((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U])) 
                                        >> 0x10U)))),48);
        tracep->chgIData(oldp+241,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U])),24);
        tracep->chgIData(oldp+242,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U] 
                                                    >> 0x18U)))),24);
        tracep->chgIData(oldp+243,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] 
                                                    >> 0x10U)))),24);
        tracep->chgIData(oldp+244,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                    >> 8U)),24);
        tracep->chgIData(oldp+245,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U] 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U] 
                                                     >> 0x18U))))),24);
        tracep->chgIData(oldp+246,((0xffffffU & (((
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
                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[6U])))),24);
        tracep->chgQData(oldp+247,((0xffffffffffffULL 
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
        tracep->chgWData(oldp+249,(__Vtemp_h9d28abdb__0),72);
        tracep->chgIData(oldp+252,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U])),24);
        tracep->chgIData(oldp+253,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U] 
                                                    >> 0x18U)))),24);
        tracep->chgIData(oldp+254,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U] 
                                                    >> 0x10U)))),24);
        tracep->chgIData(oldp+255,((0xffffffU & (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                                     >> 8U)) 
                                                 + 
                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[6U]))),24);
        tracep->chgQData(oldp+256,((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[6U])) 
                                        << 0x18U) | 
                                       ((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U])) 
                                        >> 8U)))),48);
        tracep->chgIData(oldp+258,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                    >> 8U)),24);
        tracep->chgIData(oldp+259,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[6U])),24);
        tracep->chgIData(oldp+260,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum
                                   [0U]),24);
        tracep->chgWData(oldp+261,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul),216);
        tracep->chgIData(oldp+268,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum[0]),24);
        tracep->chgIData(oldp+269,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum[1]),24);
        tracep->chgIData(oldp+270,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum[2]),24);
        tracep->chgIData(oldp+271,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum[3]),24);
        tracep->chgIData(oldp+272,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum[4]),24);
        tracep->chgIData(oldp+273,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum[5]),24);
        tracep->chgIData(oldp+274,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum[6]),24);
        tracep->chgIData(oldp+275,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum[7]),24);
        tracep->chgIData(oldp+276,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__i),32);
        tracep->chgIData(oldp+277,((0xffffffU & (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U] 
                                                   + 
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] 
                                                     << 8U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U] 
                                                       >> 0x18U))) 
                                                  + 
                                                  (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                                     << 0x10U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] 
                                                       >> 0x10U)) 
                                                   + 
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                                     << 0x18U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                                       >> 8U)))) 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U] 
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
        tracep->chgIData(oldp+278,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U] 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U] 
                                                      >> 0x18U))) 
                                                 + 
                                                 (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                                      >> 8U)))))),24);
        tracep->chgIData(oldp+279,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U] 
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
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[6U]))))),24);
        __Vtemp_h78a6dc3e__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U];
        __Vtemp_h78a6dc3e__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U];
        __Vtemp_h78a6dc3e__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U];
        tracep->chgWData(oldp+280,(__Vtemp_h78a6dc3e__0),96);
        __Vtemp_hb59bc74d__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U];
        __Vtemp_hb59bc74d__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U];
        __Vtemp_hb59bc74d__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U];
        __Vtemp_hb59bc74d__0[3U] = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[6U]);
        tracep->chgWData(oldp+283,(__Vtemp_hb59bc74d__0),120);
        tracep->chgIData(oldp+287,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U] 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U] 
                                                     >> 0x18U))))),24);
        tracep->chgIData(oldp+288,((0xffffffU & (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x10U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] 
                                                     >> 0x10U)) 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                                     >> 8U))))),24);
        tracep->chgQData(oldp+289,((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U]))))),48);
        tracep->chgQData(oldp+291,((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U])) 
                                        << 0x10U) | 
                                       ((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U])) 
                                        >> 0x10U)))),48);
        tracep->chgIData(oldp+293,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U])),24);
        tracep->chgIData(oldp+294,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U] 
                                                    >> 0x18U)))),24);
        tracep->chgIData(oldp+295,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] 
                                                    >> 0x10U)))),24);
        tracep->chgIData(oldp+296,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                    >> 8U)),24);
        tracep->chgIData(oldp+297,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U] 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U] 
                                                     >> 0x18U))))),24);
        tracep->chgIData(oldp+298,((0xffffffU & (((
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
                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[6U])))),24);
        tracep->chgQData(oldp+299,((0xffffffffffffULL 
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
        tracep->chgWData(oldp+301,(__Vtemp_h45265bb4__0),72);
        tracep->chgIData(oldp+304,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U])),24);
        tracep->chgIData(oldp+305,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U] 
                                                    >> 0x18U)))),24);
        tracep->chgIData(oldp+306,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U] 
                                                    >> 0x10U)))),24);
        tracep->chgIData(oldp+307,((0xffffffU & (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                                     >> 8U)) 
                                                 + 
                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[6U]))),24);
        tracep->chgQData(oldp+308,((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[6U])) 
                                        << 0x18U) | 
                                       ((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U])) 
                                        >> 8U)))),48);
        tracep->chgIData(oldp+310,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                    >> 8U)),24);
        tracep->chgIData(oldp+311,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[6U])),24);
        tracep->chgIData(oldp+312,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum
                                   [0U]),24);
        tracep->chgWData(oldp+313,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul),216);
        tracep->chgIData(oldp+320,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum[0]),24);
        tracep->chgIData(oldp+321,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum[1]),24);
        tracep->chgIData(oldp+322,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum[2]),24);
        tracep->chgIData(oldp+323,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum[3]),24);
        tracep->chgIData(oldp+324,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum[4]),24);
        tracep->chgIData(oldp+325,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum[5]),24);
        tracep->chgIData(oldp+326,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum[6]),24);
        tracep->chgIData(oldp+327,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum[7]),24);
        tracep->chgIData(oldp+328,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__i),32);
        tracep->chgIData(oldp+329,((0xffffffU & (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U] 
                                                   + 
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] 
                                                     << 8U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U] 
                                                       >> 0x18U))) 
                                                  + 
                                                  (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                                     << 0x10U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] 
                                                       >> 0x10U)) 
                                                   + 
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                                     << 0x18U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                                       >> 8U)))) 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U] 
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
        tracep->chgIData(oldp+330,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U] 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U] 
                                                      >> 0x18U))) 
                                                 + 
                                                 (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                                      >> 8U)))))),24);
        tracep->chgIData(oldp+331,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U] 
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
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[6U]))))),24);
        __Vtemp_hd383f5e3__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U];
        __Vtemp_hd383f5e3__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U];
        __Vtemp_hd383f5e3__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U];
        tracep->chgWData(oldp+332,(__Vtemp_hd383f5e3__0),96);
        __Vtemp_heb3df3cb__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U];
        __Vtemp_heb3df3cb__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U];
        __Vtemp_heb3df3cb__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U];
        __Vtemp_heb3df3cb__0[3U] = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[6U]);
        tracep->chgWData(oldp+335,(__Vtemp_heb3df3cb__0),120);
        tracep->chgIData(oldp+339,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U] 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U] 
                                                     >> 0x18U))))),24);
        tracep->chgIData(oldp+340,((0xffffffU & (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x10U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] 
                                                     >> 0x10U)) 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                                     >> 8U))))),24);
        tracep->chgQData(oldp+341,((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U]))))),48);
        tracep->chgQData(oldp+343,((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U])) 
                                        << 0x10U) | 
                                       ((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U])) 
                                        >> 0x10U)))),48);
        tracep->chgIData(oldp+345,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U])),24);
        tracep->chgIData(oldp+346,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U] 
                                                    >> 0x18U)))),24);
        tracep->chgIData(oldp+347,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] 
                                                    >> 0x10U)))),24);
        tracep->chgIData(oldp+348,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                    >> 8U)),24);
        tracep->chgIData(oldp+349,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U] 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U] 
                                                     >> 0x18U))))),24);
        tracep->chgIData(oldp+350,((0xffffffU & (((
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
                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[6U])))),24);
        tracep->chgQData(oldp+351,((0xffffffffffffULL 
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
        tracep->chgWData(oldp+353,(__Vtemp_h2b35cf46__0),72);
        tracep->chgIData(oldp+356,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U])),24);
        tracep->chgIData(oldp+357,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U] 
                                                    >> 0x18U)))),24);
        tracep->chgIData(oldp+358,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U] 
                                                    >> 0x10U)))),24);
        tracep->chgIData(oldp+359,((0xffffffU & (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                                     >> 8U)) 
                                                 + 
                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[6U]))),24);
        tracep->chgQData(oldp+360,((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[6U])) 
                                        << 0x18U) | 
                                       ((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U])) 
                                        >> 8U)))),48);
        tracep->chgIData(oldp+362,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                    >> 8U)),24);
        tracep->chgIData(oldp+363,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[6U])),24);
        tracep->chgIData(oldp+364,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum
                                   [0U]),24);
        tracep->chgWData(oldp+365,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul),216);
        tracep->chgIData(oldp+372,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum[0]),24);
        tracep->chgIData(oldp+373,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum[1]),24);
        tracep->chgIData(oldp+374,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum[2]),24);
        tracep->chgIData(oldp+375,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum[3]),24);
        tracep->chgIData(oldp+376,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum[4]),24);
        tracep->chgIData(oldp+377,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum[5]),24);
        tracep->chgIData(oldp+378,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum[6]),24);
        tracep->chgIData(oldp+379,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum[7]),24);
        tracep->chgIData(oldp+380,(vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__i),32);
        tracep->chgIData(oldp+381,((0xffffffU & (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U] 
                                                   + 
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] 
                                                     << 8U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U] 
                                                       >> 0x18U))) 
                                                  + 
                                                  (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                                     << 0x10U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] 
                                                       >> 0x10U)) 
                                                   + 
                                                   ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                                     << 0x18U) 
                                                    | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                                       >> 8U)))) 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U] 
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
        tracep->chgIData(oldp+382,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U] 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] 
                                                    << 8U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U] 
                                                      >> 0x18U))) 
                                                 + 
                                                 (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x10U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                                    << 0x18U) 
                                                   | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                                      >> 8U)))))),24);
        tracep->chgIData(oldp+383,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U] 
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
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[6U]))))),24);
        __Vtemp_he329b667__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U];
        __Vtemp_he329b667__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U];
        __Vtemp_he329b667__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U];
        tracep->chgWData(oldp+384,(__Vtemp_he329b667__0),96);
        __Vtemp_h1a848a64__0[0U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U];
        __Vtemp_h1a848a64__0[1U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U];
        __Vtemp_h1a848a64__0[2U] = vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U];
        __Vtemp_h1a848a64__0[3U] = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[6U]);
        tracep->chgWData(oldp+387,(__Vtemp_h1a848a64__0),120);
        tracep->chgIData(oldp+391,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U] 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U] 
                                                     >> 0x18U))))),24);
        tracep->chgIData(oldp+392,((0xffffffU & (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x10U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] 
                                                     >> 0x10U)) 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                                     >> 8U))))),24);
        tracep->chgQData(oldp+393,((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U]))))),48);
        tracep->chgQData(oldp+395,((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U])) 
                                        << 0x10U) | 
                                       ((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U])) 
                                        >> 0x10U)))),48);
        tracep->chgIData(oldp+397,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U])),24);
        tracep->chgIData(oldp+398,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U] 
                                                    >> 0x18U)))),24);
        tracep->chgIData(oldp+399,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] 
                                                    >> 0x10U)))),24);
        tracep->chgIData(oldp+400,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                    >> 8U)),24);
        tracep->chgIData(oldp+401,((0xffffffU & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U] 
                                                 + 
                                                 ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U] 
                                                   << 8U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U] 
                                                     >> 0x18U))))),24);
        tracep->chgIData(oldp+402,((0xffffffU & (((
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
                                                  vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[6U])))),24);
        tracep->chgQData(oldp+403,((0xffffffffffffULL 
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
        tracep->chgWData(oldp+405,(__Vtemp_h4452fa5d__0),72);
        tracep->chgIData(oldp+408,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U])),24);
        tracep->chgIData(oldp+409,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U] 
                                                  << 8U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U] 
                                                    >> 0x18U)))),24);
        tracep->chgIData(oldp+410,((0xffffffU & ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                                  << 0x10U) 
                                                 | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U] 
                                                    >> 0x10U)))),24);
        tracep->chgIData(oldp+411,((0xffffffU & (((
                                                   vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                                   << 0x18U) 
                                                  | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                                     >> 8U)) 
                                                 + 
                                                 vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[6U]))),24);
        tracep->chgQData(oldp+412,((0xffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[6U])) 
                                        << 0x18U) | 
                                       ((QData)((IData)(
                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U])) 
                                        >> 8U)))),48);
        tracep->chgIData(oldp+414,((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                    >> 8U)),24);
        tracep->chgIData(oldp+415,((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[6U])),24);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgWData(oldp+416,(vlSelf->pe_top__DOT__w_rd),576);
        tracep->chgWData(oldp+434,(vlSelf->pe_top__DOT__ia_rd),72);
        tracep->chgBit(oldp+437,(vlSelf->pe_top__DOT__done));
        __Vtemp_h0a645864__0[0U] = vlSelf->pe_top__DOT__w_rd[0U];
        __Vtemp_h0a645864__0[1U] = vlSelf->pe_top__DOT__w_rd[1U];
        __Vtemp_h0a645864__0[2U] = (0xffU & vlSelf->pe_top__DOT__w_rd[2U]);
        tracep->chgWData(oldp+438,(__Vtemp_h0a645864__0),72);
        __Vtemp_h5c2e7a79__0[0U] = ((vlSelf->pe_top__DOT__w_rd[3U] 
                                     << 0x18U) | (vlSelf->pe_top__DOT__w_rd[2U] 
                                                  >> 8U));
        __Vtemp_h5c2e7a79__0[1U] = ((vlSelf->pe_top__DOT__w_rd[4U] 
                                     << 0x18U) | (vlSelf->pe_top__DOT__w_rd[3U] 
                                                  >> 8U));
        __Vtemp_h5c2e7a79__0[2U] = (0xffU & (vlSelf->pe_top__DOT__w_rd[4U] 
                                             >> 8U));
        tracep->chgWData(oldp+441,(__Vtemp_h5c2e7a79__0),72);
        __Vtemp_hef1d2440__0[0U] = ((vlSelf->pe_top__DOT__w_rd[5U] 
                                     << 0x10U) | (vlSelf->pe_top__DOT__w_rd[4U] 
                                                  >> 0x10U));
        __Vtemp_hef1d2440__0[1U] = ((vlSelf->pe_top__DOT__w_rd[6U] 
                                     << 0x10U) | (vlSelf->pe_top__DOT__w_rd[5U] 
                                                  >> 0x10U));
        __Vtemp_hef1d2440__0[2U] = (0xffU & (vlSelf->pe_top__DOT__w_rd[6U] 
                                             >> 0x10U));
        tracep->chgWData(oldp+444,(__Vtemp_hef1d2440__0),72);
        __Vtemp_h2132b98d__0[0U] = ((vlSelf->pe_top__DOT__w_rd[7U] 
                                     << 8U) | (vlSelf->pe_top__DOT__w_rd[6U] 
                                               >> 0x18U));
        __Vtemp_h2132b98d__0[1U] = ((vlSelf->pe_top__DOT__w_rd[8U] 
                                     << 8U) | (vlSelf->pe_top__DOT__w_rd[7U] 
                                               >> 0x18U));
        __Vtemp_h2132b98d__0[2U] = (vlSelf->pe_top__DOT__w_rd[8U] 
                                    >> 0x18U);
        tracep->chgWData(oldp+447,(__Vtemp_h2132b98d__0),72);
        __Vtemp_hdea3a0a9__0[0U] = vlSelf->pe_top__DOT__w_rd[9U];
        __Vtemp_hdea3a0a9__0[1U] = vlSelf->pe_top__DOT__w_rd[0xaU];
        __Vtemp_hdea3a0a9__0[2U] = (0xffU & vlSelf->pe_top__DOT__w_rd[0xbU]);
        tracep->chgWData(oldp+450,(__Vtemp_hdea3a0a9__0),72);
        __Vtemp_hf96b848c__0[0U] = ((vlSelf->pe_top__DOT__w_rd[0xcU] 
                                     << 0x18U) | (vlSelf->pe_top__DOT__w_rd[0xbU] 
                                                  >> 8U));
        __Vtemp_hf96b848c__0[1U] = ((vlSelf->pe_top__DOT__w_rd[0xdU] 
                                     << 0x18U) | (vlSelf->pe_top__DOT__w_rd[0xcU] 
                                                  >> 8U));
        __Vtemp_hf96b848c__0[2U] = (0xffU & (vlSelf->pe_top__DOT__w_rd[0xdU] 
                                             >> 8U));
        tracep->chgWData(oldp+453,(__Vtemp_hf96b848c__0),72);
        __Vtemp_h0fa9ce88__0[0U] = ((vlSelf->pe_top__DOT__w_rd[0xeU] 
                                     << 0x10U) | (vlSelf->pe_top__DOT__w_rd[0xdU] 
                                                  >> 0x10U));
        __Vtemp_h0fa9ce88__0[1U] = ((vlSelf->pe_top__DOT__w_rd[0xfU] 
                                     << 0x10U) | (vlSelf->pe_top__DOT__w_rd[0xeU] 
                                                  >> 0x10U));
        __Vtemp_h0fa9ce88__0[2U] = (0xffU & (vlSelf->pe_top__DOT__w_rd[0xfU] 
                                             >> 0x10U));
        tracep->chgWData(oldp+456,(__Vtemp_h0fa9ce88__0),72);
        __Vtemp_hc31fb041__0[0U] = ((vlSelf->pe_top__DOT__w_rd[0x10U] 
                                     << 8U) | (vlSelf->pe_top__DOT__w_rd[0xfU] 
                                               >> 0x18U));
        __Vtemp_hc31fb041__0[1U] = ((vlSelf->pe_top__DOT__w_rd[0x11U] 
                                     << 8U) | (vlSelf->pe_top__DOT__w_rd[0x10U] 
                                               >> 0x18U));
        __Vtemp_hc31fb041__0[2U] = (vlSelf->pe_top__DOT__w_rd[0x11U] 
                                    >> 0x18U);
        tracep->chgWData(oldp+459,(__Vtemp_hc31fb041__0),72);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgIData(oldp+462,(((IData)(0x2000U) 
                                    + ((IData)(9U) 
                                       * vlSelf->pe_top__DOT__pe__DOT__cnt))),32);
        tracep->chgWData(oldp+463,(vlSelf->pe_top__DOT__accumout_wr),192);
        tracep->chgIData(oldp+469,(vlSelf->pe_top__DOT__addr_wr),32);
        tracep->chgBit(oldp+470,(vlSelf->pe_top__DOT__done_PE));
        tracep->chgBit(oldp+471,(vlSelf->pe_top__DOT__mem_wr_en));
        tracep->chgIData(oldp+472,(vlSelf->pe_top__DOT__pe__DOT__cnt),24);
    }
    tracep->chgBit(oldp+473,(vlSelf->clk));
    tracep->chgBit(oldp+474,(vlSelf->pe_top__DOT__rst));
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
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
