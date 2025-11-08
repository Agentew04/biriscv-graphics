// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_dcache_core_data_ram.h"

VL_INLINE_OPT void Vriscv_top_dcache_core_data_ram___nba_sequent__TOP__v__u_dcache__u_core__u_data0__0(Vriscv_top_dcache_core_data_ram* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_dcache_core_data_ram___nba_sequent__TOP__v__u_dcache__u_core__u_data0__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    SData/*10:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__ram__v1;
    __VdlyVal__ram__v1 = 0;
    SData/*10:0*/ __VdlyDim0__ram__v1;
    __VdlyDim0__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__ram__v1;
    __VdlySet__ram__v1 = 0;
    CData/*7:0*/ __VdlyVal__ram__v2;
    __VdlyVal__ram__v2 = 0;
    SData/*10:0*/ __VdlyDim0__ram__v2;
    __VdlyDim0__ram__v2 = 0;
    CData/*0:0*/ __VdlySet__ram__v2;
    __VdlySet__ram__v2 = 0;
    CData/*7:0*/ __VdlyVal__ram__v3;
    __VdlyVal__ram__v3 = 0;
    SData/*10:0*/ __VdlyDim0__ram__v3;
    __VdlyDim0__ram__v3 = 0;
    CData/*0:0*/ __VdlySet__ram__v3;
    __VdlySet__ram__v3 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    __VdlySet__ram__v1 = 0U;
    __VdlySet__ram__v2 = 0U;
    __VdlySet__ram__v3 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data0_write_m_r))) {
        __VdlyVal__ram__v0 = (0xffU & vlSymsp->TOP__v__u_dcache__u_core.__PVT__data0_data_in_m_w);
        __VdlyDim0__ram__v0 = vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_addr_m_r;
        __VdlySet__ram__v0 = 1U;
    }
    if ((2U & (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data0_write_m_r))) {
        __VdlyVal__ram__v1 = (0xffU & (vlSymsp->TOP__v__u_dcache__u_core.__PVT__data0_data_in_m_w 
                                       >> 8U));
        __VdlyDim0__ram__v1 = vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_addr_m_r;
        __VdlySet__ram__v1 = 1U;
    }
    if ((4U & (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data0_write_m_r))) {
        __VdlyVal__ram__v2 = (0xffU & (vlSymsp->TOP__v__u_dcache__u_core.__PVT__data0_data_in_m_w 
                                       >> 0x10U));
        __VdlyDim0__ram__v2 = vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_addr_m_r;
        __VdlySet__ram__v2 = 1U;
    }
    if ((8U & (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data0_write_m_r))) {
        __VdlyVal__ram__v3 = (vlSymsp->TOP__v__u_dcache__u_core.__PVT__data0_data_in_m_w 
                              >> 0x18U);
        __VdlyDim0__ram__v3 = vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_addr_m_r;
        __VdlySet__ram__v3 = 1U;
    }
    vlSelfRef.__PVT__ram_read1_q = vlSelfRef.ram[vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_addr_m_r];
    vlSelfRef.__PVT__ram_read0_q = vlSelfRef.ram[vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_addr_x_r];
    if (__VdlySet__ram__v0) {
        vlSelfRef.ram[__VdlyDim0__ram__v0] = ((0xffffff00U 
                                               & vlSelfRef.ram
                                               [__VdlyDim0__ram__v0]) 
                                              | (IData)(__VdlyVal__ram__v0));
    }
    if (__VdlySet__ram__v1) {
        vlSelfRef.ram[__VdlyDim0__ram__v1] = ((0xffff00ffU 
                                               & vlSelfRef.ram
                                               [__VdlyDim0__ram__v1]) 
                                              | ((IData)(__VdlyVal__ram__v1) 
                                                 << 8U));
    }
    if (__VdlySet__ram__v2) {
        vlSelfRef.ram[__VdlyDim0__ram__v2] = ((0xff00ffffU 
                                               & vlSelfRef.ram
                                               [__VdlyDim0__ram__v2]) 
                                              | ((IData)(__VdlyVal__ram__v2) 
                                                 << 0x10U));
    }
    if (__VdlySet__ram__v3) {
        vlSelfRef.ram[__VdlyDim0__ram__v3] = ((0xffffffU 
                                               & vlSelfRef.ram
                                               [__VdlyDim0__ram__v3]) 
                                              | ((IData)(__VdlyVal__ram__v3) 
                                                 << 0x18U));
    }
}

VL_INLINE_OPT void Vriscv_top_dcache_core_data_ram___nba_sequent__TOP__v__u_dcache__u_core__u_data1__0(Vriscv_top_dcache_core_data_ram* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_dcache_core_data_ram___nba_sequent__TOP__v__u_dcache__u_core__u_data1__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__ram__v0;
    __VdlyVal__ram__v0 = 0;
    SData/*10:0*/ __VdlyDim0__ram__v0;
    __VdlyDim0__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__ram__v0;
    __VdlySet__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__ram__v1;
    __VdlyVal__ram__v1 = 0;
    SData/*10:0*/ __VdlyDim0__ram__v1;
    __VdlyDim0__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__ram__v1;
    __VdlySet__ram__v1 = 0;
    CData/*7:0*/ __VdlyVal__ram__v2;
    __VdlyVal__ram__v2 = 0;
    SData/*10:0*/ __VdlyDim0__ram__v2;
    __VdlyDim0__ram__v2 = 0;
    CData/*0:0*/ __VdlySet__ram__v2;
    __VdlySet__ram__v2 = 0;
    CData/*7:0*/ __VdlyVal__ram__v3;
    __VdlyVal__ram__v3 = 0;
    SData/*10:0*/ __VdlyDim0__ram__v3;
    __VdlyDim0__ram__v3 = 0;
    CData/*0:0*/ __VdlySet__ram__v3;
    __VdlySet__ram__v3 = 0;
    // Body
    __VdlySet__ram__v0 = 0U;
    __VdlySet__ram__v1 = 0U;
    __VdlySet__ram__v2 = 0U;
    __VdlySet__ram__v3 = 0U;
    if ((1U & (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data1_write_m_r))) {
        __VdlyVal__ram__v0 = (0xffU & vlSymsp->TOP__v__u_dcache__u_core.__PVT__data0_data_in_m_w);
        __VdlyDim0__ram__v0 = vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_addr_m_r;
        __VdlySet__ram__v0 = 1U;
    }
    if ((2U & (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data1_write_m_r))) {
        __VdlyVal__ram__v1 = (0xffU & (vlSymsp->TOP__v__u_dcache__u_core.__PVT__data0_data_in_m_w 
                                       >> 8U));
        __VdlyDim0__ram__v1 = vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_addr_m_r;
        __VdlySet__ram__v1 = 1U;
    }
    if ((4U & (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data1_write_m_r))) {
        __VdlyVal__ram__v2 = (0xffU & (vlSymsp->TOP__v__u_dcache__u_core.__PVT__data0_data_in_m_w 
                                       >> 0x10U));
        __VdlyDim0__ram__v2 = vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_addr_m_r;
        __VdlySet__ram__v2 = 1U;
    }
    if ((8U & (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data1_write_m_r))) {
        __VdlyVal__ram__v3 = (vlSymsp->TOP__v__u_dcache__u_core.__PVT__data0_data_in_m_w 
                              >> 0x18U);
        __VdlyDim0__ram__v3 = vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_addr_m_r;
        __VdlySet__ram__v3 = 1U;
    }
    vlSelfRef.__PVT__ram_read1_q = vlSelfRef.ram[vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_addr_m_r];
    vlSelfRef.__PVT__ram_read0_q = vlSelfRef.ram[vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_addr_x_r];
    if (__VdlySet__ram__v0) {
        vlSelfRef.ram[__VdlyDim0__ram__v0] = ((0xffffff00U 
                                               & vlSelfRef.ram
                                               [__VdlyDim0__ram__v0]) 
                                              | (IData)(__VdlyVal__ram__v0));
    }
    if (__VdlySet__ram__v1) {
        vlSelfRef.ram[__VdlyDim0__ram__v1] = ((0xffff00ffU 
                                               & vlSelfRef.ram
                                               [__VdlyDim0__ram__v1]) 
                                              | ((IData)(__VdlyVal__ram__v1) 
                                                 << 8U));
    }
    if (__VdlySet__ram__v2) {
        vlSelfRef.ram[__VdlyDim0__ram__v2] = ((0xff00ffffU 
                                               & vlSelfRef.ram
                                               [__VdlyDim0__ram__v2]) 
                                              | ((IData)(__VdlyVal__ram__v2) 
                                                 << 0x10U));
    }
    if (__VdlySet__ram__v3) {
        vlSelfRef.ram[__VdlyDim0__ram__v3] = ((0xffffffU 
                                               & vlSelfRef.ram
                                               [__VdlyDim0__ram__v3]) 
                                              | ((IData)(__VdlyVal__ram__v3) 
                                                 << 0x18U));
    }
}
