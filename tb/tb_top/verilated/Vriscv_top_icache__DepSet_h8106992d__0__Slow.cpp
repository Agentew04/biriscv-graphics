// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_icache.h"

VL_ATTR_COLD void Vriscv_top_icache___stl_sequent__TOP__v__u_icache__0(Vriscv_top_icache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_icache___stl_sequent__TOP__v__u_icache__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tag_data_in_r = 0U;
    vlSelfRef.__PVT__tag0_hit_w = ((vlSymsp->TOP__v__u_icache__u_tag0.__PVT__ram_read_q 
                                    >> 0x13U) & ((0x7ffffU 
                                                  & vlSymsp->TOP__v__u_icache__u_tag0.__PVT__ram_read_q) 
                                                 == 
                                                 (vlSelfRef.__PVT__lookup_addr_q 
                                                  >> 0xdU)));
    vlSelfRef.__PVT__tag1_hit_w = ((vlSymsp->TOP__v__u_icache__u_tag1.__PVT__ram_read_q 
                                    >> 0x13U) & ((0x7ffffU 
                                                  & vlSymsp->TOP__v__u_icache__u_tag1.__PVT__ram_read_q) 
                                                 == 
                                                 (vlSelfRef.__PVT__lookup_addr_q 
                                                  >> 0xdU)));
    vlSelfRef.__PVT__tag0_write_r = 0U;
    vlSelfRef.__PVT__tag1_write_r = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag_data_in_r = 0U;
        vlSelfRef.__PVT__tag0_write_r = 1U;
        vlSelfRef.__PVT__tag1_write_r = 1U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag_data_in_r = (0x80000U 
                                          | (vlSelfRef.__PVT__lookup_addr_q 
                                             >> 0xdU));
        vlSelfRef.__PVT__tag0_write_r = (((IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rvalid_i) 
                                          & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rlast_i)) 
                                         & (~ (IData)(vlSelfRef.__PVT__replace_way_q)));
        vlSelfRef.__PVT__tag1_write_r = (((IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rvalid_i) 
                                          & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rlast_i)) 
                                         & (IData)(vlSelfRef.__PVT__replace_way_q));
    }
    vlSelfRef.__PVT__inst_r = vlSymsp->TOP__v__u_icache__u_data0.__PVT__ram_read_q;
    if (vlSelfRef.__PVT__tag0_hit_w) {
        vlSelfRef.__PVT__inst_r = vlSymsp->TOP__v__u_icache__u_data0.__PVT__ram_read_q;
    } else if (vlSelfRef.__PVT__tag1_hit_w) {
        vlSelfRef.__PVT__inst_r = vlSymsp->TOP__v__u_icache__u_data1.__PVT__ram_read_q;
    }
    vlSelfRef.__PVT__tag_hit_any_w = ((IData)(vlSelfRef.__PVT__tag0_hit_w) 
                                      | (IData)(vlSelfRef.__PVT__tag1_hit_w));
    vlSelfRef.__PVT__next_state_r = vlSelfRef.__PVT__state_q;
    if ((2U & (IData)(vlSelfRef.__PVT__state_q))) {
        if ((1U & (IData)(vlSelfRef.__PVT__state_q))) {
            vlSelfRef.__PVT__next_state_r = 1U;
        } else if (((IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rvalid_i) 
                    & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rlast_i))) {
            vlSelfRef.__PVT__next_state_r = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__state_q))) {
        if (((IData)(vlSelfRef.__PVT__lookup_valid_q) 
             & (~ (IData)(vlSelfRef.__PVT__tag_hit_any_w)))) {
            vlSelfRef.__PVT__next_state_r = 2U;
        } else if (((IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__icache_invalidate_q) 
                    | (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__ifence_q))) {
            vlSelfRef.__PVT__next_state_r = 0U;
        }
    } else if (vlSelfRef.__PVT__invalidate_q) {
        vlSelfRef.__PVT__next_state_r = 1U;
    } else if ((0xffU == (IData)(vlSelfRef.__PVT__flush_addr_q))) {
        vlSelfRef.__PVT__next_state_r = 1U;
    }
}
