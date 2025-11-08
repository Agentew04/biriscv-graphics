// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_icache_data_ram.h"

VL_INLINE_OPT void Vriscv_top_icache_data_ram___ico_sequent__TOP__v__u_icache__u_data0__0(Vriscv_top_icache_data_ram* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_icache_data_ram___ico_sequent__TOP__v__u_icache__u_data0__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_i = (((QData)((IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rdata_i)) 
                                << 0x20U) | (QData)((IData)(vlSymsp->TOP__v__u_icache.__PVT__refill_lower_q)));
}

VL_INLINE_OPT void Vriscv_top_icache_data_ram___nba_sequent__TOP__v__u_icache__u_data0__0(Vriscv_top_icache_data_ram* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_icache_data_ram___nba_sequent__TOP__v__u_icache__u_data0__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    SData/*9:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    if (((~ (IData)(vlSymsp->TOP__v__u_icache.__PVT__replace_way_q)) 
         & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rvalid_i))) {
        __VdlyVal__ram__v0 = vlSelfRef.__PVT__data_i;
        __VdlyDim0__ram__v0 = vlSymsp->TOP__v__u_icache.__PVT__data_addr_r;
        __VdlySet__ram__v0 = 1U;
    }
    vlSelfRef.__PVT__ram_read_q = vlSelfRef.ram[vlSymsp->TOP__v__u_icache.__PVT__data_addr_r];
    if (__VdlySet__ram__v0) {
        vlSelfRef.ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
}

VL_INLINE_OPT void Vriscv_top_icache_data_ram___nba_sequent__TOP__v__u_icache__u_data1__0(Vriscv_top_icache_data_ram* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_icache_data_ram___nba_sequent__TOP__v__u_icache__u_data1__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    SData/*9:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    if (((IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rvalid_i) 
         & (IData)(vlSymsp->TOP__v__u_icache.__PVT__replace_way_q))) {
        __VdlyVal__ram__v0 = vlSymsp->TOP__v__u_icache__u_data0.__PVT__data_i;
        __VdlyDim0__ram__v0 = vlSymsp->TOP__v__u_icache.__PVT__data_addr_r;
        __VdlySet__ram__v0 = 1U;
    }
    vlSelfRef.__PVT__ram_read_q = vlSelfRef.ram[vlSymsp->TOP__v__u_icache.__PVT__data_addr_r];
    if (__VdlySet__ram__v0) {
        vlSelfRef.ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
}
