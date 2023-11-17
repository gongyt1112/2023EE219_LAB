// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h2a35ccc6__0;
    // Body
    vlSelf->pe_top__DOT____Vxrand_hd7c275ef__80 = (0xffffffU 
                                                   & VL_RAND_RESET_I(24));
    vlSelf->pe_top__DOT____Vxrand_hd7c275ef__79 = (0xffffffU 
                                                   & VL_RAND_RESET_I(24));
    vlSelf->pe_top__DOT____Vxrand_hd7c275ef__78 = (0xffffffU 
                                                   & VL_RAND_RESET_I(24));
    vlSelf->pe_top__DOT____Vxrand_hd7c275ef__77 = (0xffffffU 
                                                   & VL_RAND_RESET_I(24));
    vlSelf->pe_top__DOT____Vxrand_hd7c275ef__76 = (0xffffffU 
                                                   & VL_RAND_RESET_I(24));
    vlSelf->pe_top__DOT____Vxrand_hd7c275ef__75 = (0xffffffU 
                                                   & VL_RAND_RESET_I(24));
    vlSelf->pe_top__DOT____Vxrand_hd7c275ef__74 = (0xffffffU 
                                                   & VL_RAND_RESET_I(24));
    vlSelf->pe_top__DOT____Vxrand_hd7c275ef__73 = (0xffffffU 
                                                   & VL_RAND_RESET_I(24));
    vlSelf->pe_top__DOT____Vxrand_hd7c275ef__72 = (0xffffffU 
                                                   & VL_RAND_RESET_I(24));
    __Vtemp_h2a35ccc6__0[0U] = 0x2e747874U;
    __Vtemp_h2a35ccc6__0[1U] = 0x696e6974U;
    __Vtemp_h2a35ccc6__0[2U] = 0x6d656d5fU;
    __Vtemp_h2a35ccc6__0[3U] = 0x6d656d2fU;
    __Vtemp_h2a35ccc6__0[4U] = 0x2e2e2fU;
    VL_READMEM_N(true, 24, 20480, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h2a35ccc6__0)
                 ,  &(vlSelf->pe_top__DOT__mem), 0, ~0ULL);
    vlSelf->pe_top__DOT__rst = 0U;
    vlSelf->pe_top__DOT__done = 0U;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__4\n"); );
    // Body
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum[vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_cnt] 
        = (0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U] 
                          + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] 
                              << 8U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U] 
                                        >> 0x18U))) 
                         + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                              << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] 
                                           >> 0x10U)) 
                            + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                << 0x18U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
                                             >> 8U)))) 
                        + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U] 
                            + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U] 
                                << 8U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U] 
                                          >> 0x18U))) 
                           + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U] 
                                             >> 0x10U)) 
                              + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                   << 0x18U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
                                                >> 8U)) 
                                 + vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[6U])))));
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum[vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_cnt] 
        = (0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U] 
                          + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] 
                              << 8U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U] 
                                        >> 0x18U))) 
                         + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                              << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] 
                                           >> 0x10U)) 
                            + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                << 0x18U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
                                             >> 8U)))) 
                        + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U] 
                            + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U] 
                                << 8U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U] 
                                          >> 0x18U))) 
                           + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U] 
                                             >> 0x10U)) 
                              + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                   << 0x18U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
                                                >> 8U)) 
                                 + vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[6U])))));
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum[vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_cnt] 
        = (0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U] 
                          + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] 
                              << 8U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U] 
                                        >> 0x18U))) 
                         + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                              << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] 
                                           >> 0x10U)) 
                            + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                << 0x18U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
                                             >> 8U)))) 
                        + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U] 
                            + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U] 
                                << 8U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U] 
                                          >> 0x18U))) 
                           + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U] 
                                             >> 0x10U)) 
                              + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                   << 0x18U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
                                                >> 8U)) 
                                 + vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[6U])))));
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum[vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_cnt] 
        = (0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U] 
                          + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] 
                              << 8U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U] 
                                        >> 0x18U))) 
                         + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                              << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] 
                                           >> 0x10U)) 
                            + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                << 0x18U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
                                             >> 8U)))) 
                        + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U] 
                            + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U] 
                                << 8U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U] 
                                          >> 0x18U))) 
                           + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U] 
                                             >> 0x10U)) 
                              + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                   << 0x18U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
                                                >> 8U)) 
                                 + vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[6U])))));
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum[vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_cnt] 
        = (0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U] 
                          + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] 
                              << 8U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U] 
                                        >> 0x18U))) 
                         + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                              << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] 
                                           >> 0x10U)) 
                            + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                << 0x18U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
                                             >> 8U)))) 
                        + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U] 
                            + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U] 
                                << 8U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U] 
                                          >> 0x18U))) 
                           + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U] 
                                             >> 0x10U)) 
                              + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                   << 0x18U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
                                                >> 8U)) 
                                 + vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[6U])))));
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum[vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_cnt] 
        = (0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U] 
                          + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] 
                              << 8U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U] 
                                        >> 0x18U))) 
                         + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                              << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] 
                                           >> 0x10U)) 
                            + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                << 0x18U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
                                             >> 8U)))) 
                        + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U] 
                            + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U] 
                                << 8U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U] 
                                          >> 0x18U))) 
                           + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U] 
                                             >> 0x10U)) 
                              + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                   << 0x18U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
                                                >> 8U)) 
                                 + vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[6U])))));
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum[vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_cnt] 
        = (0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U] 
                          + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] 
                              << 8U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U] 
                                        >> 0x18U))) 
                         + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                              << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] 
                                           >> 0x10U)) 
                            + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                << 0x18U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
                                             >> 8U)))) 
                        + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U] 
                            + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U] 
                                << 8U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U] 
                                          >> 0x18U))) 
                           + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U] 
                                             >> 0x10U)) 
                              + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                   << 0x18U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
                                                >> 8U)) 
                                 + vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[6U])))));
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum[vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_cnt] 
        = (0xffffffU & (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U] 
                          + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] 
                              << 8U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U] 
                                        >> 0x18U))) 
                         + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                              << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] 
                                           >> 0x10U)) 
                            + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                << 0x18U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
                                             >> 8U)))) 
                        + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U] 
                            + ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U] 
                                << 8U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U] 
                                          >> 0x18U))) 
                           + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                << 0x10U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U] 
                                             >> 0x10U)) 
                              + (((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                   << 0x18U) | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
                                                >> 8U)) 
                                 + vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[6U])))));
    vlSelf->pe_top__DOT__addr_wr = ((IData)(0x2ff0U) 
                                    + (vlSelf->pe_top__DOT__pe__DOT__cnt 
                                       << 3U));
    vlSelf->pe_top__DOT__accumout_wr[4U] = ((0xffffU 
                                             & vlSelf->pe_top__DOT__accumout_wr[4U]) 
                                            | ((IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum
                                                                         [0U])) 
                                                         << 0x18U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum
                                                                          [0U])))) 
                                               << 0x10U));
    vlSelf->pe_top__DOT__accumout_wr[5U] = (((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum
                                                                       [0U])) 
                                                       << 0x18U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum
                                                                        [0U])))) 
                                             >> 0x10U) 
                                            | ((IData)(
                                                       ((((QData)((IData)(
                                                                          vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum
                                                                          [0U])) 
                                                          << 0x18U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum
                                                                           [0U]))) 
                                                        >> 0x20U)) 
                                               << 0x10U));
    vlSelf->pe_top__DOT__accumout_wr[0U] = (IData)(
                                                   (((QData)((IData)(
                                                                     vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum
                                                                     [0U])) 
                                                     << 0x18U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum
                                                                      [0U]))));
    vlSelf->pe_top__DOT__accumout_wr[1U] = ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum
                                             [0U] << 0x10U) 
                                            | (IData)(
                                                      ((((QData)((IData)(
                                                                         vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum
                                                                         [0U])) 
                                                         << 0x18U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum
                                                                          [0U]))) 
                                                       >> 0x20U)));
    vlSelf->pe_top__DOT__accumout_wr[2U] = ((0xffffff00U 
                                             & vlSelf->pe_top__DOT__accumout_wr[2U]) 
                                            | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum
                                               [0U] 
                                               >> 0x10U));
    vlSelf->pe_top__DOT__accumout_wr[2U] = ((0xffU 
                                             & vlSelf->pe_top__DOT__accumout_wr[2U]) 
                                            | ((IData)(
                                                       (((QData)((IData)(
                                                                         vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum
                                                                         [0U])) 
                                                         << 0x18U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum
                                                                          [0U])))) 
                                               << 8U));
    vlSelf->pe_top__DOT__accumout_wr[3U] = (((IData)(
                                                     (((QData)((IData)(
                                                                       vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum
                                                                       [0U])) 
                                                       << 0x18U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum
                                                                        [0U])))) 
                                             >> 0x18U) 
                                            | ((vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum
                                                [0U] 
                                                << 0x18U) 
                                               | ((IData)(
                                                          ((((QData)((IData)(
                                                                             vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum
                                                                             [0U])) 
                                                             << 0x18U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum
                                                                              [0U]))) 
                                                           >> 0x20U)) 
                                                  << 8U)));
    vlSelf->pe_top__DOT__accumout_wr[4U] = ((0xffff0000U 
                                             & vlSelf->pe_top__DOT__accumout_wr[4U]) 
                                            | (((0xffU 
                                                 & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum
                                                    [0U] 
                                                    >> 8U)) 
                                                | ((IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum
                                                                              [0U])) 
                                                              << 0x18U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum
                                                                               [0U]))) 
                                                            >> 0x20U)) 
                                                   >> 0x18U)) 
                                               | (0xffff00U 
                                                  & (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum
                                                     [0U] 
                                                     >> 8U))));
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__pe_top__DOT__rst 
        = vlSelf->__VinpClk__TOP__pe_top__DOT__rst;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__4(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
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
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->pe_top__DOT____Vxrand_hd7c275ef__80 = VL_RAND_RESET_I(24);
    vlSelf->pe_top__DOT____Vxrand_hd7c275ef__79 = VL_RAND_RESET_I(24);
    vlSelf->pe_top__DOT____Vxrand_hd7c275ef__78 = VL_RAND_RESET_I(24);
    vlSelf->pe_top__DOT____Vxrand_hd7c275ef__77 = VL_RAND_RESET_I(24);
    vlSelf->pe_top__DOT____Vxrand_hd7c275ef__76 = VL_RAND_RESET_I(24);
    vlSelf->pe_top__DOT____Vxrand_hd7c275ef__75 = VL_RAND_RESET_I(24);
    vlSelf->pe_top__DOT____Vxrand_hd7c275ef__74 = VL_RAND_RESET_I(24);
    vlSelf->pe_top__DOT____Vxrand_hd7c275ef__73 = VL_RAND_RESET_I(24);
    vlSelf->pe_top__DOT____Vxrand_hd7c275ef__72 = VL_RAND_RESET_I(24);
    vlSelf->pe_top__DOT__rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(576, vlSelf->pe_top__DOT__w_rd);
    VL_RAND_RESET_W(72, vlSelf->pe_top__DOT__ia_rd);
    VL_RAND_RESET_W(192, vlSelf->pe_top__DOT__accumout_wr);
    vlSelf->pe_top__DOT__addr_wr = VL_RAND_RESET_I(32);
    vlSelf->pe_top__DOT__done_PE = VL_RAND_RESET_I(1);
    vlSelf->pe_top__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->pe_top__DOT__mem_wr_en = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<20480; ++__Vi0) {
        vlSelf->pe_top__DOT__mem[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->pe_top__DOT____Vlvbound_h5e1177fa__0 = VL_RAND_RESET_I(24);
    vlSelf->pe_top__DOT____Vlvbound_h4569e626__0 = VL_RAND_RESET_I(24);
    vlSelf->pe_top__DOT____Vlvbound_h4569f993__0 = VL_RAND_RESET_I(24);
    vlSelf->pe_top__DOT____Vlvbound_h456b05bd__0 = VL_RAND_RESET_I(24);
    vlSelf->pe_top__DOT____Vlvbound_h455cf376__0 = VL_RAND_RESET_I(24);
    vlSelf->pe_top__DOT____Vlvbound_h455d8c0b__0 = VL_RAND_RESET_I(24);
    vlSelf->pe_top__DOT____Vlvbound_h455d579e__0 = VL_RAND_RESET_I(24);
    vlSelf->pe_top__DOT____Vlvbound_h455cac82__0 = VL_RAND_RESET_I(24);
    vlSelf->pe_top__DOT__pe__DOT__cnt = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(216, vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_cnt = VL_RAND_RESET_I(3);
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(216, vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_cnt = VL_RAND_RESET_I(3);
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(216, vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_cnt = VL_RAND_RESET_I(3);
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(216, vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_cnt = VL_RAND_RESET_I(3);
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(216, vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_cnt = VL_RAND_RESET_I(3);
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(216, vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_cnt = VL_RAND_RESET_I(3);
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(216, vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_cnt = VL_RAND_RESET_I(3);
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(216, vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_cnt = VL_RAND_RESET_I(3);
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 = VL_RAND_RESET_I(24);
    vlSelf->__Vdly__pe_top__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__pe_top__DOT__pe__DOT__cnt = VL_RAND_RESET_I(24);
    vlSelf->__VinpClk__TOP__pe_top__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__pe_top__DOT__rst = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
