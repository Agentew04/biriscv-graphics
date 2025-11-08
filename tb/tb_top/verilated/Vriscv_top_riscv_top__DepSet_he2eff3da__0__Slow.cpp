// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_riscv_top.h"

VL_ATTR_COLD void Vriscv_top_riscv_top___stl_sequent__TOP__v__0(Vriscv_top_riscv_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_riscv_top___stl_sequent__TOP__v__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP__v__u_dcache.__PVT__u_mux__DOT__cache_access_q) {
        vlSelfRef.__PVT__dcache_error_w = vlSymsp->TOP__v__u_dcache__u_core.__PVT__error_q;
        vlSelfRef.__PVT__dcache_data_rd_w = vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_r;
        vlSelfRef.__PVT__dcache_ack_w = vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_ack_r;
    } else {
        vlSelfRef.__PVT__dcache_error_w = ((~ (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_pmem_mux__DOT__select_q)) 
                                           & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_error_w));
        vlSelfRef.__PVT__dcache_data_rd_w = vlSymsp->TOP.__Vcellinp__v__axi_d_rdata_i;
        vlSelfRef.__PVT__dcache_ack_w = vlSymsp->TOP__v__u_dcache.__PVT__mem_uncached_ack_w;
    }
    vlSelfRef.__PVT__icache_valid_w = ((IData)(vlSymsp->TOP__v__u_icache.__PVT__lookup_valid_q) 
                                       & ((1U == (IData)(vlSymsp->TOP__v__u_icache.__PVT__state_q)) 
                                          & (IData)(vlSymsp->TOP__v__u_icache.__PVT__tag_hit_any_w)));
    vlSelfRef.__PVT__icache_accept_w = ((1U == (IData)(vlSymsp->TOP__v__u_icache.__PVT__state_q)) 
                                        & (2U != (IData)(vlSymsp->TOP__v__u_icache.__PVT__next_state_r)));
}

VL_ATTR_COLD void Vriscv_top_riscv_top___stl_sequent__TOP__v__1(Vriscv_top_riscv_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_riscv_top___stl_sequent__TOP__v__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__icache_rd_w = ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__active_q) 
                                    & ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__icache_busy_w)) 
                                       & (2U != (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q))));
    vlSelfRef.__PVT__dcache_wr_w = ((~ (- (IData)((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__delay_lsu_e2_w)))) 
                                    & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_wr_q));
    vlSelfRef.__PVT__dcache_rd_w = ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__delay_lsu_e2_w)) 
                                    & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_rd_q));
}
