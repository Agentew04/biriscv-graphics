// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_biriscv_csr__SB0.h"

VL_ATTR_COLD void Vriscv_top_biriscv_csr__SB0___stl_sequent__TOP__v__u_core__u_csr__0(Vriscv_top_biriscv_csr__SB0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_biriscv_csr__SB0___stl_sequent__TOP__v__u_core__u_csr__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__interrupt_w = ((8U & vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q)
                                     ? (vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mie_q 
                                        & vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_q)
                                     : 0U);
}
