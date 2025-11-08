// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_dcache_core_tag_ram.h"

VL_INLINE_OPT void Vriscv_top_dcache_core_tag_ram___act_sequent__TOP__v__u_dcache__u_core__u_tag0__0(Vriscv_top_dcache_core_tag_ram* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_dcache_core_tag_ram___act_sequent__TOP__v__u_dcache__u_core__u_tag0__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag0_write_m_r) {
        vlSelfRef.ram[vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag_addr_m_r] 
            = vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag_data_in_m_r;
    }
    vlSelfRef.__PVT__ram_read0_q = vlSelfRef.ram[vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag_addr_x_r];
}

VL_INLINE_OPT void Vriscv_top_dcache_core_tag_ram___act_sequent__TOP__v__u_dcache__u_core__u_tag1__0(Vriscv_top_dcache_core_tag_ram* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_dcache_core_tag_ram___act_sequent__TOP__v__u_dcache__u_core__u_tag1__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag1_write_m_r) {
        vlSelfRef.ram[vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag_addr_m_r] 
            = vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag_data_in_m_r;
    }
    vlSelfRef.__PVT__ram_read0_q = vlSelfRef.ram[vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag_addr_x_r];
}
