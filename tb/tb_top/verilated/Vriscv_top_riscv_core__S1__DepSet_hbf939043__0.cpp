// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_riscv_core__S1.h"

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___ico_sequent__TOP__v__u_core__0(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___ico_sequent__TOP__v__u_core__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__branch_csr_pc_w = ((1U == (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__init_done))
                                         ? vlSymsp->TOP.__Vcellinp__v__reset_vector_i
                                         : vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_target_q);
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___ico_sequent__TOP__v__u_core__1(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___ico_sequent__TOP__v__u_core__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__writeback_mem_exception_w = (((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e2_q) 
                                                   & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_load_w))
                                                   ? 0x14U
                                                   : 
                                                  (((~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_load_w)) 
                                                    & (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e2_q))
                                                    ? 0x16U
                                                    : 
                                                   (((IData)(vlSymsp->TOP__v.__PVT__dcache_error_w) 
                                                     & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_load_w))
                                                     ? 0x15U
                                                     : 
                                                    (((~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_load_w)) 
                                                      & (IData)(vlSymsp->TOP__v.__PVT__dcache_error_w))
                                                      ? 0x17U
                                                      : 0U))));
    vlSelfRef.__PVT__u_lsu__DOT__complete_err_e2_w 
        = ((IData)(vlSymsp->TOP__v.__PVT__dcache_ack_w) 
           & (IData)(vlSymsp->TOP__v.__PVT__dcache_error_w));
    vlSelfRef.__PVT__u_lsu__DOT__wb_result_r = 0U;
    vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r = (3U & vlSelfRef.__PVT__u_lsu__DOT__resp_addr_w);
    vlSelfRef.__PVT__u_lsu__DOT__load_byte_r = (1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                           [vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                           >> 1U)));
    vlSelfRef.__PVT__u_lsu__DOT__load_half_r = (1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                           [vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                           >> 2U)));
    vlSelfRef.__PVT__u_lsu__DOT__load_signed_r = (1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                             [vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                             >> 3U)));
    if ((((IData)(vlSymsp->TOP__v.__PVT__dcache_ack_w) 
          & (IData)(vlSymsp->TOP__v.__PVT__dcache_error_w)) 
         | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e2_q))) {
        vlSelfRef.__PVT__u_lsu__DOT__wb_result_r = vlSelfRef.__PVT__u_lsu__DOT__resp_addr_w;
    } else if (((IData)(vlSymsp->TOP__v.__PVT__dcache_ack_w) 
                & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_load_w))) {
        if (vlSelfRef.__PVT__u_lsu__DOT__load_byte_r) {
            vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                = ((2U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                    ? ((1U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                        ? (vlSymsp->TOP__v.__PVT__dcache_data_rd_w 
                           >> 0x18U) : (0xffU & (vlSymsp->TOP__v.__PVT__dcache_data_rd_w 
                                                 >> 0x10U)))
                    : ((1U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                        ? (0xffU & (vlSymsp->TOP__v.__PVT__dcache_data_rd_w 
                                    >> 8U)) : (0xffU 
                                               & vlSymsp->TOP__v.__PVT__dcache_data_rd_w)));
            if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__load_signed_r) 
                 & (vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    >> 7U))) {
                vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    = (0xffffff00U | (0xffU & vlSelfRef.__PVT__u_lsu__DOT__wb_result_r));
            }
        } else if (vlSelfRef.__PVT__u_lsu__DOT__load_half_r) {
            vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                = ((2U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                    ? (vlSymsp->TOP__v.__PVT__dcache_data_rd_w 
                       >> 0x10U) : (0xffffU & vlSymsp->TOP__v.__PVT__dcache_data_rd_w));
            if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__load_signed_r) 
                 & (vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    >> 0xfU))) {
                vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    = (0xffff0000U | (0xffffU & vlSelfRef.__PVT__u_lsu__DOT__wb_result_r));
            }
        } else {
            vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                = vlSymsp->TOP__v.__PVT__dcache_data_rd_w;
        }
    }
    vlSelfRef.__PVT__u_lsu__DOT__complete_ok_e2_w = 
        ((~ (IData)(vlSymsp->TOP__v.__PVT__dcache_error_w)) 
         & (IData)(vlSymsp->TOP__v.__PVT__dcache_ack_w));
    vlSelfRef.__PVT__writeback_mem_valid_w = ((IData)(vlSymsp->TOP__v.__PVT__dcache_ack_w) 
                                              | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e2_q));
    vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__stall_w 
        = (1U & ((2U == (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q)) 
                 | ((~ (IData)(vlSymsp->TOP__v.__PVT__icache_accept_w)) 
                    | (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__icache_busy_w))));
    vlSelfRef.__PVT__u_lsu__DOT__delay_lsu_e2_w = (
                                                   (~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__complete_ok_e2_w)) 
                                                   & (IData)(vlSelfRef.__PVT__u_lsu__DOT__pending_lsu_e2_q));
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___ico_sequent__TOP__v__u_core__2(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___ico_sequent__TOP__v__u_core__2\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__exec1_hold_w = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_stall_raw_w) 
                                     | (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_stall_raw_w));
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0U;
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_r 
        = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q;
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 0U;
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_miss_r = 0U;
    if (vlSymsp->TOP__v__u_core__u_issue.__PVT__mispredicted_r) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x20U;
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [1U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [2U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 2U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [3U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 3U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [4U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 4U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [5U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 5U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [6U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 6U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [7U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 7U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [8U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 8U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [9U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 9U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xaU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xaU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xbU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xbU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xcU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xcU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xdU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xdU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xeU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xeU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xfU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xfU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x10U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x10U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x11U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x11U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x12U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x12U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x13U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x13U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x14U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x14U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x15U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x15U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x16U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x16U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x17U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x17U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x18U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x18U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x19U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x19U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1aU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1aU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1bU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1bU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1cU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1cU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1dU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1dU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1eU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1eU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1fU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1fU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_miss_r 
            = (1U & (~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r)));
    }
    vlSelfRef.__PVT__branch_request_w = ((IData)(vlSelfRef.__PVT__branch_csr_request_w) 
                                         | (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__mispredicted_r));
    vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 4U;
    } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 7U;
    } else if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 8U;
    } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 1U;
    } else if ((0x40005033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 3U;
    } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 2U;
    } else if ((0x40000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 6U;
    } else if ((0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 9U;
    } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 0xbU;
    } else if ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 0xaU;
    } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 4U;
    } else if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 7U;
    } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 0xbU;
    } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 0xaU;
    } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 8U;
    } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 9U;
    } else if ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 1U;
    } else if ((0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 2U;
    } else if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 3U;
    } else if ((0x37U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
            vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 4U;
        } else if (((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                    | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))) {
            vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 4U;
        }
    }
    vlSelfRef.__PVT__u_exec1__DOT__imm12_r = (((- (IData)(
                                                          (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                 >> 0x14U));
    vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 4U;
    } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 7U;
    } else if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 8U;
    } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 1U;
    } else if ((0x40005033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 3U;
    } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 2U;
    } else if ((0x40000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 6U;
    } else if ((0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 9U;
    } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 0xbU;
    } else if ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 0xaU;
    } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 4U;
    } else if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 7U;
    } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 0xbU;
    } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 0xaU;
    } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 8U;
    } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 9U;
    } else if ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 1U;
    } else if ((0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 2U;
    } else if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 3U;
    } else if ((0x37U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
            vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 4U;
        } else if (((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                    | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) {
            vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 4U;
        }
    }
    vlSelfRef.__PVT__u_div__DOT__div_operation_w = 
        ((0x2004033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
         | (0x2005033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)));
    vlSelfRef.__PVT__u_div__DOT__signed_operation_w 
        = ((0x2004033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
           | (0x2006033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)));
    vlSelfRef.__PVT__u_exec0__DOT__imm12_r = (((- (IData)(
                                                          (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                 >> 0x14U));
    vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_pc_w 
        = (((~ (IData)(vlSelfRef.__PVT__branch_request_w)) 
            & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_q))
            ? vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_pc_q
            : ((IData)(vlSelfRef.__PVT__branch_csr_request_w)
                ? vlSelfRef.__PVT__branch_csr_pc_w : vlSymsp->TOP__v__u_core__u_issue.__PVT__pc_x_q));
    vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_w 
        = ((IData)(vlSelfRef.__PVT__branch_request_w) 
           | (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_q));
    vlSelfRef.__PVT__u_frontend__DOT__fetch_valid_w 
        = ((~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_w)) 
           & ((IData)(vlSymsp->TOP__v.__PVT__icache_valid_w) 
              | (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_valid_q)));
    vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
        = (((~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__stall_q)) 
            & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_w))
            ? vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_pc_w
            : vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__pc_f_q);
    vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__push_w 
        = ((IData)(vlSelfRef.__PVT__u_frontend__DOT__fetch_valid_w) 
           & (2U != (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q)));
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 0U;
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 0U;
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r = 0U;
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r = 0U;
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r = 0U;
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
        = ((IData)(8U) + (0xfffffff8U & vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w));
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0U;
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [1U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [1U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [1U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [1U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [1U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 1U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [2U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [2U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [2U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [2U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [2U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 2U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [3U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [3U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [3U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [3U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [3U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 3U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [4U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [4U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [4U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [4U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [4U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 4U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [5U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [5U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [5U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [5U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [5U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 5U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [6U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [6U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [6U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [6U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [6U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 6U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [7U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [7U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [7U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [7U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [7U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 7U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [8U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [8U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [8U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [8U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [8U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 8U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [9U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [9U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [9U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [9U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [9U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 9U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xaU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xaU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xaU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xaU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xaU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xaU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xbU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xbU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xbU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xbU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xbU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xbU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xcU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xcU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xcU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xcU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xcU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xcU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xdU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xdU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xdU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xdU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xdU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xdU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xeU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xeU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xeU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xeU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xeU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xeU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xfU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xfU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xfU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xfU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xfU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xfU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x10U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x10U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x10U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x10U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x10U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x10U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x11U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x11U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x11U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x11U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x11U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x11U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x12U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x12U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x12U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x12U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x12U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x12U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x13U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x13U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x13U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x13U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x13U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x13U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x14U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x14U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x14U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x14U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x14U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x14U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x15U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x15U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x15U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x15U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x15U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x15U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x16U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x16U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x16U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x16U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x16U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x16U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x17U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x17U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x17U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x17U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x17U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x17U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x18U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x18U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x18U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x18U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x18U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x18U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x19U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x19U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x19U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x19U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x19U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x19U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1aU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1aU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1aU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1aU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1aU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1aU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1bU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1bU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1bU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1bU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1bU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1bU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1cU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1cU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1cU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1cU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1cU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1cU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1dU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1dU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1dU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1dU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1dU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1dU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1eU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1eU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1eU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1eU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1eU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1eU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1fU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1fU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1fU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1fU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1fU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1fU;
    }
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x20U;
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r)) 
               & (~ (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U))))) {
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0U;
        }
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x20U;
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [1U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [1U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [1U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [1U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [1U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [2U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [2U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [2U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [2U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [2U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 2U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [3U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [3U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [3U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [3U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [3U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 3U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [4U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [4U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [4U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [4U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [4U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 4U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [5U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [5U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [5U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [5U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [5U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 5U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [6U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [6U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [6U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [6U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [6U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 6U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [7U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [7U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [7U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [7U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [7U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 7U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [8U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [8U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [8U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [8U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [8U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 8U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [9U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [9U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [9U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [9U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [9U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 9U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xaU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xaU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xaU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xaU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xaU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xaU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xbU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xbU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xbU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xbU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xbU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xbU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xcU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xcU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xcU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xcU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xcU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xcU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xdU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xdU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xdU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xdU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xdU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xdU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xeU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xeU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xeU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xeU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xeU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xeU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xfU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xfU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xfU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xfU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xfU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xfU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x10U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x10U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x10U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x10U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x10U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x10U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x11U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x11U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x11U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x11U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x11U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x11U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x12U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x12U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x12U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x12U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x12U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x12U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x13U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x13U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x13U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x13U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x13U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x13U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x14U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x14U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x14U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x14U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x14U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x14U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x15U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x15U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x15U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x15U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x15U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x15U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x16U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x16U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x16U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x16U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x16U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x16U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x17U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x17U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x17U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x17U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x17U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x17U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x18U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x18U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x18U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x18U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x18U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x18U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x19U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x19U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x19U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x19U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x19U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x19U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1aU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1aU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1aU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1aU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1aU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1aU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1bU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1bU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1bU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1bU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1bU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1bU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1cU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1cU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1cU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1cU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1cU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1cU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1dU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1dU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1dU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1dU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1dU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1dU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1eU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1eU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1eU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1eU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1eU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1eU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1fU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1fU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1fU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1fU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1fU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1fU;
        }
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_he46ab735_0_1 
        = ((2U <= vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q
            [((0x1feU & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                         >> 2U)) | (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r))]) 
           | (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r));
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_call_pred_w 
        = ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r) 
           & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_he46ab735_0_0) 
              & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r)));
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w 
        = ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r) 
           & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_he46ab735_0_0) 
              & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r)));
    vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_he46ab735_0_2 
        = ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r) 
           & ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w) 
              | (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_he46ab735_0_1)));
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r 
        = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q;
    if (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__mispredicted_r) 
         & (IData)(vlSelfRef.__PVT__branch_info_is_call_w))) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_r 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q)));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q)));
    } else if (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__mispredicted_r) 
                & (IData)(vlSelfRef.__PVT__branch_info_is_ret_w))) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_r 
            = (7U & ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q) 
                     - (IData)(1U)));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r 
            = (7U & ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q) 
                     - (IData)(1U)));
    } else if (((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_call_pred_w) 
                & (~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__stall_w)))) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q)));
    } else if (((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w) 
                & (~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__stall_w)))) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r 
            = (7U & ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__pred_taken_w 
        = ((~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__stall_w)) 
           & (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_he46ab735_0_2));
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___ico_sequent__TOP__v__u_core__3(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___ico_sequent__TOP__v__u_core__3\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__branch_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__branch_call_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__branch_ret_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__branch_jmp_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__branch_target_r 
        = (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r 
           + (((- (IData)((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                           >> 0x1fU))) << 0xdU) | (
                                                   ((0x1000U 
                                                     & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                        >> 0x13U)) 
                                                    | (0x800U 
                                                       & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                          << 4U))) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                            >> 7U))))));
    if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x40005033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x40000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec1__DOT__imm12_r;
    } else if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec1__DOT__imm12_r;
    } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec1__DOT__imm12_r;
    } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec1__DOT__imm12_r;
    } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec1__DOT__imm12_r;
    } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec1__DOT__imm12_r;
    } else if ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                        >> 0x14U));
    } else if ((0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                        >> 0x14U));
    } else if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                        >> 0x14U));
    } else if ((0x37U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
            vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
                = (0xfffff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r);
        } else if (((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                    | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))) {
            vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r = 4U;
        }
    }
    if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x40005033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x40000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec0__DOT__imm12_r;
    } else if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec0__DOT__imm12_r;
    } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec0__DOT__imm12_r;
    } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec0__DOT__imm12_r;
    } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec0__DOT__imm12_r;
    } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec0__DOT__imm12_r;
    } else if ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                        >> 0x14U));
    } else if ((0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                        >> 0x14U));
    } else if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                        >> 0x14U));
    } else if ((0x37U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
            vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
                = (0xfffff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r);
        } else if (((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                    | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) {
            vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r = 4U;
        }
    }
    if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_target_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r 
               + (((- (IData)((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                               >> 0x1fU))) << 0x14U) 
                  | (((0xff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r) 
                      | (0x800U & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                   >> 9U))) | (0x7feU 
                                               & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                  >> 0x14U)))));
        vlSelfRef.__PVT__u_exec1__DOT__branch_call_r 
            = (1U == (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                               >> 7U)));
        vlSelfRef.__PVT__u_exec1__DOT__branch_jmp_r = 1U;
    } else if ((0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_ret_r 
            = (IData)(((0x8000U == (0xf8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                       & (0U == (0xfffU & vlSelfRef.__PVT__u_exec1__DOT__imm12_r))));
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_target_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r 
               + vlSelfRef.__PVT__u_exec1__DOT__imm12_r);
        vlSelfRef.__PVT__u_exec1__DOT__branch_call_r 
            = ((~ (IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_ret_r)) 
               & (0x80U == (0xf80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)));
        vlSelfRef.__PVT__u_exec1__DOT__branch_target_r 
            = (0xfffffffeU & vlSelfRef.__PVT__u_exec1__DOT__branch_target_r);
        vlSelfRef.__PVT__u_exec1__DOT__branch_jmp_r 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_call_r) 
                        | (IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_ret_r))));
    } else if ((0x63U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r 
               == vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r);
    } else if ((0x1063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r 
               != vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r);
    } else if ((0x4063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__y 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
        vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__x 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
        vlSelfRef.__PVT__u_exec1__DOT__less_than_signed__Vstatic__v 
            = (vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__x 
               - vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__y);
        vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__Vfuncout 
            = (1U & (((vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__x 
                       >> 0x1fU) != (vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__y 
                                     >> 0x1fU)) ? (vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__x 
                                                   >> 0x1fU)
                      : (vlSelfRef.__PVT__u_exec1__DOT__less_than_signed__Vstatic__v 
                         >> 0x1fU)));
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r 
            = vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__Vfuncout;
    } else if ((0x5063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r 
            = (([&]() {
                    vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__y 
                        = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
                    vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__x 
                        = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
                    vlSelfRef.__PVT__u_exec1__DOT__greater_than_signed__Vstatic__v 
                        = (vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__y 
                           - vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__x);
                    vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__Vfuncout 
                        = (1U & (((vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__x 
                                   >> 0x1fU) != (vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__y 
                                                 >> 0x1fU))
                                  ? (vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__y 
                                     >> 0x1fU) : (vlSelfRef.__PVT__u_exec1__DOT__greater_than_signed__Vstatic__v 
                                                  >> 0x1fU)));
                }(), (IData)(vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__Vfuncout)) 
               | (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r 
                  == vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r));
    } else if ((0x6063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r 
               < vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r);
    } else if ((0x7063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r 
               >= vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r);
    }
    vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x40005033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x40000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = (0xfffff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r);
    } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r;
    } else if (((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r;
    }
    vlSelfRef.__PVT__u_exec0__DOT__branch_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__branch_call_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__branch_ret_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__branch_jmp_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__branch_target_r 
        = (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r 
           + (((- (IData)((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                           >> 0x1fU))) << 0xdU) | (
                                                   ((0x1000U 
                                                     & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                        >> 0x13U)) 
                                                    | (0x800U 
                                                       & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                          << 4U))) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                            >> 7U))))));
    if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_target_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r 
               + (((- (IData)((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                               >> 0x1fU))) << 0x14U) 
                  | (((0xff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r) 
                      | (0x800U & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                   >> 9U))) | (0x7feU 
                                               & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                  >> 0x14U)))));
        vlSelfRef.__PVT__u_exec0__DOT__branch_call_r 
            = (1U == (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                               >> 7U)));
        vlSelfRef.__PVT__u_exec0__DOT__branch_jmp_r = 1U;
    } else if ((0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_ret_r 
            = (IData)(((0x8000U == (0xf8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                       & (0U == (0xfffU & vlSelfRef.__PVT__u_exec0__DOT__imm12_r))));
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_target_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
               + vlSelfRef.__PVT__u_exec0__DOT__imm12_r);
        vlSelfRef.__PVT__u_exec0__DOT__branch_call_r 
            = ((~ (IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_ret_r)) 
               & (0x80U == (0xf80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)));
        vlSelfRef.__PVT__u_exec0__DOT__branch_target_r 
            = (0xfffffffeU & vlSelfRef.__PVT__u_exec0__DOT__branch_target_r);
        vlSelfRef.__PVT__u_exec0__DOT__branch_jmp_r 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_call_r) 
                        | (IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_ret_r))));
    } else if ((0x63U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
               == vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r);
    } else if ((0x1063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
               != vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r);
    } else if ((0x4063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__y 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
        vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__x 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
        vlSelfRef.__PVT__u_exec0__DOT__less_than_signed__Vstatic__v 
            = (vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__x 
               - vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__y);
        vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__Vfuncout 
            = (1U & (((vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__x 
                       >> 0x1fU) != (vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__y 
                                     >> 0x1fU)) ? (vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__x 
                                                   >> 0x1fU)
                      : (vlSelfRef.__PVT__u_exec0__DOT__less_than_signed__Vstatic__v 
                         >> 0x1fU)));
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r 
            = vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__Vfuncout;
    } else if ((0x5063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r 
            = (([&]() {
                    vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__y 
                        = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
                    vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__x 
                        = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
                    vlSelfRef.__PVT__u_exec0__DOT__greater_than_signed__Vstatic__v 
                        = (vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__y 
                           - vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__x);
                    vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__Vfuncout 
                        = (1U & (((vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__x 
                                   >> 0x1fU) != (vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__y 
                                                 >> 0x1fU))
                                  ? (vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__y 
                                     >> 0x1fU) : (vlSelfRef.__PVT__u_exec0__DOT__greater_than_signed__Vstatic__v 
                                                  >> 0x1fU)));
                }(), (IData)(vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__Vfuncout)) 
               | (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
                  == vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r));
    } else if ((0x6063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
               < vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r);
    } else if ((0x7063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
               >= vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r);
    }
    vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x40005033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x40000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = (0xfffff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r);
    } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r;
    } else if (((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r;
    }
    vlSelfRef.__PVT__u_lsu__DOT__issue_lsu_e1_w = (
                                                   ((IData)(vlSymsp->TOP__v.__PVT__dcache_rd_w) 
                                                    | ((0U 
                                                        != (IData)(vlSymsp->TOP__v.__PVT__dcache_wr_w)) 
                                                       | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_writeback_q) 
                                                          | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q) 
                                                             | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q))))) 
                                                   & (IData)(vlSymsp->TOP__v.__PVT__dcache_accept_w));
    vlSelfRef.__PVT__lsu_stall_w = (((~ (IData)(vlSymsp->TOP__v.__PVT__dcache_accept_w)) 
                                     & ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_writeback_q) 
                                        | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q) 
                                           | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q) 
                                              | ((IData)(vlSymsp->TOP__v.__PVT__dcache_rd_w) 
                                                 | (0U 
                                                    != (IData)(vlSymsp->TOP__v.__PVT__dcache_wr_w))))))) 
                                    | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__delay_lsu_e2_w) 
                                       | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e1_q)));
    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__sub_res_w 
        = (vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
           - vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r);
    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__unused 
        = (1U & (((vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
                   >> 0x18U) + ((vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                 >> 0x18U) + (IData)(vlSelfRef.u_exec1__DOT__u_alu__DOT__u_adder32__DOT__u_adder8_1__DOT____VdfgRegularize_h91daf8aa_0_0))) 
                 >> 8U));
    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__sub_res_w 
        = (vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
           - vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r);
    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__unused 
        = (1U & (((vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
                   >> 0x18U) + ((vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                 >> 0x18U) + (IData)(vlSelfRef.u_exec0__DOT__u_alu__DOT__u_adder32__DOT__u_adder8_1__DOT____VdfgRegularize_h91daf8aa_0_0))) 
                 >> 8U));
    vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__push_i 
        = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__issue_lsu_e1_w) 
           | ((~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__delay_lsu_e2_w)) 
              & (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e1_q)));
    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_S 
        = (((((vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
               >> 0x18U) + ((vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                             >> 0x18U) + (IData)(vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__unused))) 
             << 0x18U) | (0xff0000U & (((vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
                                         >> 0x10U) 
                                        + ((vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                            >> 0x10U) 
                                           + (IData)(vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__unused))) 
                                       << 0x10U))) 
           | ((0xff00U & (((vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
                            >> 8U) + ((vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                       >> 8U) + (IData)(vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__unused))) 
                          << 8U)) | (0xffU & (vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
                                              + (vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                                 + (IData)(vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_Ci))))));
    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_S 
        = (((((vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
               >> 0x18U) + ((vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                             >> 0x18U) + (IData)(vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__unused))) 
             << 0x18U) | (0xff0000U & (((vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
                                         >> 0x10U) 
                                        + ((vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                            >> 0x10U) 
                                           + (IData)(vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__unused))) 
                                       << 0x10U))) 
           | ((0xff00U & (((vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
                            >> 8U) + ((vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                       >> 8U) + (IData)(vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__unused))) 
                          << 8U)) | (0xffU & (vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
                                              + (vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                                 + (IData)(vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_Ci))))));
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___ico_sequent__TOP__v__u_core__4(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___ico_sequent__TOP__v__u_core__4\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop1_w 
        = (((~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q)) 
            & (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_accept_r) 
                & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot0_valid_r)) 
               | (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot1_valid_r))) 
           & (IData)(vlSelfRef.__PVT__fetch0_valid_w));
    vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop2_w 
        = (((~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q)) 
            & (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_accept_r) 
                & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot1_valid_r)) 
               | (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_accept_r))) 
           & (IData)(vlSelfRef.__PVT__fetch1_valid_w));
    if (vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_mul_r) {
        vlSelfRef.__PVT__mul_opcode_rb_operand_w = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
        vlSelfRef.__PVT__mul_opcode_ra_operand_w = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
        vlSelfRef.__PVT__mul_opcode_opcode_w = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r;
        vlSelfRef.__PVT__mul_opcode_valid_w = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_issue_r;
    } else {
        vlSelfRef.__PVT__mul_opcode_rb_operand_w = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
        vlSelfRef.__PVT__mul_opcode_ra_operand_w = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
        vlSelfRef.__PVT__mul_opcode_opcode_w = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r;
        vlSelfRef.__PVT__mul_opcode_valid_w = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r;
    }
    vlSelfRef.__PVT__branch_d_exec1_request_w = ((IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_r) 
                                                 & ((IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r) 
                                                    & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_issue_r)));
    if (vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_lsu_r) {
        vlSelfRef.__PVT__lsu_opcode_rb_operand_w = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
        vlSelfRef.__PVT__lsu_opcode_ra_operand_w = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
        vlSelfRef.__PVT__lsu_opcode_opcode_w = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r;
    } else {
        vlSelfRef.__PVT__lsu_opcode_rb_operand_w = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
        vlSelfRef.__PVT__lsu_opcode_ra_operand_w = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
        vlSelfRef.__PVT__lsu_opcode_opcode_w = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r;
    }
    vlSelfRef.__PVT__csr_opcode_invalid_w = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r) 
                                             & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot0_valid_r)
                                                 ? (IData)(vlSelfRef.__PVT__fetch0_instr_invalid_w)
                                                 : (IData)(vlSelfRef.__PVT__fetch1_instr_invalid_w)));
    vlSelfRef.__PVT__lsu_opcode_valid_w = ((~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q)) 
                                           & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_lsu_r)
                                               ? (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_issue_r)
                                               : (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r)));
    vlSelfRef.__PVT__csr_opcode_valid_w = ((~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q)) 
                                           & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r));
    vlSelfRef.__PVT__branch_d_exec0_request_w = ((IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_r) 
                                                 & ((IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r) 
                                                    & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r)));
    vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop_complete_w 
        = (((~ (IData)(vlSelfRef.__PVT__fetch1_valid_w)) 
            & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop1_w)) 
           | ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop2_w) 
              & ((~ (IData)(vlSelfRef.__PVT__fetch0_valid_w)) 
                 | (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop1_w))));
    vlSelfRef.u_mul__DOT____VdfgRegularize_hce0f6733_0_3 
        = (((QData)((IData)((vlSelfRef.__PVT__mul_opcode_ra_operand_w 
                             >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(vlSelfRef.__PVT__mul_opcode_ra_operand_w)));
    vlSelfRef.__PVT__u_mul__DOT__mult_inst_w = ((0x2000033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelfRef.__PVT__mul_opcode_opcode_w)) 
                                                | ((0x2001033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelfRef.__PVT__mul_opcode_opcode_w)) 
                                                   | ((0x2002033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelfRef.__PVT__mul_opcode_opcode_w)) 
                                                      | (0x2003033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.__PVT__mul_opcode_opcode_w)))));
    vlSelfRef.__PVT__u_lsu__DOT__dcache_flush_w = (IData)(
                                                          (0x3a001073U 
                                                           == 
                                                           (0xfff0707fU 
                                                            & vlSelfRef.__PVT__lsu_opcode_opcode_w)));
    vlSelfRef.__PVT__u_lsu__DOT__dcache_writeback_w 
        = (IData)((0x3a101073U == (0xfff0707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)));
    vlSelfRef.__PVT__u_lsu__DOT__dcache_invalidate_w 
        = (IData)((0x3a201073U == (0xfff0707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)));
    vlSelfRef.__PVT__u_lsu__DOT__req_lh_w = ((0x1003U 
                                              == (0x707fU 
                                                  & vlSelfRef.__PVT__lsu_opcode_opcode_w)) 
                                             | (0x5003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelfRef.__PVT__lsu_opcode_opcode_w)));
    vlSelfRef.__PVT__u_lsu__DOT__load_signed_inst_w 
        = ((3U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)) 
           | ((0x1003U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)) 
              | (0x2003U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w))));
    vlSelfRef.__PVT__u_lsu__DOT__load_inst_w = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__load_signed_inst_w) 
                                                | ((0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.__PVT__lsu_opcode_opcode_w)) 
                                                   | ((0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.__PVT__lsu_opcode_opcode_w)) 
                                                      | (0x6003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.__PVT__lsu_opcode_opcode_w)))));
    vlSelfRef.__PVT__u_lsu__DOT__mem_data_r = 0U;
    vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r = 0U;
    vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 0U;
    vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r = (((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                                                & (0x1073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.__PVT__lsu_opcode_opcode_w)))
                                                ? vlSelfRef.__PVT__lsu_opcode_ra_operand_w
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                                                    & (IData)(vlSelfRef.__PVT__u_lsu__DOT__load_inst_w))
                                                    ? 
                                                   (vlSelfRef.__PVT__lsu_opcode_ra_operand_w 
                                                    + 
                                                    (((- (IData)(
                                                                 (vlSelfRef.__PVT__lsu_opcode_opcode_w 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelfRef.__PVT__lsu_opcode_opcode_w 
                                                        >> 0x14U)))
                                                    : 
                                                   (vlSelfRef.__PVT__lsu_opcode_ra_operand_w 
                                                    + 
                                                    (((- (IData)(
                                                                 (vlSelfRef.__PVT__lsu_opcode_opcode_w 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelfRef.__PVT__lsu_opcode_opcode_w 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelfRef.__PVT__lsu_opcode_opcode_w 
                                                              >> 7U)))))));
    if (((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
         & ((0x2023U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)) 
            | ((0x2003U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)) 
               | (0x6003U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)))))) {
        vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r 
            = (0U != (3U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r));
    } else if (((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                & ((0x1023U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)) 
                   | (IData)(vlSelfRef.__PVT__u_lsu__DOT__req_lh_w)))) {
        vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r 
            = (1U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r);
    }
    vlSelfRef.__PVT__u_lsu__DOT__mem_rd_r = (((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                                              & (IData)(vlSelfRef.__PVT__u_lsu__DOT__load_inst_w)) 
                                             & (~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r)));
    if ((((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
          & (0x2023U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w))) 
         & (~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r)))) {
        vlSelfRef.__PVT__u_lsu__DOT__mem_data_r = vlSelfRef.__PVT__lsu_opcode_rb_operand_w;
        vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 0xfU;
    } else if ((((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                 & (0x1023U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w))) 
                & (~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r)))) {
        if ((2U == (3U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r))) {
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_r 
                = (vlSelfRef.__PVT__lsu_opcode_rb_operand_w 
                   << 0x10U);
            vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 0xcU;
        } else {
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_r 
                = (0xffffU & vlSelfRef.__PVT__lsu_opcode_rb_operand_w);
            vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 3U;
        }
    } else if (((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                & (0x23U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)))) {
        if ((2U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) {
            if ((1U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) {
                vlSelfRef.__PVT__u_lsu__DOT__mem_data_r 
                    = (vlSelfRef.__PVT__lsu_opcode_rb_operand_w 
                       << 0x18U);
                vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 8U;
            } else {
                vlSelfRef.__PVT__u_lsu__DOT__mem_data_r 
                    = (0xff0000U & (vlSelfRef.__PVT__lsu_opcode_rb_operand_w 
                                    << 0x10U));
                vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 4U;
            }
        } else if ((1U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) {
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_r 
                = (0xff00U & (vlSelfRef.__PVT__lsu_opcode_rb_operand_w 
                              << 8U));
            vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 2U;
        } else {
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_r 
                = (0xffU & vlSelfRef.__PVT__lsu_opcode_rb_operand_w);
            vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 1U;
        }
    } else {
        vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 0U;
    }
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___act_sequent__TOP__v__u_core__4(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___act_sequent__TOP__v__u_core__4\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_lsu__DOT__complete_err_e2_w 
        = ((IData)(vlSymsp->TOP__v.__PVT__dcache_ack_w) 
           & (IData)(vlSymsp->TOP__v.__PVT__dcache_error_w));
    vlSelfRef.__PVT__u_lsu__DOT__wb_result_r = 0U;
    vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r = (3U & vlSelfRef.__PVT__u_lsu__DOT__resp_addr_w);
    vlSelfRef.__PVT__u_lsu__DOT__load_byte_r = (1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                           [vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                           >> 1U)));
    vlSelfRef.__PVT__u_lsu__DOT__load_half_r = (1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                           [vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                           >> 2U)));
    vlSelfRef.__PVT__u_lsu__DOT__load_signed_r = (1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                             [vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                             >> 3U)));
    if ((((IData)(vlSymsp->TOP__v.__PVT__dcache_ack_w) 
          & (IData)(vlSymsp->TOP__v.__PVT__dcache_error_w)) 
         | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e2_q))) {
        vlSelfRef.__PVT__u_lsu__DOT__wb_result_r = vlSelfRef.__PVT__u_lsu__DOT__resp_addr_w;
    } else if (((IData)(vlSymsp->TOP__v.__PVT__dcache_ack_w) 
                & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_load_w))) {
        if (vlSelfRef.__PVT__u_lsu__DOT__load_byte_r) {
            vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                = ((2U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                    ? ((1U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                        ? (vlSymsp->TOP__v.__PVT__dcache_data_rd_w 
                           >> 0x18U) : (0xffU & (vlSymsp->TOP__v.__PVT__dcache_data_rd_w 
                                                 >> 0x10U)))
                    : ((1U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                        ? (0xffU & (vlSymsp->TOP__v.__PVT__dcache_data_rd_w 
                                    >> 8U)) : (0xffU 
                                               & vlSymsp->TOP__v.__PVT__dcache_data_rd_w)));
            if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__load_signed_r) 
                 & (vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    >> 7U))) {
                vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    = (0xffffff00U | (0xffU & vlSelfRef.__PVT__u_lsu__DOT__wb_result_r));
            }
        } else if (vlSelfRef.__PVT__u_lsu__DOT__load_half_r) {
            vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                = ((2U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                    ? (vlSymsp->TOP__v.__PVT__dcache_data_rd_w 
                       >> 0x10U) : (0xffffU & vlSymsp->TOP__v.__PVT__dcache_data_rd_w));
            if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__load_signed_r) 
                 & (vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    >> 0xfU))) {
                vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    = (0xffff0000U | (0xffffU & vlSelfRef.__PVT__u_lsu__DOT__wb_result_r));
            }
        } else {
            vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                = vlSymsp->TOP__v.__PVT__dcache_data_rd_w;
        }
    }
    vlSelfRef.__PVT__u_lsu__DOT__complete_ok_e2_w = 
        ((~ (IData)(vlSymsp->TOP__v.__PVT__dcache_error_w)) 
         & (IData)(vlSymsp->TOP__v.__PVT__dcache_ack_w));
    vlSelfRef.__PVT__writeback_mem_valid_w = ((IData)(vlSymsp->TOP__v.__PVT__dcache_ack_w) 
                                              | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e2_q));
    vlSelfRef.__PVT__u_lsu__DOT__delay_lsu_e2_w = (
                                                   (~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__complete_ok_e2_w)) 
                                                   & (IData)(vlSelfRef.__PVT__u_lsu__DOT__pending_lsu_e2_q));
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___act_sequent__TOP__v__u_core__6(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___act_sequent__TOP__v__u_core__6\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__branch_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__branch_call_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__branch_ret_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__branch_jmp_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__branch_target_r 
        = (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r 
           + (((- (IData)((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                           >> 0x1fU))) << 0xdU) | (
                                                   ((0x1000U 
                                                     & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                        >> 0x13U)) 
                                                    | (0x800U 
                                                       & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                          << 4U))) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                            >> 7U))))));
    if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x40005033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x40000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec1__DOT__imm12_r;
    } else if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec1__DOT__imm12_r;
    } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec1__DOT__imm12_r;
    } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec1__DOT__imm12_r;
    } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec1__DOT__imm12_r;
    } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec1__DOT__imm12_r;
    } else if ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                        >> 0x14U));
    } else if ((0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                        >> 0x14U));
    } else if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                        >> 0x14U));
    } else if ((0x37U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
            vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
                = (0xfffff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r);
        } else if (((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                    | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))) {
            vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r = 4U;
        }
    }
    if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x40005033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x40000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec0__DOT__imm12_r;
    } else if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec0__DOT__imm12_r;
    } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec0__DOT__imm12_r;
    } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec0__DOT__imm12_r;
    } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec0__DOT__imm12_r;
    } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec0__DOT__imm12_r;
    } else if ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                        >> 0x14U));
    } else if ((0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                        >> 0x14U));
    } else if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                        >> 0x14U));
    } else if ((0x37U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
            vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
                = (0xfffff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r);
        } else if (((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                    | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) {
            vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r = 4U;
        }
    }
    if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_target_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r 
               + (((- (IData)((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                               >> 0x1fU))) << 0x14U) 
                  | (((0xff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r) 
                      | (0x800U & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                   >> 9U))) | (0x7feU 
                                               & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                  >> 0x14U)))));
        vlSelfRef.__PVT__u_exec1__DOT__branch_call_r 
            = (1U == (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                               >> 7U)));
        vlSelfRef.__PVT__u_exec1__DOT__branch_jmp_r = 1U;
    } else if ((0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_ret_r 
            = (IData)(((0x8000U == (0xf8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                       & (0U == (0xfffU & vlSelfRef.__PVT__u_exec1__DOT__imm12_r))));
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_target_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r 
               + vlSelfRef.__PVT__u_exec1__DOT__imm12_r);
        vlSelfRef.__PVT__u_exec1__DOT__branch_call_r 
            = ((~ (IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_ret_r)) 
               & (0x80U == (0xf80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)));
        vlSelfRef.__PVT__u_exec1__DOT__branch_target_r 
            = (0xfffffffeU & vlSelfRef.__PVT__u_exec1__DOT__branch_target_r);
        vlSelfRef.__PVT__u_exec1__DOT__branch_jmp_r 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_call_r) 
                        | (IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_ret_r))));
    } else if ((0x63U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r 
               == vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r);
    } else if ((0x1063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r 
               != vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r);
    } else if ((0x4063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__y 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
        vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__x 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
        vlSelfRef.__PVT__u_exec1__DOT__less_than_signed__Vstatic__v 
            = (vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__x 
               - vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__y);
        vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__Vfuncout 
            = (1U & (((vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__x 
                       >> 0x1fU) != (vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__y 
                                     >> 0x1fU)) ? (vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__x 
                                                   >> 0x1fU)
                      : (vlSelfRef.__PVT__u_exec1__DOT__less_than_signed__Vstatic__v 
                         >> 0x1fU)));
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r 
            = vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__Vfuncout;
    } else if ((0x5063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r 
            = (([&]() {
                    vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__y 
                        = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
                    vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__x 
                        = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
                    vlSelfRef.__PVT__u_exec1__DOT__greater_than_signed__Vstatic__v 
                        = (vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__y 
                           - vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__x);
                    vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__Vfuncout 
                        = (1U & (((vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__x 
                                   >> 0x1fU) != (vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__y 
                                                 >> 0x1fU))
                                  ? (vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__y 
                                     >> 0x1fU) : (vlSelfRef.__PVT__u_exec1__DOT__greater_than_signed__Vstatic__v 
                                                  >> 0x1fU)));
                }(), (IData)(vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__Vfuncout)) 
               | (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r 
                  == vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r));
    } else if ((0x6063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r 
               < vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r);
    } else if ((0x7063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r 
               >= vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r);
    }
    vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x40005033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x40000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = (0xfffff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r);
    } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r;
    } else if (((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r;
    }
    vlSelfRef.__PVT__u_exec0__DOT__branch_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__branch_call_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__branch_ret_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__branch_jmp_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__branch_target_r 
        = (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r 
           + (((- (IData)((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                           >> 0x1fU))) << 0xdU) | (
                                                   ((0x1000U 
                                                     & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                        >> 0x13U)) 
                                                    | (0x800U 
                                                       & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                          << 4U))) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                            >> 7U))))));
    if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_target_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r 
               + (((- (IData)((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                               >> 0x1fU))) << 0x14U) 
                  | (((0xff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r) 
                      | (0x800U & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                   >> 9U))) | (0x7feU 
                                               & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                  >> 0x14U)))));
        vlSelfRef.__PVT__u_exec0__DOT__branch_call_r 
            = (1U == (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                               >> 7U)));
        vlSelfRef.__PVT__u_exec0__DOT__branch_jmp_r = 1U;
    } else if ((0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_ret_r 
            = (IData)(((0x8000U == (0xf8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                       & (0U == (0xfffU & vlSelfRef.__PVT__u_exec0__DOT__imm12_r))));
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_target_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
               + vlSelfRef.__PVT__u_exec0__DOT__imm12_r);
        vlSelfRef.__PVT__u_exec0__DOT__branch_call_r 
            = ((~ (IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_ret_r)) 
               & (0x80U == (0xf80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)));
        vlSelfRef.__PVT__u_exec0__DOT__branch_target_r 
            = (0xfffffffeU & vlSelfRef.__PVT__u_exec0__DOT__branch_target_r);
        vlSelfRef.__PVT__u_exec0__DOT__branch_jmp_r 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_call_r) 
                        | (IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_ret_r))));
    } else if ((0x63U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
               == vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r);
    } else if ((0x1063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
               != vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r);
    } else if ((0x4063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__y 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
        vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__x 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
        vlSelfRef.__PVT__u_exec0__DOT__less_than_signed__Vstatic__v 
            = (vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__x 
               - vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__y);
        vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__Vfuncout 
            = (1U & (((vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__x 
                       >> 0x1fU) != (vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__y 
                                     >> 0x1fU)) ? (vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__x 
                                                   >> 0x1fU)
                      : (vlSelfRef.__PVT__u_exec0__DOT__less_than_signed__Vstatic__v 
                         >> 0x1fU)));
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r 
            = vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__Vfuncout;
    } else if ((0x5063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r 
            = (([&]() {
                    vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__y 
                        = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
                    vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__x 
                        = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
                    vlSelfRef.__PVT__u_exec0__DOT__greater_than_signed__Vstatic__v 
                        = (vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__y 
                           - vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__x);
                    vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__Vfuncout 
                        = (1U & (((vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__x 
                                   >> 0x1fU) != (vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__y 
                                                 >> 0x1fU))
                                  ? (vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__y 
                                     >> 0x1fU) : (vlSelfRef.__PVT__u_exec0__DOT__greater_than_signed__Vstatic__v 
                                                  >> 0x1fU)));
                }(), (IData)(vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__Vfuncout)) 
               | (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
                  == vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r));
    } else if ((0x6063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
               < vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r);
    } else if ((0x7063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
               >= vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r);
    }
    vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x40005033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x40000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = (0xfffff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r);
    } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r;
    } else if (((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r;
    }
    vlSelfRef.__PVT__u_lsu__DOT__issue_lsu_e1_w = (
                                                   ((IData)(vlSymsp->TOP__v.__PVT__dcache_rd_w) 
                                                    | ((0U 
                                                        != (IData)(vlSymsp->TOP__v.__PVT__dcache_wr_w)) 
                                                       | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_writeback_q) 
                                                          | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q) 
                                                             | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q))))) 
                                                   & (IData)(vlSymsp->TOP__v.__PVT__dcache_accept_w));
    vlSelfRef.__PVT__lsu_stall_w = (((~ (IData)(vlSymsp->TOP__v.__PVT__dcache_accept_w)) 
                                     & ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_writeback_q) 
                                        | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q) 
                                           | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q) 
                                              | ((IData)(vlSymsp->TOP__v.__PVT__dcache_rd_w) 
                                                 | (0U 
                                                    != (IData)(vlSymsp->TOP__v.__PVT__dcache_wr_w))))))) 
                                    | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__delay_lsu_e2_w) 
                                       | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e1_q)));
    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__sub_res_w 
        = (vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
           - vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r);
    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__sub_res_w 
        = (vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
           - vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r);
    vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__push_i 
        = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__issue_lsu_e1_w) 
           | ((~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__delay_lsu_e2_w)) 
              & (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e1_q)));
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___nba_sequent__TOP__v__u_core__0(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___nba_sequent__TOP__v__u_core__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*8:0*/ __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q;
    __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q = 0;
    SData/*8:0*/ __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q;
    __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q = 0;
    SData/*15:0*/ __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q;
    __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q = 0;
    CData/*1:0*/ __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q;
    __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q = 0;
    CData/*0:0*/ __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q;
    __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q = 0;
    CData/*0:0*/ __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q;
    __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q = 0;
    CData/*1:0*/ __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q;
    __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q = 0;
    CData/*0:0*/ __Vdly__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q;
    __Vdly__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q = 0;
    CData/*0:0*/ __Vdly__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q;
    __Vdly__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v0;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v0 = 0;
    IData/*31:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8 = 0;
    CData/*2:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8 = 0;
    IData/*31:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9 = 0;
    CData/*2:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v0;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v0 = 0;
    CData/*1:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v512;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v512 = 0;
    SData/*8:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v512;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v512 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v512;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v512 = 0;
    CData/*1:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v513;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v513 = 0;
    SData/*8:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v513;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v513 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v513;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v513 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v0;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v0 = 0;
    IData/*31:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32 = 0;
    CData/*4:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32 = 0;
    IData/*31:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33 = 0;
    CData/*4:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v0;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v0 = 0;
    IData/*31:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32 = 0;
    CData/*4:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32 = 0;
    IData/*31:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33 = 0;
    CData/*4:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v0;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v0 = 0;
    CData/*0:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 = 0;
    CData/*4:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 = 0;
    CData/*0:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33 = 0;
    CData/*4:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v0;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v0 = 0;
    CData/*0:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32 = 0;
    CData/*4:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32 = 0;
    CData/*0:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33 = 0;
    CData/*4:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v0;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v0 = 0;
    CData/*0:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32 = 0;
    CData/*4:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32 = 0;
    CData/*0:0*/ __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33;
    __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33 = 0;
    CData/*4:0*/ __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33;
    __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v0;
    __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v2;
    __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v2 = 0;
    QData/*63:0*/ __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2;
    __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2 = 0;
    CData/*0:0*/ __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2;
    __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2;
    __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2 = 0;
    IData/*31:0*/ __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q__v2;
    __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q__v2 = 0;
    CData/*0:0*/ __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q__v2;
    __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q__v2 = 0;
    CData/*1:0*/ __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v4;
    __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v4 = 0;
    CData/*0:0*/ __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v4;
    __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v4 = 0;
    CData/*1:0*/ __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q__v4;
    __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q__v4 = 0;
    CData/*0:0*/ __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q__v4;
    __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q__v4 = 0;
    CData/*0:0*/ __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v2;
    __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v2 = 0;
    CData/*0:0*/ __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v2;
    __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v2 = 0;
    CData/*0:0*/ __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v2;
    __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v2 = 0;
    CData/*0:0*/ __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v3;
    __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v3 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v3;
    __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v3 = 0;
    CData/*0:0*/ __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v3;
    __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v3 = 0;
    CData/*0:0*/ __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v3;
    __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v3 = 0;
    CData/*0:0*/ __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v0;
    __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v0 = 0;
    QData/*35:0*/ __VdlyVal__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2;
    __VdlyVal__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 = 0;
    CData/*0:0*/ __VdlyDim0__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2;
    __VdlyDim0__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 = 0;
    CData/*0:0*/ __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2;
    __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 = 0;
    // Body
    __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q 
        = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q;
    __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q 
        = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v0 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v512 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v513 = 0U;
    __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q 
        = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v0 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v0 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v0 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v0 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v0 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v0 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32 = 0U;
    __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33 = 0U;
    vlSelfRef.__Vdly__u_div__DOT__dividend_q = vlSelfRef.__PVT__u_div__DOT__dividend_q;
    vlSelfRef.__Vdly__u_div__DOT__divisor_q = vlSelfRef.__PVT__u_div__DOT__divisor_q;
    vlSelfRef.__Vdly__u_div__DOT__quotient_q = vlSelfRef.__PVT__u_div__DOT__quotient_q;
    vlSelfRef.__Vdly__u_div__DOT__last_a_q = vlSelfRef.__PVT__u_div__DOT__last_a_q;
    vlSelfRef.__Vdly__u_div__DOT__last_b_q = vlSelfRef.__PVT__u_div__DOT__last_b_q;
    vlSelfRef.__Vdly__u_div__DOT__last_div_q = vlSelfRef.__PVT__u_div__DOT__last_div_q;
    vlSelfRef.__Vdly__u_div__DOT__last_divu_q = vlSelfRef.__PVT__u_div__DOT__last_divu_q;
    vlSelfRef.__Vdly__u_div__DOT__last_rem_q = vlSelfRef.__PVT__u_div__DOT__last_rem_q;
    vlSelfRef.__Vdly__u_div__DOT__last_remu_q = vlSelfRef.__PVT__u_div__DOT__last_remu_q;
    vlSelfRef.__Vdly__u_div__DOT__div_busy_q = vlSelfRef.__PVT__u_div__DOT__div_busy_q;
    vlSelfRef.__Vdly__u_div__DOT__q_mask_q = vlSelfRef.__PVT__u_div__DOT__q_mask_q;
    __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q 
        = vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q;
    __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q 
        = vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q;
    __Vdly__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q 
        = vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q;
    vlSelfRef.__Vdly__u_lsu__DOT__mem_unaligned_e1_q 
        = vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e1_q;
    vlSelfRef.__Vdly__u_lsu__DOT__mem_wr_q = vlSelfRef.__PVT__u_lsu__DOT__mem_wr_q;
    vlSelfRef.__Vdly__u_lsu__DOT__mem_invalidate_q 
        = vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q;
    vlSelfRef.__Vdly__u_lsu__DOT__mem_writeback_q = vlSelfRef.__PVT__u_lsu__DOT__mem_writeback_q;
    vlSelfRef.__Vdly__u_lsu__DOT__mem_flush_q = vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q;
    vlSelfRef.__Vdly__u_lsu__DOT__mem_rd_q = vlSelfRef.__PVT__u_lsu__DOT__mem_rd_q;
    __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q 
        = vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q;
    __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v2 = 0U;
    __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v3 = 0U;
    __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v3 = 0U;
    __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q 
        = vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q;
    __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v0 = 0U;
    __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2 = 0U;
    __Vdly__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q 
        = vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q;
    __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v0 = 0U;
    __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 = 0U;
    if (vlSymsp->TOP.__Vcellinp__v__rst_i) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i3 = 8U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i4 = 0x200U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2 = 0x20U;
        vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__i = 2U;
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__i = 2U;
        __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q = 0U;
        __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q = 1U;
        __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v0 = 1U;
        __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q = 0U;
        __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v0 = 1U;
        __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v0 = 1U;
        __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v0 = 1U;
        __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v0 = 1U;
        __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v0 = 1U;
        __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v0 = 1U;
        __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q = 0U;
        __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q = 0U;
        __Vdly__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q = 0U;
        __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q = 0U;
        __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q = 0U;
        __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v0 = 1U;
        __Vdly__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q = 0U;
        __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v0 = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__icache_fetch_q = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__pc_d_q = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__pred_d_q = 0U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_jmp_q = 0U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_jmp_q = 0U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_q = 0U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_ntaken_q = 0U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_call_q = 0U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_ret_q = 0U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_call_q = 0U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_ret_q = 0U;
        vlSelfRef.__PVT__u_exec1__DOT__pc_m_q = 0U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_q = 0U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_ntaken_q = 0U;
        vlSelfRef.__PVT__u_exec0__DOT__pc_m_q = 0U;
        vlSelfRef.__PVT__u_exec1__DOT__pc_x_q = 0U;
        vlSelfRef.__PVT__u_exec0__DOT__pc_x_q = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_pc_q = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_q = 0U;
        vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q = 0ULL;
        vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q = 0ULL;
        vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__pc_f_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__pending_lsu_e2_q = 0U;
        vlSelfRef.__PVT__u_mul__DOT__result_e3_q = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[0U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[1U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[2U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[3U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__active_q = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q = 0U;
    } else {
        if (vlSelfRef.__PVT__branch_request_w) {
            vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__i = 2U;
            __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q = 0U;
            __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q = 0U;
            __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q = 0U;
            __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v2 = 1U;
        } else {
            if (((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__push_w) 
                 & (~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop_complete_w)))) {
                __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q 
                    = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q)));
            } else if (((~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__push_w)) 
                        & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop_complete_w))) {
                __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q 
                    = (3U & ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q) 
                             - (IData)(1U)));
            }
            if (vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__push_w) {
                __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2 
                    = (((IData)(vlSelfRef.__PVT__u_frontend__DOT__fetch_fault_fetch_w) 
                        | (IData)(vlSelfRef.__PVT__u_frontend__DOT__fetch_fault_page_w))
                        ? 0ULL : vlSelfRef.__PVT__u_frontend__DOT__fetch_instr_w);
                __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2 
                    = vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q;
                __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2 = 1U;
                __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q__v2 
                    = vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_w;
                __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q__v2 
                    = vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q;
                __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v4 
                    = vlSelfRef.u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_fifo__info0_in_i;
                __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v4 
                    = vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q;
                __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q__v4 
                    = vlSelfRef.u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_fifo__info0_in_i;
                __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q__v4 
                    = vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q;
                __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v2 
                    = vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q;
                __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v2 
                    = (1U & (~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__fetch_pred_branch_w)));
                __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v2 
                    = vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q;
                __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q)));
            }
            if (vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop1_w) {
                __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v3 
                    = vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q;
                __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v3 = 1U;
            }
            if (vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop2_w) {
                __VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v3 
                    = vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q;
                __VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v3 = 1U;
            }
            if (vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop_complete_w) {
                __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q)));
            }
        }
        if (((IData)(vlSelfRef.__PVT__branch_info_is_taken_w) 
             | (IData)(vlSelfRef.__PVT__branch_info_is_not_taken_w))) {
            __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q 
                = ((0x1feU & ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q) 
                              << 1U)) | (IData)(vlSelfRef.__PVT__branch_info_is_taken_w));
        }
        if (vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_miss_r) {
            __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q 
                = ((1U & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q))
                    ? (0xb400U ^ (0x7fffU & ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q) 
                                             >> 1U)))
                    : (0x7fffU & ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q) 
                                  >> 1U)));
        }
        if (((IData)(vlSelfRef.__PVT__branch_info_is_taken_w) 
             & (3U > vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q
                [(0x1ffU & (vlSelfRef.__PVT__branch_info_source_w 
                            >> 2U))]))) {
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v512 
                = (3U & ((IData)(1U) + vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q
                         [(0x1ffU & (vlSelfRef.__PVT__branch_info_source_w 
                                     >> 2U))]));
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v512 
                = (0x1ffU & (vlSelfRef.__PVT__branch_info_source_w 
                             >> 2U));
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v512 = 1U;
        } else if (((IData)(vlSelfRef.__PVT__branch_info_is_not_taken_w) 
                    & (0U < vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q
                       [(0x1ffU & (vlSelfRef.__PVT__branch_info_source_w 
                                   >> 2U))]))) {
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v513 
                = (3U & (vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q
                         [(0x1ffU & (vlSelfRef.__PVT__branch_info_source_w 
                                     >> 2U))] - (IData)(1U)));
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v513 
                = (0x1ffU & (vlSelfRef.__PVT__branch_info_source_w 
                             >> 2U));
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v513 = 1U;
        }
        if (vlSymsp->TOP__v__u_core__u_issue.__PVT__mispredicted_r) {
            __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q 
                = ((0x1feU & ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q) 
                              << 1U)) | (IData)(vlSelfRef.__PVT__branch_info_is_taken_w));
        } else if (((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__pred_taken_w) 
                    | ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r) 
                       & ((~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__pred_taken_w)) 
                          & (~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__stall_w)))))) {
            __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q 
                = ((0x1feU & ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q) 
                              << 1U)) | (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__pred_taken_w));
        }
        if (vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r) {
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32 
                = vlSelfRef.__PVT__branch_info_is_jmp_w;
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r;
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32 = 1U;
            if (vlSelfRef.__PVT__branch_info_is_taken_w) {
                __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32 
                    = vlSelfRef.__PVT__branch_info_pc_w;
                __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32 
                    = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r;
                __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32 = 1U;
            }
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32 
                = vlSelfRef.__PVT__branch_info_is_ret_w;
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r;
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32 = 1U;
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 
                = vlSelfRef.__PVT__branch_info_is_call_w;
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r;
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32 = 1U;
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32 
                = vlSelfRef.__PVT__branch_info_source_w;
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r;
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32 = 1U;
        } else if (vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_miss_r) {
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33 
                = vlSelfRef.__PVT__branch_info_is_jmp_w;
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33 
                = (0x1fU & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q));
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33 = 1U;
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33 
                = vlSelfRef.__PVT__branch_info_pc_w;
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33 
                = (0x1fU & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q));
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33 = 1U;
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33 
                = vlSelfRef.__PVT__branch_info_is_ret_w;
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33 
                = (0x1fU & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q));
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33 = 1U;
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33 
                = vlSelfRef.__PVT__branch_info_is_call_w;
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33 
                = (0x1fU & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q));
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33 = 1U;
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33 
                = vlSelfRef.__PVT__branch_info_source_w;
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33 
                = (0x1fU & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q));
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33 = 1U;
        }
        if ((((IData)(vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__push_i) 
              & (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__accept_o)) 
             & (~ ((IData)(vlSelfRef.__PVT__writeback_mem_valid_w) 
                   & (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__valid_o))))) {
            __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q 
                = (3U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q)));
        } else if (((~ ((IData)(vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__push_i) 
                        & (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__accept_o))) 
                    & ((IData)(vlSelfRef.__PVT__writeback_mem_valid_w) 
                       & (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__valid_o)))) {
            __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q 
                = (3U & ((IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelfRef.__PVT__writeback_mem_valid_w) 
             & (0U != (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q)))) {
            __Vdly__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q)));
        }
        if (((IData)(vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__push_i) 
             & (2U != (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q)))) {
            __VdlyVal__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 
                = (((QData)((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_addr_q)) 
                    << 4U) | (QData)((IData)(((((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_ls_q) 
                                                << 3U) 
                                               | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_xh_q) 
                                                  << 2U)) 
                                              | (((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_xb_q) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_load_q))))));
            __VdlyDim0__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 
                = vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q;
            __VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2 = 1U;
            __Vdly__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q 
                = (1U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q)));
        }
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_r;
        if (((IData)(vlSymsp->TOP__v.__PVT__icache_rd_w) 
             & (IData)(vlSymsp->TOP__v.__PVT__icache_accept_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__icache_fetch_q = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__pc_d_q 
                = vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w;
            vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__pred_d_q 
                = ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_he46ab735_0_2)
                    ? ((4U & vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)
                        ? ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r) 
                           << 1U) : (((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r) 
                                      << 1U) | (1U 
                                                & (~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r)))))
                    : 0U);
        } else if (vlSymsp->TOP__v.__PVT__icache_valid_w) {
            vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__icache_fetch_q = 0U;
            vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__pred_d_q = 0U;
        }
        if (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_issue_r) {
            vlSelfRef.__PVT__u_exec1__DOT__branch_jmp_q 
                = (((IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_r) 
                    & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_issue_r)) 
                   & (IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_jmp_r));
            vlSelfRef.__PVT__u_exec1__DOT__branch_call_q 
                = (((IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_r) 
                    & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_issue_r)) 
                   & (IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_call_r));
            vlSelfRef.__PVT__u_exec1__DOT__branch_ret_q 
                = (((IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_r) 
                    & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_issue_r)) 
                   & (IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_ret_r));
            vlSelfRef.__PVT__u_exec1__DOT__pc_m_q = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r;
            vlSelfRef.__PVT__u_exec1__DOT__branch_taken_q 
                = ((IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_r) 
                   & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_issue_r) 
                      & (IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r)));
            vlSelfRef.__PVT__u_exec1__DOT__branch_ntaken_q 
                = ((IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_r) 
                   & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_issue_r) 
                      & (~ (IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r))));
            vlSelfRef.__PVT__u_exec1__DOT__pc_x_q = 
                ((IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r)
                  ? vlSelfRef.__PVT__u_exec1__DOT__branch_target_r
                  : ((IData)(4U) + vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r));
        }
        if (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r) {
            vlSelfRef.__PVT__u_exec0__DOT__branch_jmp_q 
                = (((IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_r) 
                    & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r)) 
                   & (IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_jmp_r));
            vlSelfRef.__PVT__u_exec0__DOT__branch_taken_q 
                = ((IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_r) 
                   & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r) 
                      & (IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r)));
            vlSelfRef.__PVT__u_exec0__DOT__branch_ntaken_q 
                = ((IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_r) 
                   & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r) 
                      & (~ (IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r))));
            vlSelfRef.__PVT__u_exec0__DOT__branch_call_q 
                = (((IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_r) 
                    & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r)) 
                   & (IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_call_r));
            vlSelfRef.__PVT__u_exec0__DOT__branch_ret_q 
                = (((IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_r) 
                    & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r)) 
                   & (IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_ret_r));
            vlSelfRef.__PVT__u_exec0__DOT__pc_m_q = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r;
            vlSelfRef.__PVT__u_exec0__DOT__pc_x_q = 
                ((IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r)
                  ? vlSelfRef.__PVT__u_exec0__DOT__branch_target_r
                  : ((IData)(4U) + vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r));
        }
        if (((IData)(vlSelfRef.__PVT__branch_request_w) 
             & ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__icache_busy_w) 
                | (~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__active_q))))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_pc_q 
                = vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_pc_w;
            vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_q 
                = vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_w;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__icache_busy_w)))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_pc_q = 0U;
            vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_q = 0U;
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__exec1_hold_w)))) {
            if (((IData)(vlSelfRef.__PVT__mul_opcode_valid_w) 
                 & (IData)(vlSelfRef.__PVT__u_mul__DOT__mult_inst_w))) {
                if ((0x2002033U == (0xfe00707fU & vlSelfRef.__PVT__mul_opcode_opcode_w))) {
                    vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q 
                        = (QData)((IData)(vlSelfRef.__PVT__mul_opcode_rb_operand_w));
                    vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q 
                        = vlSelfRef.u_mul__DOT____VdfgRegularize_hce0f6733_0_3;
                } else if ((0x2001033U == (0xfe00707fU 
                                           & vlSelfRef.__PVT__mul_opcode_opcode_w))) {
                    vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q 
                        = (((QData)((IData)((vlSelfRef.__PVT__mul_opcode_rb_operand_w 
                                             >> 0x1fU))) 
                            << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__mul_opcode_rb_operand_w)));
                    vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q 
                        = vlSelfRef.u_mul__DOT____VdfgRegularize_hce0f6733_0_3;
                } else {
                    vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q 
                        = (QData)((IData)(vlSelfRef.__PVT__mul_opcode_rb_operand_w));
                    vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q 
                        = (QData)((IData)(vlSelfRef.__PVT__mul_opcode_ra_operand_w));
                }
            } else {
                vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q = 0ULL;
                vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q = 0ULL;
            }
            vlSelfRef.__PVT__u_mul__DOT__result_e3_q 
                = vlSelfRef.__PVT__u_mul__DOT__result_e2_q;
        }
        if (((((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__stall_w) 
               | (~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__active_q))) 
              | (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__stall_q)) 
             & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__pc_f_q 
                = vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_pc_w;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__stall_w)))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__pc_f_q 
                = ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w)
                    ? vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q
                   [vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q]
                    : ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_he46ab735_0_1)
                        ? vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r
                        : ((IData)(8U) + (0xfffffff8U 
                                          & vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))));
        }
        if (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__mispredicted_r) 
             & (IData)(vlSelfRef.__PVT__branch_info_is_call_w))) {
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8 
                = ((IData)(4U) + vlSelfRef.__PVT__branch_info_source_w);
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r;
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8 = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r;
        } else if (((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_call_pred_w) 
                    & (~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__stall_w)))) {
            __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9 
                = ((IData)(4U) + ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r)
                                   ? (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)
                                   : vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w));
            __VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r;
            __VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9 = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r;
        } else if ((((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w) 
                     & (~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__stall_w))) 
                    | ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__mispredicted_r) 
                       & (IData)(vlSelfRef.__PVT__branch_info_is_ret_w)))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r;
        }
        if (vlSelfRef.__PVT__u_lsu__DOT__issue_lsu_e1_w) {
            vlSelfRef.__PVT__u_lsu__DOT__pending_lsu_e2_q = 1U;
        } else if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__complete_ok_e2_w) 
                    | (IData)(vlSelfRef.__PVT__u_lsu__DOT__complete_err_e2_w))) {
            vlSelfRef.__PVT__u_lsu__DOT__pending_lsu_e2_q = 0U;
        }
        if (((IData)(vlSelfRef.__PVT__u_frontend__DOT__fetch_valid_w) 
             & (2U == (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q)))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[0U] 
                = (IData)(vlSelfRef.__PVT__u_frontend__DOT__fetch_instr_w);
            vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[1U] 
                = (IData)((vlSelfRef.__PVT__u_frontend__DOT__fetch_instr_w 
                           >> 0x20U));
            vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[2U] 
                = vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_w;
            vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[3U] 
                = (((IData)(vlSelfRef.__PVT__u_frontend__DOT__fetch_fault_page_w) 
                    << 3U) | (((IData)(vlSelfRef.__PVT__u_frontend__DOT__fetch_fault_fetch_w) 
                               << 2U) | (IData)(vlSelfRef.__PVT__u_frontend__DOT__fetch_pred_branch_w)));
        } else {
            vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[0U] = 0U;
            vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[1U] = 0U;
            vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[2U] = 0U;
            vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[3U] = 0U;
        }
        if (vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_w) {
            vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__active_q = 1U;
        }
    }
    vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__icache_invalidate_q = 0U;
    vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_valid_q 
        = ((1U & (~ (IData)(vlSymsp->TOP.__Vcellinp__v__rst_i))) 
           && ((IData)(vlSelfRef.__PVT__u_frontend__DOT__fetch_valid_w) 
               & (2U == (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q))));
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v0) {
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0x1ffU)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q[__Vilp1] = 3U;
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v512) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v512] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v512;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v513) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v513] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q__v513;
    }
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q 
        = __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q;
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q 
        = __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q;
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v0) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[1U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[2U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[3U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[4U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[5U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[6U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[7U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[8U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[9U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0xaU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0xbU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0xcU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0xdU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0xeU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0xfU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x10U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x11U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x12U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x13U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x14U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x15U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x16U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x17U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x18U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x19U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x1aU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x1bU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x1cU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x1dU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x1eU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0x1fU] = 0U;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v32;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q__v33;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v0) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[1U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[2U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[3U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[4U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[5U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[6U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[7U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[8U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[9U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0xaU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0xbU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0xcU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0xdU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0xeU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0xfU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x10U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x11U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x12U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x13U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x14U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x15U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x16U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x17U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x18U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x19U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x1aU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x1bU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x1cU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x1dU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x1eU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0x1fU] = 0U;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v32;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q__v33;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v0) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[1U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[2U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[3U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[4U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[5U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[6U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[7U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[8U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[9U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0xaU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0xbU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0xcU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0xdU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0xeU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0xfU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x10U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x11U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x12U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x13U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x14U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x15U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x16U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x17U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x18U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x19U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x1aU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x1bU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x1cU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x1dU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x1eU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0x1fU] = 0U;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v32;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q__v33;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v0) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[1U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[2U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[3U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[4U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[5U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[6U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[7U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[8U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[9U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0xaU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0xbU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0xcU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0xdU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0xeU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0xfU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x10U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x11U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x12U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x13U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x14U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x15U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x16U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x17U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x18U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x19U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x1aU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x1bU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x1cU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x1dU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x1eU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0x1fU] = 0U;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v32;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q__v33;
    }
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q 
        = __Vdly__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q;
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v0) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[1U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[2U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[3U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[4U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[5U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[6U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[7U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[8U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[9U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0xaU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0xbU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0xcU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0xdU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0xeU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0xfU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x10U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x11U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x12U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x13U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x14U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x15U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x16U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x17U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x18U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x19U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x1aU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x1bU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x1cU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x1dU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x1eU] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0x1fU] = 0U;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v32;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q__v33;
    }
    vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q 
        = __Vdly__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q;
    vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q 
        = __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q;
    vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q 
        = __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q;
    if (__VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v0) {
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q[0U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q[1U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q[0U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q[1U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q[0U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q[1U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q[0U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q[1U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q[0U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q[1U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q[0U] = 0ULL;
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q[1U] = 0ULL;
    }
    if (__VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v2) {
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q[0U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q[1U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q[0U] = 0U;
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q[1U] = 0U;
    }
    if (__VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2) {
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q[__VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v4] 
            = __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q__v4;
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q[__VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q__v4] 
            = __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q__v4;
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q[__VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v2] 
            = __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v2;
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q[__VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q__v2] 
            = __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q__v2;
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q[__VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v2] = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q[__VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2] 
            = __VdlyVal__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q__v2;
    }
    if (__VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v3) {
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q[__VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q__v3] = 0U;
    }
    if (__VdlySet__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v3) {
        vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q[__VdlyDim0__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q__v3] = 0U;
    }
    vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q 
        = __Vdly__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q;
    vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q 
        = __Vdly__u_lsu__DOT__u_lsu_request__DOT__count_q;
    if (__VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v0) {
        vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q[0U] = 0ULL;
        vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q[1U] = 0ULL;
    }
    if (__VdlySet__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2) {
        vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q[__VdlyDim0__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2] 
            = __VdlyVal__u_lsu__DOT__u_lsu_request__DOT__ram_q__v2;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v0) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[0U] = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[1U] = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[2U] = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[3U] = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[4U] = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[5U] = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[6U] = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[7U] = 1U;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v8;
    }
    if (__VdlySet__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[__VdlyDim0__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9] 
            = __VdlyVal__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q__v9;
    }
    vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q 
        = __Vdly__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q;
    vlSelfRef.__PVT__fetch0_fault_page_w = (1U & (vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q
                                                  [vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q] 
                                                  >> 1U));
    vlSelfRef.__PVT__fetch0_fault_fetch_w = (1U & vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q
                                             [vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]);
    vlSelfRef.__PVT__fetch1_fault_page_w = (1U & (vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q
                                                  [vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q] 
                                                  >> 1U));
    vlSelfRef.__PVT__fetch1_fault_fetch_w = (1U & vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q
                                             [vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]);
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
        = (vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q
           [vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q] 
           >> 3U);
    vlSelfRef.__PVT__fetch1_instr_w = (IData)((vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q
                                               [vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q] 
                                               >> 0x20U));
    vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__valid_o 
        = (0U != (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q));
    vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__accept_o 
        = (2U != (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q));
    vlSelfRef.__PVT__u_lsu__DOT__resp_addr_w = (IData)(
                                                       (vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                        [vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                        >> 4U));
    vlSelfRef.__PVT__u_lsu__DOT__resp_load_w = (1U 
                                                & (IData)(
                                                          vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                          [vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q]));
    vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__stall_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__v__rst_i)) 
           & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__stall_w));
    if (vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_valid_q) {
        vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_w 
            = vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[2U];
        vlSelfRef.__PVT__u_frontend__DOT__fetch_pred_branch_w 
            = (3U & vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[3U]);
    } else {
        vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_w 
            = (0xfffffff8U & vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__pc_d_q);
        vlSelfRef.__PVT__u_frontend__DOT__fetch_pred_branch_w 
            = (3U & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__pred_d_q));
    }
    vlSelfRef.__PVT__u_frontend__DOT__fetch_fault_page_w 
        = ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_valid_q) 
           && (1U & (vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[3U] 
                     >> 3U)));
    vlSelfRef.__PVT__fetch1_valid_w = ((0U != (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q)) 
                                       & vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q
                                       [vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]);
    vlSelfRef.__PVT__fetch0_valid_w = ((0U != (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q)) 
                                       & vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q
                                       [vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]);
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_55 
        = ((0x6fU == (0x7fU & vlSelfRef.__PVT__fetch1_instr_w)) 
           | (0x67U == (0x707fU & vlSelfRef.__PVT__fetch1_instr_w)));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_62 
        = ((0x63U == (0x707fU & vlSelfRef.__PVT__fetch1_instr_w)) 
           | (0x1063U == (0x707fU & vlSelfRef.__PVT__fetch1_instr_w)));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_61 
        = ((0x6063U == (0x707fU & vlSelfRef.__PVT__fetch1_instr_w)) 
           | (0x7063U == (0x707fU & vlSelfRef.__PVT__fetch1_instr_w)));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_58 
        = ((0x100073U == vlSelfRef.__PVT__fetch1_instr_w) 
           | (0x200073U == (0xcfffffffU & vlSelfRef.__PVT__fetch1_instr_w)));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_57 
        = ((0x2004033U == (0xfe00707fU & vlSelfRef.__PVT__fetch1_instr_w)) 
           | (0x2005033U == (0xfe00707fU & vlSelfRef.__PVT__fetch1_instr_w)));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_63 
        = ((0x6073U == (0x707fU & vlSelfRef.__PVT__fetch1_instr_w)) 
           | (0x7073U == (0x707fU & vlSelfRef.__PVT__fetch1_instr_w)));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_56 
        = ((0x2000033U == (0xfe00707fU & vlSelfRef.__PVT__fetch1_instr_w)) 
           | (0x2001033U == (0xfe00707fU & vlSelfRef.__PVT__fetch1_instr_w)));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_60 
        = ((0x2002033U == (0xfe00707fU & vlSelfRef.__PVT__fetch1_instr_w)) 
           | (0x2003033U == (0xfe00707fU & vlSelfRef.__PVT__fetch1_instr_w)));
    vlSelfRef.__PVT__fetch1_instr_exec_w = ((0x7013U 
                                             == (0x707fU 
                                                 & vlSelfRef.__PVT__fetch1_instr_w)) 
                                            | ((0x13U 
                                                == 
                                                (0x707fU 
                                                 & vlSelfRef.__PVT__fetch1_instr_w)) 
                                               | ((0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                  | ((0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                     | ((0x6013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                        | ((0x4013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                           | ((0x1013U 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                              | ((0x5013U 
                                                                  == 
                                                                  (0xfc00707fU 
                                                                   & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                 | ((0x40005013U 
                                                                     == 
                                                                     (0xfc00707fU 
                                                                      & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                    | ((0x37U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                       | ((0x17U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                          | ((0x33U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                             | ((0x40000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | (0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w))))))))))))))))))))));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_59 
        = ((0x2006033U == (0xfe00707fU & vlSelfRef.__PVT__fetch1_instr_w)) 
           | (0x2007033U == (0xfe00707fU & vlSelfRef.__PVT__fetch1_instr_w)));
    vlSelfRef.__PVT__fetch1_instr_invalid_w = ((~ ((IData)(vlSelfRef.__PVT__fetch1_instr_exec_w) 
                                                   | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_55) 
                                                      | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_62) 
                                                         | ((0x4063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                            | ((0x5063U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                               | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_61) 
                                                                  | ((3U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                     | ((0x1003U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                        | ((0x2003U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                           | ((0x4003U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                              | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x6003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x73U 
                                                                                == vlSelfRef.__PVT__fetch1_instr_w) 
                                                                                | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_58) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_63) 
                                                                                | ((0x10500073U 
                                                                                == 
                                                                                (0xffff8fffU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0xfU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x100fU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x12000073U 
                                                                                == 
                                                                                (0xfe007fffU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x2001033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x2002033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x2003033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x2005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_59)))))))))))))))))))))))))))))))))) 
                                               & (IData)(vlSelfRef.__PVT__fetch1_valid_w));
    vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_he46ab735_0_0 
        = (1U & (~ vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q
                 [vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q]));
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___nba_sequent__TOP__v__u_core__1(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___nba_sequent__TOP__v__u_core__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_63;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_63 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    vlSelfRef.__PVT__u_frontend__DOT__fetch_fault_fetch_w 
        = (1U & ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_valid_q)
                  ? (vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[3U] 
                     >> 2U) : (IData)(vlSymsp->TOP__v__u_icache.__PVT__axi_error_q)));
    vlSelfRef.__PVT__branch_csr_pc_w = ((1U == (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__init_done))
                                         ? vlSymsp->TOP.__Vcellinp__v__reset_vector_i
                                         : vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_target_q);
    vlSelfRef.__PVT__fetch0_instr_w = (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q
                                              [vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]);
    vlSelfRef.__PVT__branch_csr_request_w = ((1U == (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__init_done)) 
                                             | (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_q));
    if ((0U != (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__exception_wb_q))) {
        vlSelfRef.__PVT__csr_writeback_exception_pc_w 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__pc_wb_q;
        vlSelfRef.__PVT__csr_writeback_exception_addr_w 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
    } else {
        vlSelfRef.__PVT__csr_writeback_exception_pc_w 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__pc_wb_q;
        vlSelfRef.__PVT__csr_writeback_exception_addr_w 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
    }
    vlSelfRef.__PVT__fetch1_instr_branch_w = ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_55) 
                                              | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_62) 
                                                 | ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                    | ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                       | (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_61)))));
    vlSelfRef.__PVT__fetch1_instr_mul_w = ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_56) 
                                           | (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_60));
    vlSelfRef.__PVT__fetch1_instr_lsu_w = ((3U == (0x707fU 
                                                   & vlSelfRef.__PVT__fetch1_instr_w)) 
                                           | ((0x1003U 
                                               == (0x707fU 
                                                   & vlSelfRef.__PVT__fetch1_instr_w)) 
                                              | ((0x2003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                 | ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                    | ((0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                       | ((0x6003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                          | ((0x23U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                             | ((0x1023U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                | (0x2023U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelfRef.__PVT__fetch1_instr_w))))))))));
    vlSelfRef.__PVT__fetch1_instr_rd_valid_w = ((0x67U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                | ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                   | ((0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                      | ((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                         | ((0x13U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                            | ((0x1013U 
                                                                == 
                                                                (0xfc00707fU 
                                                                 & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                               | ((0x2013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                  | ((0x3013U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                     | ((0x4013U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                        | ((0x5013U 
                                                                            == 
                                                                            (0xfc00707fU 
                                                                             & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                           | ((0x40005013U 
                                                                               == 
                                                                               (0xfc00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                              | ((0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x33U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x40000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((3U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x1003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x6003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_56) 
                                                                                | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_60) 
                                                                                | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_57) 
                                                                                | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_59) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch1_instr_w)) 
                                                                                | (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_63))))))))))))))))))))))))))))))))))))));
    if (vlSymsp->TOP__v__u_core__u_issue.__VdfgRegularize_hf12f852d_0_0) {
        vlSelfRef.__PVT__branch_info_pc_w = vlSelfRef.__PVT__u_exec1__DOT__pc_x_q;
        vlSelfRef.__PVT__branch_info_source_w = vlSelfRef.__PVT__u_exec1__DOT__pc_m_q;
    } else {
        vlSelfRef.__PVT__branch_info_pc_w = vlSelfRef.__PVT__u_exec0__DOT__pc_x_q;
        vlSelfRef.__PVT__branch_info_source_w = vlSelfRef.__PVT__u_exec0__DOT__pc_m_q;
    }
    vlSelfRef.u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_fifo__info0_in_i 
        = (((IData)(vlSelfRef.__PVT__u_frontend__DOT__fetch_fault_page_w) 
            << 1U) | (IData)(vlSelfRef.__PVT__u_frontend__DOT__fetch_fault_fetch_w));
    if (vlSymsp->TOP.__Vcellinp__v__rst_i) {
        vlSelfRef.__PVT__u_lsu__DOT__mem_addr_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_q = 0U;
        vlSelfRef.__Vdly__u_lsu__DOT__mem_rd_q = 0U;
        vlSelfRef.__Vdly__u_lsu__DOT__mem_wr_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_cacheable_q = 0U;
        vlSelfRef.__Vdly__u_lsu__DOT__mem_invalidate_q = 0U;
        vlSelfRef.__Vdly__u_lsu__DOT__mem_writeback_q = 0U;
        vlSelfRef.__Vdly__u_lsu__DOT__mem_flush_q = 0U;
        vlSelfRef.__Vdly__u_lsu__DOT__mem_unaligned_e1_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_load_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_xb_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_xh_q = 0U;
        vlSelfRef.__PVT__u_lsu__DOT__mem_ls_q = 0U;
        vlSelfRef.__PVT__u_mul__DOT__result_e2_q = 0U;
        vlSelfRef.__PVT__u_exec0__DOT__result_q = 0U;
        vlSelfRef.__PVT__u_exec1__DOT__result_q = 0U;
        vlSelfRef.__PVT__u_div__DOT__wb_result_q = 0U;
        vlSelfRef.__PVT__u_mul__DOT__mulhi_sel_e1_q = 0U;
        vlSelfRef.__Vdly__u_div__DOT__div_busy_q = 0U;
        vlSelfRef.__Vdly__u_div__DOT__dividend_q = 0U;
        vlSelfRef.__Vdly__u_div__DOT__divisor_q = 0ULL;
        vlSelfRef.__PVT__u_div__DOT__invert_res_q = 0U;
        vlSelfRef.__Vdly__u_div__DOT__quotient_q = 0U;
        vlSelfRef.__Vdly__u_div__DOT__q_mask_q = 0U;
        vlSelfRef.__PVT__u_div__DOT__div_inst_q = 0U;
        vlSelfRef.__Vdly__u_div__DOT__last_a_q = 0U;
        vlSelfRef.__Vdly__u_div__DOT__last_b_q = 0U;
        vlSelfRef.__Vdly__u_div__DOT__last_div_q = 0U;
        vlSelfRef.__Vdly__u_div__DOT__last_divu_q = 0U;
        vlSelfRef.__Vdly__u_div__DOT__last_rem_q = 0U;
        vlSelfRef.__Vdly__u_div__DOT__last_remu_q = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__complete_err_e2_w) 
             | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e2_q))) {
            vlSelfRef.__PVT__u_lsu__DOT__mem_addr_q = 0U;
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_q = 0U;
            vlSelfRef.__Vdly__u_lsu__DOT__mem_rd_q = 0U;
            vlSelfRef.__Vdly__u_lsu__DOT__mem_wr_q = 0U;
            vlSelfRef.__PVT__u_lsu__DOT__mem_cacheable_q = 0U;
            vlSelfRef.__Vdly__u_lsu__DOT__mem_invalidate_q = 0U;
            vlSelfRef.__Vdly__u_lsu__DOT__mem_writeback_q = 0U;
            vlSelfRef.__Vdly__u_lsu__DOT__mem_flush_q = 0U;
            vlSelfRef.__Vdly__u_lsu__DOT__mem_unaligned_e1_q = 0U;
            vlSelfRef.__PVT__u_lsu__DOT__mem_load_q = 0U;
            vlSelfRef.__PVT__u_lsu__DOT__mem_xb_q = 0U;
            vlSelfRef.__PVT__u_lsu__DOT__mem_xh_q = 0U;
            vlSelfRef.__PVT__u_lsu__DOT__mem_ls_q = 0U;
        } else if ((1U & (~ ((((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_rd_q) 
                               | (0U != (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_wr_q))) 
                              | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e1_q)) 
                             & (IData)(vlSelfRef.__PVT__u_lsu__DOT__delay_lsu_e2_w))))) {
            if ((1U & (~ ((((((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_writeback_q) 
                              | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q)) 
                             | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q)) 
                            | (IData)(vlSymsp->TOP__v.__PVT__dcache_rd_w)) 
                           | (0U != (IData)(vlSymsp->TOP__v.__PVT__dcache_wr_w))) 
                          & (~ (IData)(vlSymsp->TOP__v.__PVT__dcache_accept_w)))))) {
                vlSelfRef.__PVT__u_lsu__DOT__mem_addr_q = 0U;
                vlSelfRef.__PVT__u_lsu__DOT__mem_data_wr_q 
                    = vlSelfRef.__PVT__u_lsu__DOT__mem_data_r;
                vlSelfRef.__Vdly__u_lsu__DOT__mem_rd_q 
                    = vlSelfRef.__PVT__u_lsu__DOT__mem_rd_r;
                vlSelfRef.__Vdly__u_lsu__DOT__mem_wr_q 
                    = vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r;
                vlSelfRef.__PVT__u_lsu__DOT__mem_cacheable_q = 0U;
                vlSelfRef.__Vdly__u_lsu__DOT__mem_invalidate_q = 0U;
                vlSelfRef.__Vdly__u_lsu__DOT__mem_writeback_q = 0U;
                vlSelfRef.__Vdly__u_lsu__DOT__mem_flush_q = 0U;
                vlSelfRef.__Vdly__u_lsu__DOT__mem_unaligned_e1_q 
                    = vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r;
                vlSelfRef.__PVT__u_lsu__DOT__mem_load_q 
                    = ((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                       & (IData)(vlSelfRef.__PVT__u_lsu__DOT__load_inst_w));
                vlSelfRef.__PVT__u_lsu__DOT__mem_xb_q 
                    = (((3U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)) 
                        | (0x4003U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w))) 
                       | (0x23U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)));
                vlSelfRef.__PVT__u_lsu__DOT__mem_xh_q 
                    = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__req_lh_w) 
                       | (0x1023U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)));
                vlSelfRef.__PVT__u_lsu__DOT__mem_ls_q 
                    = vlSelfRef.__PVT__u_lsu__DOT__load_signed_inst_w;
                vlSelfRef.__PVT__u_lsu__DOT__mem_cacheable_q 
                    = (((0x80000000U <= vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r) 
                        & (0x8fffffffU >= vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) 
                       | ((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                          & (((IData)(vlSelfRef.__PVT__u_lsu__DOT__dcache_invalidate_w) 
                              | (IData)(vlSelfRef.__PVT__u_lsu__DOT__dcache_writeback_w)) 
                             | (IData)(vlSelfRef.__PVT__u_lsu__DOT__dcache_flush_w))));
                vlSelfRef.__Vdly__u_lsu__DOT__mem_invalidate_q 
                    = ((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                       & (IData)(vlSelfRef.__PVT__u_lsu__DOT__dcache_invalidate_w));
                vlSelfRef.__Vdly__u_lsu__DOT__mem_writeback_q 
                    = ((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                       & (IData)(vlSelfRef.__PVT__u_lsu__DOT__dcache_writeback_w));
                vlSelfRef.__Vdly__u_lsu__DOT__mem_flush_q 
                    = ((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                       & (IData)(vlSelfRef.__PVT__u_lsu__DOT__dcache_flush_w));
                vlSelfRef.__PVT__u_lsu__DOT__mem_addr_q 
                    = vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r;
            }
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__exec1_hold_w)))) {
            vlSelfRef.__PVT__u_mul__DOT__result_e2_q 
                = ((IData)(vlSelfRef.__PVT__u_mul__DOT__mulhi_sel_e1_q)
                    ? vlSelfRef.__PVT__u_mul__DOT__mult_result_w[1U]
                    : vlSelfRef.__PVT__u_mul__DOT__mult_result_w[0U]);
            vlSelfRef.__PVT__u_exec0__DOT__result_q 
                = vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__result_r;
            vlSelfRef.__PVT__u_exec1__DOT__result_q 
                = vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__result_r;
            vlSelfRef.__PVT__u_mul__DOT__mulhi_sel_e1_q 
                = (((IData)(vlSelfRef.__PVT__mul_opcode_valid_w) 
                    & (IData)(vlSelfRef.__PVT__u_mul__DOT__mult_inst_w)) 
                   && (0x2000033U != (0xfe00707fU & vlSelfRef.__PVT__mul_opcode_opcode_w)));
        }
        if (vlSelfRef.__PVT__u_div__DOT__div_complete_w) {
            vlSelfRef.__PVT__u_div__DOT__wb_result_q 
                = ((IData)(vlSelfRef.__PVT__u_div__DOT__div_inst_q)
                    ? ((IData)(vlSelfRef.__PVT__u_div__DOT__invert_res_q)
                        ? (- vlSelfRef.__PVT__u_div__DOT__quotient_q)
                        : vlSelfRef.__PVT__u_div__DOT__quotient_q)
                    : ((IData)(vlSelfRef.__PVT__u_div__DOT__invert_res_q)
                        ? (- vlSelfRef.__PVT__u_div__DOT__dividend_q)
                        : vlSelfRef.__PVT__u_div__DOT__dividend_q));
        }
        if (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r) 
             & ((IData)(vlSelfRef.__PVT__u_div__DOT__div_operation_w) 
                | ((0x2006033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                   | (0x2007033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))))) {
            if (((((((vlSelfRef.__PVT__u_div__DOT__last_a_q 
                      == vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r) 
                     & (vlSelfRef.__PVT__u_div__DOT__last_b_q 
                        == vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r)) 
                    & ((IData)(vlSelfRef.__PVT__u_div__DOT__last_div_q) 
                       == (0x2004033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) 
                   & ((IData)(vlSelfRef.__PVT__u_div__DOT__last_divu_q) 
                      == (0x2005033U == (0xfe00707fU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) 
                  & ((IData)(vlSelfRef.__PVT__u_div__DOT__last_rem_q) 
                     == (0x2006033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) 
                 & ((IData)(vlSelfRef.__PVT__u_div__DOT__last_remu_q) 
                    == (0x2007033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))))) {
                vlSelfRef.__Vdly__u_div__DOT__div_busy_q = 1U;
            } else {
                vlSelfRef.__Vdly__u_div__DOT__last_a_q 
                    = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
                vlSelfRef.__Vdly__u_div__DOT__last_b_q 
                    = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
                vlSelfRef.__Vdly__u_div__DOT__last_div_q 
                    = (0x2004033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r));
                vlSelfRef.__Vdly__u_div__DOT__last_divu_q 
                    = (0x2005033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r));
                vlSelfRef.__Vdly__u_div__DOT__last_rem_q 
                    = (0x2006033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r));
                vlSelfRef.__Vdly__u_div__DOT__last_remu_q 
                    = (0x2007033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r));
                vlSelfRef.__Vdly__u_div__DOT__div_busy_q = 1U;
                vlSelfRef.__PVT__u_div__DOT__div_inst_q 
                    = vlSelfRef.__PVT__u_div__DOT__div_operation_w;
                vlSelfRef.__Vdly__u_div__DOT__dividend_q 
                    = (((IData)(vlSelfRef.__PVT__u_div__DOT__signed_operation_w) 
                        & (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
                           >> 0x1fU)) ? (- vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r)
                        : vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r);
                vlSelfRef.__Vdly__u_div__DOT__divisor_q 
                    = (((IData)(vlSelfRef.__PVT__u_div__DOT__signed_operation_w) 
                        & (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r 
                           >> 0x1fU)) ? ((QData)((IData)(
                                                         (- vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r))) 
                                         << 0x1fU) : 
                       ((QData)((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r)) 
                        << 0x1fU));
                vlSelfRef.__PVT__u_div__DOT__invert_res_q 
                    = ((((0x2004033U == (0xfe00707fU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                         & ((vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
                             >> 0x1fU) != (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r 
                                           >> 0x1fU))) 
                        & (0U != vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r)) 
                       | ((0x2006033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                          & (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
                             >> 0x1fU)));
                vlSelfRef.__Vdly__u_div__DOT__quotient_q = 0U;
                vlSelfRef.__Vdly__u_div__DOT__q_mask_q = 0x80000000U;
            }
        } else if (vlSelfRef.__PVT__u_div__DOT__div_complete_w) {
            vlSelfRef.__Vdly__u_div__DOT__div_busy_q = 0U;
        } else if (vlSelfRef.__PVT__u_div__DOT__div_busy_q) {
            if ((vlSelfRef.__PVT__u_div__DOT__divisor_q 
                 <= (QData)((IData)(vlSelfRef.__PVT__u_div__DOT__dividend_q)))) {
                vlSelfRef.__Vdly__u_div__DOT__dividend_q 
                    = (vlSelfRef.__PVT__u_div__DOT__dividend_q 
                       - (IData)(vlSelfRef.__PVT__u_div__DOT__divisor_q));
                vlSelfRef.__Vdly__u_div__DOT__quotient_q 
                    = (vlSelfRef.__PVT__u_div__DOT__quotient_q 
                       | vlSelfRef.__PVT__u_div__DOT__q_mask_q);
            }
            vlSelfRef.__Vdly__u_div__DOT__divisor_q 
                = (0x3fffffffffffffffULL & (vlSelfRef.__PVT__u_div__DOT__divisor_q 
                                            >> 1U));
            vlSelfRef.__Vdly__u_div__DOT__q_mask_q 
                = (vlSelfRef.__PVT__u_div__DOT__q_mask_q 
                   >> 1U);
        }
    }
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_55 
        = ((0x6fU == (0x7fU & vlSelfRef.__PVT__fetch0_instr_w)) 
           | (0x67U == (0x707fU & vlSelfRef.__PVT__fetch0_instr_w)));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_62 
        = ((0x63U == (0x707fU & vlSelfRef.__PVT__fetch0_instr_w)) 
           | (0x1063U == (0x707fU & vlSelfRef.__PVT__fetch0_instr_w)));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_61 
        = ((0x6063U == (0x707fU & vlSelfRef.__PVT__fetch0_instr_w)) 
           | (0x7063U == (0x707fU & vlSelfRef.__PVT__fetch0_instr_w)));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_56 
        = ((0x2000033U == (0xfe00707fU & vlSelfRef.__PVT__fetch0_instr_w)) 
           | (0x2001033U == (0xfe00707fU & vlSelfRef.__PVT__fetch0_instr_w)));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_60 
        = ((0x2002033U == (0xfe00707fU & vlSelfRef.__PVT__fetch0_instr_w)) 
           | (0x2003033U == (0xfe00707fU & vlSelfRef.__PVT__fetch0_instr_w)));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_57 
        = ((0x2004033U == (0xfe00707fU & vlSelfRef.__PVT__fetch0_instr_w)) 
           | (0x2005033U == (0xfe00707fU & vlSelfRef.__PVT__fetch0_instr_w)));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_58 
        = ((0x100073U == vlSelfRef.__PVT__fetch0_instr_w) 
           | (0x200073U == (0xcfffffffU & vlSelfRef.__PVT__fetch0_instr_w)));
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_63 
        = ((0x6073U == (0x707fU & vlSelfRef.__PVT__fetch0_instr_w)) 
           | (0x7073U == (0x707fU & vlSelfRef.__PVT__fetch0_instr_w)));
    vlSelfRef.__PVT__fetch0_instr_exec_w = ((0x7013U 
                                             == (0x707fU 
                                                 & vlSelfRef.__PVT__fetch0_instr_w)) 
                                            | ((0x13U 
                                                == 
                                                (0x707fU 
                                                 & vlSelfRef.__PVT__fetch0_instr_w)) 
                                               | ((0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                  | ((0x3013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                     | ((0x6013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                        | ((0x4013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                           | ((0x1013U 
                                                               == 
                                                               (0xfc00707fU 
                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                              | ((0x5013U 
                                                                  == 
                                                                  (0xfc00707fU 
                                                                   & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                 | ((0x40005013U 
                                                                     == 
                                                                     (0xfc00707fU 
                                                                      & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                    | ((0x37U 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                       | ((0x17U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                          | ((0x33U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                             | ((0x40000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | (0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w))))))))))))))))))))));
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_59 
        = ((0x2006033U == (0xfe00707fU & vlSelfRef.__PVT__fetch0_instr_w)) 
           | (0x2007033U == (0xfe00707fU & vlSelfRef.__PVT__fetch0_instr_w)));
    vlSelfRef.__PVT__u_div__DOT__valid_q = ((~ (IData)(vlSymsp->TOP.__Vcellinp__v__rst_i)) 
                                            & (IData)(vlSelfRef.__PVT__u_div__DOT__div_complete_w));
    vlSelfRef.__PVT__u_lsu__DOT__mem_wr_q = vlSelfRef.__Vdly__u_lsu__DOT__mem_wr_q;
    vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q = vlSelfRef.__Vdly__u_lsu__DOT__mem_invalidate_q;
    vlSelfRef.__PVT__u_lsu__DOT__mem_writeback_q = vlSelfRef.__Vdly__u_lsu__DOT__mem_writeback_q;
    vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q = vlSelfRef.__Vdly__u_lsu__DOT__mem_flush_q;
    vlSelfRef.__PVT__u_lsu__DOT__mem_rd_q = vlSelfRef.__Vdly__u_lsu__DOT__mem_rd_q;
    vlSelfRef.__PVT__fetch0_instr_rd_valid_w = ((0x67U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                | ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                   | ((0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                      | ((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                         | ((0x13U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                            | ((0x1013U 
                                                                == 
                                                                (0xfc00707fU 
                                                                 & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                               | ((0x2013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                  | ((0x3013U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                     | ((0x4013U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                        | ((0x5013U 
                                                                            == 
                                                                            (0xfc00707fU 
                                                                             & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                           | ((0x40005013U 
                                                                               == 
                                                                               (0xfc00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                              | ((0x6013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x7013U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x33U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x40000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x1033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x2033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x3033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x4033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x5033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x40005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x6033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x7033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((3U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x1003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x2003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x4003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x6003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_56) 
                                                                                | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_60) 
                                                                                | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_57) 
                                                                                | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_59) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | (IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_63))))))))))))))))))))))))))))))))))))));
    vlSelfRef.__PVT__fetch0_instr_invalid_w = ((~ ((IData)(vlSelfRef.__PVT__fetch0_instr_exec_w) 
                                                   | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_55) 
                                                      | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_62) 
                                                         | ((0x4063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                            | ((0x5063U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                               | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_61) 
                                                                  | ((3U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                     | ((0x1003U 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                        | ((0x2003U 
                                                                            == 
                                                                            (0x707fU 
                                                                             & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                           | ((0x4003U 
                                                                               == 
                                                                               (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                              | ((0x5003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x6003U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x23U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x1023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x2023U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x73U 
                                                                                == vlSelfRef.__PVT__fetch0_instr_w) 
                                                                                | ((IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_58) 
                                                                                | ((0x1073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x2073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x3073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x5073U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((IData)(u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_63) 
                                                                                | ((0x10500073U 
                                                                                == 
                                                                                (0xffff8fffU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0xfU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x100fU 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x12000073U 
                                                                                == 
                                                                                (0xfe007fffU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x2000033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x2001033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x2002033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x2003033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x2004033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | ((0x2005033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelfRef.__PVT__fetch0_instr_w)) 
                                                                                | (IData)(vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_59)))))))))))))))))))))))))))))))))) 
                                               & (IData)(vlSelfRef.__PVT__fetch0_valid_w));
    __Vtemp_2[0U] = (IData)(vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q);
    __Vtemp_2[1U] = (((- (IData)((1U & (IData)((vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q 
                                                >> 0x20U))))) 
                      << 1U) | (IData)((vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q 
                                        >> 0x20U)));
    __Vtemp_2[2U] = ((- (IData)((1U & (IData)((vlSelfRef.__PVT__u_mul__DOT__operand_a_e1_q 
                                               >> 0x20U))))) 
                     >> 0x1fU);
    __Vtemp_3[0U] = (IData)(vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q);
    __Vtemp_3[1U] = (((- (IData)((1U & (IData)((vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q 
                                                >> 0x20U))))) 
                      << 1U) | (IData)((vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q 
                                        >> 0x20U)));
    __Vtemp_3[2U] = ((- (IData)((1U & (IData)((vlSelfRef.__PVT__u_mul__DOT__operand_b_e1_q 
                                               >> 0x20U))))) 
                     >> 0x1fU);
    VL_MUL_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelfRef.__PVT__u_mul__DOT__mult_result_w[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.__PVT__u_mul__DOT__mult_result_w[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.__PVT__u_mul__DOT__mult_result_w[2U] 
        = (1U & __Vtemp_4[2U]);
    vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e2_q 
        = ((~ (IData)(vlSymsp->TOP.__Vcellinp__v__rst_i)) 
           & ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e1_q) 
              & (~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__delay_lsu_e2_w))));
    vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e1_q 
        = vlSelfRef.__Vdly__u_lsu__DOT__mem_unaligned_e1_q;
    vlSelfRef.__PVT__u_div__DOT__divisor_q = vlSelfRef.__Vdly__u_div__DOT__divisor_q;
    vlSelfRef.__PVT__u_div__DOT__last_a_q = vlSelfRef.__Vdly__u_div__DOT__last_a_q;
    vlSelfRef.__PVT__u_div__DOT__last_b_q = vlSelfRef.__Vdly__u_div__DOT__last_b_q;
    vlSelfRef.__PVT__u_div__DOT__last_div_q = vlSelfRef.__Vdly__u_div__DOT__last_div_q;
    vlSelfRef.__PVT__u_div__DOT__last_divu_q = vlSelfRef.__Vdly__u_div__DOT__last_divu_q;
    vlSelfRef.__PVT__u_div__DOT__last_rem_q = vlSelfRef.__Vdly__u_div__DOT__last_rem_q;
    vlSelfRef.__PVT__u_div__DOT__last_remu_q = vlSelfRef.__Vdly__u_div__DOT__last_remu_q;
    vlSelfRef.__PVT__u_div__DOT__dividend_q = vlSelfRef.__Vdly__u_div__DOT__dividend_q;
    vlSelfRef.__PVT__u_div__DOT__quotient_q = vlSelfRef.__Vdly__u_div__DOT__quotient_q;
    vlSelfRef.__PVT__u_div__DOT__div_busy_q = vlSelfRef.__Vdly__u_div__DOT__div_busy_q;
    vlSelfRef.__PVT__u_div__DOT__q_mask_q = vlSelfRef.__Vdly__u_div__DOT__q_mask_q;
    vlSelfRef.__PVT__u_div__DOT__div_complete_w = (
                                                   (~ 
                                                    (0U 
                                                     != vlSelfRef.__PVT__u_div__DOT__q_mask_q)) 
                                                   & (IData)(vlSelfRef.__PVT__u_div__DOT__div_busy_q));
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___nba_sequent__TOP__v__u_core__2(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___nba_sequent__TOP__v__u_core__2\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__writeback_mem_exception_w = (((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e2_q) 
                                                   & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_load_w))
                                                   ? 0x14U
                                                   : 
                                                  (((~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_load_w)) 
                                                    & (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e2_q))
                                                    ? 0x16U
                                                    : 
                                                   (((IData)(vlSymsp->TOP__v.__PVT__dcache_error_w) 
                                                     & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_load_w))
                                                     ? 0x15U
                                                     : 
                                                    (((~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_load_w)) 
                                                      & (IData)(vlSymsp->TOP__v.__PVT__dcache_error_w))
                                                      ? 0x17U
                                                      : 0U))));
    vlSelfRef.__PVT__u_lsu__DOT__complete_err_e2_w 
        = ((IData)(vlSymsp->TOP__v.__PVT__dcache_ack_w) 
           & (IData)(vlSymsp->TOP__v.__PVT__dcache_error_w));
    vlSelfRef.__PVT__u_lsu__DOT__complete_ok_e2_w = 
        ((~ (IData)(vlSymsp->TOP__v.__PVT__dcache_error_w)) 
         & (IData)(vlSymsp->TOP__v.__PVT__dcache_ack_w));
    vlSelfRef.__PVT__writeback_mem_valid_w = ((IData)(vlSymsp->TOP__v.__PVT__dcache_ack_w) 
                                              | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e2_q));
    vlSelfRef.__PVT__branch_info_is_jmp_w = (((IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_jmp_q) 
                                              & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                                 >> 6U)) 
                                             | ((IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_jmp_q) 
                                                & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                                   >> 6U)));
    vlSelfRef.__PVT__branch_info_is_not_taken_w = (
                                                   ((IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_ntaken_q) 
                                                    & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                                       >> 6U)) 
                                                   | ((IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_ntaken_q) 
                                                      & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                                         >> 6U)));
    vlSelfRef.__PVT__branch_info_is_taken_w = (((IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_taken_q) 
                                                & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                                   >> 6U)) 
                                               | ((IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_taken_q) 
                                                  & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                                     >> 6U)));
    vlSelfRef.__PVT__branch_info_is_ret_w = (((IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_ret_q) 
                                              & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                                 >> 6U)) 
                                             | ((IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_ret_q) 
                                                & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                                   >> 6U)));
    vlSelfRef.__PVT__branch_info_is_call_w = (((IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_call_q) 
                                               & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                                  >> 6U)) 
                                              | ((IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_call_q) 
                                                 & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                                    >> 6U)));
    vlSelfRef.__PVT__u_lsu__DOT__delay_lsu_e2_w = (
                                                   (~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__complete_ok_e2_w)) 
                                                   & (IData)(vlSelfRef.__PVT__u_lsu__DOT__pending_lsu_e2_q));
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___nba_sequent__TOP__v__u_core__3(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___nba_sequent__TOP__v__u_core__3\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__branch_csr_priv_w = ((vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_satp_q 
                                           >> 0x1fU)
                                           ? (IData)(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q)
                                           : 3U);
    vlSelfRef.__PVT__csr_writeback_exception_w = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__exception_wb_q) 
                                                  | (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__exception_wb_q));
    vlSelfRef.__PVT__exec1_hold_w = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_stall_raw_w) 
                                     | (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_stall_raw_w));
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0U;
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_r 
        = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q;
    if (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__mispredicted_r) 
         & (IData)(vlSelfRef.__PVT__branch_info_is_call_w))) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_r 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q)));
    } else if (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__mispredicted_r) 
                & (IData)(vlSelfRef.__PVT__branch_info_is_ret_w))) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_r 
            = (7U & ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 0U;
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_miss_r = 0U;
    if (vlSymsp->TOP__v__u_core__u_issue.__PVT__mispredicted_r) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1 = 0x20U;
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [1U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [2U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 2U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [3U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 3U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [4U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 4U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [5U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 5U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [6U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 6U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [7U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 7U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [8U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 8U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [9U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 9U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xaU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xaU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xbU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xbU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xcU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xcU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xdU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xdU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xeU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xeU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xfU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0xfU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x10U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x10U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x11U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x11U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x12U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x12U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x13U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x13U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x14U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x14U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x15U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x15U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x16U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x16U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x17U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x17U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x18U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x18U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x19U] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x19U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1aU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1aU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1bU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1bU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1cU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1cU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1dU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1dU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1eU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1eU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1fU] == vlSelfRef.__PVT__branch_info_source_w)) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r = 0x1fU;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r = 1U;
        }
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_miss_r 
            = (1U & (~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r)));
    }
    vlSelfRef.__PVT__branch_request_w = ((IData)(vlSelfRef.__PVT__branch_csr_request_w) 
                                         | (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__mispredicted_r));
    vlSelfRef.__PVT__u_exec1__DOT__imm12_r = (((- (IData)(
                                                          (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                 >> 0x14U));
    vlSelfRef.__PVT__u_div__DOT__div_operation_w = 
        ((0x2004033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
         | (0x2005033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)));
    vlSelfRef.__PVT__u_div__DOT__signed_operation_w 
        = ((0x2004033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
           | (0x2006033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)));
    vlSelfRef.__PVT__u_exec0__DOT__imm12_r = (((- (IData)(
                                                          (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                 >> 0x14U));
    vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_pc_w 
        = (((~ (IData)(vlSelfRef.__PVT__branch_request_w)) 
            & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_q))
            ? vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_pc_q
            : ((IData)(vlSelfRef.__PVT__branch_csr_request_w)
                ? vlSelfRef.__PVT__branch_csr_pc_w : vlSymsp->TOP__v__u_core__u_issue.__PVT__pc_x_q));
    vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_w 
        = ((IData)(vlSelfRef.__PVT__branch_request_w) 
           | (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_q));
    vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
        = (((~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__stall_q)) 
            & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_w))
            ? vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_pc_w
            : vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__pc_f_q);
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 0U;
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 0U;
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r = 0U;
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r = 0U;
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r = 0U;
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
        = ((IData)(8U) + (0xfffffff8U & vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w));
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0U;
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [1U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [1U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [1U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [1U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [1U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 1U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [2U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [2U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [2U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [2U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [2U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 2U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [3U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [3U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [3U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [3U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [3U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 3U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [4U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [4U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [4U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [4U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [4U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 4U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [5U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [5U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [5U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [5U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [5U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 5U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [6U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [6U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [6U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [6U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [6U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 6U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [7U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [7U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [7U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [7U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [7U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 7U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [8U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [8U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [8U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [8U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [8U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 8U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [9U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [9U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [9U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [9U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [9U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 9U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xaU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xaU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xaU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xaU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xaU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xaU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xbU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xbU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xbU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xbU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xbU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xbU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xcU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xcU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xcU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xcU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xcU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xcU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xdU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xdU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xdU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xdU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xdU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xdU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xeU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xeU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xeU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xeU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xeU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xeU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0xfU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0xfU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0xfU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0xfU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0xfU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xfU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x10U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x10U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x10U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x10U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x10U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x10U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x11U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x11U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x11U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x11U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x11U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x11U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x12U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x12U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x12U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x12U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x12U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x12U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x13U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x13U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x13U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x13U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x13U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x13U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x14U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x14U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x14U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x14U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x14U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x14U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x15U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x15U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x15U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x15U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x15U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x15U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x16U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x16U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x16U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x16U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x16U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x16U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x17U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x17U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x17U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x17U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x17U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x17U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x18U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x18U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x18U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x18U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x18U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x18U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x19U] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x19U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x19U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x19U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x19U];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x19U;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1aU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1aU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1aU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1aU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1aU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1aU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1bU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1bU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1bU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1bU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1bU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1bU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1cU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1cU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1cU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1cU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1cU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1cU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1dU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1dU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1dU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1dU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1dU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1dU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1eU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1eU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1eU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1eU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1eU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1eU;
    }
    if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
         [0x1fU] == vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w)) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U));
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
            [0x1fU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
            [0x1fU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
            [0x1fU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
            = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
            [0x1fU];
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1fU;
    }
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x20U;
    if ((1U & ((~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r)) 
               & (~ (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                     >> 2U))))) {
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0U;
        }
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0 = 0x20U;
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [1U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [1U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [1U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [1U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [1U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 1U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [2U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [2U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [2U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [2U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [2U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 2U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [3U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [3U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [3U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [3U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [3U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 3U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [4U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [4U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [4U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [4U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [4U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 4U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [5U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [5U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [5U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [5U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [5U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 5U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [6U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [6U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [6U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [6U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [6U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 6U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [7U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [7U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [7U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [7U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [7U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 7U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [8U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [8U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [8U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [8U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [8U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 8U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [9U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [9U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [9U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [9U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [9U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 9U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xaU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xaU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xaU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xaU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xaU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xaU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xbU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xbU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xbU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xbU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xbU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xbU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xcU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xcU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xcU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xcU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xcU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xcU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xdU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xdU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xdU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xdU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xdU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xdU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xeU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xeU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xeU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xeU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xeU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xeU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0xfU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0xfU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0xfU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0xfU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0xfU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0xfU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x10U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x10U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x10U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x10U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x10U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x10U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x11U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x11U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x11U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x11U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x11U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x11U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x12U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x12U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x12U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x12U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x12U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x12U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x13U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x13U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x13U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x13U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x13U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x13U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x14U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x14U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x14U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x14U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x14U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x14U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x15U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x15U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x15U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x15U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x15U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x15U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x16U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x16U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x16U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x16U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x16U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x16U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x17U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x17U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x17U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x17U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x17U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x17U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x18U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x18U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x18U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x18U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x18U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x18U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x19U] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x19U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x19U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x19U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x19U];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x19U;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1aU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1aU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1aU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1aU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1aU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1aU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1bU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1bU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1bU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1bU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1bU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1bU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1cU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1cU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1cU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1cU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1cU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1cU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1dU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1dU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1dU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1dU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1dU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1dU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1eU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1eU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1eU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1eU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1eU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1eU;
        }
        if ((vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q
             [0x1fU] == (4U | vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w))) {
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r = 1U;
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q
                [0x1fU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q
                [0x1fU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q
                [0x1fU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r 
                = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q
                [0x1fU];
            vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r = 0x1fU;
        }
    }
    vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_he46ab735_0_1 
        = ((2U <= vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q
            [((0x1feU & (vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_f_w 
                         >> 2U)) | (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r))]) 
           | (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r));
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_call_pred_w 
        = ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r) 
           & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_he46ab735_0_0) 
              & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r)));
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w 
        = ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r) 
           & ((IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_he46ab735_0_0) 
              & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r)));
    vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_he46ab735_0_2 
        = ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r) 
           & ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w) 
              | (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_he46ab735_0_1)));
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___nba_sequent__TOP__v__u_core__4(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___nba_sequent__TOP__v__u_core__4\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_lsu__DOT__issue_lsu_e1_w = (
                                                   ((IData)(vlSymsp->TOP__v.__PVT__dcache_rd_w) 
                                                    | ((0U 
                                                        != (IData)(vlSymsp->TOP__v.__PVT__dcache_wr_w)) 
                                                       | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_writeback_q) 
                                                          | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q) 
                                                             | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q))))) 
                                                   & (IData)(vlSymsp->TOP__v.__PVT__dcache_accept_w));
    vlSelfRef.__PVT__lsu_stall_w = (((~ (IData)(vlSymsp->TOP__v.__PVT__dcache_accept_w)) 
                                     & ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_writeback_q) 
                                        | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_flush_q) 
                                           | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_invalidate_q) 
                                              | ((IData)(vlSymsp->TOP__v.__PVT__dcache_rd_w) 
                                                 | (0U 
                                                    != (IData)(vlSymsp->TOP__v.__PVT__dcache_wr_w))))))) 
                                    | ((IData)(vlSelfRef.__PVT__u_lsu__DOT__delay_lsu_e2_w) 
                                       | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e1_q)));
    vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__push_i 
        = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__issue_lsu_e1_w) 
           | ((~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__delay_lsu_e2_w)) 
              & (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e1_q)));
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___nba_sequent__TOP__v__u_core__5(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___nba_sequent__TOP__v__u_core__5\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop1_w 
        = (((~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q)) 
            & (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_accept_r) 
                & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot0_valid_r)) 
               | (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot1_valid_r))) 
           & (IData)(vlSelfRef.__PVT__fetch0_valid_w));
    vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop2_w 
        = (((~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q)) 
            & (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_accept_r) 
                & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot1_valid_r)) 
               | (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_accept_r))) 
           & (IData)(vlSelfRef.__PVT__fetch1_valid_w));
    if (vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_mul_r) {
        vlSelfRef.__PVT__mul_opcode_opcode_w = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r;
        vlSelfRef.__PVT__mul_opcode_valid_w = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_issue_r;
    } else {
        vlSelfRef.__PVT__mul_opcode_opcode_w = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r;
        vlSelfRef.__PVT__mul_opcode_valid_w = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r;
    }
    vlSelfRef.__PVT__lsu_opcode_opcode_w = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_lsu_r)
                                             ? vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r
                                             : vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r);
    vlSelfRef.__PVT__csr_opcode_invalid_w = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r) 
                                             & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot0_valid_r)
                                                 ? (IData)(vlSelfRef.__PVT__fetch0_instr_invalid_w)
                                                 : (IData)(vlSelfRef.__PVT__fetch1_instr_invalid_w)));
    vlSelfRef.__PVT__lsu_opcode_valid_w = ((~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q)) 
                                           & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_lsu_r)
                                               ? (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_issue_r)
                                               : (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r)));
    vlSelfRef.__PVT__csr_opcode_valid_w = ((~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q)) 
                                           & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r));
    vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop_complete_w 
        = (((~ (IData)(vlSelfRef.__PVT__fetch1_valid_w)) 
            & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop1_w)) 
           | ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop2_w) 
              & ((~ (IData)(vlSelfRef.__PVT__fetch0_valid_w)) 
                 | (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop1_w))));
    vlSelfRef.__PVT__u_mul__DOT__mult_inst_w = ((0x2000033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelfRef.__PVT__mul_opcode_opcode_w)) 
                                                | ((0x2001033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelfRef.__PVT__mul_opcode_opcode_w)) 
                                                   | ((0x2002033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelfRef.__PVT__mul_opcode_opcode_w)) 
                                                      | (0x2003033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelfRef.__PVT__mul_opcode_opcode_w)))));
    vlSelfRef.__PVT__u_lsu__DOT__dcache_flush_w = (IData)(
                                                          (0x3a001073U 
                                                           == 
                                                           (0xfff0707fU 
                                                            & vlSelfRef.__PVT__lsu_opcode_opcode_w)));
    vlSelfRef.__PVT__u_lsu__DOT__dcache_writeback_w 
        = (IData)((0x3a101073U == (0xfff0707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)));
    vlSelfRef.__PVT__u_lsu__DOT__dcache_invalidate_w 
        = (IData)((0x3a201073U == (0xfff0707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)));
    vlSelfRef.__PVT__u_lsu__DOT__req_lh_w = ((0x1003U 
                                              == (0x707fU 
                                                  & vlSelfRef.__PVT__lsu_opcode_opcode_w)) 
                                             | (0x5003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelfRef.__PVT__lsu_opcode_opcode_w)));
    vlSelfRef.__PVT__u_lsu__DOT__load_signed_inst_w 
        = ((3U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)) 
           | ((0x1003U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)) 
              | (0x2003U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w))));
    vlSelfRef.__PVT__u_lsu__DOT__load_inst_w = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__load_signed_inst_w) 
                                                | ((0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelfRef.__PVT__lsu_opcode_opcode_w)) 
                                                   | ((0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelfRef.__PVT__lsu_opcode_opcode_w)) 
                                                      | (0x6003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelfRef.__PVT__lsu_opcode_opcode_w)))));
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___nba_comb__TOP__v__u_core__0(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___nba_comb__TOP__v__u_core__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_frontend__DOT__fetch_instr_w 
        = ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_valid_q)
            ? (((QData)((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[0U])))
            : vlSymsp->TOP__v__u_icache.__PVT__inst_r);
    vlSelfRef.__PVT__u_lsu__DOT__wb_result_r = 0U;
    vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r = (3U & vlSelfRef.__PVT__u_lsu__DOT__resp_addr_w);
    vlSelfRef.__PVT__u_lsu__DOT__load_byte_r = (1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                           [vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                           >> 1U)));
    vlSelfRef.__PVT__u_lsu__DOT__load_half_r = (1U 
                                                & (IData)(
                                                          (vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                           [vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                           >> 2U)));
    vlSelfRef.__PVT__u_lsu__DOT__load_signed_r = (1U 
                                                  & (IData)(
                                                            (vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                             [vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                             >> 3U)));
    if ((((IData)(vlSymsp->TOP__v.__PVT__dcache_ack_w) 
          & (IData)(vlSymsp->TOP__v.__PVT__dcache_error_w)) 
         | (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e2_q))) {
        vlSelfRef.__PVT__u_lsu__DOT__wb_result_r = vlSelfRef.__PVT__u_lsu__DOT__resp_addr_w;
    } else if (((IData)(vlSymsp->TOP__v.__PVT__dcache_ack_w) 
                & (IData)(vlSelfRef.__PVT__u_lsu__DOT__resp_load_w))) {
        if (vlSelfRef.__PVT__u_lsu__DOT__load_byte_r) {
            vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                = ((2U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                    ? ((1U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                        ? (vlSymsp->TOP__v.__PVT__dcache_data_rd_w 
                           >> 0x18U) : (0xffU & (vlSymsp->TOP__v.__PVT__dcache_data_rd_w 
                                                 >> 0x10U)))
                    : ((1U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                        ? (0xffU & (vlSymsp->TOP__v.__PVT__dcache_data_rd_w 
                                    >> 8U)) : (0xffU 
                                               & vlSymsp->TOP__v.__PVT__dcache_data_rd_w)));
            if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__load_signed_r) 
                 & (vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    >> 7U))) {
                vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    = (0xffffff00U | (0xffU & vlSelfRef.__PVT__u_lsu__DOT__wb_result_r));
            }
        } else if (vlSelfRef.__PVT__u_lsu__DOT__load_half_r) {
            vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                = ((2U & (IData)(vlSelfRef.__PVT__u_lsu__DOT__addr_lsb_r))
                    ? (vlSymsp->TOP__v.__PVT__dcache_data_rd_w 
                       >> 0x10U) : (0xffffU & vlSymsp->TOP__v.__PVT__dcache_data_rd_w));
            if (((IData)(vlSelfRef.__PVT__u_lsu__DOT__load_signed_r) 
                 & (vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    >> 0xfU))) {
                vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                    = (0xffff0000U | (0xffffU & vlSelfRef.__PVT__u_lsu__DOT__wb_result_r));
            }
        } else {
            vlSelfRef.__PVT__u_lsu__DOT__wb_result_r 
                = vlSymsp->TOP__v.__PVT__dcache_data_rd_w;
        }
    }
    vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__icache_busy_w 
        = ((~ (IData)(vlSymsp->TOP__v.__PVT__icache_valid_w)) 
           & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__icache_fetch_q));
    vlSelfRef.__PVT__u_frontend__DOT__fetch_valid_w 
        = ((~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__branch_w)) 
           & ((IData)(vlSymsp->TOP__v.__PVT__icache_valid_w) 
              | (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_valid_q)));
    vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__stall_w 
        = (1U & ((2U == (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q)) 
                 | ((~ (IData)(vlSymsp->TOP__v.__PVT__icache_accept_w)) 
                    | (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__icache_busy_w))));
    vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__push_w 
        = ((IData)(vlSelfRef.__PVT__u_frontend__DOT__fetch_valid_w) 
           & (2U != (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q)));
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r 
        = vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q;
    if (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__mispredicted_r) 
         & (IData)(vlSelfRef.__PVT__branch_info_is_call_w))) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q)));
    } else if (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__mispredicted_r) 
                & (IData)(vlSelfRef.__PVT__branch_info_is_ret_w))) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r 
            = (7U & ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q) 
                     - (IData)(1U)));
    } else if (((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_call_pred_w) 
                & (~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__stall_w)))) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r 
            = (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q)));
    } else if (((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w) 
                & (~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__stall_w)))) {
        vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r 
            = (7U & ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q) 
                     - (IData)(1U)));
    }
    vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__pred_taken_w 
        = ((~ (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__stall_w)) 
           & (IData)(vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_he46ab735_0_2));
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___nba_comb__TOP__v__u_core__1(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___nba_comb__TOP__v__u_core__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__branch_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__branch_call_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__branch_ret_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__branch_jmp_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__branch_target_r 
        = (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r 
           + (((- (IData)((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                           >> 0x1fU))) << 0xdU) | (
                                                   ((0x1000U 
                                                     & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                        >> 0x13U)) 
                                                    | (0x800U 
                                                       & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                          << 4U))) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                            >> 7U))))));
    if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x40005033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x40000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
    } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec1__DOT__imm12_r;
    } else if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec1__DOT__imm12_r;
    } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec1__DOT__imm12_r;
    } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec1__DOT__imm12_r;
    } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec1__DOT__imm12_r;
    } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec1__DOT__imm12_r;
    } else if ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                        >> 0x14U));
    } else if ((0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                        >> 0x14U));
    } else if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
            = (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                        >> 0x14U));
    } else if ((0x37U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
            vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
                = (0xfffff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r);
        } else if (((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                    | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))) {
            vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r = 4U;
        }
    }
    vlSelfRef.__PVT__mul_opcode_rb_operand_w = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_mul_r)
                                                 ? vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r
                                                 : vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r);
    vlSelfRef.__PVT__lsu_opcode_rb_operand_w = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_lsu_r)
                                                 ? vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r
                                                 : vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r);
    if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x40005033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x40000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
    } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec0__DOT__imm12_r;
    } else if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec0__DOT__imm12_r;
    } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec0__DOT__imm12_r;
    } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec0__DOT__imm12_r;
    } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec0__DOT__imm12_r;
    } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = vlSelfRef.__PVT__u_exec0__DOT__imm12_r;
    } else if ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                        >> 0x14U));
    } else if ((0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                        >> 0x14U));
    } else if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
            = (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                        >> 0x14U));
    } else if ((0x37U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
            vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
                = (0xfffff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r);
        } else if (((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                    | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) {
            vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r = 4U;
        }
    }
    if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_target_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r 
               + (((- (IData)((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                               >> 0x1fU))) << 0x14U) 
                  | (((0xff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r) 
                      | (0x800U & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                   >> 9U))) | (0x7feU 
                                               & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                  >> 0x14U)))));
        vlSelfRef.__PVT__u_exec1__DOT__branch_call_r 
            = (1U == (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                               >> 7U)));
        vlSelfRef.__PVT__u_exec1__DOT__branch_jmp_r = 1U;
    } else if ((0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_ret_r 
            = (IData)(((0x8000U == (0xf8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                       & (0U == (0xfffU & vlSelfRef.__PVT__u_exec1__DOT__imm12_r))));
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_target_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r 
               + vlSelfRef.__PVT__u_exec1__DOT__imm12_r);
        vlSelfRef.__PVT__u_exec1__DOT__branch_call_r 
            = ((~ (IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_ret_r)) 
               & (0x80U == (0xf80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)));
        vlSelfRef.__PVT__u_exec1__DOT__branch_target_r 
            = (0xfffffffeU & vlSelfRef.__PVT__u_exec1__DOT__branch_target_r);
        vlSelfRef.__PVT__u_exec1__DOT__branch_jmp_r 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_call_r) 
                        | (IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_ret_r))));
    } else if ((0x63U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r 
               == vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r);
    } else if ((0x1063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r 
               != vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r);
    } else if ((0x4063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__y 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
        vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__x 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
        vlSelfRef.__PVT__u_exec1__DOT__less_than_signed__Vstatic__v 
            = (vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__x 
               - vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__y);
        vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__Vfuncout 
            = (1U & (((vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__x 
                       >> 0x1fU) != (vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__y 
                                     >> 0x1fU)) ? (vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__x 
                                                   >> 0x1fU)
                      : (vlSelfRef.__PVT__u_exec1__DOT__less_than_signed__Vstatic__v 
                         >> 0x1fU)));
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r 
            = vlSelfRef.__Vfunc_u_exec1__DOT__less_than_signed__2__Vfuncout;
    } else if ((0x5063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r 
            = (([&]() {
                    vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__y 
                        = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r;
                    vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__x 
                        = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
                    vlSelfRef.__PVT__u_exec1__DOT__greater_than_signed__Vstatic__v 
                        = (vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__y 
                           - vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__x);
                    vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__Vfuncout 
                        = (1U & (((vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__x 
                                   >> 0x1fU) != (vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__y 
                                                 >> 0x1fU))
                                  ? (vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__y 
                                     >> 0x1fU) : (vlSelfRef.__PVT__u_exec1__DOT__greater_than_signed__Vstatic__v 
                                                  >> 0x1fU)));
                }(), (IData)(vlSelfRef.__Vfunc_u_exec1__DOT__greater_than_signed__3__Vfuncout)) 
               | (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r 
                  == vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r));
    } else if ((0x6063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r 
               < vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r);
    } else if ((0x7063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r 
               >= vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r);
    }
    vlSelfRef.__PVT__lsu_opcode_ra_operand_w = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_lsu_r)
                                                 ? vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r
                                                 : vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r);
    vlSelfRef.__PVT__mul_opcode_ra_operand_w = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_mul_r)
                                                 ? vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r
                                                 : vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r);
    vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x40005033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x40000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r;
    } else if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = (0xfffff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r);
    } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r;
    } else if (((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r;
    }
    vlSelfRef.__PVT__u_exec0__DOT__branch_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__branch_call_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__branch_ret_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__branch_jmp_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__branch_target_r 
        = (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r 
           + (((- (IData)((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                           >> 0x1fU))) << 0xdU) | (
                                                   ((0x1000U 
                                                     & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                        >> 0x13U)) 
                                                    | (0x800U 
                                                       & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                          << 4U))) 
                                                   | ((0x7e0U 
                                                       & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                            >> 7U))))));
    if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_target_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r 
               + (((- (IData)((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                               >> 0x1fU))) << 0x14U) 
                  | (((0xff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r) 
                      | (0x800U & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                   >> 9U))) | (0x7feU 
                                               & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                  >> 0x14U)))));
        vlSelfRef.__PVT__u_exec0__DOT__branch_call_r 
            = (1U == (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                               >> 7U)));
        vlSelfRef.__PVT__u_exec0__DOT__branch_jmp_r = 1U;
    } else if ((0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_ret_r 
            = (IData)(((0x8000U == (0xf8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                       & (0U == (0xfffU & vlSelfRef.__PVT__u_exec0__DOT__imm12_r))));
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_target_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
               + vlSelfRef.__PVT__u_exec0__DOT__imm12_r);
        vlSelfRef.__PVT__u_exec0__DOT__branch_call_r 
            = ((~ (IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_ret_r)) 
               & (0x80U == (0xf80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)));
        vlSelfRef.__PVT__u_exec0__DOT__branch_target_r 
            = (0xfffffffeU & vlSelfRef.__PVT__u_exec0__DOT__branch_target_r);
        vlSelfRef.__PVT__u_exec0__DOT__branch_jmp_r 
            = (1U & (~ ((IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_call_r) 
                        | (IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_ret_r))));
    } else if ((0x63U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
               == vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r);
    } else if ((0x1063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
               != vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r);
    } else if ((0x4063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__y 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
        vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__x 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
        vlSelfRef.__PVT__u_exec0__DOT__less_than_signed__Vstatic__v 
            = (vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__x 
               - vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__y);
        vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__Vfuncout 
            = (1U & (((vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__x 
                       >> 0x1fU) != (vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__y 
                                     >> 0x1fU)) ? (vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__x 
                                                   >> 0x1fU)
                      : (vlSelfRef.__PVT__u_exec0__DOT__less_than_signed__Vstatic__v 
                         >> 0x1fU)));
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r 
            = vlSelfRef.__Vfunc_u_exec0__DOT__less_than_signed__0__Vfuncout;
    } else if ((0x5063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r 
            = (([&]() {
                    vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__y 
                        = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r;
                    vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__x 
                        = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
                    vlSelfRef.__PVT__u_exec0__DOT__greater_than_signed__Vstatic__v 
                        = (vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__y 
                           - vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__x);
                    vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__Vfuncout 
                        = (1U & (((vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__x 
                                   >> 0x1fU) != (vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__y 
                                                 >> 0x1fU))
                                  ? (vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__y 
                                     >> 0x1fU) : (vlSelfRef.__PVT__u_exec0__DOT__greater_than_signed__Vstatic__v 
                                                  >> 0x1fU)));
                }(), (IData)(vlSelfRef.__Vfunc_u_exec0__DOT__greater_than_signed__1__Vfuncout)) 
               | (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
                  == vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r));
    } else if ((0x6063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
               < vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r);
    } else if ((0x7063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__branch_r = 1U;
        vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r 
            = (vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r 
               >= vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r);
    }
    vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x40005033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x40000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r;
    } else if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = (0xfffff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r);
    } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r;
    } else if (((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r;
    }
    vlSelfRef.__PVT__branch_d_exec1_request_w = ((IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_r) 
                                                 & ((IData)(vlSelfRef.__PVT__u_exec1__DOT__branch_taken_r) 
                                                    & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_issue_r)));
    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__sub_res_w 
        = (vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
           - vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r);
    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__unused 
        = (1U & (((vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
                   >> 0x18U) + ((vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                 >> 0x18U) + (IData)(vlSelfRef.u_exec1__DOT__u_alu__DOT__u_adder32__DOT__u_adder8_1__DOT____VdfgRegularize_h91daf8aa_0_0))) 
                 >> 8U));
    vlSelfRef.u_mul__DOT____VdfgRegularize_hce0f6733_0_3 
        = (((QData)((IData)((vlSelfRef.__PVT__mul_opcode_ra_operand_w 
                             >> 0x1fU))) << 0x20U) 
           | (QData)((IData)(vlSelfRef.__PVT__mul_opcode_ra_operand_w)));
    vlSelfRef.__PVT__u_lsu__DOT__mem_data_r = 0U;
    vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r = 0U;
    vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 0U;
    vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r = (((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                                                & (0x1073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelfRef.__PVT__lsu_opcode_opcode_w)))
                                                ? vlSelfRef.__PVT__lsu_opcode_ra_operand_w
                                                : (
                                                   ((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                                                    & (IData)(vlSelfRef.__PVT__u_lsu__DOT__load_inst_w))
                                                    ? 
                                                   (vlSelfRef.__PVT__lsu_opcode_ra_operand_w 
                                                    + 
                                                    (((- (IData)(
                                                                 (vlSelfRef.__PVT__lsu_opcode_opcode_w 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelfRef.__PVT__lsu_opcode_opcode_w 
                                                        >> 0x14U)))
                                                    : 
                                                   (vlSelfRef.__PVT__lsu_opcode_ra_operand_w 
                                                    + 
                                                    (((- (IData)(
                                                                 (vlSelfRef.__PVT__lsu_opcode_opcode_w 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0xfe0U 
                                                         & (vlSelfRef.__PVT__lsu_opcode_opcode_w 
                                                            >> 0x14U)) 
                                                        | (0x1fU 
                                                           & (vlSelfRef.__PVT__lsu_opcode_opcode_w 
                                                              >> 7U)))))));
    if (((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
         & ((0x2023U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)) 
            | ((0x2003U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)) 
               | (0x6003U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)))))) {
        vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r 
            = (0U != (3U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r));
    } else if (((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                & ((0x1023U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)) 
                   | (IData)(vlSelfRef.__PVT__u_lsu__DOT__req_lh_w)))) {
        vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r 
            = (1U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r);
    }
    vlSelfRef.__PVT__u_lsu__DOT__mem_rd_r = (((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                                              & (IData)(vlSelfRef.__PVT__u_lsu__DOT__load_inst_w)) 
                                             & (~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r)));
    if ((((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
          & (0x2023U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w))) 
         & (~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r)))) {
        vlSelfRef.__PVT__u_lsu__DOT__mem_data_r = vlSelfRef.__PVT__lsu_opcode_rb_operand_w;
        vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 0xfU;
    } else if ((((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                 & (0x1023U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w))) 
                & (~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_r)))) {
        if ((2U == (3U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r))) {
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_r 
                = (vlSelfRef.__PVT__lsu_opcode_rb_operand_w 
                   << 0x10U);
            vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 0xcU;
        } else {
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_r 
                = (0xffffU & vlSelfRef.__PVT__lsu_opcode_rb_operand_w);
            vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 3U;
        }
    } else if (((IData)(vlSelfRef.__PVT__lsu_opcode_valid_w) 
                & (0x23U == (0x707fU & vlSelfRef.__PVT__lsu_opcode_opcode_w)))) {
        if ((2U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) {
            if ((1U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) {
                vlSelfRef.__PVT__u_lsu__DOT__mem_data_r 
                    = (vlSelfRef.__PVT__lsu_opcode_rb_operand_w 
                       << 0x18U);
                vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 8U;
            } else {
                vlSelfRef.__PVT__u_lsu__DOT__mem_data_r 
                    = (0xff0000U & (vlSelfRef.__PVT__lsu_opcode_rb_operand_w 
                                    << 0x10U));
                vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 4U;
            }
        } else if ((1U & vlSelfRef.__PVT__u_lsu__DOT__mem_addr_r)) {
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_r 
                = (0xff00U & (vlSelfRef.__PVT__lsu_opcode_rb_operand_w 
                              << 8U));
            vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 2U;
        } else {
            vlSelfRef.__PVT__u_lsu__DOT__mem_data_r 
                = (0xffU & vlSelfRef.__PVT__lsu_opcode_rb_operand_w);
            vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 1U;
        }
    } else {
        vlSelfRef.__PVT__u_lsu__DOT__mem_wr_r = 0U;
    }
    vlSelfRef.__PVT__branch_d_exec0_request_w = ((IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_r) 
                                                 & ((IData)(vlSelfRef.__PVT__u_exec0__DOT__branch_taken_r) 
                                                    & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r)));
    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__sub_res_w 
        = (vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
           - vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r);
    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__unused 
        = (1U & (((vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
                   >> 0x18U) + ((vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                 >> 0x18U) + (IData)(vlSelfRef.u_exec0__DOT__u_alu__DOT__u_adder32__DOT__u_adder8_1__DOT____VdfgRegularize_h91daf8aa_0_0))) 
                 >> 8U));
    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_S 
        = (((((vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
               >> 0x18U) + ((vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                             >> 0x18U) + (IData)(vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__unused))) 
             << 0x18U) | (0xff0000U & (((vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
                                         >> 0x10U) 
                                        + ((vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                            >> 0x10U) 
                                           + (IData)(vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__unused))) 
                                       << 0x10U))) 
           | ((0xff00U & (((vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
                            >> 8U) + ((vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                       >> 8U) + (IData)(vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__unused))) 
                          << 8U)) | (0xffU & (vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
                                              + (vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                                 + (IData)(vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_Ci))))));
    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_S 
        = (((((vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
               >> 0x18U) + ((vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                             >> 0x18U) + (IData)(vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__unused))) 
             << 0x18U) | (0xff0000U & (((vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
                                         >> 0x10U) 
                                        + ((vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                            >> 0x10U) 
                                           + (IData)(vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__unused))) 
                                       << 0x10U))) 
           | ((0xff00U & (((vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
                            >> 8U) + ((vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                       >> 8U) + (IData)(vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__unused))) 
                          << 8U)) | (0xffU & (vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
                                              + (vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                                 + (IData)(vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_Ci))))));
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___nba_sequent__TOP__v__u_core__8(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___nba_sequent__TOP__v__u_core__8\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 4U;
    } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 7U;
    } else if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 8U;
    } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 1U;
    } else if ((0x40005033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 3U;
    } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 2U;
    } else if ((0x40000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 6U;
    } else if ((0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 9U;
    } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 0xbU;
    } else if ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 0xaU;
    } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 4U;
    } else if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 7U;
    } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 0xbU;
    } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 0xaU;
    } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 8U;
    } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 9U;
    } else if ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 1U;
    } else if ((0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 2U;
    } else if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 3U;
    } else if ((0x37U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
        if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
            vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 4U;
        } else if (((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                    | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) {
            vlSelfRef.__PVT__u_exec0__DOT__alu_func_r = 4U;
        }
    }
    vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 0U;
    if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 4U;
    } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 7U;
    } else if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 8U;
    } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 1U;
    } else if ((0x40005033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 3U;
    } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 2U;
    } else if ((0x40000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 6U;
    } else if ((0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 9U;
    } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 0xbU;
    } else if ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 0xaU;
    } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 4U;
    } else if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 7U;
    } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 0xbU;
    } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 0xaU;
    } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 8U;
    } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 9U;
    } else if ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 1U;
    } else if ((0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 2U;
    } else if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 3U;
    } else if ((0x37U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
        if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
            vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 4U;
        } else if (((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                    | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))) {
            vlSelfRef.__PVT__u_exec1__DOT__alu_func_r = 4U;
        }
    }
}
