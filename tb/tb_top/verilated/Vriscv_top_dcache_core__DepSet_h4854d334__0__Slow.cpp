// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_dcache_core.h"

extern const VlUnpacked<VlWide<3>/*79:0*/, 16> Vriscv_top__ConstPool__TABLE_hd54dfb93_0;

VL_ATTR_COLD void Vriscv_top_dcache_core___stl_sequent__TOP__v__u_dcache__u_core__0(Vriscv_top_dcache_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_dcache_core___stl_sequent__TOP__v__u_dcache__u_core__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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
    vlSelfRef.__PVT__evict_data_r = vlSymsp->TOP__v__u_dcache__u_core__u_data0.__PVT__ram_read0_q;
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
    vlSelfRef.__VdfgRegularize_h2088a453_0_5 = ((7U 
                                                 == (IData)(vlSelfRef.__PVT__state_q)) 
                                                & (IData)(vlSelfRef.__PVT__pmem_wr0_q));
    vlSelfRef.__VdfgExtracted_h3d239356__0 = (IData)(
                                                     (0x180000U 
                                                      == 
                                                      (0x180000U 
                                                       & vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q)));
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
    vlSelfRef.__PVT__tag1_hit_m_w = ((vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q 
                                      >> 0x14U) & (
                                                   (0x7ffffU 
                                                    & vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q) 
                                                   == 
                                                   (vlSelfRef.__PVT__mem_addr_m_q 
                                                    >> 0xdU)));
    vlSelfRef.__PVT__tag_dirty_any_m_w = ((IData)(vlSelfRef.__VdfgExtracted_h87545026__0) 
                                          | (IData)(vlSelfRef.__VdfgExtracted_h3d239356__0));
    vlSelfRef.__PVT__evict_way_r = 0U;
    if (vlSelfRef.__PVT__replace_way_q) {
        if (vlSelfRef.__PVT__replace_way_q) {
            vlSelfRef.__PVT__evict_data_r = vlSymsp->TOP__v__u_dcache__u_core__u_data1.__PVT__ram_read0_q;
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
        vlSelfRef.__PVT__evict_data_r = vlSymsp->TOP__v__u_dcache__u_core__u_data0.__PVT__ram_read0_q;
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
    vlSelfRef.__PVT__data0_write_m_r = 0U;
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
