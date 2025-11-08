// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_riscv_core__S1.h"

VL_ATTR_COLD void Vriscv_top_riscv_core__S1___stl_sequent__TOP__v__u_core__0(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___stl_sequent__TOP__v__u_core__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_63;
    u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_63 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__valid_o 
        = (0U != (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q));
    vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__accept_o 
        = (2U != (IData)(vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q));
    vlSelfRef.__PVT__branch_csr_priv_w = ((vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_satp_q 
                                           >> 0x1fU)
                                           ? (IData)(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q)
                                           : 3U);
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
    vlSelfRef.__PVT__u_div__DOT__div_complete_w = (
                                                   (~ 
                                                    (0U 
                                                     != vlSelfRef.__PVT__u_div__DOT__q_mask_q)) 
                                                   & (IData)(vlSelfRef.__PVT__u_div__DOT__div_busy_q));
    if (vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_valid_q) {
        vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_w 
            = vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[2U];
        vlSelfRef.__PVT__u_frontend__DOT__fetch_pred_branch_w 
            = (3U & vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[3U]);
        vlSelfRef.__PVT__u_frontend__DOT__fetch_fault_fetch_w 
            = (1U & (vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[3U] 
                     >> 2U));
    } else {
        vlSelfRef.__PVT__u_frontend__DOT__fetch_pc_w 
            = (0xfffffff8U & vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__pc_d_q);
        vlSelfRef.__PVT__u_frontend__DOT__fetch_pred_branch_w 
            = (3U & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__pred_d_q));
        vlSelfRef.__PVT__u_frontend__DOT__fetch_fault_fetch_w 
            = (1U & (IData)(vlSymsp->TOP__v__u_icache.__PVT__axi_error_q));
    }
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
    vlSelfRef.__PVT__u_frontend__DOT__fetch_fault_page_w 
        = ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_valid_q) 
           && (1U & (vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[3U] 
                     >> 3U)));
    if ((0U != (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__exception_wb_q))) {
        vlSelfRef.__PVT__csr_writeback_exception_addr_w 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        vlSelfRef.__PVT__csr_writeback_exception_pc_w 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__pc_wb_q;
    } else {
        vlSelfRef.__PVT__csr_writeback_exception_addr_w 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        vlSelfRef.__PVT__csr_writeback_exception_pc_w 
            = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__pc_wb_q;
    }
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
    vlSelfRef.u_frontend__DOT__u_npc__DOT____VdfgRegularize_he46ab735_0_0 
        = (1U & (~ vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q
                 [vlSelfRef.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q]));
    vlSelfRef.__PVT__csr_writeback_exception_w = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__exception_wb_q) 
                                                  | (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__exception_wb_q));
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
    vlSelfRef.__PVT__u_lsu__DOT__resp_addr_w = (IData)(
                                                       (vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                        [vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                                        >> 4U));
    vlSelfRef.__PVT__fetch1_valid_w = ((0U != (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q)) 
                                       & vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q
                                       [vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]);
    vlSelfRef.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
        = (vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q
           [vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q] 
           >> 3U);
    vlSelfRef.__PVT__branch_csr_request_w = ((1U == (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__init_done)) 
                                             | (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_q));
    vlSelfRef.__PVT__fetch0_valid_w = ((0U != (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q)) 
                                       & vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q
                                       [vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]);
    vlSelfRef.__PVT__fetch0_instr_w = (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q
                                              [vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]);
    vlSelfRef.__PVT__fetch1_instr_w = (IData)((vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q
                                               [vlSelfRef.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q] 
                                               >> 0x20U));
    vlSelfRef.__PVT__u_lsu__DOT__resp_load_w = (1U 
                                                & (IData)(
                                                          vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                                          [vlSelfRef.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q]));
    vlSelfRef.__PVT__branch_csr_pc_w = ((1U == (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__init_done))
                                         ? vlSymsp->TOP.__Vcellinp__v__reset_vector_i
                                         : vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_target_q);
    vlSelfRef.u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_fifo__info0_in_i 
        = (((IData)(vlSelfRef.__PVT__u_frontend__DOT__fetch_fault_page_w) 
            << 1U) | (IData)(vlSelfRef.__PVT__u_frontend__DOT__fetch_fault_fetch_w));
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
}

VL_ATTR_COLD void Vriscv_top_riscv_core__S1___stl_sequent__TOP__v__u_core__1(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___stl_sequent__TOP__v__u_core__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_frontend__DOT__fetch_instr_w 
        = ((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_valid_q)
            ? (((QData)((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[1U])) 
                << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q[0U])))
            : vlSymsp->TOP__v__u_icache.__PVT__inst_r);
    if (vlSymsp->TOP__v__u_core__u_issue.__VdfgRegularize_hf12f852d_0_0) {
        vlSelfRef.__PVT__branch_info_pc_w = vlSelfRef.__PVT__u_exec1__DOT__pc_x_q;
        vlSelfRef.__PVT__branch_info_source_w = vlSelfRef.__PVT__u_exec1__DOT__pc_m_q;
    } else {
        vlSelfRef.__PVT__branch_info_pc_w = vlSelfRef.__PVT__u_exec0__DOT__pc_x_q;
        vlSelfRef.__PVT__branch_info_source_w = vlSelfRef.__PVT__u_exec0__DOT__pc_m_q;
    }
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
    vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__icache_busy_w 
        = ((~ (IData)(vlSymsp->TOP__v.__PVT__icache_valid_w)) 
           & (IData)(vlSelfRef.__PVT__u_frontend__DOT__u_fetch__DOT__icache_fetch_q));
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

VL_ATTR_COLD void Vriscv_top_riscv_core__S1___stl_sequent__TOP__v__u_core__3(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___stl_sequent__TOP__v__u_core__3\n"); );
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
    vlSelfRef.u_lsu__DOT____Vcellinp__u_lsu_request__push_i 
        = ((IData)(vlSelfRef.__PVT__u_lsu__DOT__issue_lsu_e1_w) 
           | ((~ (IData)(vlSelfRef.__PVT__u_lsu__DOT__delay_lsu_e2_w)) 
              & (IData)(vlSelfRef.__PVT__u_lsu__DOT__mem_unaligned_e1_q)));
    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__sub_res_w 
        = (vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
           - vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r);
    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__unused 
        = (1U & (((0xffU & vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r) 
                  + ((0xffU & vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B) 
                     + (IData)(vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_Ci))) 
                 >> 8U));
    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__sub_res_w 
        = (vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
           - vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r);
    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__unused 
        = (1U & (((0xffU & vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r) 
                  + ((0xffU & vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B) 
                     + (IData)(vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_Ci))) 
                 >> 8U));
}
