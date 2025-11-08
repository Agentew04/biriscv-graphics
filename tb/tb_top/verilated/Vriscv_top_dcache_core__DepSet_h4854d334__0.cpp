// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_dcache_core.h"

VL_INLINE_OPT void Vriscv_top_dcache_core___ico_sequent__TOP__v__u_dcache__u_core__0(Vriscv_top_dcache_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_dcache_core___ico_sequent__TOP__v__u_dcache__u_core__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data0_write_m_r = 0U;
    vlSelfRef.__PVT__data1_write_m_r = 0U;
    if ((6U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__data0_data_in_m_w = vlSymsp->TOP.__Vcellinp__v__axi_d_rdata_i;
        vlSelfRef.__PVT__data0_write_m_r = (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w) 
                                             & (~ (IData)(vlSelfRef.__PVT__replace_way_q)))
                                             ? 0xfU
                                             : 0U);
        vlSelfRef.__PVT__data1_write_m_r = (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w) 
                                             & (IData)(vlSelfRef.__PVT__replace_way_q))
                                             ? 0xfU
                                             : 0U);
    } else {
        vlSelfRef.__PVT__data0_data_in_m_w = vlSelfRef.__PVT__mem_data_m_q;
        if (((5U == (IData)(vlSelfRef.__PVT__state_q)) 
             | (3U == (IData)(vlSelfRef.__PVT__state_q)))) {
            vlSelfRef.__PVT__data0_write_m_r = ((IData)(vlSelfRef.__PVT__mem_wr_m_q) 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__tag0_hit_m_w))));
            vlSelfRef.__PVT__data1_write_m_r = ((IData)(vlSelfRef.__PVT__mem_wr_m_q) 
                                                & (- (IData)((IData)(vlSelfRef.__PVT__tag1_hit_m_w))));
        }
    }
    vlSelfRef.__PVT__tag0_write_m_r = 0U;
    vlSelfRef.__PVT__tag1_write_m_r = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_m_r = 1U;
        vlSelfRef.__PVT__tag1_write_m_r = 1U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_m_r = (1U & (~ (IData)(vlSelfRef.__PVT__tag_dirty_any_m_w)));
        vlSelfRef.__PVT__tag1_write_m_r = (1U & (~ (IData)(vlSelfRef.__PVT__tag_dirty_any_m_w)));
    } else if (((3U == (IData)(vlSelfRef.__PVT__state_q)) 
                & (0U != (IData)(vlSelfRef.__PVT__mem_wr_m_q)))) {
        vlSelfRef.__PVT__tag0_write_m_r = vlSelfRef.__PVT__tag0_hit_m_w;
        vlSelfRef.__PVT__tag1_write_m_r = vlSelfRef.__PVT__tag1_hit_m_w;
    } else if ((5U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_m_r = (1U & (~ (IData)(vlSelfRef.__PVT__replace_way_q)));
        vlSelfRef.__PVT__tag1_write_m_r = vlSelfRef.__PVT__replace_way_q;
    } else if (((8U == (IData)(vlSelfRef.__PVT__state_q)) 
                & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w))) {
        vlSelfRef.__PVT__tag0_write_m_r = (1U & (~ (IData)(vlSelfRef.__PVT__replace_way_q)));
        vlSelfRef.__PVT__tag1_write_m_r = vlSelfRef.__PVT__replace_way_q;
    } else if ((6U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_m_r = (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w) 
                                            & (0U == (IData)(vlSelfRef.__PVT__pmem_len_q))) 
                                           & (~ (IData)(vlSelfRef.__PVT__replace_way_q)));
        vlSelfRef.__PVT__tag1_write_m_r = (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w) 
                                            & (0U == (IData)(vlSelfRef.__PVT__pmem_len_q))) 
                                           & (IData)(vlSelfRef.__PVT__replace_way_q));
    } else if ((9U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_m_r = vlSelfRef.__PVT__tag0_hit_m_w;
        vlSelfRef.__PVT__tag1_write_m_r = vlSelfRef.__PVT__tag1_hit_m_w;
    }
}

VL_INLINE_OPT void Vriscv_top_dcache_core___ico_sequent__TOP__v__u_dcache__u_core__1(Vriscv_top_dcache_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_dcache_core___ico_sequent__TOP__v__u_dcache__u_core__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__next_state_r = vlSelfRef.__PVT__state_q;
    if ((8U & (IData)(vlSelfRef.__PVT__state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__state_q) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.__PVT__state_q))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__state_q)))) {
                    vlSelfRef.__PVT__next_state_r = 
                        ((((IData)(vlSelfRef.__PVT__tag0_hit_m_w) 
                           & (vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                              >> 0x13U)) | ((IData)(vlSelfRef.__PVT__tag1_hit_m_w) 
                                            & (vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q 
                                               >> 0x13U)))
                          ? 7U : 3U);
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__state_q))) {
                vlSelfRef.__PVT__next_state_r = 3U;
            } else if (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w) 
                        & (IData)(vlSelfRef.__PVT__mem_writeback_m_q))) {
                vlSelfRef.__PVT__next_state_r = 3U;
            } else if (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w) 
                        & (IData)(vlSelfRef.__PVT__flushing_q))) {
                vlSelfRef.__PVT__next_state_r = 1U;
            } else if (vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w) {
                vlSelfRef.__PVT__next_state_r = 6U;
            }
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__state_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__state_q))) {
                if (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_accept_w) 
                     & (0U == (IData)(vlSelfRef.__PVT__pmem_len_q)))) {
                    vlSelfRef.__PVT__next_state_r = 8U;
                }
            } else if (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w) 
                        & (0U == (IData)(vlSelfRef.__PVT__pmem_len_q)))) {
                vlSelfRef.__PVT__next_state_r = ((0U 
                                                  != (IData)(vlSelfRef.__PVT__mem_wr_m_q))
                                                  ? 5U
                                                  : 4U);
            }
        } else {
            vlSelfRef.__PVT__next_state_r = 3U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__state_q))) {
        if ((1U & (IData)(vlSelfRef.__PVT__state_q))) {
            if ((((IData)(vlSelfRef.__PVT__mem_rd_m_q) 
                  | (0U != (IData)(vlSelfRef.__PVT__mem_wr_m_q))) 
                 & (~ (IData)(vlSelfRef.__PVT__tag_hit_any_m_w)))) {
                vlSelfRef.__PVT__next_state_r = ((IData)(vlSelfRef.__PVT__evict_way_w)
                                                  ? 7U
                                                  : 6U);
            } else if (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_writeback_w) 
                        & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_accept_w))) {
                vlSelfRef.__PVT__next_state_r = 0xaU;
            } else if (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_flush_w) 
                        & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_accept_w))) {
                vlSelfRef.__PVT__next_state_r = 1U;
            } else if (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_invalidate_w) 
                        & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_accept_w))) {
                vlSelfRef.__PVT__next_state_r = 9U;
            }
        } else if (vlSelfRef.__PVT__tag_dirty_any_m_w) {
            if (vlSelfRef.__PVT__evict_way_w) {
                vlSelfRef.__PVT__next_state_r = 7U;
            }
        } else {
            vlSelfRef.__PVT__next_state_r = ((IData)(vlSelfRef.__PVT__flush_last_q)
                                              ? 3U : 1U);
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__next_state_r = 2U;
    } else if (vlSelfRef.__PVT__flush_last_q) {
        vlSelfRef.__PVT__next_state_r = 3U;
    }
    vlSelfRef.__PVT__tag_addr_x_r = (0xffU & (((3U 
                                                == (IData)(vlSelfRef.__PVT__state_q)) 
                                               & ((3U 
                                                   == (IData)(vlSelfRef.__PVT__next_state_r)) 
                                                  | (0xaU 
                                                     == (IData)(vlSelfRef.__PVT__next_state_r))))
                                               ? (vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q 
                                                  >> 5U)
                                               : ((IData)(vlSelfRef.__PVT__flushing_q)
                                                   ? (IData)(vlSelfRef.__PVT__flush_addr_q)
                                                   : 
                                                  (vlSelfRef.__PVT__mem_addr_m_q 
                                                   >> 5U))));
    vlSelfRef.__PVT__data_addr_x_r = (0x7ffU & (vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q 
                                                >> 2U));
    vlSelfRef.__PVT__data_addr_m_r = (0x7ffU & (vlSelfRef.__PVT__mem_addr_m_q 
                                                >> 2U));
    if (((6U == (IData)(vlSelfRef.__PVT__state_q)) 
         | (7U == (IData)(vlSelfRef.__PVT__state_q)))) {
        vlSelfRef.__PVT__data_addr_x_r = vlSelfRef.__PVT__data_write_addr_q;
        vlSelfRef.__PVT__data_addr_m_r = vlSelfRef.__PVT__data_addr_x_r;
    } else if (((2U == (IData)(vlSelfRef.__PVT__state_q)) 
                | (0U == (IData)(vlSelfRef.__PVT__state_q)))) {
        vlSelfRef.__PVT__data_addr_x_r = ((IData)(vlSelfRef.__PVT__flush_addr_q) 
                                          << 3U);
        vlSelfRef.__PVT__data_addr_m_r = vlSelfRef.__PVT__data_addr_x_r;
    } else if (((7U != (IData)(vlSelfRef.__PVT__state_q)) 
                & (7U == (IData)(vlSelfRef.__PVT__next_state_r)))) {
        vlSelfRef.__PVT__data_addr_x_r = (0x7f8U & 
                                          (vlSelfRef.__PVT__mem_addr_m_q 
                                           >> 2U));
        vlSelfRef.__PVT__data_addr_m_r = vlSelfRef.__PVT__data_addr_x_r;
    } else if ((4U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__data_addr_x_r = (0x7ffU & 
                                          (vlSelfRef.__PVT__mem_addr_m_q 
                                           >> 2U));
    } else {
        vlSelfRef.__PVT__data_addr_m_r = (0x7ffU & 
                                          (vlSelfRef.__PVT__mem_addr_m_q 
                                           >> 2U));
    }
}

VL_INLINE_OPT void Vriscv_top_dcache_core___act_sequent__TOP__v__u_dcache__u_core__0(Vriscv_top_dcache_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_dcache_core___act_sequent__TOP__v__u_dcache__u_core__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgExtracted_h87545026__0 = (IData)(
                                                     (0x180000U 
                                                      == 
                                                      (0x180000U 
                                                       & vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q)));
    vlSelfRef.__PVT__tag0_hit_m_w = ((vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                      >> 0x14U) & (
                                                   (0x7ffffU 
                                                    & vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q) 
                                                   == 
                                                   (vlSelfRef.__PVT__mem_addr_m_q 
                                                    >> 0xdU)));
    vlSelfRef.__PVT__evict_addr_r = ((IData)(vlSelfRef.__PVT__flushing_q)
                                      ? ((0x7ffff00U 
                                          & (vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                             << 8U)) 
                                         | (IData)(vlSelfRef.__PVT__flush_addr_q))
                                      : ((0x7ffff00U 
                                          & (vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                             << 8U)) 
                                         | (0xffU & 
                                            (vlSelfRef.__PVT__mem_addr_m_q 
                                             >> 5U))));
    vlSelfRef.__VdfgExtracted_h3d239356__0 = (IData)(
                                                     (0x180000U 
                                                      == 
                                                      (0x180000U 
                                                       & vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q)));
    vlSelfRef.__PVT__tag1_hit_m_w = ((vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q 
                                      >> 0x14U) & (
                                                   (0x7ffffU 
                                                    & vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q) 
                                                   == 
                                                   (vlSelfRef.__PVT__mem_addr_m_q 
                                                    >> 0xdU)));
    vlSelfRef.__PVT__data0_write_m_r = 0U;
    vlSelfRef.__PVT__tag_dirty_any_m_w = ((IData)(vlSelfRef.__VdfgExtracted_h87545026__0) 
                                          | (IData)(vlSelfRef.__VdfgExtracted_h3d239356__0));
    vlSelfRef.__PVT__evict_way_r = 0U;
    if (vlSelfRef.__PVT__replace_way_q) {
        if (vlSelfRef.__PVT__replace_way_q) {
            vlSelfRef.__PVT__evict_addr_r = ((IData)(vlSelfRef.__PVT__flushing_q)
                                              ? ((0x7ffff00U 
                                                  & (vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q 
                                                     << 8U)) 
                                                 | (IData)(vlSelfRef.__PVT__flush_addr_q))
                                              : ((0x7ffff00U 
                                                  & (vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (vlSelfRef.__PVT__mem_addr_m_q 
                                                       >> 5U))));
            vlSelfRef.__PVT__evict_way_r = vlSelfRef.__VdfgExtracted_h3d239356__0;
        }
    } else {
        vlSelfRef.__PVT__evict_addr_r = ((IData)(vlSelfRef.__PVT__flushing_q)
                                          ? ((0x7ffff00U 
                                              & (vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                                 << 8U)) 
                                             | (IData)(vlSelfRef.__PVT__flush_addr_q))
                                          : ((0x7ffff00U 
                                              & (vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (vlSelfRef.__PVT__mem_addr_m_q 
                                                   >> 5U))));
        vlSelfRef.__PVT__evict_way_r = vlSelfRef.__VdfgExtracted_h87545026__0;
    }
    vlSelfRef.__PVT__data_r = vlSymsp->TOP__v__u_dcache__u_core__u_data0.__PVT__ram_read0_q;
    if (vlSelfRef.__PVT__tag0_hit_m_w) {
        vlSelfRef.__PVT__data_r = vlSymsp->TOP__v__u_dcache__u_core__u_data0.__PVT__ram_read0_q;
    } else if (vlSelfRef.__PVT__tag1_hit_m_w) {
        vlSelfRef.__PVT__data_r = vlSymsp->TOP__v__u_dcache__u_core__u_data1.__PVT__ram_read0_q;
    }
    vlSelfRef.__PVT__tag_hit_any_m_w = ((IData)(vlSelfRef.__PVT__tag0_hit_m_w) 
                                        | (IData)(vlSelfRef.__PVT__tag1_hit_m_w));
    vlSelfRef.__PVT__data1_write_m_r = 0U;
    if ((6U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__data0_write_m_r = (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w) 
                                             & (~ (IData)(vlSelfRef.__PVT__replace_way_q)))
                                             ? 0xfU
                                             : 0U);
        vlSelfRef.__PVT__data1_write_m_r = (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w) 
                                             & (IData)(vlSelfRef.__PVT__replace_way_q))
                                             ? 0xfU
                                             : 0U);
    } else if (((5U == (IData)(vlSelfRef.__PVT__state_q)) 
                | (3U == (IData)(vlSelfRef.__PVT__state_q)))) {
        vlSelfRef.__PVT__data0_write_m_r = ((IData)(vlSelfRef.__PVT__mem_wr_m_q) 
                                            & (- (IData)((IData)(vlSelfRef.__PVT__tag0_hit_m_w))));
        vlSelfRef.__PVT__data1_write_m_r = ((IData)(vlSelfRef.__PVT__mem_wr_m_q) 
                                            & (- (IData)((IData)(vlSelfRef.__PVT__tag1_hit_m_w))));
    }
    vlSelfRef.__PVT__tag0_write_m_r = 0U;
    vlSelfRef.__PVT__tag1_write_m_r = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_m_r = 1U;
        vlSelfRef.__PVT__tag1_write_m_r = 1U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_m_r = (1U & (~ (IData)(vlSelfRef.__PVT__tag_dirty_any_m_w)));
        vlSelfRef.__PVT__tag1_write_m_r = (1U & (~ (IData)(vlSelfRef.__PVT__tag_dirty_any_m_w)));
    } else if (((3U == (IData)(vlSelfRef.__PVT__state_q)) 
                & (0U != (IData)(vlSelfRef.__PVT__mem_wr_m_q)))) {
        vlSelfRef.__PVT__tag0_write_m_r = vlSelfRef.__PVT__tag0_hit_m_w;
        vlSelfRef.__PVT__tag1_write_m_r = vlSelfRef.__PVT__tag1_hit_m_w;
    } else if ((5U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_m_r = (1U & (~ (IData)(vlSelfRef.__PVT__replace_way_q)));
        vlSelfRef.__PVT__tag1_write_m_r = vlSelfRef.__PVT__replace_way_q;
    } else if (((8U == (IData)(vlSelfRef.__PVT__state_q)) 
                & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w))) {
        vlSelfRef.__PVT__tag0_write_m_r = (1U & (~ (IData)(vlSelfRef.__PVT__replace_way_q)));
        vlSelfRef.__PVT__tag1_write_m_r = vlSelfRef.__PVT__replace_way_q;
    } else if ((6U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_m_r = (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w) 
                                            & (0U == (IData)(vlSelfRef.__PVT__pmem_len_q))) 
                                           & (~ (IData)(vlSelfRef.__PVT__replace_way_q)));
        vlSelfRef.__PVT__tag1_write_m_r = (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w) 
                                            & (0U == (IData)(vlSelfRef.__PVT__pmem_len_q))) 
                                           & (IData)(vlSelfRef.__PVT__replace_way_q));
    } else if ((9U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_m_r = vlSelfRef.__PVT__tag0_hit_m_w;
        vlSelfRef.__PVT__tag1_write_m_r = vlSelfRef.__PVT__tag1_hit_m_w;
    }
    vlSelfRef.__PVT__evict_way_w = (((~ (IData)(vlSelfRef.__PVT__tag_hit_any_m_w)) 
                                     | (IData)(vlSelfRef.__PVT__flushing_q)) 
                                    & (IData)(vlSelfRef.__PVT__evict_way_r));
    vlSelfRef.__PVT__mem_ack_r = 0U;
    if ((3U == (IData)(vlSelfRef.__PVT__state_q))) {
        if ((((IData)(vlSelfRef.__PVT__mem_rd_m_q) 
              | (0U != (IData)(vlSelfRef.__PVT__mem_wr_m_q))) 
             & (IData)(vlSelfRef.__PVT__tag_hit_any_m_w))) {
            vlSelfRef.__PVT__mem_ack_r = 1U;
        } else if ((((IData)(vlSelfRef.__PVT__mem_flush_m_q) 
                     | (IData)(vlSelfRef.__PVT__mem_inval_m_q)) 
                    | (IData)(vlSelfRef.__PVT__mem_writeback_m_q))) {
            vlSelfRef.__PVT__mem_ack_r = 1U;
        }
    }
}

extern const VlUnpacked<VlWide<3>/*79:0*/, 16> Vriscv_top__ConstPool__TABLE_hd54dfb93_0;

VL_INLINE_OPT void Vriscv_top_dcache_core___nba_sequent__TOP__v__u_dcache__u_core__0(Vriscv_top_dcache_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_dcache_core___nba_sequent__TOP__v__u_dcache__u_core__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*10:0*/ __Vdly__data_write_addr_q;
    __Vdly__data_write_addr_q = 0;
    CData/*7:0*/ __Vdly__flush_addr_q;
    __Vdly__flush_addr_q = 0;
    CData/*0:0*/ __Vdly__replace_way_q;
    __Vdly__replace_way_q = 0;
    CData/*7:0*/ __Vdly__pmem_len_q;
    __Vdly__pmem_len_q = 0;
    IData/*31:0*/ __Vdly__pmem_addr_q;
    __Vdly__pmem_addr_q = 0;
    // Body
    __Vdly__pmem_addr_q = vlSelfRef.__PVT__pmem_addr_q;
    __Vdly__flush_addr_q = vlSelfRef.__PVT__flush_addr_q;
    __Vdly__data_write_addr_q = vlSelfRef.__PVT__data_write_addr_q;
    __Vdly__pmem_len_q = vlSelfRef.__PVT__pmem_len_q;
    __Vdly__replace_way_q = vlSelfRef.__PVT__replace_way_q;
    if (vlSymsp->TOP.__Vcellinp__v__rst_i) {
        __Vdly__pmem_addr_q = 0U;
        __Vdly__flush_addr_q = 0U;
        __Vdly__data_write_addr_q = 0U;
        __Vdly__pmem_len_q = 0U;
        __Vdly__replace_way_q = 0U;
        vlSelfRef.__PVT__pmem_write_data_q = 0U;
        vlSelfRef.__PVT__pmem_wr_q = 0U;
        vlSelfRef.__PVT__pmem_rd_q = 0U;
        vlSelfRef.__PVT__mem_tag_m_q = 0U;
        vlSelfRef.__PVT__mem_inval_m_q = 0U;
        vlSelfRef.__PVT__mem_flush_m_q = 0U;
        vlSelfRef.__PVT__mem_writeback_m_q = 0U;
        vlSelfRef.__PVT__mem_rd_m_q = 0U;
        vlSelfRef.__PVT__flush_last_q = 0U;
        vlSelfRef.__PVT__pmem_wr0_q = 0U;
        vlSelfRef.__PVT__mem_wr_m_q = 0U;
        vlSelfRef.__PVT__mem_data_m_q = 0U;
        vlSelfRef.__PVT__error_q = 0U;
        vlSelfRef.__PVT__mem_addr_m_q = 0U;
        vlSelfRef.__PVT__flushing_q = 0U;
        vlSelfRef.__PVT__state_q = 0U;
    } else {
        if (((0U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_len_w)) 
             & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_accept_w))) {
            __Vdly__pmem_addr_q = ((IData)(4U) + vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_addr_w);
        } else if (vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_accept_w) {
            __Vdly__pmem_addr_q = ((IData)(4U) + vlSelfRef.__PVT__pmem_addr_q);
        }
        if (((0U == (IData)(vlSelfRef.__PVT__state_q)) 
             | ((2U == (IData)(vlSelfRef.__PVT__state_q)) 
                & (1U == (IData)(vlSelfRef.__PVT__next_state_r))))) {
            __Vdly__flush_addr_q = (0xffU & ((IData)(1U) 
                                             + (IData)(vlSelfRef.__PVT__flush_addr_q)));
        } else if ((3U == (IData)(vlSelfRef.__PVT__state_q))) {
            __Vdly__flush_addr_q = 0U;
        }
        if (((6U != (IData)(vlSelfRef.__PVT__state_q)) 
             & (6U == (IData)(vlSelfRef.__PVT__next_state_r)))) {
            __Vdly__data_write_addr_q = (0x7ffU & (vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_addr_w 
                                                   >> 2U));
        } else if (((7U != (IData)(vlSelfRef.__PVT__state_q)) 
                    & (7U == (IData)(vlSelfRef.__PVT__next_state_r)))) {
            __Vdly__data_write_addr_q = (0x7ffU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__data_addr_m_r)));
        } else if (((6U == (IData)(vlSelfRef.__PVT__state_q)) 
                    & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w))) {
            __Vdly__data_write_addr_q = (0x7ffU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__data_write_addr_q)));
        } else if (((7U == (IData)(vlSelfRef.__PVT__state_q)) 
                    & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_accept_w))) {
            __Vdly__data_write_addr_q = (0x7ffU & ((IData)(1U) 
                                                   + (IData)(vlSelfRef.__PVT__data_write_addr_q)));
        }
        if (((7U != (IData)(vlSelfRef.__PVT__state_q)) 
             & (7U == (IData)(vlSelfRef.__PVT__next_state_r)))) {
            __Vdly__pmem_len_q = 7U;
            vlSelfRef.__PVT__pmem_wr0_q = 1U;
        } else {
            if (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_rd_w) 
                 & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_accept_w))) {
                __Vdly__pmem_len_q = vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_len_w;
            } else if (((6U == (IData)(vlSelfRef.__PVT__state_q)) 
                        & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w))) {
                __Vdly__pmem_len_q = (0xffU & ((IData)(vlSelfRef.__PVT__pmem_len_q) 
                                               - (IData)(1U)));
            } else if (((7U == (IData)(vlSelfRef.__PVT__state_q)) 
                        & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_accept_w))) {
                __Vdly__pmem_len_q = (0xffU & ((IData)(vlSelfRef.__PVT__pmem_len_q) 
                                               - (IData)(1U)));
            }
            if (vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_accept_w) {
                vlSelfRef.__PVT__pmem_wr0_q = 0U;
            }
        }
        if (((5U == (IData)(vlSelfRef.__PVT__state_q)) 
             | (4U == (IData)(vlSelfRef.__PVT__state_q)))) {
            __Vdly__replace_way_q = (1U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__replace_way_q)));
        } else if (((((IData)(vlSelfRef.__PVT__flushing_q) 
                      & (IData)(vlSelfRef.__PVT__tag_dirty_any_m_w)) 
                     & (~ (IData)(vlSelfRef.__PVT__evict_way_w))) 
                    & (1U != (IData)(vlSelfRef.__PVT__state_q)))) {
            __Vdly__replace_way_q = (1U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__replace_way_q)));
        } else if (((8U == (IData)(vlSelfRef.__PVT__state_q)) 
                    & (1U == (IData)(vlSelfRef.__PVT__next_state_r)))) {
            __Vdly__replace_way_q = 0U;
        } else if (((2U == (IData)(vlSelfRef.__PVT__state_q)) 
                    & (3U == (IData)(vlSelfRef.__PVT__next_state_r)))) {
            __Vdly__replace_way_q = 0U;
        } else if (((3U == (IData)(vlSelfRef.__PVT__state_q)) 
                    & (1U == (IData)(vlSelfRef.__PVT__next_state_r)))) {
            __Vdly__replace_way_q = 0U;
        } else if ((0xaU == (IData)(vlSelfRef.__PVT__state_q))) {
            if (vlSelfRef.__PVT__tag0_hit_m_w) {
                __Vdly__replace_way_q = 0U;
            } else if (vlSelfRef.__PVT__tag1_hit_m_w) {
                __Vdly__replace_way_q = 1U;
            }
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_accept_w)))) {
            vlSelfRef.__PVT__pmem_write_data_q = vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_write_data_w;
        }
        if (((0U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_wr_w)) 
             & (~ (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_accept_w)))) {
            vlSelfRef.__PVT__pmem_wr_q = vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_wr_w;
        } else if (vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_accept_w) {
            vlSelfRef.__PVT__pmem_wr_q = 0U;
        }
        if (vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_rd_w) {
            vlSelfRef.__PVT__pmem_rd_q = (1U & (~ (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_accept_w)));
        }
        if (vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_accept_w) {
            vlSelfRef.__PVT__mem_tag_m_q = 0U;
            vlSelfRef.__PVT__mem_inval_m_q = vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_invalidate_w;
            vlSelfRef.__PVT__mem_flush_m_q = vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_flush_w;
            vlSelfRef.__PVT__mem_writeback_m_q = vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_writeback_w;
            vlSelfRef.__PVT__mem_rd_m_q = vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_rd_w;
            vlSelfRef.__PVT__mem_wr_m_q = ((IData)(vlSymsp->TOP__v__u_dcache.u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_4)
                                            ? (IData)(vlSymsp->TOP__v.__PVT__dcache_wr_w)
                                            : 0U);
            vlSelfRef.__PVT__mem_data_m_q = vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_wr_q;
            vlSelfRef.__PVT__mem_addr_m_q = (0xfffffffcU 
                                             & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q);
        } else if (vlSelfRef.__PVT__mem_ack_r) {
            vlSelfRef.__PVT__mem_tag_m_q = 0U;
            vlSelfRef.__PVT__mem_inval_m_q = 0U;
            vlSelfRef.__PVT__mem_flush_m_q = 0U;
            vlSelfRef.__PVT__mem_writeback_m_q = 0U;
            vlSelfRef.__PVT__mem_rd_m_q = 0U;
            vlSelfRef.__PVT__mem_wr_m_q = 0U;
            vlSelfRef.__PVT__mem_data_m_q = 0U;
            vlSelfRef.__PVT__mem_addr_m_q = 0U;
        }
        if ((3U == (IData)(vlSelfRef.__PVT__state_q))) {
            vlSelfRef.__PVT__flush_last_q = 0U;
        } else if ((0xffU == (IData)(vlSelfRef.__PVT__flush_addr_q))) {
            vlSelfRef.__PVT__flush_last_q = 1U;
        }
        if (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w) 
             & ((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_error_w) 
                & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_pmem_mux__DOT__select_q)))) {
            vlSelfRef.__PVT__error_q = 1U;
        } else if (vlSelfRef.__PVT__mem_ack_r) {
            vlSelfRef.__PVT__error_q = 0U;
        }
        if (((3U == (IData)(vlSelfRef.__PVT__state_q)) 
             & (1U == (IData)(vlSelfRef.__PVT__next_state_r)))) {
            vlSelfRef.__PVT__flushing_q = 1U;
        } else if (((2U == (IData)(vlSelfRef.__PVT__state_q)) 
                    & (3U == (IData)(vlSelfRef.__PVT__next_state_r)))) {
            vlSelfRef.__PVT__flushing_q = 0U;
        }
        vlSelfRef.__PVT__state_q = vlSelfRef.__PVT__next_state_r;
    }
    vlSelfRef.__PVT__pmem_addr_q = __Vdly__pmem_addr_q;
    vlSelfRef.__PVT__data_write_addr_q = __Vdly__data_write_addr_q;
    vlSelfRef.__PVT__pmem_len_q = __Vdly__pmem_len_q;
    vlSelfRef.__PVT__replace_way_q = __Vdly__replace_way_q;
    vlSelfRef.__PVT__flush_addr_q = __Vdly__flush_addr_q;
    vlSelfRef.__PVT__evict_way_r = 0U;
    vlSelfRef.__PVT__tag0_hit_m_w = ((vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                      >> 0x14U) & (
                                                   (0x7ffffU 
                                                    & vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q) 
                                                   == 
                                                   (vlSelfRef.__PVT__mem_addr_m_q 
                                                    >> 0xdU)));
    vlSelfRef.__PVT__tag1_hit_m_w = ((vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q 
                                      >> 0x14U) & (
                                                   (0x7ffffU 
                                                    & vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q) 
                                                   == 
                                                   (vlSelfRef.__PVT__mem_addr_m_q 
                                                    >> 0xdU)));
    vlSelfRef.__PVT__tag_hit_any_m_w = ((IData)(vlSelfRef.__PVT__tag0_hit_m_w) 
                                        | (IData)(vlSelfRef.__PVT__tag1_hit_m_w));
    vlSelfRef.__PVT__evict_addr_r = ((IData)(vlSelfRef.__PVT__flushing_q)
                                      ? ((0x7ffff00U 
                                          & (vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                             << 8U)) 
                                         | (IData)(vlSelfRef.__PVT__flush_addr_q))
                                      : ((0x7ffff00U 
                                          & (vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                             << 8U)) 
                                         | (0xffU & 
                                            (vlSelfRef.__PVT__mem_addr_m_q 
                                             >> 5U))));
    if (vlSelfRef.__PVT__replace_way_q) {
        if (vlSelfRef.__PVT__replace_way_q) {
            vlSelfRef.__PVT__evict_way_r = vlSelfRef.__VdfgExtracted_h3d239356__0;
            vlSelfRef.__PVT__evict_addr_r = ((IData)(vlSelfRef.__PVT__flushing_q)
                                              ? ((0x7ffff00U 
                                                  & (vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q 
                                                     << 8U)) 
                                                 | (IData)(vlSelfRef.__PVT__flush_addr_q))
                                              : ((0x7ffff00U 
                                                  & (vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (vlSelfRef.__PVT__mem_addr_m_q 
                                                       >> 5U))));
        }
    } else {
        vlSelfRef.__PVT__evict_way_r = vlSelfRef.__VdfgExtracted_h87545026__0;
        vlSelfRef.__PVT__evict_addr_r = ((IData)(vlSelfRef.__PVT__flushing_q)
                                          ? ((0x7ffff00U 
                                              & (vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                                 << 8U)) 
                                             | (IData)(vlSelfRef.__PVT__flush_addr_q))
                                          : ((0x7ffff00U 
                                              & (vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                                 << 8U)) 
                                             | (0xffU 
                                                & (vlSelfRef.__PVT__mem_addr_m_q 
                                                   >> 5U))));
    }
    vlSelfRef.__PVT__evict_way_w = (((~ (IData)(vlSelfRef.__PVT__tag_hit_any_m_w)) 
                                     | (IData)(vlSelfRef.__PVT__flushing_q)) 
                                    & (IData)(vlSelfRef.__PVT__evict_way_r));
    vlSelfRef.__PVT__data0_data_in_m_w = ((6U == (IData)(vlSelfRef.__PVT__state_q))
                                           ? vlSymsp->TOP.__Vcellinp__v__axi_d_rdata_i
                                           : vlSelfRef.__PVT__mem_data_m_q);
    vlSelfRef.__PVT__tag_data_in_m_r = 0U;
    if ((((2U == (IData)(vlSelfRef.__PVT__state_q)) 
          | (0U == (IData)(vlSelfRef.__PVT__state_q))) 
         | (IData)(vlSelfRef.__PVT__flushing_q))) {
        vlSelfRef.__PVT__tag_data_in_m_r = 0U;
    } else if ((6U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag_data_in_m_r = (0x100000U 
                                            | (vlSelfRef.__PVT__mem_addr_m_q 
                                               >> 0xdU));
    } else if ((9U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag_data_in_m_r = (vlSelfRef.__PVT__mem_addr_m_q 
                                            >> 0xdU);
    } else if ((8U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag_data_in_m_r = (0x100000U 
                                            | (vlSelfRef.__PVT__mem_addr_m_q 
                                               >> 0xdU));
    } else if (((5U == (IData)(vlSelfRef.__PVT__state_q)) 
                | ((3U == (IData)(vlSelfRef.__PVT__state_q)) 
                   & (0U != (IData)(vlSelfRef.__PVT__mem_wr_m_q))))) {
        vlSelfRef.__PVT__tag_data_in_m_r = (0x180000U 
                                            | (vlSelfRef.__PVT__mem_addr_m_q 
                                               >> 0xdU));
    }
    __Vtableidx1 = vlSelfRef.__PVT__state_q;
    vlSelfRef.__PVT__dbg_state[0U] = Vriscv_top__ConstPool__TABLE_hd54dfb93_0
        [__Vtableidx1][0U];
    vlSelfRef.__PVT__dbg_state[1U] = Vriscv_top__ConstPool__TABLE_hd54dfb93_0
        [__Vtableidx1][1U];
    vlSelfRef.__PVT__dbg_state[2U] = Vriscv_top__ConstPool__TABLE_hd54dfb93_0
        [__Vtableidx1][2U];
    vlSelfRef.__PVT__tag_addr_m_r = (0xffU & (((IData)(vlSelfRef.__PVT__flushing_q) 
                                               | (0U 
                                                  == (IData)(vlSelfRef.__PVT__state_q)))
                                               ? (IData)(vlSelfRef.__PVT__flush_addr_q)
                                               : (vlSelfRef.__PVT__mem_addr_m_q 
                                                  >> 5U)));
    vlSelfRef.__VdfgRegularize_h2088a453_0_5 = ((7U 
                                                 == (IData)(vlSelfRef.__PVT__state_q)) 
                                                & (IData)(vlSelfRef.__PVT__pmem_wr0_q));
    vlSelfRef.__PVT__mem_ack_r = 0U;
    if ((3U == (IData)(vlSelfRef.__PVT__state_q))) {
        if ((((IData)(vlSelfRef.__PVT__mem_rd_m_q) 
              | (0U != (IData)(vlSelfRef.__PVT__mem_wr_m_q))) 
             & (IData)(vlSelfRef.__PVT__tag_hit_any_m_w))) {
            vlSelfRef.__PVT__mem_ack_r = 1U;
        } else if ((((IData)(vlSelfRef.__PVT__mem_flush_m_q) 
                     | (IData)(vlSelfRef.__PVT__mem_inval_m_q)) 
                    | (IData)(vlSelfRef.__PVT__mem_writeback_m_q))) {
            vlSelfRef.__PVT__mem_ack_r = 1U;
        }
    }
}

VL_INLINE_OPT void Vriscv_top_dcache_core___nba_sequent__TOP__v__u_dcache__u_core__1(Vriscv_top_dcache_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_dcache_core___nba_sequent__TOP__v__u_dcache__u_core__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data0_write_m_r = 0U;
    vlSelfRef.__PVT__data1_write_m_r = 0U;
    if ((6U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__data0_write_m_r = (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w) 
                                             & (~ (IData)(vlSelfRef.__PVT__replace_way_q)))
                                             ? 0xfU
                                             : 0U);
        vlSelfRef.__PVT__data1_write_m_r = (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w) 
                                             & (IData)(vlSelfRef.__PVT__replace_way_q))
                                             ? 0xfU
                                             : 0U);
    } else if (((5U == (IData)(vlSelfRef.__PVT__state_q)) 
                | (3U == (IData)(vlSelfRef.__PVT__state_q)))) {
        vlSelfRef.__PVT__data0_write_m_r = ((IData)(vlSelfRef.__PVT__mem_wr_m_q) 
                                            & (- (IData)((IData)(vlSelfRef.__PVT__tag0_hit_m_w))));
        vlSelfRef.__PVT__data1_write_m_r = ((IData)(vlSelfRef.__PVT__mem_wr_m_q) 
                                            & (- (IData)((IData)(vlSelfRef.__PVT__tag1_hit_m_w))));
    }
    vlSelfRef.__PVT__tag0_write_m_r = 0U;
    vlSelfRef.__PVT__tag1_write_m_r = 0U;
    if ((0U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_m_r = 1U;
        vlSelfRef.__PVT__tag1_write_m_r = 1U;
    } else if ((2U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_m_r = (1U & (~ (IData)(vlSelfRef.__PVT__tag_dirty_any_m_w)));
        vlSelfRef.__PVT__tag1_write_m_r = (1U & (~ (IData)(vlSelfRef.__PVT__tag_dirty_any_m_w)));
    } else if (((3U == (IData)(vlSelfRef.__PVT__state_q)) 
                & (0U != (IData)(vlSelfRef.__PVT__mem_wr_m_q)))) {
        vlSelfRef.__PVT__tag0_write_m_r = vlSelfRef.__PVT__tag0_hit_m_w;
        vlSelfRef.__PVT__tag1_write_m_r = vlSelfRef.__PVT__tag1_hit_m_w;
    } else if ((5U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_m_r = (1U & (~ (IData)(vlSelfRef.__PVT__replace_way_q)));
        vlSelfRef.__PVT__tag1_write_m_r = vlSelfRef.__PVT__replace_way_q;
    } else if (((8U == (IData)(vlSelfRef.__PVT__state_q)) 
                & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w))) {
        vlSelfRef.__PVT__tag0_write_m_r = (1U & (~ (IData)(vlSelfRef.__PVT__replace_way_q)));
        vlSelfRef.__PVT__tag1_write_m_r = vlSelfRef.__PVT__replace_way_q;
    } else if ((6U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_m_r = (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w) 
                                            & (0U == (IData)(vlSelfRef.__PVT__pmem_len_q))) 
                                           & (~ (IData)(vlSelfRef.__PVT__replace_way_q)));
        vlSelfRef.__PVT__tag1_write_m_r = (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w) 
                                            & (0U == (IData)(vlSelfRef.__PVT__pmem_len_q))) 
                                           & (IData)(vlSelfRef.__PVT__replace_way_q));
    } else if ((9U == (IData)(vlSelfRef.__PVT__state_q))) {
        vlSelfRef.__PVT__tag0_write_m_r = vlSelfRef.__PVT__tag0_hit_m_w;
        vlSelfRef.__PVT__tag1_write_m_r = vlSelfRef.__PVT__tag1_hit_m_w;
    }
}

VL_INLINE_OPT void Vriscv_top_dcache_core___nba_comb__TOP__v__u_dcache__u_core__0(Vriscv_top_dcache_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_dcache_core___nba_comb__TOP__v__u_dcache__u_core__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__evict_data_r = vlSymsp->TOP__v__u_dcache__u_core__u_data0.__PVT__ram_read0_q;
    if (vlSelfRef.__PVT__replace_way_q) {
        if (vlSelfRef.__PVT__replace_way_q) {
            vlSelfRef.__PVT__evict_data_r = vlSymsp->TOP__v__u_dcache__u_core__u_data1.__PVT__ram_read0_q;
        }
    } else {
        vlSelfRef.__PVT__evict_data_r = vlSymsp->TOP__v__u_dcache__u_core__u_data0.__PVT__ram_read0_q;
    }
    vlSelfRef.__PVT__data_r = vlSymsp->TOP__v__u_dcache__u_core__u_data0.__PVT__ram_read0_q;
    if (vlSelfRef.__PVT__tag0_hit_m_w) {
        vlSelfRef.__PVT__data_r = vlSymsp->TOP__v__u_dcache__u_core__u_data0.__PVT__ram_read0_q;
    } else if (vlSelfRef.__PVT__tag1_hit_m_w) {
        vlSelfRef.__PVT__data_r = vlSymsp->TOP__v__u_dcache__u_core__u_data1.__PVT__ram_read0_q;
    }
}
