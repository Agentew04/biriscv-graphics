// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_icache.h"

VL_INLINE_OPT void Vriscv_top_icache___ico_sequent__TOP__v__u_icache__0(Vriscv_top_icache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_icache___ico_sequent__TOP__v__u_icache__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tag0_write_r = 0U;
    vlSelfRef.__PVT__tag1_write_r = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_r = 1U;
        vlSelfRef.__PVT__tag1_write_r = 1U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_r = (((IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rvalid_i) 
                                          & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rlast_i)) 
                                         & (~ (IData)(vlSelfRef.__PVT__replace_way_q)));
        vlSelfRef.__PVT__tag1_write_r = (((IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rvalid_i) 
                                          & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rlast_i)) 
                                         & (IData)(vlSelfRef.__PVT__replace_way_q));
    }
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

VL_INLINE_OPT void Vriscv_top_icache___ico_sequent__TOP__v__u_icache__1(Vriscv_top_icache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_icache___ico_sequent__TOP__v__u_icache__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__tag_addr_r = (0xffU & ((0U == (IData)(vlSelfRef.__PVT__state_q))
                                             ? (IData)(vlSelfRef.__PVT__flush_addr_q)
                                             : (((2U 
                                                  == (IData)(vlSelfRef.__PVT__state_q)) 
                                                 | (3U 
                                                    == (IData)(vlSelfRef.__PVT__state_q)))
                                                 ? 
                                                (vlSelfRef.__PVT__lookup_addr_q 
                                                 >> 5U)
                                                 : 
                                                (vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w 
                                                 >> 5U))));
    vlSelfRef.__PVT__data_addr_r = (0x3ffU & ((2U == (IData)(vlSelfRef.__PVT__state_q))
                                               ? (IData)(vlSelfRef.__PVT__data_write_addr_q)
                                               : ((3U 
                                                   == (IData)(vlSelfRef.__PVT__state_q))
                                                   ? 
                                                  (vlSelfRef.__PVT__lookup_addr_q 
                                                   >> 3U)
                                                   : 
                                                  (vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w 
                                                   >> 3U))));
}

VL_INLINE_OPT void Vriscv_top_icache___nba_sequent__TOP__v__u_icache__0(Vriscv_top_icache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_icache___nba_sequent__TOP__v__u_icache__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__refill_word_idx_q;
    __Vdly__refill_word_idx_q = 0;
    SData/*9:0*/ __Vdly__data_write_addr_q;
    __Vdly__data_write_addr_q = 0;
    CData/*0:0*/ __Vdly__replace_way_q;
    __Vdly__replace_way_q = 0;
    // Body
    __Vdly__refill_word_idx_q = vlSelfRef.__PVT__refill_word_idx_q;
    __Vdly__replace_way_q = vlSelfRef.__PVT__replace_way_q;
    __Vdly__data_write_addr_q = vlSelfRef.__PVT__data_write_addr_q;
    if (vlSymsp->TOP.__Vcellinp__v__rst_i) {
        __Vdly__refill_word_idx_q = 0U;
        __Vdly__replace_way_q = 0U;
        vlSelfRef.__PVT__flush_addr_q = 0U;
        __Vdly__data_write_addr_q = 0U;
        vlSelfRef.__PVT__refill_lower_q = 0U;
        vlSelfRef.__PVT__axi_error_q = 0U;
        vlSelfRef.__PVT__lookup_valid_q = 0U;
        vlSelfRef.__PVT__state_q = 0U;
        vlSelfRef.__PVT__lookup_addr_q = 0U;
    } else {
        if (((IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rvalid_i) 
             & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rlast_i))) {
            __Vdly__refill_word_idx_q = 0U;
            __Vdly__replace_way_q = (1U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__replace_way_q)));
        } else if (vlSymsp->TOP.__Vcellinp__v__axi_i_rvalid_i) {
            __Vdly__refill_word_idx_q = (7U & ((IData)(1U) 
                                               + (IData)(vlSelfRef.__PVT__refill_word_idx_q)));
        }
        vlSelfRef.__PVT__flush_addr_q = ((0U == (IData)(vlSelfRef.__PVT__state_q))
                                          ? (0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelfRef.__PVT__flush_addr_q)))
                                          : 0U);
        if (((1U == (IData)(vlSelfRef.__PVT__state_q)) 
             & (2U == (IData)(vlSelfRef.__PVT__next_state_r)))) {
            __Vdly__data_write_addr_q = (0x3fcU & (vlSelfRef.__PVT__lookup_addr_q 
                                                   >> 3U));
        } else if ((((2U == (IData)(vlSelfRef.__PVT__state_q)) 
                     & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rvalid_i)) 
                    & (IData)(vlSelfRef.__PVT__refill_word_idx_q))) {
            __Vdly__data_write_addr_q = (0x3ffU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__data_write_addr_q)));
        }
        if (vlSymsp->TOP.__Vcellinp__v__axi_i_rvalid_i) {
            vlSelfRef.__PVT__refill_lower_q = vlSymsp->TOP.__Vcellinp__v__axi_i_rdata_i;
        }
        if (((IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rvalid_i) 
             & (0U != (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rresp_i)))) {
            vlSelfRef.__PVT__axi_error_q = 1U;
        } else if (vlSymsp->TOP__v.__PVT__icache_valid_w) {
            vlSelfRef.__PVT__axi_error_q = 0U;
        }
        if (((IData)(vlSymsp->TOP__v.__PVT__icache_rd_w) 
             & (IData)(vlSymsp->TOP__v.__PVT__icache_accept_w))) {
            vlSelfRef.__PVT__lookup_valid_q = 1U;
            vlSelfRef.__PVT__lookup_addr_q = (0xfffffff8U 
                                              & vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w);
        } else if (vlSymsp->TOP__v.__PVT__icache_valid_w) {
            vlSelfRef.__PVT__lookup_valid_q = 0U;
        }
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__next_state_r;
    }
    vlSelfRef.__PVT__invalidate_q = 0U;
    vlSelfRef.__PVT__axi_arvalid_q = ((~ (IData)(vlSymsp->TOP.__Vcellinp__v__rst_i)) 
                                      & ((IData)(vlSymsp->TOP.__Vcellout__v__axi_i_arvalid_o) 
                                         & (~ (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_arready_i))));
    vlSelfRef.__PVT__replace_way_q = __Vdly__replace_way_q;
    vlSelfRef.__PVT__refill_word_idx_q = __Vdly__refill_word_idx_q;
    vlSelfRef.__PVT__data_write_addr_q = __Vdly__data_write_addr_q;
    vlSelfRef.__PVT__tag0_write_r = 0U;
    vlSelfRef.__PVT__tag1_write_r = 0U;
    vlSelfRef.__PVT__tag_data_in_r = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_r = 1U;
        vlSelfRef.__PVT__tag1_write_r = 1U;
        vlSelfRef.__PVT__tag_data_in_r = 0U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_r = (((IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rvalid_i) 
                                          & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rlast_i)) 
                                         & (~ (IData)(vlSelfRef.__PVT__replace_way_q)));
        vlSelfRef.__PVT__tag1_write_r = (((IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rvalid_i) 
                                          & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_i_rlast_i)) 
                                         & (IData)(vlSelfRef.__PVT__replace_way_q));
        vlSelfRef.__PVT__tag_data_in_r = (0x80000U 
                                          | (vlSelfRef.__PVT__lookup_addr_q 
                                             >> 0xdU));
    }
}

VL_INLINE_OPT void Vriscv_top_icache___nba_comb__TOP__v__u_icache__0(Vriscv_top_icache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_icache___nba_comb__TOP__v__u_icache__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
