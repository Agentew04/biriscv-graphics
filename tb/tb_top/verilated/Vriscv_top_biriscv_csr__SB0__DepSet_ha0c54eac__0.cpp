// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_biriscv_csr__SB0.h"

VL_INLINE_OPT void Vriscv_top_biriscv_csr__SB0___ico_sequent__TOP__v__u_core__u_csr__0(Vriscv_top_biriscv_csr__SB0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_biriscv_csr__SB0___ico_sequent__TOP__v__u_core__u_csr__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__csr_rdata_w = ((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                     >> 0x1fU) ? ((0x40000000U 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                   ? 
                                                  ((0x20000000U 
                                                    & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                    ? 0U
                                                    : 
                                                   ((0x10000000U 
                                                     & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                     ? 0U
                                                     : 
                                                    ((0x8000000U 
                                                      & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                      ? 
                                                     ((0x4000000U 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                       ? 0U
                                                       : 
                                                      ((0x2000000U 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                        ? 0U
                                                        : 
                                                       ((0x1000000U 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                         ? 0U
                                                         : 
                                                        ((0x800000U 
                                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                          ? 0U
                                                          : 
                                                         ((0x400000U 
                                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                           ? 0U
                                                           : 
                                                          ((0x200000U 
                                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                            ? 0U
                                                            : 
                                                           ((0x100000U 
                                                             & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                             ? vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_h_q
                                                             : 0U)))))))
                                                      : 
                                                     ((0x4000000U 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                       ? 0U
                                                       : 
                                                      ((0x2000000U 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                        ? 0U
                                                        : 
                                                       ((0x1000000U 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                         ? 0U
                                                         : 
                                                        ((0x800000U 
                                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                          ? 0U
                                                          : 
                                                         ((0x400000U 
                                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                           ? 0U
                                                           : 
                                                          ((0x200000U 
                                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                            ? 0U
                                                            : vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_q)))))))))
                                                   : 0U)
                                     : ((0x40000000U 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                         ? ((0x20000000U 
                                             & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                             ? ((0x10000000U 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                 ? 
                                                ((0x8000000U 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                  ? 
                                                 ((0x4000000U 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                   ? 
                                                  ((0x2000000U 
                                                    & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                    ? 0U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                     ? 0U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                      ? 0U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                       ? 0U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                        ? 0U
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                         ? 0U
                                                         : vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtimecmp_q))))))
                                                   : 0U)
                                                  : 0U)
                                                 : 0U)
                                             : 0U) : 
                                        ((0x20000000U 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                          ? ((0x10000000U 
                                              & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                              ? ((0x8000000U 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                  ? 0U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                   ? 
                                                  ((0x2000000U 
                                                    & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                    ? 0U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                     ? 0U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                      ? 0U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                       ? 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                        ? 0U
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                         ? 0U
                                                         : 
                                                        (0xaaaU 
                                                         & vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_q)))
                                                       : 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                        ? 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                         ? vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtval_q
                                                         : 
                                                        (0x8000000fU 
                                                         & vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcause_q))
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                         ? vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mepc_q
                                                         : vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mscratch_q))))))
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                    ? 0U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                     ? 0U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                      ? 0U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                       ? 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                        ? 0U
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                         ? vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtvec_q
                                                         : 
                                                        (0xaaaU 
                                                         & vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mie_q)))
                                                       : 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                        ? 0U
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                         ? 0x40001100U
                                                         : vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q))))))))
                                              : 0U)
                                          : 0U)));
}

VL_INLINE_OPT void Vriscv_top_biriscv_csr__SB0___ico_sequent__TOP__v__u_core__u_csr__1(Vriscv_top_biriscv_csr__SB0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_biriscv_csr__SB0___ico_sequent__TOP__v__u_core__u_csr__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sfence_w = ((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                 & (0x12000073U == 
                                    (0xfe007fffU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)));
    vlSelfRef.__PVT__ifence_w = ((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                 & (0x100fU == (0x707fU 
                                                & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)));
    vlSelfRef.__PVT__eret_fault_w = (((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                      & (0x200073U 
                                         == (0xcfffffffU 
                                             & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                                     & ((IData)(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q) 
                                        < (3U & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                 >> 0x1cU))));
    vlSelfRef.__PVT__csrrci_w = ((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                 & (0x7073U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)));
    vlSelfRef.__PVT__csrrw_w = ((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                & (0x1073U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)));
    vlSelfRef.__PVT__csrrwi_w = ((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                 & (0x5073U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)));
    vlSelfRef.__PVT__clr_r = ((IData)(vlSelfRef.__PVT__csrrw_w) 
                              | (((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                  & (0x3073U == (0x707fU 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                                 | ((IData)(vlSelfRef.__PVT__csrrwi_w) 
                                    | (IData)(vlSelfRef.__PVT__csrrci_w))));
    vlSelfRef.__VdfgRegularize_h7babc46f_0_1 = ((IData)(vlSelfRef.__PVT__csrrwi_w) 
                                                | ((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                                   & (0x6073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))));
    vlSelfRef.__PVT__data_r = (((IData)(vlSelfRef.__VdfgRegularize_h7babc46f_0_1) 
                                | (IData)(vlSelfRef.__PVT__csrrci_w))
                                ? (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                            >> 0xfU))
                                : vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r);
    vlSelfRef.__PVT__set_r = ((IData)(vlSelfRef.__PVT__csrrw_w) 
                              | (((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                  & (0x2073U == (0x707fU 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_h7babc46f_0_1)));
    vlSelfRef.__PVT__satp_update_w = ((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                      & (((IData)(vlSelfRef.__PVT__set_r) 
                                          | (IData)(vlSelfRef.__PVT__clr_r)) 
                                         & ((IData)(
                                                    (((0U 
                                                       != 
                                                       (0xf8000U 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                                                      | (IData)(vlSelfRef.__PVT__csrrw_w)) 
                                                     | (IData)(vlSelfRef.__PVT__csrrwi_w))) 
                                            & (0x180U 
                                               == (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                   >> 0x14U)))));
}

VL_INLINE_OPT void Vriscv_top_biriscv_csr__SB0___nba_sequent__TOP__v__u_core__u_csr__0(Vriscv_top_biriscv_csr__SB0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_biriscv_csr__SB0___nba_sequent__TOP__v__u_core__u_csr__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__init_done;
    __Vdly__init_done = 0;
    // Body
    __Vdly__init_done = vlSelfRef.__PVT__init_done;
    if (vlSymsp->TOP.__Vcellinp__v__rst_i) {
        __Vdly__init_done = 0U;
        vlSelfRef.__PVT__branch_target_q = 0U;
    } else {
        if ((0U == (IData)(vlSelfRef.__PVT__init_done))) {
            __Vdly__init_done = 1U;
        } else if ((1U >= (IData)(vlSelfRef.__PVT__init_done))) {
            __Vdly__init_done = 2U;
        }
        vlSelfRef.__PVT__branch_target_q = vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__branch_target_r;
    }
    vlSelfRef.__PVT__tlb_flush_q = ((~ (IData)(vlSymsp->TOP.__Vcellinp__v__rst_i)) 
                                    & ((IData)(vlSelfRef.__PVT__satp_update_w) 
                                       | (IData)(vlSelfRef.__PVT__sfence_w)));
    vlSelfRef.__PVT__ifence_q = ((~ (IData)(vlSymsp->TOP.__Vcellinp__v__rst_i)) 
                                 & (IData)(vlSelfRef.__PVT__ifence_w));
    vlSelfRef.__PVT__branch_q = ((1U & (~ (IData)(vlSymsp->TOP.__Vcellinp__v__rst_i))) 
                                 && (IData)(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__branch_r));
    vlSelfRef.__PVT__init_done = __Vdly__init_done;
}

VL_INLINE_OPT void Vriscv_top_biriscv_csr__SB0___nba_sequent__TOP__v__u_core__u_csr__1(Vriscv_top_biriscv_csr__SB0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_biriscv_csr__SB0___nba_sequent__TOP__v__u_core__u_csr__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.__Vcellinp__v__rst_i) {
        vlSelfRef.__PVT__exception_e1_q = 0U;
        vlSelfRef.__PVT__rd_result_e1_q = 0U;
    } else if (vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) {
        vlSelfRef.__PVT__exception_e1_q = (0x3fU & 
                                           ((0x73U 
                                             == vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                             ? ((IData)(0x18U) 
                                                + (IData)(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q))
                                             : ((IData)(vlSelfRef.__PVT__eret_fault_w)
                                                 ? 0x12U
                                                 : 
                                                ((0x200073U 
                                                  == 
                                                  (0xcfffffffU 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))
                                                  ? 
                                                 ((IData)(0x30U) 
                                                  + 
                                                  (3U 
                                                   & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                      >> 0x1cU)))
                                                  : 
                                                 ((0x100073U 
                                                   == vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                   ? 0x13U
                                                   : 
                                                  ((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_invalid_w)
                                                    ? 0x12U
                                                    : 
                                                   ((((IData)(vlSelfRef.__PVT__satp_update_w) 
                                                      | (IData)(vlSelfRef.__PVT__ifence_w)) 
                                                     | (IData)(vlSelfRef.__PVT__sfence_w))
                                                     ? 0x34U
                                                     : 0U)))))));
        vlSelfRef.__PVT__rd_result_e1_q = (((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_invalid_w) 
                                            | (IData)(vlSelfRef.__PVT__eret_fault_w))
                                            ? vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r
                                            : vlSelfRef.__PVT__csr_rdata_w);
    } else {
        vlSelfRef.__PVT__exception_e1_q = 0U;
        vlSelfRef.__PVT__rd_result_e1_q = 0U;
    }
    vlSelfRef.__PVT__rd_valid_e1_q = ((1U & (~ (IData)(vlSymsp->TOP.__Vcellinp__v__rst_i))) 
                                      && ((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                          && ((IData)(vlSelfRef.__PVT__set_r) 
                                              | (IData)(vlSelfRef.__PVT__clr_r))));
    vlSelfRef.__PVT__take_interrupt_q = ((~ (IData)(vlSymsp->TOP.__Vcellinp__v__rst_i)) 
                                         & ((0U != vlSelfRef.__PVT__interrupt_w) 
                                            & (~ ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__csr_pending_q) 
                                                  | (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_csr_w)))));
}

VL_INLINE_OPT void Vriscv_top_biriscv_csr__SB0___nba_sequent__TOP__v__u_core__u_csr__2(Vriscv_top_biriscv_csr__SB0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_biriscv_csr__SB0___nba_sequent__TOP__v__u_core__u_csr__2\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__interrupt_w = ((8U & vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q)
                                     ? (vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mie_q 
                                        & vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_q)
                                     : 0U);
    if (vlSymsp->TOP.__Vcellinp__v__rst_i) {
        vlSelfRef.__PVT__csr_wdata_e1_q = 0U;
    } else if (vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) {
        if (((IData)(vlSelfRef.__PVT__set_r) & (IData)(vlSelfRef.__PVT__clr_r))) {
            vlSelfRef.__PVT__csr_wdata_e1_q = vlSelfRef.__PVT__data_r;
        } else if (vlSelfRef.__PVT__set_r) {
            vlSelfRef.__PVT__csr_wdata_e1_q = (vlSelfRef.__PVT__csr_rdata_w 
                                               | vlSelfRef.__PVT__data_r);
        } else if (vlSelfRef.__PVT__clr_r) {
            vlSelfRef.__PVT__csr_wdata_e1_q = (vlSelfRef.__PVT__csr_rdata_w 
                                               & (~ vlSelfRef.__PVT__data_r));
        }
    } else {
        vlSelfRef.__PVT__csr_wdata_e1_q = 0U;
    }
    vlSelfRef.__PVT__csr_rdata_w = ((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                     >> 0x1fU) ? ((0x40000000U 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                   ? 
                                                  ((0x20000000U 
                                                    & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                    ? 0U
                                                    : 
                                                   ((0x10000000U 
                                                     & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                     ? 0U
                                                     : 
                                                    ((0x8000000U 
                                                      & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                      ? 
                                                     ((0x4000000U 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                       ? 0U
                                                       : 
                                                      ((0x2000000U 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                        ? 0U
                                                        : 
                                                       ((0x1000000U 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                         ? 0U
                                                         : 
                                                        ((0x800000U 
                                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                          ? 0U
                                                          : 
                                                         ((0x400000U 
                                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                           ? 0U
                                                           : 
                                                          ((0x200000U 
                                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                            ? 0U
                                                            : 
                                                           ((0x100000U 
                                                             & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                             ? vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_h_q
                                                             : 0U)))))))
                                                      : 
                                                     ((0x4000000U 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                       ? 0U
                                                       : 
                                                      ((0x2000000U 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                        ? 0U
                                                        : 
                                                       ((0x1000000U 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                         ? 0U
                                                         : 
                                                        ((0x800000U 
                                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                          ? 0U
                                                          : 
                                                         ((0x400000U 
                                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                           ? 0U
                                                           : 
                                                          ((0x200000U 
                                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                            ? 0U
                                                            : vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_q)))))))))
                                                   : 0U)
                                     : ((0x40000000U 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                         ? ((0x20000000U 
                                             & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                             ? ((0x10000000U 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                 ? 
                                                ((0x8000000U 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                  ? 
                                                 ((0x4000000U 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                   ? 
                                                  ((0x2000000U 
                                                    & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                    ? 0U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                     ? 0U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                      ? 0U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                       ? 0U
                                                       : 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                        ? 0U
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                         ? 0U
                                                         : vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtimecmp_q))))))
                                                   : 0U)
                                                  : 0U)
                                                 : 0U)
                                             : 0U) : 
                                        ((0x20000000U 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                          ? ((0x10000000U 
                                              & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                              ? ((0x8000000U 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                  ? 0U
                                                  : 
                                                 ((0x4000000U 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                   ? 
                                                  ((0x2000000U 
                                                    & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                    ? 0U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                     ? 0U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                      ? 0U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                       ? 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                        ? 0U
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                         ? 0U
                                                         : 
                                                        (0xaaaU 
                                                         & vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_q)))
                                                       : 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                        ? 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                         ? vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtval_q
                                                         : 
                                                        (0x8000000fU 
                                                         & vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcause_q))
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                         ? vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mepc_q
                                                         : vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mscratch_q))))))
                                                   : 
                                                  ((0x2000000U 
                                                    & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                    ? 0U
                                                    : 
                                                   ((0x1000000U 
                                                     & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                     ? 0U
                                                     : 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                      ? 0U
                                                      : 
                                                     ((0x400000U 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                       ? 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                        ? 0U
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                         ? vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtvec_q
                                                         : 
                                                        (0xaaaU 
                                                         & vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mie_q)))
                                                       : 
                                                      ((0x200000U 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                        ? 0U
                                                        : 
                                                       ((0x100000U 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                         ? 0x40001100U
                                                         : vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q))))))))
                                              : 0U)
                                          : 0U)));
}

VL_INLINE_OPT void Vriscv_top_biriscv_csr__SB0___nba_sequent__TOP__v__u_core__u_csr__3(Vriscv_top_biriscv_csr__SB0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_biriscv_csr__SB0___nba_sequent__TOP__v__u_core__u_csr__3\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__sfence_w = ((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                 & (0x12000073U == 
                                    (0xfe007fffU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)));
    vlSelfRef.__PVT__ifence_w = ((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                 & (0x100fU == (0x707fU 
                                                & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)));
    vlSelfRef.__PVT__eret_fault_w = (((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                      & (0x200073U 
                                         == (0xcfffffffU 
                                             & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                                     & ((IData)(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q) 
                                        < (3U & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                 >> 0x1cU))));
    vlSelfRef.__PVT__csrrci_w = ((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                 & (0x7073U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)));
    vlSelfRef.__PVT__csrrw_w = ((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                & (0x1073U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)));
    vlSelfRef.__PVT__csrrwi_w = ((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                 & (0x5073U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)));
    vlSelfRef.__PVT__clr_r = ((IData)(vlSelfRef.__PVT__csrrw_w) 
                              | (((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                  & (0x3073U == (0x707fU 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                                 | ((IData)(vlSelfRef.__PVT__csrrwi_w) 
                                    | (IData)(vlSelfRef.__PVT__csrrci_w))));
    vlSelfRef.__VdfgRegularize_h7babc46f_0_1 = ((IData)(vlSelfRef.__PVT__csrrwi_w) 
                                                | ((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                                   & (0x6073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))));
    vlSelfRef.__PVT__set_r = ((IData)(vlSelfRef.__PVT__csrrw_w) 
                              | (((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                  & (0x2073U == (0x707fU 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_h7babc46f_0_1)));
    vlSelfRef.__PVT__satp_update_w = ((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                      & (((IData)(vlSelfRef.__PVT__set_r) 
                                          | (IData)(vlSelfRef.__PVT__clr_r)) 
                                         & ((IData)(
                                                    (((0U 
                                                       != 
                                                       (0xf8000U 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                                                      | (IData)(vlSelfRef.__PVT__csrrw_w)) 
                                                     | (IData)(vlSelfRef.__PVT__csrrwi_w))) 
                                            & (0x180U 
                                               == (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                   >> 0x14U)))));
}

VL_INLINE_OPT void Vriscv_top_biriscv_csr__SB0___nba_comb__TOP__v__u_core__u_csr__0(Vriscv_top_biriscv_csr__SB0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_biriscv_csr__SB0___nba_comb__TOP__v__u_core__u_csr__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__data_r = (((IData)(vlSelfRef.__VdfgRegularize_h7babc46f_0_1) 
                                | (IData)(vlSelfRef.__PVT__csrrci_w))
                                ? (0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                            >> 0xfU))
                                : vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r);
}
