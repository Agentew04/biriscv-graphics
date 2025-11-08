// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_biriscv_issue.h"

VL_INLINE_OPT void Vriscv_top_biriscv_issue___ico_sequent__TOP__v__u_core__u_issue__0(Vriscv_top_biriscv_issue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_biriscv_issue___ico_sequent__TOP__v__u_core__u_issue__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe0_stall_raw_w = (1U & (((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__valid_q)) 
                                                 & ((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                                    >> 4U)) 
                                                | ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__writeback_mem_valid_w)) 
                                                   & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__load_store_e2_w))));
    vlSelfRef.__PVT__pipe1_stall_raw_w = (1U & (((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__valid_q)) 
                                                 & ((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                                    >> 4U)) 
                                                | ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__writeback_mem_valid_w)) 
                                                   & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__load_store_e2_w))));
    vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e2_r 
        = (((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_q) 
            & ((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__load_store_e2_w) 
               & (IData)(vlSymsp->TOP__v__u_core.__PVT__writeback_mem_valid_w)))
            ? (IData)(vlSymsp->TOP__v__u_core.__PVT__writeback_mem_exception_w)
            : (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e2_q));
    vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e2_r 
        = (((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_q) 
            & ((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__load_store_e2_w) 
               & (IData)(vlSymsp->TOP__v__u_core.__PVT__writeback_mem_valid_w)))
            ? (IData)(vlSymsp->TOP__v__u_core.__PVT__writeback_mem_exception_w)
            : (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e2_q));
    vlSelfRef.__PVT__pipe0_squash_e1_e2_w = ((0U != (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e2_r)) 
                                             | (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__squash_e1_e2_q));
    vlSelfRef.__PVT__pipe1_squash_e1_e2_w = ((0U != (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e2_r)) 
                                             | (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__squash_e1_e2_q));
    vlSelfRef.__PVT__squash_w = ((IData)(vlSelfRef.__PVT__pipe0_squash_e1_e2_w) 
                                 | (IData)(vlSelfRef.__PVT__pipe1_squash_e1_e2_w));
    vlSelfRef.__PVT__mispredicted_r = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core.__PVT__branch_csr_request_w) 
                  | (IData)(vlSelfRef.__PVT__squash_w))))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_valid_w) 
                      & ((vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
                          << 3U) == (0xfffffffcU & vlSelfRef.__PVT__pc_x_q)))))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_valid_w) 
                          & ((4U | (vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
                                    << 3U)) == (0xfffffffcU 
                                                & vlSelfRef.__PVT__pc_x_q)))))) {
                if (((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_valid_w) 
                     | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_valid_w))) {
                    vlSelfRef.__PVT__mispredicted_r = 1U;
                }
            }
        }
    }
    vlSelfRef.__PVT__slot1_valid_r = 0U;
    vlSelfRef.__PVT__slot0_valid_r = 0U;
    if (((IData)(vlSymsp->TOP__v__u_core.__PVT__branch_csr_request_w) 
         | (IData)(vlSelfRef.__PVT__squash_w))) {
        vlSelfRef.__PVT__slot1_valid_r = 0U;
        vlSelfRef.__PVT__slot0_valid_r = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_valid_w) 
                      & ((vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
                          << 3U) == (0xfffffffcU & vlSelfRef.__PVT__pc_x_q)))))) {
            if (((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_valid_w) 
                 & ((4U | (vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
                           << 3U)) == (0xfffffffcU 
                                       & vlSelfRef.__PVT__pc_x_q)))) {
                vlSelfRef.__PVT__slot1_valid_r = 1U;
            }
        }
        if (((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_valid_w) 
             & ((vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
                 << 3U) == (0xfffffffcU & vlSelfRef.__PVT__pc_x_q)))) {
            vlSelfRef.__PVT__slot0_valid_r = 1U;
        }
    }
    vlSelfRef.__PVT__opcode_b_fault_r = 0U;
    vlSelfRef.__PVT__opcode_a_fault_r = 0U;
    vlSelfRef.__PVT__opcode_a_pc_r = 0U;
    vlSelfRef.__PVT__opcode_b_pc_r = 0U;
    vlSelfRef.__PVT__opcode_a_valid_r = 0U;
    vlSelfRef.__PVT__opcode_b_valid_r = 0U;
    vlSelfRef.__PVT__opcode_b_r = 0U;
    vlSelfRef.__PVT__opcode_a_r = 0U;
    if (vlSelfRef.__PVT__slot0_valid_r) {
        vlSelfRef.__PVT__opcode_b_fault_r = (((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_page_w) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_fetch_w));
        vlSelfRef.__PVT__opcode_a_fault_r = (((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_fault_page_w) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_fault_fetch_w));
        vlSelfRef.__PVT__opcode_a_pc_r = (vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
                                          << 3U);
        vlSelfRef.__PVT__opcode_b_pc_r = (4U | (vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
                                                << 3U));
        vlSelfRef.__PVT__opcode_a_valid_r = 1U;
        vlSelfRef.__PVT__opcode_b_valid_r = vlSymsp->TOP__v__u_core.__PVT__fetch1_valid_w;
        vlSelfRef.__PVT__issue_a_sb_alloc_w = vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_rd_valid_w;
        vlSelfRef.__PVT__issue_a_mul_w = ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_56) 
                                          | (IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_60));
        vlSelfRef.__PVT__issue_a_div_w = ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_57) 
                                          | (IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_59));
        vlSelfRef.__PVT__issue_a_lsu_w = ((3U == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                          | ((0x1003U 
                                              == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                             | ((0x2003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                | ((0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                   | ((0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                      | ((0x6003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                         | ((0x23U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                            | ((0x1023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                               | (0x2023U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w))))))))));
        vlSelfRef.__PVT__issue_a_csr_w = ((0x73U == vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w) 
                                          | ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_58) 
                                             | ((0x1073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                | ((0x2073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                   | ((0x3073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                      | ((0x5073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                         | ((0x6073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                            | ((0x7073U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                               | ((0x10500073U 
                                                                   == 
                                                                   (0xffff8fffU 
                                                                    & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                                  | ((0xfU 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                                     | ((0x100fU 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                                        | ((0x12000073U 
                                                                            == 
                                                                            (0xfe007fffU 
                                                                             & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                                           | ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_invalid_w) 
                                                                              | ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_fault_fetch_w) 
                                                                                | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_fault_page_w)))))))))))))));
        vlSelfRef.__PVT__issue_a_exec_w = vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_exec_w;
        vlSelfRef.__PVT__opcode_b_r = vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w;
        vlSelfRef.__PVT__opcode_a_r = vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w;
    } else {
        if (vlSelfRef.__PVT__slot1_valid_r) {
            vlSelfRef.__PVT__opcode_b_fault_r = 0U;
            vlSelfRef.__PVT__opcode_a_fault_r = (((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_page_w) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_fetch_w));
            vlSelfRef.__PVT__opcode_a_pc_r = (4U | 
                                              (vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
                                               << 3U));
            vlSelfRef.__PVT__opcode_b_pc_r = 0U;
            vlSelfRef.__PVT__opcode_a_valid_r = 1U;
            vlSelfRef.__PVT__opcode_b_valid_r = 0U;
            vlSelfRef.__PVT__opcode_b_r = 0U;
            vlSelfRef.__PVT__opcode_a_r = vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w;
        }
        vlSelfRef.__PVT__issue_a_sb_alloc_w = vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_rd_valid_w;
        vlSelfRef.__PVT__issue_a_mul_w = vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_mul_w;
        vlSelfRef.__PVT__issue_a_div_w = ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_57) 
                                          | (IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_59));
        vlSelfRef.__PVT__issue_a_lsu_w = vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_lsu_w;
        vlSelfRef.__PVT__issue_a_csr_w = ((0x73U == vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w) 
                                          | ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_58) 
                                             | ((0x1073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                | ((0x2073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                   | ((0x3073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                      | ((0x5073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                         | ((0x6073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                            | ((0x7073U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                               | ((0x10500073U 
                                                                   == 
                                                                   (0xffff8fffU 
                                                                    & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                                  | ((0xfU 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                                     | ((0x100fU 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                                        | ((0x12000073U 
                                                                            == 
                                                                            (0xfe007fffU 
                                                                             & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                                           | ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_invalid_w) 
                                                                              | ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_fetch_w) 
                                                                                | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_page_w)))))))))))))));
        vlSelfRef.__PVT__issue_a_exec_w = vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_exec_w;
    }
    vlSelfRef.__PVT__issue_b_fault_w = ((1U & (IData)(vlSelfRef.__PVT__opcode_b_fault_r))
                                         ? 0x11U : 
                                        ((2U & (IData)(vlSelfRef.__PVT__opcode_b_fault_r))
                                          ? 0x1cU : 0U));
    vlSelfRef.__PVT__issue_a_fault_w = ((1U & (IData)(vlSelfRef.__PVT__opcode_a_fault_r))
                                         ? 0x11U : 
                                        ((2U & (IData)(vlSelfRef.__PVT__opcode_a_fault_r))
                                          ? 0x1cU : 0U));
    vlSelfRef.__VdfgRegularize_h47f1efe9_0_0 = ((IData)(vlSelfRef.__PVT__issue_a_exec_w) 
                                                | (IData)(vlSelfRef.__PVT__issue_a_lsu_w));
    vlSelfRef.__PVT__issue_b_rb_value_w = ((0x1000000U 
                                            & vlSelfRef.__PVT__opcode_b_r)
                                            ? ((0x800000U 
                                                & vlSelfRef.__PVT__opcode_b_r)
                                                ? (
                                                   (0x400000U 
                                                    & vlSelfRef.__PVT__opcode_b_r)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r31_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r30_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r29_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r28_q))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r27_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r26_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r25_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r24_q)))
                                                : (
                                                   (0x400000U 
                                                    & vlSelfRef.__PVT__opcode_b_r)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r23_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r22_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r21_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r20_q))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r19_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r18_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r17_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r16_q))))
                                            : ((0x800000U 
                                                & vlSelfRef.__PVT__opcode_b_r)
                                                ? (
                                                   (0x400000U 
                                                    & vlSelfRef.__PVT__opcode_b_r)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r15_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r14_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r13_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r12_q))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r11_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r10_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r9_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r8_q)))
                                                : (
                                                   (0x400000U 
                                                    & vlSelfRef.__PVT__opcode_b_r)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r7_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r6_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r5_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r4_q))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r3_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r2_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r1_q
                                                      : 0U)))));
    vlSelfRef.__PVT__issue_b_ra_value_w = ((0x80000U 
                                            & vlSelfRef.__PVT__opcode_b_r)
                                            ? ((0x40000U 
                                                & vlSelfRef.__PVT__opcode_b_r)
                                                ? (
                                                   (0x20000U 
                                                    & vlSelfRef.__PVT__opcode_b_r)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r31_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r30_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r29_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r28_q))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r27_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r26_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r25_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r24_q)))
                                                : (
                                                   (0x20000U 
                                                    & vlSelfRef.__PVT__opcode_b_r)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r23_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r22_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r21_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r20_q))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r19_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r18_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r17_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r16_q))))
                                            : ((0x40000U 
                                                & vlSelfRef.__PVT__opcode_b_r)
                                                ? (
                                                   (0x20000U 
                                                    & vlSelfRef.__PVT__opcode_b_r)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r15_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r14_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r13_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r12_q))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r11_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r10_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r9_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r8_q)))
                                                : (
                                                   (0x20000U 
                                                    & vlSelfRef.__PVT__opcode_b_r)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r7_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r6_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r5_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r4_q))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r3_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r2_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r1_q
                                                      : 0U)))));
    vlSelfRef.__PVT__issue_a_rb_value_w = ((0x1000000U 
                                            & vlSelfRef.__PVT__opcode_a_r)
                                            ? ((0x800000U 
                                                & vlSelfRef.__PVT__opcode_a_r)
                                                ? (
                                                   (0x400000U 
                                                    & vlSelfRef.__PVT__opcode_a_r)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r31_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r30_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r29_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r28_q))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r27_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r26_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r25_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r24_q)))
                                                : (
                                                   (0x400000U 
                                                    & vlSelfRef.__PVT__opcode_a_r)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r23_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r22_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r21_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r20_q))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r19_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r18_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r17_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r16_q))))
                                            : ((0x800000U 
                                                & vlSelfRef.__PVT__opcode_a_r)
                                                ? (
                                                   (0x400000U 
                                                    & vlSelfRef.__PVT__opcode_a_r)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r15_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r14_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r13_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r12_q))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r11_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r10_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r9_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r8_q)))
                                                : (
                                                   (0x400000U 
                                                    & vlSelfRef.__PVT__opcode_a_r)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r7_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r6_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r5_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r4_q))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r3_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r2_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r1_q
                                                      : 0U)))));
    vlSelfRef.__PVT__issue_a_ra_value_w = ((0x80000U 
                                            & vlSelfRef.__PVT__opcode_a_r)
                                            ? ((0x40000U 
                                                & vlSelfRef.__PVT__opcode_a_r)
                                                ? (
                                                   (0x20000U 
                                                    & vlSelfRef.__PVT__opcode_a_r)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r31_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r30_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r29_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r28_q))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r27_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r26_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r25_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r24_q)))
                                                : (
                                                   (0x20000U 
                                                    & vlSelfRef.__PVT__opcode_a_r)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r23_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r22_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r21_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r20_q))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r19_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r18_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r17_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r16_q))))
                                            : ((0x40000U 
                                                & vlSelfRef.__PVT__opcode_a_r)
                                                ? (
                                                   (0x20000U 
                                                    & vlSelfRef.__PVT__opcode_a_r)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r15_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r14_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r13_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r12_q))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r11_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r10_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r9_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r8_q)))
                                                : (
                                                   (0x20000U 
                                                    & vlSelfRef.__PVT__opcode_a_r)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r7_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r6_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r5_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r4_q))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r3_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r2_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r1_q
                                                      : 0U)))));
}

VL_INLINE_OPT void Vriscv_top_biriscv_issue___ico_sequent__TOP__v__u_core__u_issue__1(Vriscv_top_biriscv_issue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_biriscv_issue___ico_sequent__TOP__v__u_core__u_issue__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe0_valid_wb_w = ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)) 
                                         & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_wb_q));
    vlSelfRef.__PVT__pipe1_valid_wb_w = ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)) 
                                         & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_wb_q));
    vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_w 
        = ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)) 
           & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_q));
    vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_w 
        = ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)) 
           & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_q));
    vlSelfRef.__PVT__pipe0_rd_wb_w = (0x1fU & ((- (IData)(
                                                          ((IData)(vlSelfRef.__PVT__pipe0_valid_wb_w) 
                                                           & ((~ (IData)(vlSelfRef.__PVT__pipe0_stall_raw_w)) 
                                                              & ((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_wb_q) 
                                                                 >> 7U))))) 
                                               & (vlSelfRef.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                  >> 7U)));
    vlSelfRef.__PVT__pipe1_rd_wb_w = (0x1fU & ((- (IData)(
                                                          ((IData)(vlSelfRef.__PVT__pipe1_valid_wb_w) 
                                                           & ((~ (IData)(vlSelfRef.__PVT__pipe1_stall_raw_w)) 
                                                              & ((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_wb_q) 
                                                                 >> 7U))))) 
                                               & (vlSelfRef.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                  >> 7U)));
    vlSelfRef.__PVT__pipe0_rd_e2_w = (0x1fU & ((- (IData)(
                                                          ((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_w) 
                                                           & ((~ (IData)(vlSelfRef.__PVT__pipe0_stall_raw_w)) 
                                                              & ((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e2_q) 
                                                                 >> 7U))))) 
                                               & (vlSelfRef.__PVT__u_pipe0_ctrl__DOT__opcode_e2_q 
                                                  >> 7U)));
    vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_e2_r 
        = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_e2_q;
    if (((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_w) 
         & (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e2_q)))))) {
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_e2_r 
            = vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__wb_result_r;
    } else if (((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_w) 
                & ((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e2_q) 
                   >> 5U))) {
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_e2_r 
            = vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__result_e2_q;
    }
    vlSelfRef.__PVT__pipe1_rd_e2_w = (0x1fU & ((- (IData)(
                                                          ((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_w) 
                                                           & ((~ (IData)(vlSelfRef.__PVT__pipe1_stall_raw_w)) 
                                                              & ((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q) 
                                                                 >> 7U))))) 
                                               & (vlSelfRef.__PVT__u_pipe1_ctrl__DOT__opcode_e2_q 
                                                  >> 7U)));
    vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_e2_r 
        = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_e2_q;
    if (((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_w) 
         & (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q)))))) {
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_e2_r 
            = vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__wb_result_r;
    } else if (((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_w) 
                & ((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q) 
                   >> 5U))) {
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_e2_r 
            = vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__result_e2_q;
    }
    vlSelfRef.__PVT__issue_a_rb_value_r = vlSelfRef.__PVT__issue_a_rb_value_w;
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_wb_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_a_rb_value_r = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_wb_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_a_rb_value_r = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_e2_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_a_rb_value_r = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_e2_r;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_e2_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_a_rb_value_r = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_e2_r;
    }
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_e1_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_a_rb_value_r = vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__result_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_e1_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_a_rb_value_r = vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__result_q;
    }
    if ((0U == (0x1fU & (vlSelfRef.__PVT__opcode_a_r 
                         >> 0x14U)))) {
        vlSelfRef.__PVT__issue_a_rb_value_r = 0U;
    }
    vlSelfRef.__PVT__issue_b_rb_value_r = vlSelfRef.__PVT__issue_b_rb_value_w;
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_wb_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_b_rb_value_r = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_wb_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_b_rb_value_r = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_e2_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_b_rb_value_r = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_e2_r;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_e2_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_b_rb_value_r = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_e2_r;
    }
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_e1_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_b_rb_value_r = vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__result_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_e1_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_b_rb_value_r = vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__result_q;
    }
    if ((0U == (0x1fU & (vlSelfRef.__PVT__opcode_b_r 
                         >> 0x14U)))) {
        vlSelfRef.__PVT__issue_b_rb_value_r = 0U;
    }
    vlSelfRef.__PVT__issue_b_ra_value_r = vlSelfRef.__PVT__issue_b_ra_value_w;
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_wb_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_b_ra_value_r = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_wb_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_b_ra_value_r = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_e2_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_b_ra_value_r = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_e2_r;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_e2_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_b_ra_value_r = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_e2_r;
    }
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_e1_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_b_ra_value_r = vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__result_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_e1_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_b_ra_value_r = vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__result_q;
    }
    if ((0U == (0x1fU & (vlSelfRef.__PVT__opcode_b_r 
                         >> 0xfU)))) {
        vlSelfRef.__PVT__issue_b_ra_value_r = 0U;
    }
    vlSelfRef.__PVT__issue_a_ra_value_r = vlSelfRef.__PVT__issue_a_ra_value_w;
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_wb_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_a_ra_value_r = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_wb_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_a_ra_value_r = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_e2_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_a_ra_value_r = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_e2_r;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_e2_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_a_ra_value_r = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_e2_r;
    }
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_e1_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_a_ra_value_r = vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__result_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_e1_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_a_ra_value_r = vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__result_q;
    }
    if ((0U == (0x1fU & (vlSelfRef.__PVT__opcode_a_r 
                         >> 0xfU)))) {
        vlSelfRef.__PVT__issue_a_ra_value_r = 0U;
    }
}

VL_INLINE_OPT void Vriscv_top_biriscv_issue___ico_sequent__TOP__v__u_core__u_issue__2(Vriscv_top_biriscv_issue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_biriscv_issue___ico_sequent__TOP__v__u_core__u_issue__2\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__opcode_a_issue_r = 0U;
    vlSelfRef.__PVT__opcode_b_issue_r = 0U;
    vlSelfRef.__PVT__opcode_a_accept_r = 0U;
    vlSelfRef.__PVT__opcode_b_accept_r = 0U;
    vlSelfRef.__PVT__scoreboard_r = 0U;
    vlSelfRef.__PVT__pipe1_mux_lsu_r = 0U;
    vlSelfRef.__PVT__pipe1_mux_mul_r = 0U;
    if ((IData)((0U != (0x22U & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q))))) {
        vlSelfRef.__PVT__scoreboard_r = (vlSelfRef.__PVT__scoreboard_r 
                                         | (0xffffffffULL 
                                            & ((IData)(1U) 
                                               << (IData)(vlSelfRef.__PVT__pipe0_rd_e1_w))));
    }
    if ((IData)((0U != (0x22U & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q))))) {
        vlSelfRef.__PVT__scoreboard_r = (vlSelfRef.__PVT__scoreboard_r 
                                         | (0xffffffffULL 
                                            & ((IData)(1U) 
                                               << (IData)(vlSelfRef.__PVT__pipe1_rd_e1_w))));
    }
    if (((IData)(((0U != (6U & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q))) 
                  | (0U != (6U & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q))))) 
         & (((IData)(vlSelfRef.__PVT__issue_a_mul_w) 
             | (IData)(vlSelfRef.__PVT__issue_a_div_w)) 
            | (IData)(vlSelfRef.__PVT__issue_a_csr_w)))) {
        vlSelfRef.__PVT__scoreboard_r = 0xffffffffU;
    }
    if ((1U & (~ ((((IData)(vlSymsp->TOP__v__u_core.__PVT__lsu_stall_w) 
                    | (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)) 
                   | (IData)(vlSelfRef.__PVT__div_pending_q)) 
                  | (IData)(vlSelfRef.__PVT__csr_pending_q))))) {
        if (((IData)(vlSelfRef.__PVT__opcode_a_valid_r) 
             & (~ (((vlSelfRef.__PVT__scoreboard_r 
                     >> (0x1fU & (vlSelfRef.__PVT__opcode_a_r 
                                  >> 0xfU))) | (vlSelfRef.__PVT__scoreboard_r 
                                                >> 
                                                (0x1fU 
                                                 & (vlSelfRef.__PVT__opcode_a_r 
                                                    >> 0x14U)))) 
                   | (vlSelfRef.__PVT__scoreboard_r 
                      >> (0x1fU & (vlSelfRef.__PVT__opcode_a_r 
                                   >> 7U))))))) {
            vlSelfRef.__PVT__opcode_a_issue_r = 1U;
            vlSelfRef.__PVT__opcode_a_accept_r = 1U;
            if (((IData)(vlSelfRef.__PVT__issue_a_sb_alloc_w) 
                 & (0U != (0x1fU & (vlSelfRef.__PVT__opcode_a_r 
                                    >> 7U))))) {
                vlSelfRef.__PVT__scoreboard_r = (vlSelfRef.__PVT__scoreboard_r 
                                                 | (0xffffffffULL 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & (vlSelfRef.__PVT__opcode_a_r 
                                                           >> 7U)))));
            }
        }
        if (((((((IData)(vlSelfRef.__VdfgRegularize_h47f1efe9_0_2) 
                 | ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_lsu_w) 
                    | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_mul_w))) 
                & ((~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q)) 
                   & ((((IData)(vlSelfRef.__VdfgRegularize_h47f1efe9_0_0) 
                        | (IData)(vlSelfRef.__PVT__issue_a_mul_w)) 
                       & (IData)(vlSelfRef.__VdfgRegularize_h47f1efe9_0_2)) 
                      | ((((IData)(vlSelfRef.__PVT__issue_a_exec_w) 
                           | (IData)(vlSelfRef.__PVT__issue_a_mul_w)) 
                          & (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_lsu_w)) 
                         | ((IData)(vlSelfRef.__VdfgRegularize_h47f1efe9_0_0) 
                            & (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_mul_w)))))) 
               & (IData)(vlSelfRef.__PVT__opcode_b_valid_r)) 
              & (IData)(vlSelfRef.__PVT__opcode_a_accept_r)) 
             & (~ (((vlSelfRef.__PVT__scoreboard_r 
                     >> (0x1fU & (vlSelfRef.__PVT__opcode_b_r 
                                  >> 0xfU))) | (vlSelfRef.__PVT__scoreboard_r 
                                                >> 
                                                (0x1fU 
                                                 & (vlSelfRef.__PVT__opcode_b_r 
                                                    >> 0x14U)))) 
                   | (vlSelfRef.__PVT__scoreboard_r 
                      >> (0x1fU & (vlSelfRef.__PVT__opcode_b_r 
                                   >> 7U))))))) {
            vlSelfRef.__PVT__opcode_b_issue_r = 1U;
            vlSelfRef.__PVT__opcode_b_accept_r = 1U;
            vlSelfRef.__PVT__pipe1_mux_lsu_r = vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_lsu_w;
            vlSelfRef.__PVT__pipe1_mux_mul_r = vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_mul_w;
            if (((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_rd_valid_w) 
                 & (0U != (0x1fU & (vlSelfRef.__PVT__opcode_b_r 
                                    >> 7U))))) {
                vlSelfRef.__PVT__scoreboard_r = (vlSelfRef.__PVT__scoreboard_r 
                                                 | (0xffffffffULL 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & (vlSelfRef.__PVT__opcode_b_r 
                                                           >> 7U)))));
            }
        }
    }
    vlSelfRef.__PVT__dual_issue_w = ((IData)(vlSelfRef.__PVT__opcode_b_issue_r) 
                                     & ((~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q)) 
                                        & (IData)(vlSelfRef.__PVT__opcode_b_accept_r)));
}

VL_INLINE_OPT void Vriscv_top_biriscv_issue___nba_sequent__TOP__v__u_core__u_issue__0(Vriscv_top_biriscv_issue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_biriscv_issue___nba_sequent__TOP__v__u_core__u_issue__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__pc_x_q;
    __Vdly__pc_x_q = 0;
    // Body
    __Vdly__pc_x_q = vlSelfRef.__PVT__pc_x_q;
    vlSelfRef.__Vdly__u_pipe0_ctrl__DOT__ctrl_e1_q 
        = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q;
    if (vlSymsp->TOP.__Vcellinp__v__rst_i) {
        __Vdly__pc_x_q = 0U;
        vlSelfRef.__Vdly__u_pipe0_ctrl__DOT__ctrl_e1_q = 0U;
        vlSelfRef.__PVT__priv_x_q = 3U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__csr_wr_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__squash_e1_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__squash_e1_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__csr_wr_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__csr_wdata_wb_q = 0U;
        vlSelfRef.__PVT__div_pending_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__operand_rb_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__operand_ra_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__npc_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__pc_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_rb_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_ra_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__npc_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__pc_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__csr_wr_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__csr_wr_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__csr_wdata_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__operand_rb_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__operand_ra_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__npc_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__pc_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__opcode_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_rb_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_ra_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__npc_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__pc_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__opcode_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__operand_rb_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__operand_ra_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__npc_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__pc_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__opcode_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_rb_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_ra_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__npc_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__pc_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__opcode_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e1_q = 0U;
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q = 0U;
    } else {
        if (vlSymsp->TOP__v__u_core.__PVT__branch_csr_request_w) {
            __Vdly__pc_x_q = vlSymsp->TOP__v__u_core.__PVT__branch_csr_pc_w;
            vlSelfRef.__PVT__priv_x_q = vlSymsp->TOP__v__u_core.__PVT__branch_csr_priv_w;
        } else if (vlSymsp->TOP__v__u_core.__PVT__branch_d_exec1_request_w) {
            __Vdly__pc_x_q = vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_target_r;
        } else if (vlSymsp->TOP__v__u_core.__PVT__branch_d_exec0_request_w) {
            __Vdly__pc_x_q = vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_target_r;
        } else if (vlSelfRef.__PVT__dual_issue_w) {
            __Vdly__pc_x_q = ((IData)(8U) + vlSelfRef.__PVT__pc_x_q);
        } else if (((IData)(vlSelfRef.__PVT__opcode_a_accept_r) 
                    & ((IData)(vlSelfRef.__PVT__opcode_a_issue_r) 
                       & ((~ (IData)(vlSelfRef.__PVT__dual_issue_w)) 
                          & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q)))))) {
            __Vdly__pc_x_q = ((IData)(4U) + vlSelfRef.__PVT__pc_x_q);
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)))) {
            vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_wb_q 
                = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e2_r;
            if (vlSelfRef.__PVT__pipe0_squash_e1_e2_w) {
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_wb_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__csr_wdata_wb_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_rb_wb_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_ra_wb_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__npc_wb_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__pc_wb_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_wb_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_wb_q = 0U;
            } else {
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_wb_q 
                    = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e2_r;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__csr_wdata_wb_q 
                    = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__csr_wdata_e2_q;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_rb_wb_q 
                    = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_rb_e2_q;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_ra_wb_q 
                    = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_ra_e2_q;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__npc_wb_q 
                    = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__npc_e2_q;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__pc_wb_q 
                    = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__pc_e2_q;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                    = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__opcode_e2_q;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_wb_q 
                    = ((0U != (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e2_r))
                        ? (0x37fU & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q))
                        : (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q));
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_wb_q 
                    = (((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_w) 
                        & (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q)))))
                        ? vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__wb_result_r
                        : (((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_w) 
                            & ((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q) 
                               >> 5U)) ? vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__result_e2_q
                            : vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_e2_q));
            }
            vlSelfRef.__PVT__u_pipe0_ctrl__DOT__csr_wr_wb_q 
                = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__csr_wr_e2_q;
            vlSelfRef.__PVT__u_pipe0_ctrl__DOT__squash_e1_e2_q 
                = (0U != (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e2_r));
            vlSelfRef.__PVT__u_pipe1_ctrl__DOT__squash_e1_e2_q 
                = (0U != (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e2_r));
            vlSelfRef.__PVT__u_pipe1_ctrl__DOT__csr_wr_wb_q 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__pipe0_squash_e1_e2_w))) 
                   && (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__csr_wr_e2_q));
            vlSelfRef.__PVT__u_pipe0_ctrl__DOT__operand_rb_wb_q 
                = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__operand_rb_e2_q;
            vlSelfRef.__PVT__u_pipe0_ctrl__DOT__operand_ra_wb_q 
                = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__operand_ra_e2_q;
            vlSelfRef.__PVT__u_pipe0_ctrl__DOT__npc_wb_q 
                = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__npc_e2_q;
            vlSelfRef.__PVT__u_pipe0_ctrl__DOT__pc_wb_q 
                = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__pc_e2_q;
            vlSelfRef.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__opcode_e2_q;
            vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_wb_q 
                = ((0x20U & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e2_r))
                    ? (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_q)
                    : ((0x10U & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e2_r))
                        ? ((8U & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e2_r))
                            ? ((4U & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e2_r))
                                ? ((1U & (~ (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e2_r))) 
                                   && (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_q))
                                : (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_q))
                            : ((1U & (~ ((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e2_r) 
                                         >> 2U))) && (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_q)))
                        : (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_q)));
            vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_wb_q 
                = ((1U & (~ (IData)(vlSelfRef.__PVT__pipe0_squash_e1_e2_w))) 
                   && ((0x20U & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e2_r))
                        ? (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_q)
                        : ((0x10U & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e2_r))
                            ? ((8U & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e2_r))
                                ? ((4U & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e2_r))
                                    ? ((1U & (~ (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e2_r))) 
                                       && (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_q))
                                    : (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_q))
                                : ((1U & (~ ((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e2_r) 
                                             >> 2U))) 
                                   && (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_q)))
                            : (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_q))));
            if (((IData)(vlSelfRef.__PVT__pipe1_squash_e1_e2_w) 
                 | (IData)(vlSelfRef.__PVT__pipe0_squash_e1_e2_w))) {
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__csr_wdata_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_rb_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_ra_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__npc_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__pc_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__opcode_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q = 0U;
            } else {
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e2_q 
                    = ((0x100U & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q))
                        ? 0x20U : ((0U != (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e1_q))
                                    ? (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e1_q)
                                    : (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__exception_e1_q)));
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__csr_wdata_e2_q 
                    = vlSymsp->TOP__v__u_core__u_csr.__PVT__csr_wdata_e1_q;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_rb_e2_q 
                    = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_rb_e1_q;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_ra_e2_q 
                    = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_ra_e1_q;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__npc_e2_q 
                    = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__npc_e1_q;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__pc_e2_q 
                    = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__pc_e1_q;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__opcode_e2_q 
                    = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__opcode_e1_q;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_q 
                    = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e1_q;
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                              >> 8U)))) {
                    if ((0U != (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e1_q))) {
                        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_q = 0U;
                    }
                }
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_e2_q 
                    = ((0x10U & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q))
                        ? vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__wb_result_q
                        : ((8U & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q))
                            ? vlSymsp->TOP__v__u_core__u_csr.__PVT__rd_result_e1_q
                            : vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__result_q));
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q 
                    = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q;
            }
            vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_wb_q 
                = (((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_w) 
                    & (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e2_q)))))
                    ? vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__wb_result_r
                    : (((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_w) 
                        & ((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e2_q) 
                           >> 5U)) ? vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__result_e2_q
                        : vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_e2_q));
            if (((IData)(vlSelfRef.__PVT__pipe0_squash_e1_e2_w) 
                 | (IData)(vlSelfRef.__PVT__pipe1_squash_e1_e2_w))) {
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__operand_rb_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__operand_ra_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__npc_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__pc_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__opcode_e2_q = 0U;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_q = 0U;
            } else {
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e2_q 
                    = ((0x100U & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q))
                        ? 0x20U : ((0U != (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e1_q))
                                    ? (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e1_q)
                                    : (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__exception_e1_q)));
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__operand_rb_e2_q 
                    = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__operand_rb_e1_q;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__operand_ra_e2_q 
                    = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__operand_ra_e1_q;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__npc_e2_q 
                    = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__npc_e1_q;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__pc_e2_q 
                    = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__pc_e1_q;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__opcode_e2_q 
                    = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__opcode_e1_q;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_q 
                    = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e1_q;
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                              >> 8U)))) {
                    if ((0U != (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e1_q))) {
                        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_q = 0U;
                    }
                }
            }
            if ((((IData)(vlSelfRef.__PVT__opcode_a_issue_r) 
                  & (IData)(vlSelfRef.__PVT__opcode_a_accept_r)) 
                 & (~ ((IData)(vlSelfRef.__PVT__pipe0_squash_e1_e2_w) 
                       | (IData)(vlSelfRef.__PVT__pipe1_squash_e1_e2_w))))) {
                vlSelfRef.__Vdly__u_pipe0_ctrl__DOT__ctrl_e1_q 
                    = ((0x3feU & (IData)(vlSelfRef.__Vdly__u_pipe0_ctrl__DOT__ctrl_e1_q)) 
                       | (1U & (~ ((((IData)(vlSelfRef.__PVT__issue_a_lsu_w) 
                                     | (IData)(vlSelfRef.__PVT__issue_a_csr_w)) 
                                    | (IData)(vlSelfRef.__PVT__issue_a_div_w)) 
                                   | (IData)(vlSelfRef.__PVT__issue_a_mul_w)))));
                vlSelfRef.__Vdly__u_pipe0_ctrl__DOT__ctrl_e1_q 
                    = ((0x3fdU & (IData)(vlSelfRef.__Vdly__u_pipe0_ctrl__DOT__ctrl_e1_q)) 
                       | ((((IData)(vlSelfRef.__PVT__issue_a_lsu_w) 
                            & (IData)(vlSelfRef.__PVT__issue_a_sb_alloc_w)) 
                           & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q))) 
                          << 1U));
                vlSelfRef.__Vdly__u_pipe0_ctrl__DOT__ctrl_e1_q 
                    = ((0x3fbU & (IData)(vlSelfRef.__Vdly__u_pipe0_ctrl__DOT__ctrl_e1_q)) 
                       | ((((IData)(vlSelfRef.__PVT__issue_a_lsu_w) 
                            & (~ (IData)(vlSelfRef.__PVT__issue_a_sb_alloc_w))) 
                           & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q))) 
                          << 2U));
                vlSelfRef.__Vdly__u_pipe0_ctrl__DOT__ctrl_e1_q 
                    = ((0x3e7U & (IData)(vlSelfRef.__Vdly__u_pipe0_ctrl__DOT__ctrl_e1_q)) 
                       | ((((IData)(vlSelfRef.__PVT__issue_a_div_w) 
                            & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q))) 
                           << 4U) | (((IData)(vlSelfRef.__PVT__issue_a_csr_w) 
                                      & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q))) 
                                     << 3U)));
                vlSelfRef.__Vdly__u_pipe0_ctrl__DOT__ctrl_e1_q 
                    = ((0x39fU & (IData)(vlSelfRef.__Vdly__u_pipe0_ctrl__DOT__ctrl_e1_q)) 
                       | (((((IData)(vlSelfRef.__PVT__slot0_valid_r)
                              ? ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_55) 
                                 | ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_62) 
                                    | ((0x4063U == 
                                        (0x707fU & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                       | ((0x5063U 
                                           == (0x707fU 
                                               & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                          | (IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_61)))))
                              : (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_branch_w)) 
                            & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q))) 
                           << 6U) | (((IData)(vlSelfRef.__PVT__issue_a_mul_w) 
                                      & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q))) 
                                     << 5U)));
                vlSelfRef.__Vdly__u_pipe0_ctrl__DOT__ctrl_e1_q 
                    = ((0x27fU & (IData)(vlSelfRef.__Vdly__u_pipe0_ctrl__DOT__ctrl_e1_q)) 
                       | (((IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q) 
                           << 8U) | (((IData)(vlSelfRef.__PVT__issue_a_sb_alloc_w) 
                                      & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q))) 
                                     << 7U)));
                vlSelfRef.__Vdly__u_pipe0_ctrl__DOT__ctrl_e1_q 
                    = (0x200U | (IData)(vlSelfRef.__Vdly__u_pipe0_ctrl__DOT__ctrl_e1_q));
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__operand_rb_e1_q 
                    = vlSelfRef.__PVT__issue_a_rb_value_r;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__operand_ra_e1_q 
                    = vlSelfRef.__PVT__issue_a_ra_value_r;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__npc_e1_q 
                    = ((IData)(vlSymsp->TOP__v__u_core.__PVT__branch_d_exec0_request_w)
                        ? vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_target_r
                        : ((IData)(4U) + vlSelfRef.__PVT__opcode_a_pc_r));
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__pc_e1_q 
                    = vlSelfRef.__PVT__opcode_a_pc_r;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__opcode_e1_q 
                    = vlSelfRef.__PVT__opcode_a_r;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e1_q 
                    = ((0U != (IData)(vlSelfRef.__PVT__issue_a_fault_w))
                        ? (IData)(vlSelfRef.__PVT__issue_a_fault_w)
                        : (((IData)(vlSymsp->TOP__v__u_core.__PVT__branch_d_exec0_request_w) 
                            & (0U != (3U & vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_target_r)))
                            ? 0x10U : 0U));
            } else {
                vlSelfRef.__Vdly__u_pipe0_ctrl__DOT__ctrl_e1_q = 0U;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__operand_rb_e1_q = 0U;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__operand_ra_e1_q = 0U;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__npc_e1_q = 0U;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__pc_e1_q = 0U;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__opcode_e1_q = 0U;
                vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e1_q = 0U;
            }
            vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_e2_q 
                = (((IData)(vlSelfRef.__PVT__pipe0_squash_e1_e2_w) 
                    | (IData)(vlSelfRef.__PVT__pipe1_squash_e1_e2_w))
                    ? 0U : ((0x10U & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q))
                             ? vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__wb_result_q
                             : ((8U & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q))
                                 ? vlSymsp->TOP__v__u_core__u_csr.__PVT__rd_result_e1_q
                                 : vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__result_q)));
            vlSelfRef.__PVT__u_pipe0_ctrl__DOT__csr_wr_e2_q 
                = ((1U & (~ ((IData)(vlSelfRef.__PVT__pipe0_squash_e1_e2_w) 
                             | (IData)(vlSelfRef.__PVT__pipe1_squash_e1_e2_w)))) 
                   && (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__rd_valid_e1_q));
            vlSelfRef.__PVT__u_pipe1_ctrl__DOT__csr_wr_e2_q 
                = ((1U & (~ ((IData)(vlSelfRef.__PVT__pipe1_squash_e1_e2_w) 
                             | (IData)(vlSelfRef.__PVT__pipe0_squash_e1_e2_w)))) 
                   && (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__rd_valid_e1_q));
            if ((((IData)(vlSelfRef.__PVT__opcode_b_issue_r) 
                  & (IData)(vlSelfRef.__PVT__opcode_b_accept_r)) 
                 & (~ ((IData)(vlSelfRef.__PVT__pipe1_squash_e1_e2_w) 
                       | (IData)(vlSelfRef.__PVT__pipe0_squash_e1_e2_w))))) {
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_rb_e1_q 
                    = vlSelfRef.__PVT__issue_b_rb_value_r;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_ra_e1_q 
                    = vlSelfRef.__PVT__issue_b_ra_value_r;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__npc_e1_q 
                    = ((IData)(vlSymsp->TOP__v__u_core.__PVT__branch_d_exec1_request_w)
                        ? vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_target_r
                        : ((IData)(4U) + vlSelfRef.__PVT__opcode_b_pc_r));
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__pc_e1_q 
                    = vlSelfRef.__PVT__opcode_b_pc_r;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__opcode_e1_q 
                    = vlSelfRef.__PVT__opcode_b_r;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e1_q 
                    = ((0U != (IData)(vlSelfRef.__PVT__issue_b_fault_w))
                        ? (IData)(vlSelfRef.__PVT__issue_b_fault_w)
                        : (((IData)(vlSymsp->TOP__v__u_core.__PVT__branch_d_exec1_request_w) 
                            & (0U != (3U & vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_target_r)))
                            ? 0x10U : 0U));
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q 
                    = ((0x3fcU & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q)) 
                       | (((((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_lsu_w) 
                             & (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_rd_valid_w)) 
                            & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q))) 
                           << 1U) | (1U & (~ ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_lsu_w) 
                                              | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_mul_w))))));
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q 
                    = ((0x3fbU & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q)) 
                       | ((((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_lsu_w) 
                            & (~ (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_rd_valid_w))) 
                           & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q))) 
                          << 2U));
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q 
                    = (0x3e7U & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q));
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q 
                    = ((0x39fU & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q)) 
                       | ((((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_branch_w) 
                            & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q))) 
                           << 6U) | (((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_mul_w) 
                                      & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q))) 
                                     << 5U)));
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q 
                    = ((0x27fU & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q)) 
                       | (((IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q) 
                           << 8U) | (((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_rd_valid_w) 
                                      & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q))) 
                                     << 7U)));
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q 
                    = (0x200U | (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q));
            } else {
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_rb_e1_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__operand_ra_e1_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__npc_e1_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__pc_e1_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__opcode_e1_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e1_q = 0U;
                vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q = 0U;
            }
            vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e1_q 
                = (((IData)(vlSelfRef.__PVT__opcode_a_issue_r) 
                    & (IData)(vlSelfRef.__PVT__opcode_a_accept_r)) 
                   & (~ ((IData)(vlSelfRef.__PVT__pipe0_squash_e1_e2_w) 
                         | (IData)(vlSelfRef.__PVT__pipe1_squash_e1_e2_w))));
            vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e1_q 
                = (((IData)(vlSelfRef.__PVT__opcode_b_issue_r) 
                    & (IData)(vlSelfRef.__PVT__opcode_b_accept_r)) 
                   & (~ ((IData)(vlSelfRef.__PVT__pipe1_squash_e1_e2_w) 
                         | (IData)(vlSelfRef.__PVT__pipe0_squash_e1_e2_w))));
        }
        if (((IData)(vlSelfRef.__PVT__pipe0_squash_e1_e2_w) 
             | (IData)(vlSelfRef.__PVT__pipe1_squash_e1_e2_w))) {
            vlSelfRef.__PVT__div_pending_q = 0U;
        } else if (((IData)(vlSelfRef.__PVT__opcode_a_issue_r) 
                    & (IData)(vlSelfRef.__PVT__issue_a_div_w))) {
            vlSelfRef.__PVT__div_pending_q = 1U;
        } else if (vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__valid_q) {
            vlSelfRef.__PVT__div_pending_q = 0U;
        }
    }
    vlSelfRef.__PVT__pc_x_q = __Vdly__pc_x_q;
    vlSelfRef.__PVT__u_pipe1_ctrl__DOT__load_store_e2_w 
        = (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q))));
    vlSelfRef.__VdfgRegularize_hf12f852d_0_0 = (((IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_ntaken_q) 
                                                 | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_taken_q)) 
                                                & ((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                                   >> 6U));
    vlSelfRef.__PVT__pipe1_rd_e1_w = (0x1fU & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                                              >> 7U)))) 
                                               & (vlSelfRef.__PVT__u_pipe1_ctrl__DOT__opcode_e1_q 
                                                  >> 7U)));
}

VL_INLINE_OPT void Vriscv_top_biriscv_issue___nba_sequent__TOP__v__u_core__u_issue__1(Vriscv_top_biriscv_issue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_biriscv_issue___nba_sequent__TOP__v__u_core__u_issue__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_h47f1efe9_0_2 = ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_branch_w) 
                                                | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_exec_w));
    if (vlSymsp->TOP.__Vcellinp__v__rst_i) {
        vlSelfRef.__PVT__csr_pending_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e2_q = 0U;
    } else {
        if (((IData)(vlSelfRef.__PVT__pipe0_squash_e1_e2_w) 
             | (IData)(vlSelfRef.__PVT__pipe1_squash_e1_e2_w))) {
            vlSelfRef.__PVT__csr_pending_q = 0U;
        } else if (((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                    & (IData)(vlSelfRef.__PVT__issue_a_csr_w))) {
            vlSelfRef.__PVT__csr_pending_q = 1U;
        } else if ((1U & ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)) 
                          & ((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_wb_q) 
                             >> 3U)))) {
            vlSelfRef.__PVT__csr_pending_q = 0U;
        }
        if ((1U & (~ (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)))) {
            vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_wb_q 
                = ((0U != (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e2_r))
                    ? (0x37fU & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e2_q))
                    : (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e2_q));
            vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e2_q 
                = (((IData)(vlSelfRef.__PVT__pipe0_squash_e1_e2_w) 
                    | (IData)(vlSelfRef.__PVT__pipe1_squash_e1_e2_w))
                    ? 0U : (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q));
        }
    }
    vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q = vlSelfRef.__Vdly__u_pipe0_ctrl__DOT__ctrl_e1_q;
    vlSelfRef.__PVT__pipe0_rd_e1_w = (0x1fU & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                                              >> 7U)))) 
                                               & (vlSelfRef.__PVT__u_pipe0_ctrl__DOT__opcode_e1_q 
                                                  >> 7U)));
    vlSelfRef.__PVT__u_pipe0_ctrl__DOT__load_store_e2_w 
        = (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e2_q))));
}

VL_INLINE_OPT void Vriscv_top_biriscv_issue___nba_sequent__TOP__v__u_core__u_issue__2(Vriscv_top_biriscv_issue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_biriscv_issue___nba_sequent__TOP__v__u_core__u_issue__2\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe1_stall_raw_w = (1U & (((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__valid_q)) 
                                                 & ((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                                    >> 4U)) 
                                                | ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__writeback_mem_valid_w)) 
                                                   & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__load_store_e2_w))));
    vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e2_r 
        = (((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_q) 
            & ((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__load_store_e2_w) 
               & (IData)(vlSymsp->TOP__v__u_core.__PVT__writeback_mem_valid_w)))
            ? (IData)(vlSymsp->TOP__v__u_core.__PVT__writeback_mem_exception_w)
            : (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e2_q));
    vlSelfRef.__PVT__pipe0_stall_raw_w = (1U & (((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__valid_q)) 
                                                 & ((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                                    >> 4U)) 
                                                | ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__writeback_mem_valid_w)) 
                                                   & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__load_store_e2_w))));
    vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e2_r 
        = (((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_q) 
            & ((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__load_store_e2_w) 
               & (IData)(vlSymsp->TOP__v__u_core.__PVT__writeback_mem_valid_w)))
            ? (IData)(vlSymsp->TOP__v__u_core.__PVT__writeback_mem_exception_w)
            : (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e2_q));
    if (vlSymsp->TOP.__Vcellinp__v__rst_i) {
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q = 0U;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__csr_wdata_e2_q = 0U;
    } else if ((1U & (~ (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)))) {
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q 
            = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__csr_wdata_e2_q;
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__csr_wdata_e2_q 
            = (((IData)(vlSelfRef.__PVT__pipe0_squash_e1_e2_w) 
                | (IData)(vlSelfRef.__PVT__pipe1_squash_e1_e2_w))
                ? 0U : vlSymsp->TOP__v__u_core__u_csr.__PVT__csr_wdata_e1_q);
    }
    vlSelfRef.__PVT__pipe1_squash_e1_e2_w = ((0U != (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__exception_e2_r)) 
                                             | (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__squash_e1_e2_q));
    vlSelfRef.__PVT__pipe0_squash_e1_e2_w = ((0U != (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__exception_e2_r)) 
                                             | (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__squash_e1_e2_q));
    vlSelfRef.__PVT__squash_w = ((IData)(vlSelfRef.__PVT__pipe0_squash_e1_e2_w) 
                                 | (IData)(vlSelfRef.__PVT__pipe1_squash_e1_e2_w));
    vlSelfRef.__PVT__mispredicted_r = 0U;
    if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core.__PVT__branch_csr_request_w) 
                  | (IData)(vlSelfRef.__PVT__squash_w))))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_valid_w) 
                      & ((vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
                          << 3U) == (0xfffffffcU & vlSelfRef.__PVT__pc_x_q)))))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_valid_w) 
                          & ((4U | (vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
                                    << 3U)) == (0xfffffffcU 
                                                & vlSelfRef.__PVT__pc_x_q)))))) {
                if (((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_valid_w) 
                     | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_valid_w))) {
                    vlSelfRef.__PVT__mispredicted_r = 1U;
                }
            }
        }
    }
    vlSelfRef.__PVT__slot1_valid_r = 0U;
    vlSelfRef.__PVT__slot0_valid_r = 0U;
    if (((IData)(vlSymsp->TOP__v__u_core.__PVT__branch_csr_request_w) 
         | (IData)(vlSelfRef.__PVT__squash_w))) {
        vlSelfRef.__PVT__slot1_valid_r = 0U;
        vlSelfRef.__PVT__slot0_valid_r = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_valid_w) 
                      & ((vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
                          << 3U) == (0xfffffffcU & vlSelfRef.__PVT__pc_x_q)))))) {
            if (((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_valid_w) 
                 & ((4U | (vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
                           << 3U)) == (0xfffffffcU 
                                       & vlSelfRef.__PVT__pc_x_q)))) {
                vlSelfRef.__PVT__slot1_valid_r = 1U;
            }
        }
        if (((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_valid_w) 
             & ((vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
                 << 3U) == (0xfffffffcU & vlSelfRef.__PVT__pc_x_q)))) {
            vlSelfRef.__PVT__slot0_valid_r = 1U;
        }
    }
    vlSelfRef.__PVT__opcode_b_fault_r = 0U;
    vlSelfRef.__PVT__opcode_a_fault_r = 0U;
    vlSelfRef.__PVT__opcode_a_pc_r = 0U;
    vlSelfRef.__PVT__opcode_b_pc_r = 0U;
    vlSelfRef.__PVT__opcode_a_valid_r = 0U;
    vlSelfRef.__PVT__opcode_b_valid_r = 0U;
    vlSelfRef.__PVT__opcode_b_r = 0U;
    vlSelfRef.__PVT__opcode_a_r = 0U;
    if (vlSelfRef.__PVT__slot0_valid_r) {
        vlSelfRef.__PVT__opcode_b_fault_r = (((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_page_w) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_fetch_w));
        vlSelfRef.__PVT__opcode_a_fault_r = (((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_fault_page_w) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_fault_fetch_w));
        vlSelfRef.__PVT__opcode_a_pc_r = (vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
                                          << 3U);
        vlSelfRef.__PVT__opcode_b_pc_r = (4U | (vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
                                                << 3U));
        vlSelfRef.__PVT__opcode_a_valid_r = 1U;
        vlSelfRef.__PVT__opcode_b_valid_r = vlSymsp->TOP__v__u_core.__PVT__fetch1_valid_w;
        vlSelfRef.__PVT__issue_a_sb_alloc_w = vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_rd_valid_w;
        vlSelfRef.__PVT__issue_a_mul_w = ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_56) 
                                          | (IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_60));
        vlSelfRef.__PVT__issue_a_div_w = ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_57) 
                                          | (IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_59));
        vlSelfRef.__PVT__issue_a_lsu_w = ((3U == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                          | ((0x1003U 
                                              == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                             | ((0x2003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                | ((0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                   | ((0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                      | ((0x6003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                         | ((0x23U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                            | ((0x1023U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                               | (0x2023U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w))))))))));
        vlSelfRef.__PVT__issue_a_csr_w = ((0x73U == vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w) 
                                          | ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_58) 
                                             | ((0x1073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                | ((0x2073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                   | ((0x3073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                      | ((0x5073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                         | ((0x6073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                            | ((0x7073U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                               | ((0x10500073U 
                                                                   == 
                                                                   (0xffff8fffU 
                                                                    & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                                  | ((0xfU 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                                     | ((0x100fU 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                                        | ((0x12000073U 
                                                                            == 
                                                                            (0xfe007fffU 
                                                                             & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                                           | ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_invalid_w) 
                                                                              | ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_fault_fetch_w) 
                                                                                | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_fault_page_w)))))))))))))));
        vlSelfRef.__PVT__issue_a_exec_w = vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_exec_w;
        vlSelfRef.__PVT__opcode_b_r = vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w;
        vlSelfRef.__PVT__opcode_a_r = vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w;
    } else {
        if (vlSelfRef.__PVT__slot1_valid_r) {
            vlSelfRef.__PVT__opcode_b_fault_r = 0U;
            vlSelfRef.__PVT__opcode_a_fault_r = (((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_page_w) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_fetch_w));
            vlSelfRef.__PVT__opcode_a_pc_r = (4U | 
                                              (vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
                                               << 3U));
            vlSelfRef.__PVT__opcode_b_pc_r = 0U;
            vlSelfRef.__PVT__opcode_a_valid_r = 1U;
            vlSelfRef.__PVT__opcode_b_valid_r = 0U;
            vlSelfRef.__PVT__opcode_b_r = 0U;
            vlSelfRef.__PVT__opcode_a_r = vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w;
        }
        vlSelfRef.__PVT__issue_a_sb_alloc_w = vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_rd_valid_w;
        vlSelfRef.__PVT__issue_a_mul_w = vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_mul_w;
        vlSelfRef.__PVT__issue_a_div_w = ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_57) 
                                          | (IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_59));
        vlSelfRef.__PVT__issue_a_lsu_w = vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_lsu_w;
        vlSelfRef.__PVT__issue_a_csr_w = ((0x73U == vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w) 
                                          | ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_58) 
                                             | ((0x1073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                | ((0x2073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                   | ((0x3073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                      | ((0x5073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                         | ((0x6073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                            | ((0x7073U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                               | ((0x10500073U 
                                                                   == 
                                                                   (0xffff8fffU 
                                                                    & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                                  | ((0xfU 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                                     | ((0x100fU 
                                                                         == 
                                                                         (0x707fU 
                                                                          & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                                        | ((0x12000073U 
                                                                            == 
                                                                            (0xfe007fffU 
                                                                             & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                                           | ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_invalid_w) 
                                                                              | ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_fetch_w) 
                                                                                | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_page_w)))))))))))))));
        vlSelfRef.__PVT__issue_a_exec_w = vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_exec_w;
    }
    vlSelfRef.__PVT__issue_b_fault_w = ((1U & (IData)(vlSelfRef.__PVT__opcode_b_fault_r))
                                         ? 0x11U : 
                                        ((2U & (IData)(vlSelfRef.__PVT__opcode_b_fault_r))
                                          ? 0x1cU : 0U));
    vlSelfRef.__PVT__issue_a_fault_w = ((1U & (IData)(vlSelfRef.__PVT__opcode_a_fault_r))
                                         ? 0x11U : 
                                        ((2U & (IData)(vlSelfRef.__PVT__opcode_a_fault_r))
                                          ? 0x1cU : 0U));
    vlSelfRef.__VdfgRegularize_h47f1efe9_0_0 = ((IData)(vlSelfRef.__PVT__issue_a_exec_w) 
                                                | (IData)(vlSelfRef.__PVT__issue_a_lsu_w));
}

VL_INLINE_OPT void Vriscv_top_biriscv_issue___nba_sequent__TOP__v__u_core__u_issue__3(Vriscv_top_biriscv_issue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_biriscv_issue___nba_sequent__TOP__v__u_core__u_issue__3\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__pipe0_valid_wb_w = ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)) 
                                         & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_wb_q));
    vlSelfRef.__PVT__pipe1_valid_wb_w = ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)) 
                                         & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_wb_q));
    vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_w 
        = ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)) 
           & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_q));
    vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_w 
        = ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)) 
           & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_q));
    vlSelfRef.__PVT__pipe0_rd_wb_w = (0x1fU & ((- (IData)(
                                                          ((IData)(vlSelfRef.__PVT__pipe0_valid_wb_w) 
                                                           & ((~ (IData)(vlSelfRef.__PVT__pipe0_stall_raw_w)) 
                                                              & ((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_wb_q) 
                                                                 >> 7U))))) 
                                               & (vlSelfRef.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                  >> 7U)));
    vlSelfRef.__PVT__pipe1_rd_wb_w = (0x1fU & ((- (IData)(
                                                          ((IData)(vlSelfRef.__PVT__pipe1_valid_wb_w) 
                                                           & ((~ (IData)(vlSelfRef.__PVT__pipe1_stall_raw_w)) 
                                                              & ((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_wb_q) 
                                                                 >> 7U))))) 
                                               & (vlSelfRef.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                  >> 7U)));
    vlSelfRef.__PVT__pipe0_rd_e2_w = (0x1fU & ((- (IData)(
                                                          ((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_w) 
                                                           & ((~ (IData)(vlSelfRef.__PVT__pipe0_stall_raw_w)) 
                                                              & ((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e2_q) 
                                                                 >> 7U))))) 
                                               & (vlSelfRef.__PVT__u_pipe0_ctrl__DOT__opcode_e2_q 
                                                  >> 7U)));
    vlSelfRef.__PVT__pipe1_rd_e2_w = (0x1fU & ((- (IData)(
                                                          ((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_w) 
                                                           & ((~ (IData)(vlSelfRef.__PVT__pipe1_stall_raw_w)) 
                                                              & ((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q) 
                                                                 >> 7U))))) 
                                               & (vlSelfRef.__PVT__u_pipe1_ctrl__DOT__opcode_e2_q 
                                                  >> 7U)));
}

VL_INLINE_OPT void Vriscv_top_biriscv_issue___nba_comb__TOP__v__u_core__u_issue__0(Vriscv_top_biriscv_issue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_biriscv_issue___nba_comb__TOP__v__u_core__u_issue__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__issue_b_rb_value_w = ((0x1000000U 
                                            & vlSelfRef.__PVT__opcode_b_r)
                                            ? ((0x800000U 
                                                & vlSelfRef.__PVT__opcode_b_r)
                                                ? (
                                                   (0x400000U 
                                                    & vlSelfRef.__PVT__opcode_b_r)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r31_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r30_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r29_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r28_q))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r27_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r26_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r25_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r24_q)))
                                                : (
                                                   (0x400000U 
                                                    & vlSelfRef.__PVT__opcode_b_r)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r23_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r22_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r21_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r20_q))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r19_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r18_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r17_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r16_q))))
                                            : ((0x800000U 
                                                & vlSelfRef.__PVT__opcode_b_r)
                                                ? (
                                                   (0x400000U 
                                                    & vlSelfRef.__PVT__opcode_b_r)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r15_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r14_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r13_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r12_q))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r11_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r10_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r9_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r8_q)))
                                                : (
                                                   (0x400000U 
                                                    & vlSelfRef.__PVT__opcode_b_r)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r7_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r6_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r5_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r4_q))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r3_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r2_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r1_q
                                                      : 0U)))));
    vlSelfRef.__PVT__issue_b_ra_value_w = ((0x80000U 
                                            & vlSelfRef.__PVT__opcode_b_r)
                                            ? ((0x40000U 
                                                & vlSelfRef.__PVT__opcode_b_r)
                                                ? (
                                                   (0x20000U 
                                                    & vlSelfRef.__PVT__opcode_b_r)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r31_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r30_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r29_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r28_q))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r27_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r26_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r25_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r24_q)))
                                                : (
                                                   (0x20000U 
                                                    & vlSelfRef.__PVT__opcode_b_r)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r23_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r22_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r21_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r20_q))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r19_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r18_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r17_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r16_q))))
                                            : ((0x40000U 
                                                & vlSelfRef.__PVT__opcode_b_r)
                                                ? (
                                                   (0x20000U 
                                                    & vlSelfRef.__PVT__opcode_b_r)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r15_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r14_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r13_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r12_q))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r11_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r10_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r9_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r8_q)))
                                                : (
                                                   (0x20000U 
                                                    & vlSelfRef.__PVT__opcode_b_r)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r7_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r6_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r5_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r4_q))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_b_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r3_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r2_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_b_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r1_q
                                                      : 0U)))));
    vlSelfRef.__PVT__issue_a_rb_value_w = ((0x1000000U 
                                            & vlSelfRef.__PVT__opcode_a_r)
                                            ? ((0x800000U 
                                                & vlSelfRef.__PVT__opcode_a_r)
                                                ? (
                                                   (0x400000U 
                                                    & vlSelfRef.__PVT__opcode_a_r)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r31_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r30_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r29_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r28_q))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r27_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r26_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r25_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r24_q)))
                                                : (
                                                   (0x400000U 
                                                    & vlSelfRef.__PVT__opcode_a_r)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r23_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r22_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r21_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r20_q))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r19_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r18_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r17_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r16_q))))
                                            : ((0x800000U 
                                                & vlSelfRef.__PVT__opcode_a_r)
                                                ? (
                                                   (0x400000U 
                                                    & vlSelfRef.__PVT__opcode_a_r)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r15_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r14_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r13_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r12_q))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r11_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r10_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r9_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r8_q)))
                                                : (
                                                   (0x400000U 
                                                    & vlSelfRef.__PVT__opcode_a_r)
                                                    ? 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r7_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r6_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r5_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r4_q))
                                                    : 
                                                   ((0x200000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r3_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r2_q)
                                                     : 
                                                    ((0x100000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r1_q
                                                      : 0U)))));
    vlSelfRef.__PVT__issue_a_ra_value_w = ((0x80000U 
                                            & vlSelfRef.__PVT__opcode_a_r)
                                            ? ((0x40000U 
                                                & vlSelfRef.__PVT__opcode_a_r)
                                                ? (
                                                   (0x20000U 
                                                    & vlSelfRef.__PVT__opcode_a_r)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r31_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r30_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r29_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r28_q))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r27_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r26_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r25_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r24_q)))
                                                : (
                                                   (0x20000U 
                                                    & vlSelfRef.__PVT__opcode_a_r)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r23_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r22_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r21_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r20_q))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r19_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r18_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r17_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r16_q))))
                                            : ((0x40000U 
                                                & vlSelfRef.__PVT__opcode_a_r)
                                                ? (
                                                   (0x20000U 
                                                    & vlSelfRef.__PVT__opcode_a_r)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r15_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r14_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r13_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r12_q))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r11_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r10_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r9_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r8_q)))
                                                : (
                                                   (0x20000U 
                                                    & vlSelfRef.__PVT__opcode_a_r)
                                                    ? 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r7_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r6_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r5_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r4_q))
                                                    : 
                                                   ((0x10000U 
                                                     & vlSelfRef.__PVT__opcode_a_r)
                                                     ? 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r3_q
                                                      : vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r2_q)
                                                     : 
                                                    ((0x8000U 
                                                      & vlSelfRef.__PVT__opcode_a_r)
                                                      ? vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r1_q
                                                      : 0U)))));
}

VL_INLINE_OPT void Vriscv_top_biriscv_issue___nba_comb__TOP__v__u_core__u_issue__1(Vriscv_top_biriscv_issue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_biriscv_issue___nba_comb__TOP__v__u_core__u_issue__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_e2_r 
        = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_e2_q;
    if (((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_w) 
         & (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e2_q)))))) {
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_e2_r 
            = vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__wb_result_r;
    } else if (((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__valid_e2_w) 
                & ((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e2_q) 
                   >> 5U))) {
        vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_e2_r 
            = vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__result_e2_q;
    }
    vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_e2_r 
        = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_e2_q;
    if (((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_w) 
         & (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q)))))) {
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_e2_r 
            = vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__wb_result_r;
    } else if (((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__valid_e2_w) 
                & ((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q) 
                   >> 5U))) {
        vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_e2_r 
            = vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__result_e2_q;
    }
    vlSelfRef.__PVT__issue_a_rb_value_r = vlSelfRef.__PVT__issue_a_rb_value_w;
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_wb_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_a_rb_value_r = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_wb_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_a_rb_value_r = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_e2_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_a_rb_value_r = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_e2_r;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_e2_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_a_rb_value_r = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_e2_r;
    }
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_e1_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_a_rb_value_r = vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__result_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_e1_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_a_rb_value_r = vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__result_q;
    }
    if ((0U == (0x1fU & (vlSelfRef.__PVT__opcode_a_r 
                         >> 0x14U)))) {
        vlSelfRef.__PVT__issue_a_rb_value_r = 0U;
    }
    vlSelfRef.__PVT__issue_b_rb_value_r = vlSelfRef.__PVT__issue_b_rb_value_w;
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_wb_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_b_rb_value_r = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_wb_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_b_rb_value_r = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_e2_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_b_rb_value_r = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_e2_r;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_e2_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_b_rb_value_r = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_e2_r;
    }
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_e1_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_b_rb_value_r = vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__result_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_e1_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0x14U)))) {
        vlSelfRef.__PVT__issue_b_rb_value_r = vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__result_q;
    }
    if ((0U == (0x1fU & (vlSelfRef.__PVT__opcode_b_r 
                         >> 0x14U)))) {
        vlSelfRef.__PVT__issue_b_rb_value_r = 0U;
    }
    vlSelfRef.__PVT__issue_b_ra_value_r = vlSelfRef.__PVT__issue_b_ra_value_w;
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_wb_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_b_ra_value_r = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_wb_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_b_ra_value_r = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_e2_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_b_ra_value_r = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_e2_r;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_e2_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_b_ra_value_r = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_e2_r;
    }
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_e1_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_b_ra_value_r = vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__result_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_e1_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_b_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_b_ra_value_r = vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__result_q;
    }
    if ((0U == (0x1fU & (vlSelfRef.__PVT__opcode_b_r 
                         >> 0xfU)))) {
        vlSelfRef.__PVT__issue_b_ra_value_r = 0U;
    }
    vlSelfRef.__PVT__issue_a_ra_value_r = vlSelfRef.__PVT__issue_a_ra_value_w;
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_wb_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_a_ra_value_r = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_wb_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_a_ra_value_r = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_e2_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_a_ra_value_r = vlSelfRef.__PVT__u_pipe0_ctrl__DOT__result_e2_r;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_e2_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_a_ra_value_r = vlSelfRef.__PVT__u_pipe1_ctrl__DOT__result_e2_r;
    }
    if (((IData)(vlSelfRef.__PVT__pipe0_rd_e1_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_a_ra_value_r = vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__result_q;
    }
    if (((IData)(vlSelfRef.__PVT__pipe1_rd_e1_w) == 
         (0x1fU & (vlSelfRef.__PVT__opcode_a_r >> 0xfU)))) {
        vlSelfRef.__PVT__issue_a_ra_value_r = vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__result_q;
    }
    if ((0U == (0x1fU & (vlSelfRef.__PVT__opcode_a_r 
                         >> 0xfU)))) {
        vlSelfRef.__PVT__issue_a_ra_value_r = 0U;
    }
}
