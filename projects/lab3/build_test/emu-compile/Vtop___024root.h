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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ pe_top__DOT__rst;
        CData/*0:0*/ pe_top__DOT__done_PE;
        CData/*0:0*/ pe_top__DOT__done;
        CData/*0:0*/ pe_top__DOT__mem_wr_en;
        CData/*2:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_cnt;
        CData/*2:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_cnt;
        CData/*2:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_cnt;
        CData/*2:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_cnt;
        CData/*2:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_cnt;
        CData/*2:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_cnt;
        CData/*2:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_cnt;
        CData/*2:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_cnt;
        CData/*0:0*/ __Vdly__pe_top__DOT__rst;
        CData/*0:0*/ __VinpClk__TOP__pe_top__DOT__rst;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__pe_top__DOT__rst;
        CData/*0:0*/ __Vchglast__TOP__pe_top__DOT__rst;
        IData/*23:0*/ pe_top__DOT____Vxrand_hd7c275ef__80;
        IData/*23:0*/ pe_top__DOT____Vxrand_hd7c275ef__79;
        IData/*23:0*/ pe_top__DOT____Vxrand_hd7c275ef__78;
        IData/*23:0*/ pe_top__DOT____Vxrand_hd7c275ef__77;
        IData/*23:0*/ pe_top__DOT____Vxrand_hd7c275ef__76;
        IData/*23:0*/ pe_top__DOT____Vxrand_hd7c275ef__75;
        IData/*23:0*/ pe_top__DOT____Vxrand_hd7c275ef__74;
        IData/*23:0*/ pe_top__DOT____Vxrand_hd7c275ef__73;
        IData/*23:0*/ pe_top__DOT____Vxrand_hd7c275ef__72;
        VlWide<18>/*575:0*/ pe_top__DOT__w_rd;
        VlWide<3>/*71:0*/ pe_top__DOT__ia_rd;
        VlWide<6>/*191:0*/ pe_top__DOT__accumout_wr;
        IData/*31:0*/ pe_top__DOT__addr_wr;
        IData/*23:0*/ pe_top__DOT____Vlvbound_h5e1177fa__0;
        IData/*23:0*/ pe_top__DOT____Vlvbound_h4569e626__0;
        IData/*23:0*/ pe_top__DOT____Vlvbound_h4569f993__0;
        IData/*23:0*/ pe_top__DOT____Vlvbound_h456b05bd__0;
        IData/*23:0*/ pe_top__DOT____Vlvbound_h455cf376__0;
        IData/*23:0*/ pe_top__DOT____Vlvbound_h455d8c0b__0;
        IData/*23:0*/ pe_top__DOT____Vlvbound_h455d579e__0;
        IData/*23:0*/ pe_top__DOT____Vlvbound_h455cac82__0;
        IData/*23:0*/ pe_top__DOT__pe__DOT__cnt;
        VlWide<7>/*215:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__mul;
        IData/*31:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__i;
        IData/*23:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT____Vlvbound_h99727907__0;
        VlWide<7>/*215:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__mul;
        IData/*31:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__i;
        IData/*23:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT____Vlvbound_h99727907__0;
        VlWide<7>/*215:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__mul;
        IData/*31:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__i;
        IData/*23:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT____Vlvbound_h99727907__0;
        VlWide<7>/*215:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__mul;
        IData/*31:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__i;
        IData/*23:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT____Vlvbound_h99727907__0;
        VlWide<7>/*215:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__mul;
        IData/*31:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__i;
        IData/*23:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT____Vlvbound_h99727907__0;
        VlWide<7>/*215:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__mul;
        IData/*31:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__i;
        IData/*23:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT____Vlvbound_h99727907__0;
        VlWide<7>/*215:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__mul;
        IData/*31:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__i;
        IData/*23:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT____Vlvbound_h99727907__0;
        VlWide<7>/*215:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__mul;
        IData/*31:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__i;
        IData/*23:0*/ pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT____Vlvbound_h99727907__0;
    };
    struct {
        IData/*23:0*/ __Vdly__pe_top__DOT__pe__DOT__cnt;
        VlUnpacked<IData/*23:0*/, 20480> pe_top__DOT__mem;
        VlUnpacked<IData/*23:0*/, 8> pe_top__DOT__pe__DOT__vector_mac__BRA__1__KET____DOT__vmac__DOT__C_accum;
        VlUnpacked<IData/*23:0*/, 8> pe_top__DOT__pe__DOT__vector_mac__BRA__2__KET____DOT__vmac__DOT__C_accum;
        VlUnpacked<IData/*23:0*/, 8> pe_top__DOT__pe__DOT__vector_mac__BRA__3__KET____DOT__vmac__DOT__C_accum;
        VlUnpacked<IData/*23:0*/, 8> pe_top__DOT__pe__DOT__vector_mac__BRA__4__KET____DOT__vmac__DOT__C_accum;
        VlUnpacked<IData/*23:0*/, 8> pe_top__DOT__pe__DOT__vector_mac__BRA__5__KET____DOT__vmac__DOT__C_accum;
        VlUnpacked<IData/*23:0*/, 8> pe_top__DOT__pe__DOT__vector_mac__BRA__6__KET____DOT__vmac__DOT__C_accum;
        VlUnpacked<IData/*23:0*/, 8> pe_top__DOT__pe__DOT__vector_mac__BRA__7__KET____DOT__vmac__DOT__C_accum;
        VlUnpacked<IData/*23:0*/, 8> pe_top__DOT__pe__DOT__vector_mac__BRA__8__KET____DOT__vmac__DOT__C_accum;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };

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
