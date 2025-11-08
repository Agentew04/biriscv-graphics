// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top___024root.h"

VL_INLINE_OPT void Vriscv_top___024root___ico_sequent__TOP__0(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___ico_sequent__TOP__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__rst_i, vlSelfRef.rst_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__clk_i, vlSelfRef.clk_i);
    VL_ASSIGN_ISU(4, vlSelfRef.__Vcellinp__v__axi_d_rid_i, vlSelfRef.axi_d_rid_i);
    VL_ASSIGN_ISU(4, vlSelfRef.__Vcellinp__v__axi_d_bid_i, vlSelfRef.axi_d_bid_i);
    VL_ASSIGN_ISU(4, vlSelfRef.__Vcellinp__v__axi_i_rid_i, vlSelfRef.axi_i_rid_i);
    VL_ASSIGN_ISU(2, vlSelfRef.__Vcellinp__v__axi_i_rresp_i, vlSelfRef.axi_i_rresp_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__axi_i_arready_i, vlSelfRef.axi_i_arready_i);
    VL_ASSIGN_ISU(4, vlSelfRef.__Vcellinp__v__axi_i_bid_i, vlSelfRef.axi_i_bid_i);
    VL_ASSIGN_ISU(2, vlSelfRef.__Vcellinp__v__axi_i_bresp_i, vlSelfRef.axi_i_bresp_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__axi_i_bvalid_i, vlSelfRef.axi_i_bvalid_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__axi_i_wready_i, vlSelfRef.axi_i_wready_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__axi_i_awready_i, vlSelfRef.axi_i_awready_i);
    VL_ASSIGN_ISU(32, vlSelfRef.__Vcellinp__v__axi_i_rdata_i, vlSelfRef.axi_i_rdata_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__axi_d_rlast_i, vlSelfRef.axi_d_rlast_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__intr_i, vlSelfRef.intr_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__axi_d_arready_i, vlSelfRef.axi_d_arready_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__axi_d_wready_i, vlSelfRef.axi_d_wready_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__axi_d_awready_i, vlSelfRef.axi_d_awready_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__axi_i_rlast_i, vlSelfRef.axi_i_rlast_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__axi_i_rvalid_i, vlSelfRef.axi_i_rvalid_i);
    VL_ASSIGN_ISU(32, vlSelfRef.__Vcellinp__v__reset_vector_i, vlSelfRef.reset_vector_i);
    VL_ASSIGN_ISU(32, vlSelfRef.__Vcellinp__v__axi_d_rdata_i, vlSelfRef.axi_d_rdata_i);
    VL_ASSIGN_ISU(2, vlSelfRef.__Vcellinp__v__axi_d_rresp_i, vlSelfRef.axi_d_rresp_i);
    VL_ASSIGN_ISU(2, vlSelfRef.__Vcellinp__v__axi_d_bresp_i, vlSelfRef.axi_d_bresp_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__axi_d_rvalid_i, vlSelfRef.axi_d_rvalid_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__axi_d_bvalid_i, vlSelfRef.axi_d_bvalid_i);
}

void Vriscv_top___024root___eval_triggers__ico(Vriscv_top___024root* vlSelf);
void Vriscv_top___024root___eval_ico(Vriscv_top___024root* vlSelf);

bool Vriscv_top___024root___eval_phase__ico(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_phase__ico\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vriscv_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vriscv_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vriscv_top___024root___eval_triggers__act(Vriscv_top___024root* vlSelf);
void Vriscv_top___024root___eval_act(Vriscv_top___024root* vlSelf);

bool Vriscv_top___024root___eval_phase__act(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_phase__act\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<12> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vriscv_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vriscv_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vriscv_top___024root___eval_nba(Vriscv_top___024root* vlSelf);

bool Vriscv_top___024root___eval_phase__nba(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_phase__nba\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vriscv_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_top___024root___dump_triggers__ico(Vriscv_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_top___024root___dump_triggers__nba(Vriscv_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_top___024root___dump_triggers__act(Vriscv_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vriscv_top___024root___eval(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vriscv_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../../src/top/../../src/top/riscv_top.v", 26, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vriscv_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vriscv_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../../src/top/../../src/top/riscv_top.v", 26, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vriscv_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../../src/top/../../src/top/riscv_top.v", 26, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vriscv_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vriscv_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vriscv_top___024root___eval_debug_assertions(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_debug_assertions\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
