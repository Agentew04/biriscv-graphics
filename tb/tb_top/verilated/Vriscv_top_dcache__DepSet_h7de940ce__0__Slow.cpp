// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_dcache.h"

VL_ATTR_COLD void Vriscv_top_dcache___stl_sequent__TOP__v__u_dcache__0(Vriscv_top_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_dcache___stl_sequent__TOP__v__u_dcache__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pmem_accept_w = (2U != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q));
    vlSelfRef.__PVT__u_uncached__DOT__req_valid_w = 
        (0U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q));
    vlSelfRef.__PVT__u_uncached__DOT__res_accept_w 
        = (2U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q));
    vlSelfRef.__PVT__u_uncached__DOT__req_accept_w 
        = (2U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__count_q));
    vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__valid_o 
        = (0U != (IData)(vlSelfRef.__PVT__u_uncached__DOT__u_resp__DOT__count_q));
    vlSelfRef.__PVT__u_axi__DOT__req_valid_w = (0U 
                                                != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q));
    vlSelfRef.__PVT__u_axi__DOT__res_accept_w = (2U 
                                                 != (IData)(vlSelfRef.__PVT__u_axi__DOT__resp_outstanding_q));
    vlSelfRef.__PVT__u_axi__DOT__res_valid_w = (0U 
                                                != (IData)(vlSelfRef.__PVT__u_axi__DOT__resp_outstanding_q));
    vlSelfRef.u_uncached__DOT____VdfgRegularize_h08c420ae_0_0 
        = (1U & (vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                 [vlSelfRef.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][2U] 
                 >> 4U));
    vlSelfRef.__PVT__pmem_select_w = ((0U != (IData)(vlSelfRef.__PVT__u_mux__DOT__pending_q))
                                       ? (IData)(vlSelfRef.__PVT__u_mux__DOT__cache_access_q)
                                       : (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_cacheable_q));
    vlSelfRef.u_axi__DOT____VdfgRegularize_h2534fa66_0_0 
        = (1U & (vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__ram_q
                 [vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][2U] 
                 >> 4U));
    vlSelfRef.__PVT__u_axi__DOT__req_can_issue_w = 
        ((0U != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q)) 
         & (2U != (IData)(vlSelfRef.__PVT__u_axi__DOT__resp_outstanding_q)));
    vlSelfRef.__PVT__u_mux__DOT__hold_w = ((0U != (IData)(vlSelfRef.__PVT__u_mux__DOT__pending_q)) 
                                           & ((IData)(vlSelfRef.__PVT__u_mux__DOT__cache_access_q) 
                                              != (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_cacheable_q)));
    vlSelfRef.__PVT__u_axi__DOT__resp_pop_w = ((IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_bvalid_i) 
                                               | ((IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_rlast_i) 
                                                  & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_rvalid_i)));
    vlSelfRef.__PVT__pmem_error_w = ((IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_bvalid_i)
                                      ? (0U != (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_bresp_i))
                                      : (0U != (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_rresp_i)));
    vlSelfRef.__PVT__pmem_ack_w = ((IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_bvalid_i) 
                                   | (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_rvalid_i));
    vlSelfRef.__PVT__pmem_cache_accept_w = ((2U != (IData)(vlSelfRef.__PVT__u_axi__DOT__u_req__DOT__count_q)) 
                                            & (IData)(vlSelfRef.__PVT__pmem_select_w));
    vlSelfRef.__PVT__u_axi__DOT__req_is_write_w = (
                                                   (~ (IData)(vlSelfRef.u_axi__DOT____VdfgRegularize_h2534fa66_0_0)) 
                                                   & (IData)(vlSelfRef.__PVT__u_axi__DOT__req_can_issue_w));
    vlSelfRef.u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_2 
        = (1U & ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_cacheable_q)) 
                 & (~ (IData)(vlSelfRef.__PVT__u_mux__DOT__hold_w))));
    vlSelfRef.u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_4 
        = ((~ (IData)(vlSelfRef.__PVT__u_mux__DOT__hold_w)) 
           & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_cacheable_q));
    vlSelfRef.__PVT__pmem_cache_ack_w = ((IData)(vlSelfRef.__PVT__pmem_ack_w) 
                                         & (IData)(vlSelfRef.__PVT__u_pmem_mux__DOT__select_q));
    vlSelfRef.__PVT__mem_uncached_ack_w = ((IData)(vlSelfRef.__PVT__u_uncached__DOT__dropped_q) 
                                           | ((~ (IData)(vlSelfRef.__PVT__u_pmem_mux__DOT__select_q)) 
                                              & (IData)(vlSelfRef.__PVT__pmem_ack_w)));
    vlSelfRef.u_axi__DOT__u_axi__DOT____VdfgRegularize_h88420251_0_0 
        = ((IData)(vlSelfRef.__PVT__u_axi__DOT__req_can_issue_w) 
           & (IData)(vlSelfRef.__PVT__u_axi__DOT__req_is_write_w));
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
}

VL_ATTR_COLD void Vriscv_top_dcache___stl_sequent__TOP__v__u_dcache__1(Vriscv_top_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_dcache___stl_sequent__TOP__v__u_dcache__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pmem_cache_write_data_w = ((0U 
                                                 != (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_wr_q))
                                                 ? vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_write_data_q
                                                 : vlSymsp->TOP__v__u_dcache__u_core.__PVT__evict_data_r);
    vlSelfRef.__PVT__pmem_cache_wr_w = ((((7U == (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__state_q)) 
                                          & ((IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__evict_way_w) 
                                             | (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_writeback_m_q))) 
                                         | (0U != (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_wr_q)))
                                         ? 0xfU : 0U);
    vlSelfRef.__PVT__u_axi__DOT__accept_w = (((IData)(vlSymsp->TOP.__Vcellout__v__axi_d_awvalid_o) 
                                              & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_awready_i)) 
                                             | (((IData)(vlSymsp->TOP.__Vcellout__v__axi_d_wvalid_o) 
                                                 & ((~ (IData)(vlSelfRef.__PVT__u_axi__DOT__u_axi__DOT__buf_valid_q)) 
                                                    & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_wready_i))) 
                                                | ((IData)(vlSymsp->TOP.__Vcellout__v__axi_d_arvalid_o) 
                                                   & (IData)(vlSymsp->TOP.__Vcellinp__v__axi_d_arready_i))));
    vlSelfRef.__PVT__pmem_wr_w = ((IData)(vlSelfRef.__PVT__pmem_select_w)
                                   ? (IData)(vlSelfRef.__PVT__pmem_cache_wr_w)
                                   : (IData)(vlSelfRef.__PVT__pmem_uncached_wr_w));
    vlSelfRef.__PVT__u_axi__DOT__res_push_w = ((((IData)(vlSelfRef.__PVT__u_axi__DOT__req_is_write_w) 
                                                 & ((0U 
                                                     == (IData)(vlSymsp->TOP.__Vcellout__v__axi_d_awlen_o)) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.__PVT__u_axi__DOT__req_cnt_q)))) 
                                                | ((IData)(vlSelfRef.__PVT__u_axi__DOT__req_can_issue_w) 
                                                   & (IData)(vlSelfRef.u_axi__DOT____VdfgRegularize_h2534fa66_0_0))) 
                                               & (IData)(vlSelfRef.__PVT__u_axi__DOT__accept_w));
}
