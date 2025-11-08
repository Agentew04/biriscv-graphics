// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_icache_tag_ram.h"

VL_INLINE_OPT void Vriscv_top_icache_tag_ram___nba_sequent__TOP__v__u_icache__u_tag0__0(Vriscv_top_icache_tag_ram* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_icache_tag_ram___nba_sequent__TOP__v__u_icache__u_tag0__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*19:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    if (vlSymsp->TOP__v__u_icache.__PVT__tag0_write_r) {
        __VdlyVal__ram__v0 = vlSymsp->TOP__v__u_icache.__PVT__tag_data_in_r;
        __VdlyDim0__ram__v0 = vlSymsp->TOP__v__u_icache.__PVT__tag_addr_r;
        __VdlySet__ram__v0 = 1U;
    }
    vlSelfRef.__PVT__ram_read_q = vlSelfRef.ram[vlSymsp->TOP__v__u_icache.__PVT__tag_addr_r];
    if (__VdlySet__ram__v0) {
        vlSelfRef.ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
}

VL_INLINE_OPT void Vriscv_top_icache_tag_ram___nba_sequent__TOP__v__u_icache__u_tag1__0(Vriscv_top_icache_tag_ram* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_icache_tag_ram___nba_sequent__TOP__v__u_icache__u_tag1__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*19:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    CData/*7:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    if (vlSymsp->TOP__v__u_icache.__PVT__tag1_write_r) {
        __VdlyVal__ram__v0 = vlSymsp->TOP__v__u_icache.__PVT__tag_data_in_r;
        __VdlyDim0__ram__v0 = vlSymsp->TOP__v__u_icache.__PVT__tag_addr_r;
        __VdlySet__ram__v0 = 1U;
    }
    vlSelfRef.__PVT__ram_read_q = vlSelfRef.ram[vlSymsp->TOP__v__u_icache.__PVT__tag_addr_r];
    if (__VdlySet__ram__v0) {
        vlSelfRef.ram[__VdlyDim0__ram__v0] = __VdlyVal__ram__v0;
    }
}
