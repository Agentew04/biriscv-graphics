// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_dcache.h"

VL_INLINE_OPT void Vriscv_top_dcache___ico_sequent__TOP__v__u_dcache__0(Vriscv_top_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_dcache___ico_sequent__TOP__v__u_dcache__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_axi__DOT__accept_w = (((IData)(vlSymsp->TOP.__Vcellout__v__axi_d_awvalid_o) 
                                              & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_awready_i)) 
                                             | (((IData)(vlSymsp->TOP.__Vcellout__v__axi_d_wvalid_o) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_valid_q)) 
                                                    & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_wready_i))) 
                                                | ((IData)(vlSymsp->TOP.__Vcellout__v__axi_d_arvalid_o) 
                                                   & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_arready_i))));
    vlSelfRef.__PVT__u_axi__DOT__resp_pop_w = ((IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_bvalid_i) 
                                               | ((IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_rlast_i) 
                                                  & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_rvalid_i)));
    vlSelfRef.__PVT__pmem_error_w = ((IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_bvalid_i)
                                      ? (0U != (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_bresp_i))
                                      : (0U != (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_rresp_i)));
    vlSelfRef.__PVT__pmem_ack_w = ((IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_bvalid_i) 
                                   | (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_rvalid_i));
    vlSelfRef.__PVT__u_axi__DOT__res_push_w = ((((IData)(vlSelfRef.__PVT__u_axi__DOT__req_is_write_w) 
                                                 & ((0U 
                                                     == (IData)(vlSymsp->TOP.__Vcellout__v__axi_d_awlen_o)) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.__PVT__u_axi__DOT__req_cnt_q)))) 
                                                | ((IData)(vlSelfRef.__PVT__u_axi__DOT__req_can_issue_w) 
                                                   & (IData)(vlSelfRef.u_axi__DOT____VdfgRegularize_h2534fa66_0_0))) 
                                               & (IData)(vlSelfRef.__PVT__u_axi__DOT__accept_w));
    vlSelfRef.__PVT__pmem_cache_ack_w = ((IData)(vlSelfRef.__PVT__pmem_ack_w) 
                                         & (IData)(vlSelfRef.__PVT__u_pmem_mux__DOT__select_q));
    vlSelfRef.__PVT__mem_uncached_ack_w = ((IData)(vlSelfRef.__PVT__u_uncached__DOT__dropped_q) 
                                           | ((~ (IData)(vlSelfRef.__PVT__u_pmem_mux__DOT__select_q)) 
                                              & (IData)(vlSelfRef.__PVT__pmem_ack_w)));
    vlSelfRef.u_uncached__DOT____VdfgRegularize_h08c420ae_0_1 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__mem_uncached_ack_w)) 
               & (IData)(vlSelfRef.__PVT__u_uncached__DOT__request_pending_q))) 
           & (0U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q)));
    vlSelfRef.__PVT__u_uncached__DOT__req_is_drop_w 
        = ((IData)(vlSelfRef.u_uncached__DOT____VdfgRegularize_h08c420ae_0_1) 
           & (vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q
              [vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][2U] 
              >> 5U));
    vlSelfRef.__PVT__pmem_uncached_rd_w = ((IData)(vlSelfRef.u_uncached__DOT____VdfgRegularize_h08c420ae_0_1) 
                                           & (IData)(vlSelfRef.u_uncached__DOT____VdfgRegularize_h08c420ae_0_0));
    vlSelfRef.__PVT__pmem_uncached_wr_w = (((~ (IData)(vlSelfRef.u_uncached__DOT____VdfgRegularize_h08c420ae_0_0)) 
                                            & (IData)(vlSelfRef.u_uncached__DOT____VdfgRegularize_h08c420ae_0_1))
                                            ? (0xfU 
                                               & vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                               [vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][2U])
                                            : 0U);
    vlSelfRef.__PVT__u_uncached__DOT__request_complete_w 
        = ((IData)(vlSelfRef.__PVT__u_uncached__DOT__req_is_drop_w) 
           | (((IData)(vlSelfRef.__PVT__pmem_uncached_rd_w) 
               | (0U != (IData)(vlSelfRef.__PVT__pmem_uncached_wr_w))) 
              & ((~ (IData)(vlSelfRef.__PVT__pmem_select_w)) 
                 & (2U != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q)))));
    vlSelfRef.__PVT__pmem_wr_w = ((IData)(vlSelfRef.__PVT__pmem_select_w)
                                   ? (IData)(vlSelfRef.__PVT__pmem_cache_wr_w)
                                   : (IData)(vlSelfRef.__PVT__pmem_uncached_wr_w));
}

VL_INLINE_OPT void Vriscv_top_dcache___ico_sequent__TOP__v__u_dcache__1(Vriscv_top_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_dcache___ico_sequent__TOP__v__u_dcache__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__mem_uncached_wr_w = ((IData)(vlSelfRef.u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_2)
                                           ? (IData)(vlSymsp->TOP__v.__PVT__dcache_wr_w)
                                           : 0U);
    vlSelfRef.__PVT__u_mux__DOT__request_w = ((IData)(vlSymsp->TOP__v.__PVT__dcache_rd_w) 
                                              | ((0U 
                                                  != (IData)(vlSymsp->TOP__v.__PVT__dcache_wr_w)) 
                                                 | ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_flush_q) 
                                                    | ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
                                                       | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_writeback_q)))));
    vlSelfRef.__PVT__mem_uncached_rd_w = ((IData)(vlSelfRef.u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_2) 
                                          & (IData)(vlSymsp->TOP__v.__PVT__dcache_rd_w));
    vlSelfRef.__PVT__mem_cached_rd_w = ((IData)(vlSelfRef.u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_4) 
                                        & (IData)(vlSymsp->TOP__v.__PVT__dcache_rd_w));
    vlSelfRef.__PVT__u_uncached__DOT__request_w = ((IData)(vlSelfRef.__PVT__u_uncached__DOT__drop_req_w) 
                                                   | ((IData)(vlSelfRef.__PVT__mem_uncached_rd_w) 
                                                      | (0U 
                                                         != (IData)(vlSelfRef.__PVT__mem_uncached_wr_w))));
    vlSelfRef.__PVT__mem_cached_accept_w = ((~ (((~ (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag_hit_any_m_w)) 
                                                 & ((IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_rd_m_q) 
                                                    | (0U 
                                                       != (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_wr_m_q)))) 
                                                | ((0U 
                                                    != (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_wr_m_q)) 
                                                   & ((IData)(vlSelfRef.__PVT__mem_cached_rd_w) 
                                                      & ((vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q 
                                                          >> 2U) 
                                                         == 
                                                         (vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_addr_m_q 
                                                          >> 2U)))))) 
                                            & (3U == (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__state_q)));
    vlSelfRef.__PVT__u_uncached__DOT__req_push_w = 
        ((IData)(vlSelfRef.__PVT__u_uncached__DOT__request_w) 
         & (2U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q)));
    vlSelfRef.__PVT__u_uncached__DOT__res_push_w = 
        ((IData)(vlSelfRef.__PVT__u_uncached__DOT__request_w) 
         & (2U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q)));
}

VL_INLINE_OPT void Vriscv_top_dcache___ico_sequent__TOP__v__u_dcache__2(Vriscv_top_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_dcache___ico_sequent__TOP__v__u_dcache__2\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_3;
    u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_3 = 0;
    // Body
    vlSelfRef.__PVT__pmem_cache_rd_w = (((6U != (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__state_q)) 
                                         & (6U == (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__next_state_r))) 
                                        | (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_rd_q));
    u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_3 = ((IData)(vlSelfRef.__PVT__u_mux__DOT__request_w) 
                                                  & (IData)(vlSymsp->TOP__v.__PVT__dcache_accept_w));
    vlSelfRef.__PVT__pmem_cache_len_w = (((IData)(vlSelfRef.__PVT__pmem_cache_rd_w) 
                                          | (IData)(vlSymsp->TOP__v__u_dcache__u_core.__VdfgRegularize_h2088a453_0_5))
                                          ? 7U : 0U);
    vlSelfRef.__PVT__pmem_cache_addr_w = ((IData)(vlSelfRef.__PVT__pmem_cache_rd_w)
                                           ? (0xffffffe0U 
                                              & vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_addr_m_q)
                                           : ((IData)(vlSymsp->TOP__v__u_dcache__u_core.__VdfgRegularize_h2088a453_0_5)
                                               ? (vlSymsp->TOP__v__u_dcache__u_core.__PVT__evict_addr_r 
                                                  << 5U)
                                               : vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_addr_q));
    vlSelfRef.__PVT__pmem_rd_w = ((IData)(vlSelfRef.__PVT__pmem_select_w)
                                   ? (IData)(vlSelfRef.__PVT__pmem_cache_rd_w)
                                   : (IData)(vlSelfRef.__PVT__pmem_uncached_rd_w));
    vlSelfRef.__PVT__u_mux__DOT__pending_r = vlSelfRef.__PVT__u_mux__DOT__pending_q;
    if (((~ (IData)(vlSymsp->TOP__v.__PVT__dcache_ack_w)) 
         & (IData)(u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_3))) {
        vlSelfRef.__PVT__u_mux__DOT__pending_r = (0x1fU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.__PVT__u_mux__DOT__pending_r)));
    } else if (((~ (IData)(u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_3)) 
                & (IData)(vlSymsp->TOP__v.__PVT__dcache_ack_w))) {
        vlSelfRef.__PVT__u_mux__DOT__pending_r = (0x1fU 
                                                  & ((IData)(vlSelfRef.__PVT__u_mux__DOT__pending_r) 
                                                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__u_axi__DOT__req_push_w = ((IData)(vlSelfRef.__PVT__pmem_rd_w) 
                                               | (0U 
                                                  != (IData)(vlSelfRef.__PVT__pmem_wr_w)));
}

VL_INLINE_OPT void Vriscv_top_dcache___act_sequent__TOP__v__u_dcache__0(Vriscv_top_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_dcache___act_sequent__TOP__v__u_dcache__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pmem_cache_wr_w = ((((7U == (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__state_q)) 
                                          & ((IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__evict_way_w) 
                                             | (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_writeback_m_q))) 
                                         | (0U != (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_wr_q)))
                                         ? 0xfU : 0U);
    vlSelfRef.__PVT__pmem_wr_w = ((IData)(vlSelfRef.__PVT__pmem_select_w)
                                   ? (IData)(vlSelfRef.__PVT__pmem_cache_wr_w)
                                   : (IData)(vlSelfRef.__PVT__pmem_uncached_wr_w));
}

VL_INLINE_OPT void Vriscv_top_dcache___nba_sequent__TOP__v__u_dcache__0(Vriscv_top_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_dcache___nba_sequent__TOP__v__u_dcache__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vdly__u_uncached__DOT__u_req__DOT__count_q;
    __Vdly__u_uncached__DOT__u_req__DOT__count_q = 0;
    CData/*0:0*/ __Vdly__u_uncached__DOT__u_req__DOT__rd_ptr_q;
    __Vdly__u_uncached__DOT__u_req__DOT__rd_ptr_q = 0;
    CData/*0:0*/ __Vdly__u_uncached__DOT__u_req__DOT__wr_ptr_q;
    __Vdly__u_uncached__DOT__u_req__DOT__wr_ptr_q = 0;
    CData/*1:0*/ __Vdly__u_uncached__DOT__u_resp__DOT__count_q;
    __Vdly__u_uncached__DOT__u_resp__DOT__count_q = 0;
    CData/*0:0*/ __Vdly__u_uncached__DOT__u_resp__DOT__rd_ptr_q;
    __Vdly__u_uncached__DOT__u_resp__DOT__rd_ptr_q = 0;
    CData/*0:0*/ __Vdly__u_uncached__DOT__u_resp__DOT__wr_ptr_q;
    __Vdly__u_uncached__DOT__u_resp__DOT__wr_ptr_q = 0;
    CData/*7:0*/ __Vdly__u_axi__DOT__req_cnt_q;
    __Vdly__u_axi__DOT__req_cnt_q = 0;
    CData/*1:0*/ __Vdly__u_axi__DOT__resp_outstanding_q;
    __Vdly__u_axi__DOT__resp_outstanding_q = 0;
    CData/*1:0*/ __Vdly__u_axi__DOT__u_req__DOT__count_q;
    __Vdly__u_axi__DOT__u_req__DOT__count_q = 0;
    CData/*0:0*/ __Vdly__u_axi__DOT__u_req__DOT__rd_ptr_q;
    __Vdly__u_axi__DOT__u_req__DOT__rd_ptr_q = 0;
    CData/*0:0*/ __Vdly__u_axi__DOT__u_req__DOT__wr_ptr_q;
    __Vdly__u_axi__DOT__u_req__DOT__wr_ptr_q = 0;
    CData/*7:0*/ __Vdly__u_axi__DOT__u_axi__DOT__req_cnt_q;
    __Vdly__u_axi__DOT__u_axi__DOT__req_cnt_q = 0;
    VlWide<3>/*69:0*/ __VdlyVal__u_uncached__DOT__u_req__DOT__ram_q__v0;
    VL_ZERO_W(70, __VdlyVal__u_uncached__DOT__u_req__DOT__ram_q__v0);
    CData/*0:0*/ __VdlyDim0__u_uncached__DOT__u_req__DOT__ram_q__v0;
    __VdlyDim0__u_uncached__DOT__u_req__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_uncached__DOT__u_req__DOT__ram_q__v0;
    __VdlySet__u_uncached__DOT__u_req__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlyDim0__u_uncached__DOT__u_resp__DOT__ram_q__v0;
    __VdlyDim0__u_uncached__DOT__u_resp__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_uncached__DOT__u_resp__DOT__ram_q__v0;
    __VdlySet__u_uncached__DOT__u_resp__DOT__ram_q__v0 = 0;
    VlWide<3>/*76:0*/ __VdlyVal__u_axi__DOT__u_req__DOT__ram_q__v0;
    VL_ZERO_W(77, __VdlyVal__u_axi__DOT__u_req__DOT__ram_q__v0);
    CData/*0:0*/ __VdlyDim0__u_axi__DOT__u_req__DOT__ram_q__v0;
    __VdlyDim0__u_axi__DOT__u_req__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_axi__DOT__u_req__DOT__ram_q__v0;
    __VdlySet__u_axi__DOT__u_req__DOT__ram_q__v0 = 0;
    // Body
    __Vdly__u_axi__DOT__req_cnt_q = vlSelfRef.__PVT__u_axi__DOT__req_cnt_q;
    __Vdly__u_axi__DOT__resp_outstanding_q = vlSelfRef.__PVT__u_axi__DOT__resp_outstanding_q;
    __Vdly__u_uncached__DOT__u_resp__DOT__wr_ptr_q 
        = vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__wr_ptr_q;
    __VdlySet__u_uncached__DOT__u_resp__DOT__ram_q__v0 = 0U;
    __Vdly__u_axi__DOT__u_req__DOT__rd_ptr_q = vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q;
    __Vdly__u_axi__DOT__u_axi__DOT__req_cnt_q = vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q;
    __Vdly__u_axi__DOT__u_req__DOT__count_q = vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q;
    __Vdly__u_uncached__DOT__u_req__DOT__rd_ptr_q = vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q;
    __Vdly__u_axi__DOT__u_req__DOT__wr_ptr_q = vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q;
    __VdlySet__u_axi__DOT__u_req__DOT__ram_q__v0 = 0U;
    __Vdly__u_uncached__DOT__u_req__DOT__count_q = vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q;
    __Vdly__u_uncached__DOT__u_resp__DOT__rd_ptr_q 
        = vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q;
    __Vdly__u_uncached__DOT__u_resp__DOT__count_q = vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q;
    __Vdly__u_uncached__DOT__u_req__DOT__wr_ptr_q = vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__wr_ptr_q;
    __VdlySet__u_uncached__DOT__u_req__DOT__ram_q__v0 = 0U;
    vlSelfRef.__PVT__pmem_cache_wr_w = ((((7U == (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__state_q)) 
                                          & ((IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__evict_way_w) 
                                             | (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_writeback_m_q))) 
                                         | (0U != (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_wr_q)))
                                         ? 0xfU : 0U);
    if (vlSymsp->TOP.__Vcellinp__v__rst_i) {
        __Vdly__u_axi__DOT__req_cnt_q = 0U;
        __Vdly__u_axi__DOT__resp_outstanding_q = 0U;
        __Vdly__u_uncached__DOT__u_resp__DOT__wr_ptr_q = 0U;
        __Vdly__u_axi__DOT__u_req__DOT__rd_ptr_q = 0U;
        __Vdly__u_axi__DOT__u_axi__DOT__req_cnt_q = 0U;
        __Vdly__u_axi__DOT__u_req__DOT__count_q = 0U;
        __Vdly__u_uncached__DOT__u_req__DOT__rd_ptr_q = 0U;
        __Vdly__u_axi__DOT__u_req__DOT__wr_ptr_q = 0U;
        __Vdly__u_uncached__DOT__u_req__DOT__count_q = 0U;
        __Vdly__u_uncached__DOT__u_resp__DOT__rd_ptr_q = 0U;
        __Vdly__u_uncached__DOT__u_resp__DOT__count_q = 0U;
        __Vdly__u_uncached__DOT__u_req__DOT__wr_ptr_q = 0U;
        vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q = 0ULL;
        vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__awvalid_inhibit_q = 0U;
        vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_valid_q = 0U;
        vlSelfRef.__PVT__u_mux__DOT__pending_q = 0U;
        vlSelfRef.__PVT__u_uncached__DOT__request_pending_q = 0U;
        vlSelfRef.__PVT__u_mux__DOT__cache_access_q = 0U;
        vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wvalid_inhibit_q = 0U;
    } else {
        if (((((IData)(vlSelfRef.__PVT__u_axi__DOT__req_is_write_w) 
               & (0U == (IData)(vlSelfRef.__PVT__u_axi__DOT__req_cnt_q))) 
              & (0U != (IData)(vlSymsp->TOP.__Vcellout__v__axi_d_awlen_o))) 
             & (IData)(vlSelfRef.__PVT__u_axi__DOT__accept_w))) {
            __Vdly__u_axi__DOT__req_cnt_q = (0xffU 
                                             & ((IData)(vlSymsp->TOP.__Vcellout__v__axi_d_awlen_o) 
                                                - (IData)(1U)));
        } else if ((((0U != (IData)(vlSelfRef.__PVT__u_axi__DOT__req_cnt_q)) 
                     & (IData)(vlSelfRef.__PVT__u_axi__DOT__req_is_write_w)) 
                    & (IData)(vlSelfRef.__PVT__u_axi__DOT__accept_w))) {
            __Vdly__u_axi__DOT__req_cnt_q = (0xffU 
                                             & ((IData)(vlSelfRef.__PVT__u_axi__DOT__req_cnt_q) 
                                                - (IData)(1U)));
        }
        if ((((IData)(vlSelfRef.__PVT__u_axi__DOT__res_push_w) 
              & (IData)(vlSelfRef.__PVT__u_axi__DOT__res_accept_w)) 
             & (~ ((IData)(vlSelfRef.__PVT__u_axi__DOT__resp_pop_w) 
                   & (IData)(vlSelfRef.__PVT__u_axi__DOT__res_valid_w))))) {
            __Vdly__u_axi__DOT__resp_outstanding_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_axi__DOT__resp_outstanding_q)));
        } else if (((~ ((IData)(vlSelfRef.__PVT__u_axi__DOT__res_push_w) 
                        & (IData)(vlSelfRef.__PVT__u_axi__DOT__res_accept_w))) 
                    & ((IData)(vlSelfRef.__PVT__u_axi__DOT__resp_pop_w) 
                       & (IData)(vlSelfRef.__PVT__u_axi__DOT__res_valid_w)))) {
            __Vdly__u_axi__DOT__resp_outstanding_q 
                = (3U & ((IData)(vlSelfRef.__PVT__u_axi__DOT__resp_outstanding_q) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__u_uncached__DOT__res_push_w) 
             & (2U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q)))) {
            __VdlyDim0__u_uncached__DOT__u_resp__DOT__ram_q__v0 
                = vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__wr_ptr_q;
            __VdlySet__u_uncached__DOT__u_resp__DOT__ram_q__v0 = 1U;
            __Vdly__u_uncached__DOT__u_resp__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__wr_ptr_q)));
        }
        if (((IData)(vlSelfRef.__PVT__u_axi__DOT__accept_w) 
             & (0U != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q)))) {
            __Vdly__u_axi__DOT__u_req__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q)));
        }
        if (((IData)(vlSymsp->TOP.__Vcellout__v__axi_d_awvalid_o) 
             & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_awready_i))) {
            __Vdly__u_axi__DOT__u_axi__DOT__req_cnt_q 
                = (0xffU & ((1U & ((~ (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_wready_i)) 
                                   & (~ (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wvalid_inhibit_q))))
                             ? ((IData)(1U) + (IData)(vlSymsp->TOP.__Vcellout__v__axi_d_awlen_o))
                             : (IData)(vlSymsp->TOP.__Vcellout__v__axi_d_awlen_o)));
        } else if ((((0U != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q)) 
                     & (IData)(vlSymsp->TOP.__Vcellout__v__axi_d_wvalid_o)) 
                    & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_wready_i))) {
            __Vdly__u_axi__DOT__u_axi__DOT__req_cnt_q 
                = (0xffU & ((IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q) 
                            - (IData)(1U)));
        }
        if ((((IData)(vlSelfRef.__PVT__u_axi__DOT__req_push_w) 
              & (IData)(vlSelfRef.__PVT__pmem_accept_w)) 
             & (~ ((IData)(vlSelfRef.__PVT__u_axi__DOT__accept_w) 
                   & (IData)(vlSelfRef.__PVT__u_axi__DOT__req_valid_w))))) {
            __Vdly__u_axi__DOT__u_req__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q)));
        } else if (((~ ((IData)(vlSelfRef.__PVT__u_axi__DOT__req_push_w) 
                        & (IData)(vlSelfRef.__PVT__pmem_accept_w))) 
                    & ((IData)(vlSelfRef.__PVT__u_axi__DOT__accept_w) 
                       & (IData)(vlSelfRef.__PVT__u_axi__DOT__req_valid_w)))) {
            __Vdly__u_axi__DOT__u_req__DOT__count_q 
                = (3U & ((IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__u_uncached__DOT__request_complete_w) 
             & (0U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q)))) {
            __Vdly__u_uncached__DOT__u_req__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q)));
        }
        if (((IData)(vlSelfRef.__PVT__u_axi__DOT__req_push_w) 
             & (2U != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q)))) {
            if (vlSelfRef.__PVT__pmem_select_w) {
                __VdlyVal__u_axi__DOT__u_req__DOT__ram_q__v0[0U] 
                    = vlSelfRef.__PVT__pmem_cache_addr_w;
                __VdlyVal__u_axi__DOT__u_req__DOT__ram_q__v0[1U] 
                    = vlSelfRef.__PVT__pmem_cache_write_data_w;
            } else {
                __VdlyVal__u_axi__DOT__u_req__DOT__ram_q__v0[0U] 
                    = (0xfffffffcU & vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                       [vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][0U]);
                __VdlyVal__u_axi__DOT__u_req__DOT__ram_q__v0[1U] 
                    = vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                    [vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][1U];
            }
            __VdlyVal__u_axi__DOT__u_req__DOT__ram_q__v0[2U] 
                = (0x1fffU & ((((IData)(vlSelfRef.__PVT__pmem_select_w)
                                 ? (IData)(vlSelfRef.__PVT__pmem_cache_len_w)
                                 : 0U) << 5U) | (((IData)(vlSelfRef.__PVT__pmem_rd_w) 
                                                  << 4U) 
                                                 | (IData)(vlSelfRef.__PVT__pmem_wr_w))));
            __VdlyDim0__u_axi__DOT__u_req__DOT__ram_q__v0 
                = vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q;
            __VdlySet__u_axi__DOT__u_req__DOT__ram_q__v0 = 1U;
            __Vdly__u_axi__DOT__u_req__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q)));
        }
        if ((((IData)(vlSelfRef.__PVT__u_uncached__DOT__req_push_w) 
              & (IData)(vlSelfRef.__PVT__u_uncached__DOT__req_accept_w)) 
             & (~ ((IData)(vlSelfRef.__PVT__u_uncached__DOT__request_complete_w) 
                   & (IData)(vlSelfRef.__PVT__u_uncached__DOT__req_valid_w))))) {
            __Vdly__u_uncached__DOT__u_req__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q)));
        } else if (((~ ((IData)(vlSelfRef.__PVT__u_uncached__DOT__req_push_w) 
                        & (IData)(vlSelfRef.__PVT__u_uncached__DOT__req_accept_w))) 
                    & ((IData)(vlSelfRef.__PVT__u_uncached__DOT__request_complete_w) 
                       & (IData)(vlSelfRef.__PVT__u_uncached__DOT__req_valid_w)))) {
            __Vdly__u_uncached__DOT__u_req__DOT__count_q 
                = (3U & ((IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__mem_uncached_ack_w) 
             & (0U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q)))) {
            __Vdly__u_uncached__DOT__u_resp__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q)));
        }
        if ((((IData)(vlSelfRef.__PVT__u_uncached__DOT__res_push_w) 
              & (IData)(vlSelfRef.__PVT__u_uncached__DOT__res_accept_w)) 
             & (~ ((IData)(vlSelfRef.__PVT__mem_uncached_ack_w) 
                   & (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__valid_o))))) {
            __Vdly__u_uncached__DOT__u_resp__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q)));
        } else if (((~ ((IData)(vlSelfRef.__PVT__u_uncached__DOT__res_push_w) 
                        & (IData)(vlSelfRef.__PVT__u_uncached__DOT__res_accept_w))) 
                    & ((IData)(vlSelfRef.__PVT__mem_uncached_ack_w) 
                       & (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__valid_o)))) {
            __Vdly__u_uncached__DOT__u_resp__DOT__count_q 
                = (3U & ((IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__u_uncached__DOT__req_push_w) 
             & (2U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q)))) {
            __VdlyVal__u_uncached__DOT__u_req__DOT__ram_q__v0[0U] 
                = (IData)((((QData)((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_wr_q)) 
                            << 0x20U) | (QData)((IData)(
                                                        (0xfffffffcU 
                                                         & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q)))));
            __VdlyVal__u_uncached__DOT__u_req__DOT__ram_q__v0[1U] 
                = (IData)(((((QData)((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_wr_q)) 
                             << 0x20U) | (QData)((IData)(
                                                         (0xfffffffcU 
                                                          & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q)))) 
                           >> 0x20U));
            __VdlyVal__u_uncached__DOT__u_req__DOT__ram_q__v0[2U] 
                = (0x3fU & (((IData)(vlSelfRef.__PVT__u_uncached__DOT__drop_req_w) 
                             << 5U) | (((IData)(vlSelfRef.__PVT__mem_uncached_rd_w) 
                                        << 4U) | (IData)(vlSelfRef.__PVT__mem_uncached_wr_w))));
            __VdlyDim0__u_uncached__DOT__u_req__DOT__ram_q__v0 
                = vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__wr_ptr_q;
            __VdlySet__u_uncached__DOT__u_req__DOT__ram_q__v0 = 1U;
            __Vdly__u_uncached__DOT__u_req__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__wr_ptr_q)));
        }
        vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_q 
            = (((QData)((IData)(vlSymsp->TOP.__Vcellout__v__axi_d_wlast_o)) 
                << 0x24U) | (((QData)((IData)(vlSymsp->TOP.__Vcellout__v__axi_d_wstrb_o)) 
                              << 0x20U) | (QData)((IData)(vlSymsp->TOP.__Vcellout__v__axi_d_wdata_o))));
        if (((((IData)(vlSymsp->TOP.__Vcellout__v__axi_d_awvalid_o) 
               & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_awready_i)) 
              & (IData)(vlSymsp->TOP.__Vcellout__v__axi_d_wvalid_o)) 
             & (~ (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_wready_i)))) {
            vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__awvalid_inhibit_q = 1U;
        } else if ((((IData)(vlSymsp->TOP.__Vcellout__v__axi_d_awvalid_o) 
                     & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_awready_i)) 
                    & (0U != (IData)(vlSymsp->TOP.__Vcellout__v__axi_d_awlen_o)))) {
            vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__awvalid_inhibit_q = 1U;
        } else if ((((IData)(vlSymsp->TOP.__Vcellout__v__axi_d_wvalid_o) 
                     & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_wready_i)) 
                    & (IData)(vlSymsp->TOP.__Vcellout__v__axi_d_wlast_o))) {
            vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__awvalid_inhibit_q = 0U;
        }
        if (((((IData)(vlSymsp->TOP.__Vcellout__v__axi_d_wvalid_o) 
               & (~ (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_wready_i))) 
              & (IData)(vlSymsp->TOP.__Vcellout__v__axi_d_awvalid_o)) 
             & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_awready_i))) {
            vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_valid_q = 1U;
        } else if (vlSymsp->TOP.__Vcellinp__v__axi_d_wready_i) {
            vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_valid_q = 0U;
        }
        vlSelfRef.__PVT__u_mux__DOT__pending_q = vlSelfRef.__PVT__u_mux__DOT__pending_r;
        if (vlSelfRef.__PVT__u_uncached__DOT__request_complete_w) {
            vlSelfRef.__PVT__u_uncached__DOT__request_pending_q = 1U;
        } else if (vlSelfRef.__PVT__mem_uncached_ack_w) {
            vlSelfRef.__PVT__u_uncached__DOT__request_pending_q = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__u_mux__DOT__request_w) 
             & (IData)(vlSymsp->TOP__v.__PVT__dcache_accept_w))) {
            vlSelfRef.__PVT__u_mux__DOT__cache_access_q 
                = vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_cacheable_q;
        }
        if (((((IData)(vlSymsp->TOP.__Vcellout__v__axi_d_wvalid_o) 
               & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_wready_i)) 
              & (IData)(vlSymsp->TOP.__Vcellout__v__axi_d_awvalid_o)) 
             & (~ (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_awready_i)))) {
            vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wvalid_inhibit_q = 1U;
        } else if (((IData)(vlSymsp->TOP.__Vcellout__v__axi_d_awvalid_o) 
                    & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_awready_i))) {
            vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__wvalid_inhibit_q = 0U;
        }
    }
    vlSelfRef.__PVT__u_uncached__DOT__dropped_q = (
                                                   (~ (IData)(vlSymsp->TOP.__Vcellinp__v__rst_i)) 
                                                   & (IData)(vlSelfRef.__PVT__u_uncached__DOT__req_is_drop_w));
    vlSelfRef.__PVT__u_pmem_mux__DOT__select_q = ((~ (IData)(vlSymsp->TOP.__Vcellinp__v__rst_i)) 
                                                  & (IData)(vlSelfRef.__PVT__pmem_select_w));
    vlSelfRef.__PVT__u_axi__DOT__req_cnt_q = __Vdly__u_axi__DOT__req_cnt_q;
    vlSelfRef.__PVT__u_axi__DOT__resp_outstanding_q 
        = __Vdly__u_axi__DOT__resp_outstanding_q;
    vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__wr_ptr_q 
        = __Vdly__u_uncached__DOT__u_resp__DOT__wr_ptr_q;
    if (__VdlySet__u_uncached__DOT__u_resp__DOT__ram_q__v0) {
        vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__ram_q[__VdlyDim0__u_uncached__DOT__u_resp__DOT__ram_q__v0] = 0U;
    }
    vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q 
        = __Vdly__u_axi__DOT__u_req__DOT__rd_ptr_q;
    vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q 
        = __Vdly__u_axi__DOT__u_axi__DOT__req_cnt_q;
    vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q 
        = __Vdly__u_axi__DOT__u_req__DOT__wr_ptr_q;
    vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q 
        = __Vdly__u_uncached__DOT__u_req__DOT__rd_ptr_q;
    if (__VdlySet__u_axi__DOT__u_req__DOT__ram_q__v0) {
        vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__ram_q[__VdlyDim0__u_axi__DOT__u_req__DOT__ram_q__v0][0U] 
            = __VdlyVal__u_axi__DOT__u_req__DOT__ram_q__v0[0U];
        vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__ram_q[__VdlyDim0__u_axi__DOT__u_req__DOT__ram_q__v0][1U] 
            = __VdlyVal__u_axi__DOT__u_req__DOT__ram_q__v0[1U];
        vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__ram_q[__VdlyDim0__u_axi__DOT__u_req__DOT__ram_q__v0][2U] 
            = __VdlyVal__u_axi__DOT__u_req__DOT__ram_q__v0[2U];
    }
    vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q 
        = __Vdly__u_axi__DOT__u_req__DOT__count_q;
    vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q 
        = __Vdly__u_uncached__DOT__u_resp__DOT__rd_ptr_q;
    vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q 
        = __Vdly__u_uncached__DOT__u_resp__DOT__count_q;
    vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__wr_ptr_q 
        = __Vdly__u_uncached__DOT__u_req__DOT__wr_ptr_q;
    if (__VdlySet__u_uncached__DOT__u_req__DOT__ram_q__v0) {
        vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q[__VdlyDim0__u_uncached__DOT__u_req__DOT__ram_q__v0][0U] 
            = __VdlyVal__u_uncached__DOT__u_req__DOT__ram_q__v0[0U];
        vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q[__VdlyDim0__u_uncached__DOT__u_req__DOT__ram_q__v0][1U] 
            = __VdlyVal__u_uncached__DOT__u_req__DOT__ram_q__v0[1U];
        vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q[__VdlyDim0__u_uncached__DOT__u_req__DOT__ram_q__v0][2U] 
            = __VdlyVal__u_uncached__DOT__u_req__DOT__ram_q__v0[2U];
    }
    vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q 
        = __Vdly__u_uncached__DOT__u_req__DOT__count_q;
    vlSelfRef.__PVT__u_axi__DOT__res_accept_w = (2U 
                                                 != (IData)(vlSelfRef.__PVT__u_axi__DOT__resp_outstanding_q));
    vlSelfRef.__PVT__u_axi__DOT__res_valid_w = (0U 
                                                != (IData)(vlSelfRef.__PVT__u_axi__DOT__resp_outstanding_q));
    vlSelfRef.u_axi__DOT____VdfgRegularize_h2534fa66_0_0 
        = (1U & (vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__ram_q
                 [vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][2U] 
                 >> 4U));
    vlSelfRef.__PVT__pmem_accept_w = (2U != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q));
    vlSelfRef.__PVT__u_axi__DOT__req_valid_w = (0U 
                                                != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q));
    vlSelfRef.__PVT__u_axi__DOT__req_can_issue_w = 
        ((0U != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q)) 
         & (2U != (IData)(vlSelfRef.__PVT__u_axi__DOT__resp_outstanding_q)));
    vlSelfRef.__PVT__u_uncached__DOT__res_accept_w 
        = (2U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q));
    vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__valid_o 
        = (0U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q));
    vlSelfRef.u_uncached__DOT____VdfgRegularize_h08c420ae_0_0 
        = (1U & (vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                 [vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][2U] 
                 >> 4U));
    vlSelfRef.__PVT__u_uncached__DOT__req_valid_w = 
        (0U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q));
    vlSelfRef.__PVT__u_uncached__DOT__req_accept_w 
        = (2U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q));
    vlSelfRef.__PVT__pmem_cache_ack_w = ((IData)(vlSelfRef.__PVT__pmem_ack_w) 
                                         & (IData)(vlSelfRef.__PVT__u_pmem_mux__DOT__select_q));
    vlSelfRef.__PVT__mem_uncached_ack_w = ((IData)(vlSelfRef.__PVT__u_uncached__DOT__dropped_q) 
                                           | ((~ (IData)(vlSelfRef.__PVT__u_pmem_mux__DOT__select_q)) 
                                              & (IData)(vlSelfRef.__PVT__pmem_ack_w)));
    vlSelfRef.__PVT__u_axi__DOT__req_is_write_w = (
                                                   (~ (IData)(vlSelfRef.u_axi__DOT____VdfgRegularize_h2534fa66_0_0)) 
                                                   & (IData)(vlSelfRef.__PVT__u_axi__DOT__req_can_issue_w));
    vlSelfRef.u_uncached__DOT____VdfgRegularize_h08c420ae_0_1 
        = ((~ ((~ (IData)(vlSelfRef.__PVT__mem_uncached_ack_w)) 
               & (IData)(vlSelfRef.__PVT__u_uncached__DOT__request_pending_q))) 
           & (0U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q)));
    vlSelfRef.u_axi__DOT__u_axi__DOT____VdfgRegularize_h88420251_0_0 
        = ((IData)(vlSelfRef.__PVT__u_axi__DOT__req_can_issue_w) 
           & (IData)(vlSelfRef.__PVT__u_axi__DOT__req_is_write_w));
    vlSelfRef.__PVT__u_uncached__DOT__req_is_drop_w 
        = ((IData)(vlSelfRef.u_uncached__DOT____VdfgRegularize_h08c420ae_0_1) 
           & (vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q
              [vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][2U] 
              >> 5U));
    vlSelfRef.__PVT__pmem_uncached_rd_w = ((IData)(vlSelfRef.u_uncached__DOT____VdfgRegularize_h08c420ae_0_1) 
                                           & (IData)(vlSelfRef.u_uncached__DOT____VdfgRegularize_h08c420ae_0_0));
    vlSelfRef.__PVT__pmem_uncached_wr_w = (((~ (IData)(vlSelfRef.u_uncached__DOT____VdfgRegularize_h08c420ae_0_0)) 
                                            & (IData)(vlSelfRef.u_uncached__DOT____VdfgRegularize_h08c420ae_0_1))
                                            ? (0xfU 
                                               & vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                               [vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][2U])
                                            : 0U);
}

VL_INLINE_OPT void Vriscv_top_dcache___nba_sequent__TOP__v__u_dcache__1(Vriscv_top_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_dcache___nba_sequent__TOP__v__u_dcache__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U != (IData)(vlSelfRef.__PVT__u_mux__DOT__pending_q))) {
        vlSelfRef.__PVT__pmem_select_w = vlSelfRef.__PVT__u_mux__DOT__cache_access_q;
        vlSelfRef.__PVT__u_mux__DOT__hold_w = ((IData)(vlSelfRef.__PVT__u_mux__DOT__cache_access_q) 
                                               != (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_cacheable_q));
    } else {
        vlSelfRef.__PVT__pmem_select_w = vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_cacheable_q;
        vlSelfRef.__PVT__u_mux__DOT__hold_w = 0U;
    }
    vlSelfRef.__PVT__u_axi__DOT__accept_w = (((IData)(vlSymsp->TOP.__Vcellout__v__axi_d_awvalid_o) 
                                              & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_awready_i)) 
                                             | (((IData)(vlSymsp->TOP.__Vcellout__v__axi_d_wvalid_o) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_valid_q)) 
                                                    & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_wready_i))) 
                                                | ((IData)(vlSymsp->TOP.__Vcellout__v__axi_d_arvalid_o) 
                                                   & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_arready_i))));
    vlSelfRef.__PVT__pmem_cache_accept_w = ((2U != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q)) 
                                            & (IData)(vlSelfRef.__PVT__pmem_select_w));
    vlSelfRef.__PVT__u_uncached__DOT__request_complete_w 
        = ((IData)(vlSelfRef.__PVT__u_uncached__DOT__req_is_drop_w) 
           | (((IData)(vlSelfRef.__PVT__pmem_uncached_rd_w) 
               | (0U != (IData)(vlSelfRef.__PVT__pmem_uncached_wr_w))) 
              & ((~ (IData)(vlSelfRef.__PVT__pmem_select_w)) 
                 & (2U != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q)))));
    vlSelfRef.__PVT__pmem_wr_w = ((IData)(vlSelfRef.__PVT__pmem_select_w)
                                   ? (IData)(vlSelfRef.__PVT__pmem_cache_wr_w)
                                   : (IData)(vlSelfRef.__PVT__pmem_uncached_wr_w));
    vlSelfRef.u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_2 
        = (1U & ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_cacheable_q)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_mux__DOT__hold_w))));
    vlSelfRef.u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_4 
        = ((~ (IData)(vlSelfRef.__PVT__u_mux__DOT__hold_w)) 
           & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_cacheable_q));
    vlSelfRef.__PVT__u_axi__DOT__res_push_w = ((((IData)(vlSelfRef.__PVT__u_axi__DOT__req_is_write_w) 
                                                 & ((0U 
                                                     == (IData)(vlSymsp->TOP.__Vcellout__v__axi_d_awlen_o)) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.__PVT__u_axi__DOT__req_cnt_q)))) 
                                                | ((IData)(vlSelfRef.__PVT__u_axi__DOT__req_can_issue_w) 
                                                   & (IData)(vlSelfRef.u_axi__DOT____VdfgRegularize_h2534fa66_0_0))) 
                                               & (IData)(vlSelfRef.__PVT__u_axi__DOT__accept_w));
    vlSelfRef.__PVT__u_uncached__DOT__drop_req_w = 
        ((IData)(vlSelfRef.u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_2) 
         & ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_invalidate_q) 
            | ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_flush_q) 
               | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_writeback_q))));
    vlSelfRef.__PVT__mem_cached_flush_w = ((IData)(vlSelfRef.u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_4) 
                                           & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_flush_q));
    vlSelfRef.__PVT__mem_cached_writeback_w = ((IData)(vlSelfRef.u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_4) 
                                               & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_writeback_q));
    vlSelfRef.__PVT__mem_cached_invalidate_w = ((IData)(vlSelfRef.u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_4) 
                                                & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_invalidate_q));
}

VL_INLINE_OPT void Vriscv_top_dcache___nba_comb__TOP__v__u_dcache__0(Vriscv_top_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_dcache___nba_comb__TOP__v__u_dcache__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pmem_cache_write_data_w = ((0U 
                                                 != (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_wr_q))
                                                 ? vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_write_data_q
                                                 : vlSymsp->TOP__v__u_dcache__u_core.__PVT__evict_data_r);
}
