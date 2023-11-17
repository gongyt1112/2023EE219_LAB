// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdly__pe_top__DOT__pe__DOT__cnt = vlSelf->pe_top__DOT__pe__DOT__cnt;
    if ((1U & (~ (IData)(vlSelf->pe_top__DOT__rst)))) {
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__i = 0xaU;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__i = 0xaU;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__i = 0xaU;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__i = 0xaU;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__i = 0xaU;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__i = 0xaU;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__i = 0xaU;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__i = 0xaU;
    }
    if (vlSelf->pe_top__DOT__rst) {
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[6U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[6U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[6U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[6U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[6U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[6U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[6U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] = 0U;
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[6U] = 0U;
    } else {
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__w_rd[0xfU] 
                             >> 0x18U) * (0xffU & vlSelf->pe_top__DOT__ia_rd[0U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U] 
            = ((0xff000000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U]) 
               | vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & vlSelf->pe_top__DOT__w_rd[0x10U]) 
                            * (0xffU & (vlSelf->pe_top__DOT__ia_rd[0U] 
                                        >> 8U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U] 
            = ((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[0U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x18U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] 
            = ((0xffff0000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[0x10U] 
                                      >> 8U)) * (0xffU 
                                                 & (vlSelf->pe_top__DOT__ia_rd[0U] 
                                                    >> 0x10U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U] 
            = ((0xffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[1U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
            = ((0xffffff00U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[0x10U] 
                                      >> 0x10U)) * 
                            (vlSelf->pe_top__DOT__ia_rd[0U] 
                             >> 0x18U)));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U] 
            = ((0xffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[2U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__w_rd[0x10U] 
                             >> 0x18U) * (0xffU & vlSelf->pe_top__DOT__ia_rd[1U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U] 
            = ((0xff000000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U]) 
               | vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & vlSelf->pe_top__DOT__w_rd[0x11U]) 
                            * (0xffU & (vlSelf->pe_top__DOT__ia_rd[1U] 
                                        >> 8U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U] 
            = ((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[3U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x18U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U] 
            = ((0xffff0000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[0x11U] 
                                      >> 8U)) * (0xffU 
                                                 & (vlSelf->pe_top__DOT__ia_rd[1U] 
                                                    >> 0x10U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U] 
            = ((0xffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[4U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
            = ((0xffffff00U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[0x11U] 
                                      >> 0x10U)) * 
                            (vlSelf->pe_top__DOT__ia_rd[1U] 
                             >> 0x18U)));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U] 
            = ((0xffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[5U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__w_rd[0x11U] 
                             >> 0x18U) * (0xffU & vlSelf->pe_top__DOT__ia_rd[2U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul[6U] 
            = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[0xdU] 
                                      >> 0x10U)) * 
                            (0xffU & vlSelf->pe_top__DOT__ia_rd[0U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U] 
            = ((0xff000000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U]) 
               | vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__w_rd[0xdU] 
                             >> 0x18U) * (0xffU & (
                                                   vlSelf->pe_top__DOT__ia_rd[0U] 
                                                   >> 8U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U] 
            = ((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[0U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x18U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] 
            = ((0xffff0000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & vlSelf->pe_top__DOT__w_rd[0xeU]) 
                            * (0xffU & (vlSelf->pe_top__DOT__ia_rd[0U] 
                                        >> 0x10U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U] 
            = ((0xffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[1U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
            = ((0xffffff00U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[0xeU] 
                                      >> 8U)) * (vlSelf->pe_top__DOT__ia_rd[0U] 
                                                 >> 0x18U)));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U] 
            = ((0xffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[2U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[0xeU] 
                                      >> 0x10U)) * 
                            (0xffU & vlSelf->pe_top__DOT__ia_rd[1U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U] 
            = ((0xff000000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U]) 
               | vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__w_rd[0xeU] 
                             >> 0x18U) * (0xffU & (
                                                   vlSelf->pe_top__DOT__ia_rd[1U] 
                                                   >> 8U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U] 
            = ((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[3U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x18U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U] 
            = ((0xffff0000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & vlSelf->pe_top__DOT__w_rd[0xfU]) 
                            * (0xffU & (vlSelf->pe_top__DOT__ia_rd[1U] 
                                        >> 0x10U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U] 
            = ((0xffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[4U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
            = ((0xffffff00U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[0xfU] 
                                      >> 8U)) * (vlSelf->pe_top__DOT__ia_rd[1U] 
                                                 >> 0x18U)));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U] 
            = ((0xffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[5U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[0xfU] 
                                      >> 0x10U)) * 
                            (0xffU & vlSelf->pe_top__DOT__ia_rd[2U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul[6U] 
            = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[0xbU] 
                                      >> 8U)) * (0xffU 
                                                 & vlSelf->pe_top__DOT__ia_rd[0U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U] 
            = ((0xff000000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U]) 
               | vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[0xbU] 
                                      >> 0x10U)) * 
                            (0xffU & (vlSelf->pe_top__DOT__ia_rd[0U] 
                                      >> 8U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U] 
            = ((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[0U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x18U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] 
            = ((0xffff0000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__w_rd[0xbU] 
                             >> 0x18U) * (0xffU & (
                                                   vlSelf->pe_top__DOT__ia_rd[0U] 
                                                   >> 0x10U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U] 
            = ((0xffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[1U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
            = ((0xffffff00U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & vlSelf->pe_top__DOT__w_rd[0xcU]) 
                            * (vlSelf->pe_top__DOT__ia_rd[0U] 
                               >> 0x18U)));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U] 
            = ((0xffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[2U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[0xcU] 
                                      >> 8U)) * (0xffU 
                                                 & vlSelf->pe_top__DOT__ia_rd[1U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U] 
            = ((0xff000000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U]) 
               | vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[0xcU] 
                                      >> 0x10U)) * 
                            (0xffU & (vlSelf->pe_top__DOT__ia_rd[1U] 
                                      >> 8U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U] 
            = ((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[3U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x18U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U] 
            = ((0xffff0000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__w_rd[0xcU] 
                             >> 0x18U) * (0xffU & (
                                                   vlSelf->pe_top__DOT__ia_rd[1U] 
                                                   >> 0x10U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U] 
            = ((0xffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[4U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
            = ((0xffffff00U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & vlSelf->pe_top__DOT__w_rd[0xdU]) 
                            * (vlSelf->pe_top__DOT__ia_rd[1U] 
                               >> 0x18U)));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U] 
            = ((0xffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[5U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[0xdU] 
                                      >> 8U)) * (0xffU 
                                                 & vlSelf->pe_top__DOT__ia_rd[2U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul[6U] 
            = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & vlSelf->pe_top__DOT__w_rd[9U]) 
                            * (0xffU & vlSelf->pe_top__DOT__ia_rd[0U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U] 
            = ((0xff000000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U]) 
               | vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[9U] 
                                      >> 8U)) * (0xffU 
                                                 & (vlSelf->pe_top__DOT__ia_rd[0U] 
                                                    >> 8U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U] 
            = ((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[0U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x18U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] 
            = ((0xffff0000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[9U] 
                                      >> 0x10U)) * 
                            (0xffU & (vlSelf->pe_top__DOT__ia_rd[0U] 
                                      >> 0x10U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U] 
            = ((0xffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[1U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
            = ((0xffffff00U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__w_rd[9U] 
                             >> 0x18U) * (vlSelf->pe_top__DOT__ia_rd[0U] 
                                          >> 0x18U)));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U] 
            = ((0xffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[2U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & vlSelf->pe_top__DOT__w_rd[0xaU]) 
                            * (0xffU & vlSelf->pe_top__DOT__ia_rd[1U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U] 
            = ((0xff000000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U]) 
               | vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[0xaU] 
                                      >> 8U)) * (0xffU 
                                                 & (vlSelf->pe_top__DOT__ia_rd[1U] 
                                                    >> 8U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U] 
            = ((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[3U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x18U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U] 
            = ((0xffff0000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[0xaU] 
                                      >> 0x10U)) * 
                            (0xffU & (vlSelf->pe_top__DOT__ia_rd[1U] 
                                      >> 0x10U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U] 
            = ((0xffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[4U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
            = ((0xffffff00U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__w_rd[0xaU] 
                             >> 0x18U) * (vlSelf->pe_top__DOT__ia_rd[1U] 
                                          >> 0x18U)));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U] 
            = ((0xffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[5U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & vlSelf->pe_top__DOT__w_rd[0xbU]) 
                            * (0xffU & vlSelf->pe_top__DOT__ia_rd[2U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul[6U] 
            = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__w_rd[6U] 
                             >> 0x18U) * (0xffU & vlSelf->pe_top__DOT__ia_rd[0U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U] 
            = ((0xff000000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U]) 
               | vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & vlSelf->pe_top__DOT__w_rd[7U]) 
                            * (0xffU & (vlSelf->pe_top__DOT__ia_rd[0U] 
                                        >> 8U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U] 
            = ((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[0U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x18U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] 
            = ((0xffff0000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[7U] 
                                      >> 8U)) * (0xffU 
                                                 & (vlSelf->pe_top__DOT__ia_rd[0U] 
                                                    >> 0x10U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U] 
            = ((0xffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[1U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
            = ((0xffffff00U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[7U] 
                                      >> 0x10U)) * 
                            (vlSelf->pe_top__DOT__ia_rd[0U] 
                             >> 0x18U)));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U] 
            = ((0xffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[2U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__w_rd[7U] 
                             >> 0x18U) * (0xffU & vlSelf->pe_top__DOT__ia_rd[1U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U] 
            = ((0xff000000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U]) 
               | vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & vlSelf->pe_top__DOT__w_rd[8U]) 
                            * (0xffU & (vlSelf->pe_top__DOT__ia_rd[1U] 
                                        >> 8U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U] 
            = ((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[3U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x18U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U] 
            = ((0xffff0000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[8U] 
                                      >> 8U)) * (0xffU 
                                                 & (vlSelf->pe_top__DOT__ia_rd[1U] 
                                                    >> 0x10U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U] 
            = ((0xffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[4U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
            = ((0xffffff00U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[8U] 
                                      >> 0x10U)) * 
                            (vlSelf->pe_top__DOT__ia_rd[1U] 
                             >> 0x18U)));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U] 
            = ((0xffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[5U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__w_rd[8U] 
                             >> 0x18U) * (0xffU & vlSelf->pe_top__DOT__ia_rd[2U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul[6U] 
            = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[4U] 
                                      >> 0x10U)) * 
                            (0xffU & vlSelf->pe_top__DOT__ia_rd[0U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U] 
            = ((0xff000000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U]) 
               | vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__w_rd[4U] 
                             >> 0x18U) * (0xffU & (
                                                   vlSelf->pe_top__DOT__ia_rd[0U] 
                                                   >> 8U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U] 
            = ((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[0U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x18U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] 
            = ((0xffff0000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & vlSelf->pe_top__DOT__w_rd[5U]) 
                            * (0xffU & (vlSelf->pe_top__DOT__ia_rd[0U] 
                                        >> 0x10U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U] 
            = ((0xffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[1U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
            = ((0xffffff00U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[5U] 
                                      >> 8U)) * (vlSelf->pe_top__DOT__ia_rd[0U] 
                                                 >> 0x18U)));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U] 
            = ((0xffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[2U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[5U] 
                                      >> 0x10U)) * 
                            (0xffU & vlSelf->pe_top__DOT__ia_rd[1U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U] 
            = ((0xff000000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U]) 
               | vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__w_rd[5U] 
                             >> 0x18U) * (0xffU & (
                                                   vlSelf->pe_top__DOT__ia_rd[1U] 
                                                   >> 8U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U] 
            = ((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[3U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x18U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U] 
            = ((0xffff0000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & vlSelf->pe_top__DOT__w_rd[6U]) 
                            * (0xffU & (vlSelf->pe_top__DOT__ia_rd[1U] 
                                        >> 0x10U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U] 
            = ((0xffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[4U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
            = ((0xffffff00U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[6U] 
                                      >> 8U)) * (vlSelf->pe_top__DOT__ia_rd[1U] 
                                                 >> 0x18U)));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U] 
            = ((0xffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[5U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[6U] 
                                      >> 0x10U)) * 
                            (0xffU & vlSelf->pe_top__DOT__ia_rd[2U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul[6U] 
            = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[2U] 
                                      >> 8U)) * (0xffU 
                                                 & vlSelf->pe_top__DOT__ia_rd[0U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U] 
            = ((0xff000000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U]) 
               | vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[2U] 
                                      >> 0x10U)) * 
                            (0xffU & (vlSelf->pe_top__DOT__ia_rd[0U] 
                                      >> 8U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U] 
            = ((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[0U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x18U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] 
            = ((0xffff0000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__w_rd[2U] 
                             >> 0x18U) * (0xffU & (
                                                   vlSelf->pe_top__DOT__ia_rd[0U] 
                                                   >> 0x10U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U] 
            = ((0xffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[1U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
            = ((0xffffff00U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & vlSelf->pe_top__DOT__w_rd[3U]) 
                            * (vlSelf->pe_top__DOT__ia_rd[0U] 
                               >> 0x18U)));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U] 
            = ((0xffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[2U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[3U] 
                                      >> 8U)) * (0xffU 
                                                 & vlSelf->pe_top__DOT__ia_rd[1U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U] 
            = ((0xff000000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U]) 
               | vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[3U] 
                                      >> 0x10U)) * 
                            (0xffU & (vlSelf->pe_top__DOT__ia_rd[1U] 
                                      >> 8U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U] 
            = ((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[3U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x18U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U] 
            = ((0xffff0000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__w_rd[3U] 
                             >> 0x18U) * (0xffU & (
                                                   vlSelf->pe_top__DOT__ia_rd[1U] 
                                                   >> 0x10U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U] 
            = ((0xffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[4U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
            = ((0xffffff00U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & vlSelf->pe_top__DOT__w_rd[4U]) 
                            * (vlSelf->pe_top__DOT__ia_rd[1U] 
                               >> 0x18U)));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U] 
            = ((0xffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[5U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[4U] 
                                      >> 8U)) * (0xffU 
                                                 & vlSelf->pe_top__DOT__ia_rd[2U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul[6U] 
            = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & vlSelf->pe_top__DOT__w_rd[0U]) 
                            * (0xffU & vlSelf->pe_top__DOT__ia_rd[0U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U] 
            = ((0xff000000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U]) 
               | vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[0U] 
                                      >> 8U)) * (0xffU 
                                                 & (vlSelf->pe_top__DOT__ia_rd[0U] 
                                                    >> 8U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U] 
            = ((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[0U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x18U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] 
            = ((0xffff0000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[0U] 
                                      >> 0x10U)) * 
                            (0xffU & (vlSelf->pe_top__DOT__ia_rd[0U] 
                                      >> 0x10U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U] 
            = ((0xffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[1U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
            = ((0xffffff00U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__w_rd[0U] 
                             >> 0x18U) * (vlSelf->pe_top__DOT__ia_rd[0U] 
                                          >> 0x18U)));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U] 
            = ((0xffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[2U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & vlSelf->pe_top__DOT__w_rd[1U]) 
                            * (0xffU & vlSelf->pe_top__DOT__ia_rd[1U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U] 
            = ((0xff000000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U]) 
               | vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[1U] 
                                      >> 8U)) * (0xffU 
                                                 & (vlSelf->pe_top__DOT__ia_rd[1U] 
                                                    >> 8U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U] 
            = ((0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[3U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x18U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U] 
            = ((0xffff0000U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & (vlSelf->pe_top__DOT__w_rd[1U] 
                                      >> 0x10U)) * 
                            (0xffU & (vlSelf->pe_top__DOT__ia_rd[1U] 
                                      >> 0x10U))));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U] 
            = ((0xffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[4U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
            = ((0xffffff00U & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  >> 0x10U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__w_rd[1U] 
                             >> 0x18U) * (vlSelf->pe_top__DOT__ia_rd[1U] 
                                          >> 0x18U)));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U] 
            = ((0xffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[5U]) 
               | (vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
                  << 8U));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0 
            = (0xffffffU & ((0xffU & vlSelf->pe_top__DOT__w_rd[2U]) 
                            * (0xffU & vlSelf->pe_top__DOT__ia_rd[2U])));
        vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul[6U] 
            = (0xffffffU & vlSelf->pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0);
    }
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
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__3\n"); );
    // Init
    SData/*14:0*/ __Vdlyvdim0__pe_top__DOT__mem__v0;
    IData/*23:0*/ __Vdlyvval__pe_top__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__pe_top__DOT__mem__v0;
    SData/*14:0*/ __Vdlyvdim0__pe_top__DOT__mem__v1;
    IData/*23:0*/ __Vdlyvval__pe_top__DOT__mem__v1;
    CData/*0:0*/ __Vdlyvset__pe_top__DOT__mem__v1;
    SData/*14:0*/ __Vdlyvdim0__pe_top__DOT__mem__v2;
    IData/*23:0*/ __Vdlyvval__pe_top__DOT__mem__v2;
    CData/*0:0*/ __Vdlyvset__pe_top__DOT__mem__v2;
    SData/*14:0*/ __Vdlyvdim0__pe_top__DOT__mem__v3;
    IData/*23:0*/ __Vdlyvval__pe_top__DOT__mem__v3;
    CData/*0:0*/ __Vdlyvset__pe_top__DOT__mem__v3;
    SData/*14:0*/ __Vdlyvdim0__pe_top__DOT__mem__v4;
    IData/*23:0*/ __Vdlyvval__pe_top__DOT__mem__v4;
    CData/*0:0*/ __Vdlyvset__pe_top__DOT__mem__v4;
    SData/*14:0*/ __Vdlyvdim0__pe_top__DOT__mem__v5;
    IData/*23:0*/ __Vdlyvval__pe_top__DOT__mem__v5;
    CData/*0:0*/ __Vdlyvset__pe_top__DOT__mem__v5;
    SData/*14:0*/ __Vdlyvdim0__pe_top__DOT__mem__v6;
    IData/*23:0*/ __Vdlyvval__pe_top__DOT__mem__v6;
    CData/*0:0*/ __Vdlyvset__pe_top__DOT__mem__v6;
    SData/*14:0*/ __Vdlyvdim0__pe_top__DOT__mem__v7;
    IData/*23:0*/ __Vdlyvval__pe_top__DOT__mem__v7;
    CData/*0:0*/ __Vdlyvset__pe_top__DOT__mem__v7;
    CData/*0:0*/ __Vdly__pe_top__DOT__done;
    VlWide<5>/*159:0*/ __Vtemp_h41492712__0;
    // Body
    vlSelf->__Vdly__pe_top__DOT__rst = vlSelf->pe_top__DOT__rst;
    __Vdly__pe_top__DOT__done = vlSelf->pe_top__DOT__done;
    __Vdlyvset__pe_top__DOT__mem__v0 = 0U;
    __Vdlyvset__pe_top__DOT__mem__v1 = 0U;
    __Vdlyvset__pe_top__DOT__mem__v2 = 0U;
    __Vdlyvset__pe_top__DOT__mem__v3 = 0U;
    __Vdlyvset__pe_top__DOT__mem__v4 = 0U;
    __Vdlyvset__pe_top__DOT__mem__v5 = 0U;
    __Vdlyvset__pe_top__DOT__mem__v6 = 0U;
    __Vdlyvset__pe_top__DOT__mem__v7 = 0U;
    if (VL_UNLIKELY(vlSelf->pe_top__DOT__done_PE)) {
        __Vtemp_h41492712__0[0U] = 0x2e747874U;
        __Vtemp_h41492712__0[1U] = 0x5f6f7574U;
        __Vtemp_h41492712__0[2U] = 0x2f6d656dU;
        __Vtemp_h41492712__0[3U] = 0x2f6d656dU;
        __Vtemp_h41492712__0[4U] = 0x2e2eU;
        VL_WRITEMEM_N(true, 24, 20480, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h41492712__0)
                      ,  &(vlSelf->pe_top__DOT__mem)
                      , 0, ~0ULL);
        __Vdly__pe_top__DOT__done = 1U;
        vlSelf->__Vdly__pe_top__DOT__rst = 1U;
    } else if (vlSelf->pe_top__DOT__done) {
        vlSelf->__Vdly__pe_top__DOT__rst = 1U;
        __Vdly__pe_top__DOT__done = 1U;
    } else {
        vlSelf->__Vdly__pe_top__DOT__rst = 0U;
    }
    vlSelf->pe_top__DOT__ia_rd[0U] = ((0xffffff00U 
                                       & vlSelf->pe_top__DOT__ia_rd[0U]) 
                                      | (0xffU & ((0x4fffU 
                                                   >= 
                                                   (0x7fffU 
                                                    & ((IData)(0x2000U) 
                                                       + 
                                                       ((IData)(9U) 
                                                        * vlSelf->pe_top__DOT__pe__DOT__cnt))))
                                                   ? 
                                                  vlSelf->pe_top__DOT__mem
                                                  [
                                                  (0x7fffU 
                                                   & ((IData)(0x2000U) 
                                                      + 
                                                      ((IData)(9U) 
                                                       * vlSelf->pe_top__DOT__pe__DOT__cnt)))]
                                                   : vlSelf->pe_top__DOT____Vxrand_hd7c275ef__72)));
    vlSelf->pe_top__DOT__ia_rd[0U] = ((0xffff00ffU 
                                       & vlSelf->pe_top__DOT__ia_rd[0U]) 
                                      | (0xff00U & 
                                         (((0x4fffU 
                                            >= (0x7fffU 
                                                & ((IData)(0x2001U) 
                                                   + 
                                                   ((IData)(9U) 
                                                    * vlSelf->pe_top__DOT__pe__DOT__cnt))))
                                            ? vlSelf->pe_top__DOT__mem
                                           [(0x7fffU 
                                             & ((IData)(0x2001U) 
                                                + ((IData)(9U) 
                                                   * vlSelf->pe_top__DOT__pe__DOT__cnt)))]
                                            : vlSelf->pe_top__DOT____Vxrand_hd7c275ef__73) 
                                          << 8U)));
    vlSelf->pe_top__DOT__ia_rd[0U] = ((0xff00ffffU 
                                       & vlSelf->pe_top__DOT__ia_rd[0U]) 
                                      | (0xff0000U 
                                         & (((0x4fffU 
                                              >= (0x7fffU 
                                                  & ((IData)(0x2002U) 
                                                     + 
                                                     ((IData)(9U) 
                                                      * vlSelf->pe_top__DOT__pe__DOT__cnt))))
                                              ? vlSelf->pe_top__DOT__mem
                                             [(0x7fffU 
                                               & ((IData)(0x2002U) 
                                                  + 
                                                  ((IData)(9U) 
                                                   * vlSelf->pe_top__DOT__pe__DOT__cnt)))]
                                              : vlSelf->pe_top__DOT____Vxrand_hd7c275ef__74) 
                                            << 0x10U)));
    vlSelf->pe_top__DOT__ia_rd[0U] = ((0xffffffU & 
                                       vlSelf->pe_top__DOT__ia_rd[0U]) 
                                      | (((0x4fffU 
                                           >= (0x7fffU 
                                               & ((IData)(0x2003U) 
                                                  + 
                                                  ((IData)(9U) 
                                                   * vlSelf->pe_top__DOT__pe__DOT__cnt))))
                                           ? vlSelf->pe_top__DOT__mem
                                          [(0x7fffU 
                                            & ((IData)(0x2003U) 
                                               + ((IData)(9U) 
                                                  * vlSelf->pe_top__DOT__pe__DOT__cnt)))]
                                           : vlSelf->pe_top__DOT____Vxrand_hd7c275ef__75) 
                                         << 0x18U));
    vlSelf->pe_top__DOT__ia_rd[1U] = ((0xffffff00U 
                                       & vlSelf->pe_top__DOT__ia_rd[1U]) 
                                      | (0xffU & ((0x4fffU 
                                                   >= 
                                                   (0x7fffU 
                                                    & ((IData)(0x2004U) 
                                                       + 
                                                       ((IData)(9U) 
                                                        * vlSelf->pe_top__DOT__pe__DOT__cnt))))
                                                   ? 
                                                  vlSelf->pe_top__DOT__mem
                                                  [
                                                  (0x7fffU 
                                                   & ((IData)(0x2004U) 
                                                      + 
                                                      ((IData)(9U) 
                                                       * vlSelf->pe_top__DOT__pe__DOT__cnt)))]
                                                   : vlSelf->pe_top__DOT____Vxrand_hd7c275ef__76)));
    vlSelf->pe_top__DOT__ia_rd[1U] = ((0xffff00ffU 
                                       & vlSelf->pe_top__DOT__ia_rd[1U]) 
                                      | (0xff00U & 
                                         (((0x4fffU 
                                            >= (0x7fffU 
                                                & ((IData)(0x2005U) 
                                                   + 
                                                   ((IData)(9U) 
                                                    * vlSelf->pe_top__DOT__pe__DOT__cnt))))
                                            ? vlSelf->pe_top__DOT__mem
                                           [(0x7fffU 
                                             & ((IData)(0x2005U) 
                                                + ((IData)(9U) 
                                                   * vlSelf->pe_top__DOT__pe__DOT__cnt)))]
                                            : vlSelf->pe_top__DOT____Vxrand_hd7c275ef__77) 
                                          << 8U)));
    vlSelf->pe_top__DOT__ia_rd[1U] = ((0xff00ffffU 
                                       & vlSelf->pe_top__DOT__ia_rd[1U]) 
                                      | (0xff0000U 
                                         & (((0x4fffU 
                                              >= (0x7fffU 
                                                  & ((IData)(0x2006U) 
                                                     + 
                                                     ((IData)(9U) 
                                                      * vlSelf->pe_top__DOT__pe__DOT__cnt))))
                                              ? vlSelf->pe_top__DOT__mem
                                             [(0x7fffU 
                                               & ((IData)(0x2006U) 
                                                  + 
                                                  ((IData)(9U) 
                                                   * vlSelf->pe_top__DOT__pe__DOT__cnt)))]
                                              : vlSelf->pe_top__DOT____Vxrand_hd7c275ef__78) 
                                            << 0x10U)));
    vlSelf->pe_top__DOT__ia_rd[1U] = ((0xffffffU & 
                                       vlSelf->pe_top__DOT__ia_rd[1U]) 
                                      | (((0x4fffU 
                                           >= (0x7fffU 
                                               & ((IData)(0x2007U) 
                                                  + 
                                                  ((IData)(9U) 
                                                   * vlSelf->pe_top__DOT__pe__DOT__cnt))))
                                           ? vlSelf->pe_top__DOT__mem
                                          [(0x7fffU 
                                            & ((IData)(0x2007U) 
                                               + ((IData)(9U) 
                                                  * vlSelf->pe_top__DOT__pe__DOT__cnt)))]
                                           : vlSelf->pe_top__DOT____Vxrand_hd7c275ef__79) 
                                         << 0x18U));
    vlSelf->pe_top__DOT__ia_rd[2U] = (0xffU & ((0x4fffU 
                                                >= 
                                                (0x7fffU 
                                                 & ((IData)(0x2008U) 
                                                    + 
                                                    ((IData)(9U) 
                                                     * vlSelf->pe_top__DOT__pe__DOT__cnt))))
                                                ? vlSelf->pe_top__DOT__mem
                                               [(0x7fffU 
                                                 & ((IData)(0x2008U) 
                                                    + 
                                                    ((IData)(9U) 
                                                     * vlSelf->pe_top__DOT__pe__DOT__cnt)))]
                                                : vlSelf->pe_top__DOT____Vxrand_hd7c275ef__80));
    if (vlSelf->pe_top__DOT__mem_wr_en) {
        vlSelf->pe_top__DOT____Vlvbound_h5e1177fa__0 
            = (0xffffffU & vlSelf->pe_top__DOT__accumout_wr[0U]);
        if ((0x4fffU >= (0x7fffU & vlSelf->pe_top__DOT__addr_wr))) {
            __Vdlyvval__pe_top__DOT__mem__v0 = vlSelf->pe_top__DOT____Vlvbound_h5e1177fa__0;
            __Vdlyvset__pe_top__DOT__mem__v0 = 1U;
            __Vdlyvdim0__pe_top__DOT__mem__v0 = (0x7fffU 
                                                 & vlSelf->pe_top__DOT__addr_wr);
        }
        vlSelf->pe_top__DOT____Vlvbound_h4569e626__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__accumout_wr[1U] 
                             << 8U) | (vlSelf->pe_top__DOT__accumout_wr[0U] 
                                       >> 0x18U)));
        if ((0x4fffU >= (0x7fffU & ((IData)(1U) + vlSelf->pe_top__DOT__addr_wr)))) {
            __Vdlyvval__pe_top__DOT__mem__v1 = vlSelf->pe_top__DOT____Vlvbound_h4569e626__0;
            __Vdlyvset__pe_top__DOT__mem__v1 = 1U;
            __Vdlyvdim0__pe_top__DOT__mem__v1 = (0x7fffU 
                                                 & ((IData)(1U) 
                                                    + vlSelf->pe_top__DOT__addr_wr));
        }
        vlSelf->pe_top__DOT____Vlvbound_h4569f993__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__accumout_wr[2U] 
                             << 0x10U) | (vlSelf->pe_top__DOT__accumout_wr[1U] 
                                          >> 0x10U)));
        if ((0x4fffU >= (0x7fffU & ((IData)(2U) + vlSelf->pe_top__DOT__addr_wr)))) {
            __Vdlyvval__pe_top__DOT__mem__v2 = vlSelf->pe_top__DOT____Vlvbound_h4569f993__0;
            __Vdlyvset__pe_top__DOT__mem__v2 = 1U;
            __Vdlyvdim0__pe_top__DOT__mem__v2 = (0x7fffU 
                                                 & ((IData)(2U) 
                                                    + vlSelf->pe_top__DOT__addr_wr));
        }
        vlSelf->pe_top__DOT____Vlvbound_h456b05bd__0 
            = (vlSelf->pe_top__DOT__accumout_wr[2U] 
               >> 8U);
        if ((0x4fffU >= (0x7fffU & ((IData)(3U) + vlSelf->pe_top__DOT__addr_wr)))) {
            __Vdlyvval__pe_top__DOT__mem__v3 = vlSelf->pe_top__DOT____Vlvbound_h456b05bd__0;
            __Vdlyvset__pe_top__DOT__mem__v3 = 1U;
            __Vdlyvdim0__pe_top__DOT__mem__v3 = (0x7fffU 
                                                 & ((IData)(3U) 
                                                    + vlSelf->pe_top__DOT__addr_wr));
        }
        vlSelf->pe_top__DOT____Vlvbound_h455cf376__0 
            = (0xffffffU & vlSelf->pe_top__DOT__accumout_wr[3U]);
        if ((0x4fffU >= (0x7fffU & ((IData)(4U) + vlSelf->pe_top__DOT__addr_wr)))) {
            __Vdlyvval__pe_top__DOT__mem__v4 = vlSelf->pe_top__DOT____Vlvbound_h455cf376__0;
            __Vdlyvset__pe_top__DOT__mem__v4 = 1U;
            __Vdlyvdim0__pe_top__DOT__mem__v4 = (0x7fffU 
                                                 & ((IData)(4U) 
                                                    + vlSelf->pe_top__DOT__addr_wr));
        }
        vlSelf->pe_top__DOT____Vlvbound_h455d8c0b__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__accumout_wr[4U] 
                             << 8U) | (vlSelf->pe_top__DOT__accumout_wr[3U] 
                                       >> 0x18U)));
        if ((0x4fffU >= (0x7fffU & ((IData)(5U) + vlSelf->pe_top__DOT__addr_wr)))) {
            __Vdlyvval__pe_top__DOT__mem__v5 = vlSelf->pe_top__DOT____Vlvbound_h455d8c0b__0;
            __Vdlyvset__pe_top__DOT__mem__v5 = 1U;
            __Vdlyvdim0__pe_top__DOT__mem__v5 = (0x7fffU 
                                                 & ((IData)(5U) 
                                                    + vlSelf->pe_top__DOT__addr_wr));
        }
        vlSelf->pe_top__DOT____Vlvbound_h455d579e__0 
            = (0xffffffU & ((vlSelf->pe_top__DOT__accumout_wr[5U] 
                             << 0x10U) | (vlSelf->pe_top__DOT__accumout_wr[4U] 
                                          >> 0x10U)));
        if ((0x4fffU >= (0x7fffU & ((IData)(6U) + vlSelf->pe_top__DOT__addr_wr)))) {
            __Vdlyvval__pe_top__DOT__mem__v6 = vlSelf->pe_top__DOT____Vlvbound_h455d579e__0;
            __Vdlyvset__pe_top__DOT__mem__v6 = 1U;
            __Vdlyvdim0__pe_top__DOT__mem__v6 = (0x7fffU 
                                                 & ((IData)(6U) 
                                                    + vlSelf->pe_top__DOT__addr_wr));
        }
        vlSelf->pe_top__DOT____Vlvbound_h455cac82__0 
            = (vlSelf->pe_top__DOT__accumout_wr[5U] 
               >> 8U);
        if ((0x4fffU >= (0x7fffU & ((IData)(7U) + vlSelf->pe_top__DOT__addr_wr)))) {
            __Vdlyvval__pe_top__DOT__mem__v7 = vlSelf->pe_top__DOT____Vlvbound_h455cac82__0;
            __Vdlyvset__pe_top__DOT__mem__v7 = 1U;
            __Vdlyvdim0__pe_top__DOT__mem__v7 = (0x7fffU 
                                                 & ((IData)(7U) 
                                                    + vlSelf->pe_top__DOT__addr_wr));
        }
    }
    vlSelf->pe_top__DOT__w_rd[0U] = ((0xffff0000U & 
                                      vlSelf->pe_top__DOT__w_rd[0U]) 
                                     | ((0xff00U & 
                                         (vlSelf->pe_top__DOT__mem
                                          [0x1001U] 
                                          << 8U)) | 
                                        (0xffU & vlSelf->pe_top__DOT__mem
                                         [0x1000U])));
    vlSelf->pe_top__DOT__w_rd[0U] = ((0xffffU & vlSelf->pe_top__DOT__w_rd[0U]) 
                                     | (0xffff0000U 
                                        & ((vlSelf->pe_top__DOT__mem
                                            [0x1003U] 
                                            << 0x18U) 
                                           | (0xff0000U 
                                              & (vlSelf->pe_top__DOT__mem
                                                 [0x1002U] 
                                                 << 0x10U)))));
    vlSelf->pe_top__DOT__w_rd[1U] = ((0xffff0000U & 
                                      vlSelf->pe_top__DOT__w_rd[1U]) 
                                     | ((0xff00U & 
                                         (vlSelf->pe_top__DOT__mem
                                          [0x1005U] 
                                          << 8U)) | 
                                        (0xffU & vlSelf->pe_top__DOT__mem
                                         [0x1004U])));
    vlSelf->pe_top__DOT__w_rd[1U] = ((0xffffU & vlSelf->pe_top__DOT__w_rd[1U]) 
                                     | (0xffff0000U 
                                        & ((vlSelf->pe_top__DOT__mem
                                            [0x1007U] 
                                            << 0x18U) 
                                           | (0xff0000U 
                                              & (vlSelf->pe_top__DOT__mem
                                                 [0x1006U] 
                                                 << 0x10U)))));
    vlSelf->pe_top__DOT__w_rd[2U] = ((0xffff0000U & 
                                      vlSelf->pe_top__DOT__w_rd[2U]) 
                                     | ((0xff00U & 
                                         (vlSelf->pe_top__DOT__mem
                                          [0x1009U] 
                                          << 8U)) | 
                                        (0xffU & vlSelf->pe_top__DOT__mem
                                         [0x1008U])));
    vlSelf->pe_top__DOT__w_rd[2U] = ((0xffffU & vlSelf->pe_top__DOT__w_rd[2U]) 
                                     | (0xffff0000U 
                                        & ((vlSelf->pe_top__DOT__mem
                                            [0x100bU] 
                                            << 0x18U) 
                                           | (0xff0000U 
                                              & (vlSelf->pe_top__DOT__mem
                                                 [0x100aU] 
                                                 << 0x10U)))));
    vlSelf->pe_top__DOT__w_rd[3U] = ((0xffff0000U & 
                                      vlSelf->pe_top__DOT__w_rd[3U]) 
                                     | ((0xff00U & 
                                         (vlSelf->pe_top__DOT__mem
                                          [0x100dU] 
                                          << 8U)) | 
                                        (0xffU & vlSelf->pe_top__DOT__mem
                                         [0x100cU])));
    vlSelf->pe_top__DOT__w_rd[3U] = ((0xffffU & vlSelf->pe_top__DOT__w_rd[3U]) 
                                     | (0xffff0000U 
                                        & ((vlSelf->pe_top__DOT__mem
                                            [0x100fU] 
                                            << 0x18U) 
                                           | (0xff0000U 
                                              & (vlSelf->pe_top__DOT__mem
                                                 [0x100eU] 
                                                 << 0x10U)))));
    vlSelf->pe_top__DOT__w_rd[4U] = ((0xffff0000U & 
                                      vlSelf->pe_top__DOT__w_rd[4U]) 
                                     | ((0xff00U & 
                                         (vlSelf->pe_top__DOT__mem
                                          [0x1011U] 
                                          << 8U)) | 
                                        (0xffU & vlSelf->pe_top__DOT__mem
                                         [0x1010U])));
    vlSelf->pe_top__DOT__w_rd[4U] = ((0xffffU & vlSelf->pe_top__DOT__w_rd[4U]) 
                                     | (0xffff0000U 
                                        & ((vlSelf->pe_top__DOT__mem
                                            [0x1013U] 
                                            << 0x18U) 
                                           | (0xff0000U 
                                              & (vlSelf->pe_top__DOT__mem
                                                 [0x1012U] 
                                                 << 0x10U)))));
    vlSelf->pe_top__DOT__w_rd[5U] = ((0xffff0000U & 
                                      vlSelf->pe_top__DOT__w_rd[5U]) 
                                     | ((0xff00U & 
                                         (vlSelf->pe_top__DOT__mem
                                          [0x1015U] 
                                          << 8U)) | 
                                        (0xffU & vlSelf->pe_top__DOT__mem
                                         [0x1014U])));
    vlSelf->pe_top__DOT__w_rd[5U] = ((0xffffU & vlSelf->pe_top__DOT__w_rd[5U]) 
                                     | (0xffff0000U 
                                        & ((vlSelf->pe_top__DOT__mem
                                            [0x1017U] 
                                            << 0x18U) 
                                           | (0xff0000U 
                                              & (vlSelf->pe_top__DOT__mem
                                                 [0x1016U] 
                                                 << 0x10U)))));
    vlSelf->pe_top__DOT__w_rd[6U] = ((0xffff0000U & 
                                      vlSelf->pe_top__DOT__w_rd[6U]) 
                                     | ((0xff00U & 
                                         (vlSelf->pe_top__DOT__mem
                                          [0x1019U] 
                                          << 8U)) | 
                                        (0xffU & vlSelf->pe_top__DOT__mem
                                         [0x1018U])));
    vlSelf->pe_top__DOT__w_rd[6U] = ((0xffffU & vlSelf->pe_top__DOT__w_rd[6U]) 
                                     | (0xffff0000U 
                                        & ((vlSelf->pe_top__DOT__mem
                                            [0x101bU] 
                                            << 0x18U) 
                                           | (0xff0000U 
                                              & (vlSelf->pe_top__DOT__mem
                                                 [0x101aU] 
                                                 << 0x10U)))));
    vlSelf->pe_top__DOT__w_rd[7U] = ((0xffff0000U & 
                                      vlSelf->pe_top__DOT__w_rd[7U]) 
                                     | ((0xff00U & 
                                         (vlSelf->pe_top__DOT__mem
                                          [0x101dU] 
                                          << 8U)) | 
                                        (0xffU & vlSelf->pe_top__DOT__mem
                                         [0x101cU])));
    vlSelf->pe_top__DOT__w_rd[7U] = ((0xffffU & vlSelf->pe_top__DOT__w_rd[7U]) 
                                     | (0xffff0000U 
                                        & ((vlSelf->pe_top__DOT__mem
                                            [0x101fU] 
                                            << 0x18U) 
                                           | (0xff0000U 
                                              & (vlSelf->pe_top__DOT__mem
                                                 [0x101eU] 
                                                 << 0x10U)))));
    vlSelf->pe_top__DOT__w_rd[8U] = ((0xffff0000U & 
                                      vlSelf->pe_top__DOT__w_rd[8U]) 
                                     | ((0xff00U & 
                                         (vlSelf->pe_top__DOT__mem
                                          [0x1021U] 
                                          << 8U)) | 
                                        (0xffU & vlSelf->pe_top__DOT__mem
                                         [0x1020U])));
    vlSelf->pe_top__DOT__w_rd[8U] = ((0xffffU & vlSelf->pe_top__DOT__w_rd[8U]) 
                                     | (0xffff0000U 
                                        & ((vlSelf->pe_top__DOT__mem
                                            [0x1023U] 
                                            << 0x18U) 
                                           | (0xff0000U 
                                              & (vlSelf->pe_top__DOT__mem
                                                 [0x1022U] 
                                                 << 0x10U)))));
    vlSelf->pe_top__DOT__w_rd[9U] = ((0xffff0000U & 
                                      vlSelf->pe_top__DOT__w_rd[9U]) 
                                     | ((0xff00U & 
                                         (vlSelf->pe_top__DOT__mem
                                          [0x1025U] 
                                          << 8U)) | 
                                        (0xffU & vlSelf->pe_top__DOT__mem
                                         [0x1024U])));
    vlSelf->pe_top__DOT__w_rd[9U] = ((0xffffU & vlSelf->pe_top__DOT__w_rd[9U]) 
                                     | (0xffff0000U 
                                        & ((vlSelf->pe_top__DOT__mem
                                            [0x1027U] 
                                            << 0x18U) 
                                           | (0xff0000U 
                                              & (vlSelf->pe_top__DOT__mem
                                                 [0x1026U] 
                                                 << 0x10U)))));
    vlSelf->pe_top__DOT__w_rd[0xaU] = ((0xffff0000U 
                                        & vlSelf->pe_top__DOT__w_rd[0xaU]) 
                                       | ((0xff00U 
                                           & (vlSelf->pe_top__DOT__mem
                                              [0x1029U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlSelf->pe_top__DOT__mem
                                             [0x1028U])));
    vlSelf->pe_top__DOT__w_rd[0xaU] = ((0xffffU & vlSelf->pe_top__DOT__w_rd[0xaU]) 
                                       | (0xffff0000U 
                                          & ((vlSelf->pe_top__DOT__mem
                                              [0x102bU] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->pe_top__DOT__mem
                                                   [0x102aU] 
                                                   << 0x10U)))));
    vlSelf->pe_top__DOT__w_rd[0xbU] = ((0xffff0000U 
                                        & vlSelf->pe_top__DOT__w_rd[0xbU]) 
                                       | ((0xff00U 
                                           & (vlSelf->pe_top__DOT__mem
                                              [0x102dU] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlSelf->pe_top__DOT__mem
                                             [0x102cU])));
    vlSelf->pe_top__DOT__w_rd[0xbU] = ((0xffffU & vlSelf->pe_top__DOT__w_rd[0xbU]) 
                                       | (0xffff0000U 
                                          & ((vlSelf->pe_top__DOT__mem
                                              [0x102fU] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->pe_top__DOT__mem
                                                   [0x102eU] 
                                                   << 0x10U)))));
    vlSelf->pe_top__DOT__w_rd[0xcU] = ((0xffff0000U 
                                        & vlSelf->pe_top__DOT__w_rd[0xcU]) 
                                       | ((0xff00U 
                                           & (vlSelf->pe_top__DOT__mem
                                              [0x1031U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlSelf->pe_top__DOT__mem
                                             [0x1030U])));
    vlSelf->pe_top__DOT__w_rd[0xcU] = ((0xffffU & vlSelf->pe_top__DOT__w_rd[0xcU]) 
                                       | (0xffff0000U 
                                          & ((vlSelf->pe_top__DOT__mem
                                              [0x1033U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->pe_top__DOT__mem
                                                   [0x1032U] 
                                                   << 0x10U)))));
    vlSelf->pe_top__DOT__w_rd[0xdU] = ((0xffff0000U 
                                        & vlSelf->pe_top__DOT__w_rd[0xdU]) 
                                       | ((0xff00U 
                                           & (vlSelf->pe_top__DOT__mem
                                              [0x1035U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlSelf->pe_top__DOT__mem
                                             [0x1034U])));
    vlSelf->pe_top__DOT__w_rd[0xdU] = ((0xffffU & vlSelf->pe_top__DOT__w_rd[0xdU]) 
                                       | (0xffff0000U 
                                          & ((vlSelf->pe_top__DOT__mem
                                              [0x1037U] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->pe_top__DOT__mem
                                                   [0x1036U] 
                                                   << 0x10U)))));
    vlSelf->pe_top__DOT__w_rd[0xeU] = ((0xffff0000U 
                                        & vlSelf->pe_top__DOT__w_rd[0xeU]) 
                                       | ((0xff00U 
                                           & (vlSelf->pe_top__DOT__mem
                                              [0x1039U] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlSelf->pe_top__DOT__mem
                                             [0x1038U])));
    vlSelf->pe_top__DOT__w_rd[0xeU] = ((0xffffU & vlSelf->pe_top__DOT__w_rd[0xeU]) 
                                       | (0xffff0000U 
                                          & ((vlSelf->pe_top__DOT__mem
                                              [0x103bU] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->pe_top__DOT__mem
                                                   [0x103aU] 
                                                   << 0x10U)))));
    vlSelf->pe_top__DOT__w_rd[0xfU] = ((0xffff0000U 
                                        & vlSelf->pe_top__DOT__w_rd[0xfU]) 
                                       | ((0xff00U 
                                           & (vlSelf->pe_top__DOT__mem
                                              [0x103dU] 
                                              << 8U)) 
                                          | (0xffU 
                                             & vlSelf->pe_top__DOT__mem
                                             [0x103cU])));
    vlSelf->pe_top__DOT__w_rd[0xfU] = ((0xffffU & vlSelf->pe_top__DOT__w_rd[0xfU]) 
                                       | (0xffff0000U 
                                          & ((vlSelf->pe_top__DOT__mem
                                              [0x103fU] 
                                              << 0x18U) 
                                             | (0xff0000U 
                                                & (vlSelf->pe_top__DOT__mem
                                                   [0x103eU] 
                                                   << 0x10U)))));
    vlSelf->pe_top__DOT__w_rd[0x10U] = ((0xffff0000U 
                                         & vlSelf->pe_top__DOT__w_rd[0x10U]) 
                                        | ((0xff00U 
                                            & (vlSelf->pe_top__DOT__mem
                                               [0x1041U] 
                                               << 8U)) 
                                           | (0xffU 
                                              & vlSelf->pe_top__DOT__mem
                                              [0x1040U])));
    vlSelf->pe_top__DOT__w_rd[0x10U] = ((0xffffU & 
                                         vlSelf->pe_top__DOT__w_rd[0x10U]) 
                                        | (0xffff0000U 
                                           & ((vlSelf->pe_top__DOT__mem
                                               [0x1043U] 
                                               << 0x18U) 
                                              | (0xff0000U 
                                                 & (vlSelf->pe_top__DOT__mem
                                                    [0x1042U] 
                                                    << 0x10U)))));
    vlSelf->pe_top__DOT__w_rd[0x11U] = ((0xffff0000U 
                                         & vlSelf->pe_top__DOT__w_rd[0x11U]) 
                                        | ((0xff00U 
                                            & (vlSelf->pe_top__DOT__mem
                                               [0x1045U] 
                                               << 8U)) 
                                           | (0xffU 
                                              & vlSelf->pe_top__DOT__mem
                                              [0x1044U])));
    vlSelf->pe_top__DOT__w_rd[0x11U] = ((0xffffU & 
                                         vlSelf->pe_top__DOT__w_rd[0x11U]) 
                                        | (0xffff0000U 
                                           & ((vlSelf->pe_top__DOT__mem
                                               [0x1047U] 
                                               << 0x18U) 
                                              | (0xff0000U 
                                                 & (vlSelf->pe_top__DOT__mem
                                                    [0x1046U] 
                                                    << 0x10U)))));
    vlSelf->pe_top__DOT__done = __Vdly__pe_top__DOT__done;
    if (__Vdlyvset__pe_top__DOT__mem__v0) {
        vlSelf->pe_top__DOT__mem[__Vdlyvdim0__pe_top__DOT__mem__v0] 
            = __Vdlyvval__pe_top__DOT__mem__v0;
    }
    if (__Vdlyvset__pe_top__DOT__mem__v1) {
        vlSelf->pe_top__DOT__mem[__Vdlyvdim0__pe_top__DOT__mem__v1] 
            = __Vdlyvval__pe_top__DOT__mem__v1;
    }
    if (__Vdlyvset__pe_top__DOT__mem__v2) {
        vlSelf->pe_top__DOT__mem[__Vdlyvdim0__pe_top__DOT__mem__v2] 
            = __Vdlyvval__pe_top__DOT__mem__v2;
    }
    if (__Vdlyvset__pe_top__DOT__mem__v3) {
        vlSelf->pe_top__DOT__mem[__Vdlyvdim0__pe_top__DOT__mem__v3] 
            = __Vdlyvval__pe_top__DOT__mem__v3;
    }
    if (__Vdlyvset__pe_top__DOT__mem__v4) {
        vlSelf->pe_top__DOT__mem[__Vdlyvdim0__pe_top__DOT__mem__v4] 
            = __Vdlyvval__pe_top__DOT__mem__v4;
    }
    if (__Vdlyvset__pe_top__DOT__mem__v5) {
        vlSelf->pe_top__DOT__mem[__Vdlyvdim0__pe_top__DOT__mem__v5] 
            = __Vdlyvval__pe_top__DOT__mem__v5;
    }
    if (__Vdlyvset__pe_top__DOT__mem__v6) {
        vlSelf->pe_top__DOT__mem[__Vdlyvdim0__pe_top__DOT__mem__v6] 
            = __Vdlyvval__pe_top__DOT__mem__v6;
    }
    if (__Vdlyvset__pe_top__DOT__mem__v7) {
        vlSelf->pe_top__DOT__mem[__Vdlyvdim0__pe_top__DOT__mem__v7] 
            = __Vdlyvval__pe_top__DOT__mem__v7;
    }
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__5\n"); );
    // Body
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
    if (vlSelf->pe_top__DOT__rst) {
        vlSelf->pe_top__DOT__done_PE = 0U;
        vlSelf->pe_top__DOT__mem_wr_en = 0U;
        vlSelf->__Vdly__pe_top__DOT__pe__DOT__cnt = 0U;
    } else if ((0x25U > vlSelf->pe_top__DOT__pe__DOT__cnt)) {
        vlSelf->__Vdly__pe_top__DOT__pe__DOT__cnt = 
            (0xffffffU & ((IData)(1U) + vlSelf->pe_top__DOT__pe__DOT__cnt));
        vlSelf->pe_top__DOT__done_PE = 0U;
        vlSelf->pe_top__DOT__mem_wr_en = 1U;
    } else {
        vlSelf->__Vdly__pe_top__DOT__pe__DOT__cnt = vlSelf->pe_top__DOT__pe__DOT__cnt;
        vlSelf->pe_top__DOT__done_PE = 1U;
        vlSelf->pe_top__DOT__mem_wr_en = 0U;
    }
    vlSelf->pe_top__DOT__pe__DOT__cnt = vlSelf->__Vdly__pe_top__DOT__pe__DOT__cnt;
    vlSelf->pe_top__DOT__addr_wr = ((IData)(0x2ff0U) 
                                    + (vlSelf->pe_top__DOT__pe__DOT__cnt 
                                       << 3U));
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__6\n"); );
    // Body
    vlSelf->pe_top__DOT__rst = vlSelf->__Vdly__pe_top__DOT__rst;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->__VinpClk__TOP__pe_top__DOT__rst) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__pe_top__DOT__rst))))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->__VinpClk__TOP__pe_top__DOT__rst) 
            & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__pe_top__DOT__rst))))) {
        Vtop___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__6(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__pe_top__DOT__rst 
        = vlSelf->__VinpClk__TOP__pe_top__DOT__rst;
    vlSelf->__VinpClk__TOP__pe_top__DOT__rst = vlSelf->pe_top__DOT__rst;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->pe_top__DOT__rst ^ vlSelf->__Vchglast__TOP__pe_top__DOT__rst));
    VL_DEBUG_IF( if(__req && ((vlSelf->pe_top__DOT__rst ^ vlSelf->__Vchglast__TOP__pe_top__DOT__rst))) VL_DBG_MSGF("        CHANGE: vsrc/sim/top.v:32: pe_top.rst\n"); );
    // Final
    vlSelf->__Vchglast__TOP__pe_top__DOT__rst = vlSelf->pe_top__DOT__rst;
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
