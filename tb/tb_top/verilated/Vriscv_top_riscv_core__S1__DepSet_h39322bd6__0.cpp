// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top_riscv_core__S1.h"

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___act_sequent__TOP__v__u_core__0(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___act_sequent__TOP__v__u_core__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_exec0__DOT__alu_func_r) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.__PVT__u_exec0__DOT__alu_func_r))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_exec0__DOT__alu_func_r))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_exec0__DOT__alu_func_r)))) {
                    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_Ci = 1U;
                    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                        = (~ vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r);
                }
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_exec0__DOT__alu_func_r)))) {
                vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_Ci = 0U;
                vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                    = vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r;
            }
        }
    }
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___act_sequent__TOP__v__u_core__1(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___act_sequent__TOP__v__u_core__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_exec1__DOT__alu_func_r) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.__PVT__u_exec1__DOT__alu_func_r))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_exec1__DOT__alu_func_r))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_exec1__DOT__alu_func_r)))) {
                    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_Ci = 1U;
                    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                        = (~ vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r);
                }
            } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_exec1__DOT__alu_func_r)))) {
                vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_Ci = 0U;
                vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                    = vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r;
            }
        }
    }
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___act_sequent__TOP__v__u_core__2(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___act_sequent__TOP__v__u_core__2\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_exec0__DOT__u_alu__DOT__u_adder32__DOT__u_adder8_1__DOT____VdfgRegularize_h91daf8aa_0_0 
        = vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__unused;
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___act_sequent__TOP__v__u_core__3(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___act_sequent__TOP__v__u_core__3\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.u_exec1__DOT__u_alu__DOT__u_adder32__DOT__u_adder8_1__DOT____VdfgRegularize_h91daf8aa_0_0 
        = vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__unused;
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___act_comb__TOP__v__u_core__0(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___act_comb__TOP__v__u_core__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__unused 
        = (1U & (((0xffU & vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r) 
                  + ((0xffU & vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B) 
                     + (IData)(vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_Ci))) 
                 >> 8U));
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___act_comb__TOP__v__u_core__1(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___act_comb__TOP__v__u_core__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__unused 
        = (1U & (((vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
                   >> 0x18U) + ((vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                 >> 0x18U) + (IData)(vlSelfRef.u_exec1__DOT__u_alu__DOT__u_adder32__DOT__u_adder8_1__DOT____VdfgRegularize_h91daf8aa_0_0))) 
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
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___act_comb__TOP__v__u_core__2(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___act_comb__TOP__v__u_core__2\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__unused 
        = (1U & (((0xffU & vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r) 
                  + ((0xffU & vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B) 
                     + (IData)(vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_Ci))) 
                 >> 8U));
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___act_comb__TOP__v__u_core__3(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___act_comb__TOP__v__u_core__3\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__unused 
        = (1U & (((vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
                   >> 0x18U) + ((vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                 >> 0x18U) + (IData)(vlSelfRef.u_exec0__DOT__u_alu__DOT__u_adder32__DOT__u_adder8_1__DOT____VdfgRegularize_h91daf8aa_0_0))) 
                 >> 8U));
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

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___nba_sequent__TOP__v__u_core__6(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___nba_sequent__TOP__v__u_core__6\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_fill_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_1_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_2_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_4_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_8_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_1_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_2_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_4_r = 0U;
    vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_8_r = 0U;
    if ((8U & (IData)(vlSelfRef.__PVT__u_exec0__DOT__alu_func_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__result_r 
            = ((4U & (IData)(vlSelfRef.__PVT__u_exec0__DOT__alu_func_r))
                ? vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r
                : ((2U & (IData)(vlSelfRef.__PVT__u_exec0__DOT__alu_func_r))
                    ? ((1U & (IData)(vlSelfRef.__PVT__u_exec0__DOT__alu_func_r))
                        ? (((vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
                             >> 0x1fU) != (vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r 
                                           >> 0x1fU))
                            ? ((vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
                                >> 0x1fU) ? 1U : 0U)
                            : ((vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__sub_res_w 
                                >> 0x1fU) ? 1U : 0U))
                        : ((vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
                            < vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r)
                            ? 1U : 0U)) : ((1U & (IData)(vlSelfRef.__PVT__u_exec0__DOT__alu_func_r))
                                            ? (vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
                                               ^ vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r)
                                            : (vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
                                               | vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r))));
    } else if ((4U & (IData)(vlSelfRef.__PVT__u_exec0__DOT__alu_func_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__result_r 
            = ((2U & (IData)(vlSelfRef.__PVT__u_exec0__DOT__alu_func_r))
                ? ((1U & (IData)(vlSelfRef.__PVT__u_exec0__DOT__alu_func_r))
                    ? (vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
                       & vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r)
                    : vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_S)
                : ((1U & (IData)(vlSelfRef.__PVT__u_exec0__DOT__alu_func_r))
                    ? vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r
                    : vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__addsub_S));
    } else if ((2U & (IData)(vlSelfRef.__PVT__u_exec0__DOT__alu_func_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_fill_r 
            = (((vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
                 >> 0x1fU) & (3U == (IData)(vlSelfRef.__PVT__u_exec0__DOT__alu_func_r)))
                ? 0xffffU : 0U);
        vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_1_r 
            = ((1U & vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r)
                ? ((0x80000000U & ((IData)(vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
                                                 >> 1U))
                : vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r);
        vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_2_r 
            = ((2U & vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r)
                ? ((0xc0000000U & ((IData)(vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_1_r 
                                                 >> 2U))
                : vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_1_r);
        vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_4_r 
            = ((4U & vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r)
                ? ((0xf0000000U & ((IData)(vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_2_r 
                                                 >> 4U))
                : vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_2_r);
        vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_8_r 
            = ((8U & vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r)
                ? ((0xff000000U & ((IData)(vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_4_r 
                                                 >> 8U))
                : vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_4_r);
        vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__result_r 
            = ((0x10U & vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r)
                ? (((IData)(vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_fill_r) 
                    << 0x10U) | (vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_8_r 
                                 >> 0x10U)) : vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_8_r);
    } else if ((1U & (IData)(vlSelfRef.__PVT__u_exec0__DOT__alu_func_r))) {
        vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_1_r 
            = ((1U & vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r)
                ? (vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r 
                   << 1U) : vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r);
        vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_2_r 
            = ((2U & vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r)
                ? (vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_1_r 
                   << 2U) : vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_1_r);
        vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_4_r 
            = ((4U & vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r)
                ? (vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_2_r 
                   << 4U) : vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_2_r);
        vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_8_r 
            = ((8U & vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r)
                ? (vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_4_r 
                   << 8U) : vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_4_r);
        vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__result_r 
            = ((0x10U & vlSelfRef.__PVT__u_exec0__DOT__alu_input_b_r)
                ? (vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_8_r 
                   << 0x10U) : vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_8_r);
    } else {
        vlSelfRef.__PVT__u_exec0__DOT__u_alu__DOT__result_r 
            = vlSelfRef.__PVT__u_exec0__DOT__alu_input_a_r;
    }
}

VL_INLINE_OPT void Vriscv_top_riscv_core__S1___nba_sequent__TOP__v__u_core__7(Vriscv_top_riscv_core__S1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_riscv_core__S1___nba_sequent__TOP__v__u_core__7\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_fill_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_1_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_2_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_4_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_8_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_1_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_2_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_4_r = 0U;
    vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_8_r = 0U;
    if ((8U & (IData)(vlSelfRef.__PVT__u_exec1__DOT__alu_func_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__result_r 
            = ((4U & (IData)(vlSelfRef.__PVT__u_exec1__DOT__alu_func_r))
                ? vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r
                : ((2U & (IData)(vlSelfRef.__PVT__u_exec1__DOT__alu_func_r))
                    ? ((1U & (IData)(vlSelfRef.__PVT__u_exec1__DOT__alu_func_r))
                        ? (((vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
                             >> 0x1fU) != (vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r 
                                           >> 0x1fU))
                            ? ((vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
                                >> 0x1fU) ? 1U : 0U)
                            : ((vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__sub_res_w 
                                >> 0x1fU) ? 1U : 0U))
                        : ((vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
                            < vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r)
                            ? 1U : 0U)) : ((1U & (IData)(vlSelfRef.__PVT__u_exec1__DOT__alu_func_r))
                                            ? (vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
                                               ^ vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r)
                                            : (vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
                                               | vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r))));
    } else if ((4U & (IData)(vlSelfRef.__PVT__u_exec1__DOT__alu_func_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__result_r 
            = ((2U & (IData)(vlSelfRef.__PVT__u_exec1__DOT__alu_func_r))
                ? ((1U & (IData)(vlSelfRef.__PVT__u_exec1__DOT__alu_func_r))
                    ? (vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
                       & vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r)
                    : vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_S)
                : ((1U & (IData)(vlSelfRef.__PVT__u_exec1__DOT__alu_func_r))
                    ? vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r
                    : vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__addsub_S));
    } else if ((2U & (IData)(vlSelfRef.__PVT__u_exec1__DOT__alu_func_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_fill_r 
            = (((vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
                 >> 0x1fU) & (3U == (IData)(vlSelfRef.__PVT__u_exec1__DOT__alu_func_r)))
                ? 0xffffU : 0U);
        vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_1_r 
            = ((1U & vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r)
                ? ((0x80000000U & ((IData)(vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
                                                 >> 1U))
                : vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r);
        vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_2_r 
            = ((2U & vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r)
                ? ((0xc0000000U & ((IData)(vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_1_r 
                                                 >> 2U))
                : vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_1_r);
        vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_4_r 
            = ((4U & vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r)
                ? ((0xf0000000U & ((IData)(vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_2_r 
                                                 >> 4U))
                : vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_2_r);
        vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_8_r 
            = ((8U & vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r)
                ? ((0xff000000U & ((IData)(vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_fill_r) 
                                   << 0x10U)) | (vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_4_r 
                                                 >> 8U))
                : vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_4_r);
        vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__result_r 
            = ((0x10U & vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r)
                ? (((IData)(vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_fill_r) 
                    << 0x10U) | (vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_8_r 
                                 >> 0x10U)) : vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_8_r);
    } else if ((1U & (IData)(vlSelfRef.__PVT__u_exec1__DOT__alu_func_r))) {
        vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_1_r 
            = ((1U & vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r)
                ? (vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r 
                   << 1U) : vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r);
        vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_2_r 
            = ((2U & vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r)
                ? (vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_1_r 
                   << 2U) : vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_1_r);
        vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_4_r 
            = ((4U & vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r)
                ? (vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_2_r 
                   << 4U) : vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_2_r);
        vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_8_r 
            = ((8U & vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r)
                ? (vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_4_r 
                   << 8U) : vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_4_r);
        vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__result_r 
            = ((0x10U & vlSelfRef.__PVT__u_exec1__DOT__alu_input_b_r)
                ? (vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_8_r 
                   << 0x10U) : vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_8_r);
    } else {
        vlSelfRef.__PVT__u_exec1__DOT__u_alu__DOT__result_r 
            = vlSelfRef.__PVT__u_exec1__DOT__alu_input_a_r;
    }
}
