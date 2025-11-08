// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top___024root.h"

VL_ATTR_COLD void Vriscv_top___024root___eval_static(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_static\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec0__DOT__u_alu__DOT__unused__0 
        = vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__unused;
    vlSelfRef.__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec1__DOT__u_alu__DOT__unused__0 
        = vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__unused;
    vlSelfRef.__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec0__DOT__alu_func_r__0 
        = vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_func_r;
    vlSelfRef.__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec0__DOT__alu_input_a_r__0 
        = vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_a_r;
    vlSelfRef.__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec0__DOT__alu_input_b_r__0 
        = vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_b_r;
    vlSelfRef.__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec0__DOT__u_alu__DOT__sub_res_w__0 
        = vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__sub_res_w;
    vlSelfRef.__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec1__DOT__alu_func_r__0 
        = vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_func_r;
    vlSelfRef.__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec1__DOT__alu_input_a_r__0 
        = vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_a_r;
    vlSelfRef.__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec1__DOT__alu_input_b_r__0 
        = vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_b_r;
    vlSelfRef.__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec1__DOT__u_alu__DOT__sub_res_w__0 
        = vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__sub_res_w;
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__v__clk_i__0 
        = vlSelfRef.__Vcellinp__v__clk_i;
    vlSelfRef.__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec0__DOT__u_alu__DOT__unused__1 
        = vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__unused;
    vlSelfRef.__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec1__DOT__u_alu__DOT__unused__1 
        = vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__unused;
    vlSelfRef.__Vtrigprevexpr___TOP____Vcellinp__v__rst_i__0 
        = vlSelfRef.__Vcellinp__v__rst_i;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_top___024root___dump_triggers__stl(Vriscv_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_top___024root___eval_triggers__stl(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_triggers__stl\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.setBit(1U, ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__unused) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec0__DOT__u_alu__DOT__unused__0)));
    vlSelfRef.__VstlTriggered.setBit(2U, ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__unused) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec1__DOT__u_alu__DOT__unused__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec0__DOT__u_alu__DOT__unused__0 
        = vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__unused;
    vlSelfRef.__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec1__DOT__u_alu__DOT__unused__0 
        = vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__unused;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.setBit(1U, 1U);
        vlSelfRef.__VstlTriggered.setBit(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vriscv_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vriscv_top___024root___stl_sequent__TOP__0(Vriscv_top___024root* vlSelf);
VL_ATTR_COLD void Vriscv_top___024root____Vm_traceActivitySetAll(Vriscv_top___024root* vlSelf);
VL_ATTR_COLD void Vriscv_top_dcache___stl_sequent__TOP__v__u_dcache__0(Vriscv_top_dcache* vlSelf);
VL_ATTR_COLD void Vriscv_top_riscv_core__S1___stl_sequent__TOP__v__u_core__0(Vriscv_top_riscv_core__S1* vlSelf);
VL_ATTR_COLD void Vriscv_top_biriscv_csr_regfile___stl_sequent__TOP__v__u_core__u_csr__u_csrfile__0(Vriscv_top_biriscv_csr_regfile* vlSelf);
VL_ATTR_COLD void Vriscv_top_icache___stl_sequent__TOP__v__u_icache__0(Vriscv_top_icache* vlSelf);
VL_ATTR_COLD void Vriscv_top_dcache_core___stl_sequent__TOP__v__u_dcache__u_core__0(Vriscv_top_dcache_core* vlSelf);
void Vriscv_top_biriscv_trace_sim___nba_sequent__TOP__v__u_core__u_issue__u_pipe0_dec1_verif__0(Vriscv_top_biriscv_trace_sim* vlSelf);
void Vriscv_top_biriscv_trace_sim___nba_sequent__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb__0(Vriscv_top_biriscv_trace_sim* vlSelf);
VL_ATTR_COLD void Vriscv_top_biriscv_csr__SB0___stl_sequent__TOP__v__u_core__u_csr__0(Vriscv_top_biriscv_csr__SB0* vlSelf);
VL_ATTR_COLD void Vriscv_top_biriscv_issue___stl_sequent__TOP__v__u_core__u_issue__0(Vriscv_top_biriscv_issue* vlSelf);
void Vriscv_top_icache_data_ram___ico_sequent__TOP__v__u_icache__u_data0__0(Vriscv_top_icache_data_ram* vlSelf);
VL_ATTR_COLD void Vriscv_top_riscv_top___stl_sequent__TOP__v__0(Vriscv_top_riscv_top* vlSelf);
VL_ATTR_COLD void Vriscv_top___024root___stl_sequent__TOP__1(Vriscv_top___024root* vlSelf);
VL_ATTR_COLD void Vriscv_top_riscv_core__S1___stl_sequent__TOP__v__u_core__1(Vriscv_top_riscv_core__S1* vlSelf);
VL_ATTR_COLD void Vriscv_top_dcache___stl_sequent__TOP__v__u_dcache__1(Vriscv_top_dcache* vlSelf);
VL_ATTR_COLD void Vriscv_top_biriscv_csr_regfile___stl_sequent__TOP__v__u_core__u_csr__u_csrfile__1(Vriscv_top_biriscv_csr_regfile* vlSelf);
VL_ATTR_COLD void Vriscv_top_riscv_top___stl_sequent__TOP__v__1(Vriscv_top_riscv_top* vlSelf);
void Vriscv_top_biriscv_issue___ico_sequent__TOP__v__u_core__u_issue__0(Vriscv_top_biriscv_issue* vlSelf);
void Vriscv_top_dcache___ico_sequent__TOP__v__u_dcache__1(Vriscv_top_dcache* vlSelf);
void Vriscv_top_riscv_core__S1___ico_sequent__TOP__v__u_core__2(Vriscv_top_riscv_core__S1* vlSelf);
void Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d__0(Vriscv_top_biriscv_trace_sim* vlSelf);
void Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d__0(Vriscv_top_biriscv_trace_sim* vlSelf);
void Vriscv_top_biriscv_csr__SB0___ico_sequent__TOP__v__u_core__u_csr__0(Vriscv_top_biriscv_csr__SB0* vlSelf);
void Vriscv_top_dcache_core___ico_sequent__TOP__v__u_dcache__u_core__1(Vriscv_top_dcache_core* vlSelf);
void Vriscv_top_riscv_top___ico_sequent__TOP__v__2(Vriscv_top_riscv_top* vlSelf);
void Vriscv_top_biriscv_issue___ico_sequent__TOP__v__u_core__u_issue__1(Vriscv_top_biriscv_issue* vlSelf);
void Vriscv_top_icache___ico_sequent__TOP__v__u_icache__1(Vriscv_top_icache* vlSelf);
void Vriscv_top_dcache___ico_sequent__TOP__v__u_dcache__2(Vriscv_top_dcache* vlSelf);
VL_ATTR_COLD void Vriscv_top_riscv_core__S1___stl_sequent__TOP__v__u_core__3(Vriscv_top_riscv_core__S1* vlSelf);
void Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe0_dec0_verif__0(Vriscv_top_biriscv_trace_sim* vlSelf);
void Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb__0(Vriscv_top_biriscv_trace_sim* vlSelf);
void Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe0_dec1_verif__0(Vriscv_top_biriscv_trace_sim* vlSelf);
void Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb__0(Vriscv_top_biriscv_trace_sim* vlSelf);
void Vriscv_top_biriscv_issue___ico_sequent__TOP__v__u_core__u_issue__2(Vriscv_top_biriscv_issue* vlSelf);
void Vriscv_top_riscv_core__S1___ico_sequent__TOP__v__u_core__4(Vriscv_top_riscv_core__S1* vlSelf);
void Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d__1(Vriscv_top_biriscv_trace_sim* vlSelf);
void Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d__1(Vriscv_top_biriscv_trace_sim* vlSelf);
void Vriscv_top_biriscv_csr__SB0___ico_sequent__TOP__v__u_core__u_csr__1(Vriscv_top_biriscv_csr__SB0* vlSelf);
void Vriscv_top_riscv_core__S1___act_sequent__TOP__v__u_core__2(Vriscv_top_riscv_core__S1* vlSelf);
void Vriscv_top_riscv_core__S1___act_sequent__TOP__v__u_core__3(Vriscv_top_riscv_core__S1* vlSelf);
void Vriscv_top_riscv_core__S1___act_comb__TOP__v__u_core__3(Vriscv_top_riscv_core__S1* vlSelf);
void Vriscv_top_riscv_core__S1___act_comb__TOP__v__u_core__1(Vriscv_top_riscv_core__S1* vlSelf);

VL_ATTR_COLD void Vriscv_top___024root___eval_stl(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_stl\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vriscv_top___024root___stl_sequent__TOP__0(vlSelf);
        Vriscv_top___024root____Vm_traceActivitySetAll(vlSelf);
        Vriscv_top_dcache___stl_sequent__TOP__v__u_dcache__0((&vlSymsp->TOP__v__u_dcache));
        Vriscv_top_riscv_core__S1___stl_sequent__TOP__v__u_core__0((&vlSymsp->TOP__v__u_core));
        Vriscv_top_biriscv_csr_regfile___stl_sequent__TOP__v__u_core__u_csr__u_csrfile__0((&vlSymsp->TOP__v__u_core__u_csr__u_csrfile));
        Vriscv_top_icache___stl_sequent__TOP__v__u_icache__0((&vlSymsp->TOP__v__u_icache));
        Vriscv_top_dcache_core___stl_sequent__TOP__v__u_dcache__u_core__0((&vlSymsp->TOP__v__u_dcache__u_core));
        Vriscv_top_biriscv_trace_sim___nba_sequent__TOP__v__u_core__u_issue__u_pipe0_dec1_verif__0((&vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif));
        Vriscv_top_biriscv_trace_sim___nba_sequent__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb__0((&vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb));
        Vriscv_top_biriscv_csr__SB0___stl_sequent__TOP__v__u_core__u_csr__0((&vlSymsp->TOP__v__u_core__u_csr));
        Vriscv_top_biriscv_issue___stl_sequent__TOP__v__u_core__u_issue__0((&vlSymsp->TOP__v__u_core__u_issue));
        Vriscv_top_icache_data_ram___ico_sequent__TOP__v__u_icache__u_data0__0((&vlSymsp->TOP__v__u_icache__u_data0));
        Vriscv_top_riscv_top___stl_sequent__TOP__v__0((&vlSymsp->TOP__v));
        Vriscv_top___024root___stl_sequent__TOP__1(vlSelf);
        Vriscv_top_riscv_core__S1___stl_sequent__TOP__v__u_core__1((&vlSymsp->TOP__v__u_core));
        Vriscv_top_dcache___stl_sequent__TOP__v__u_dcache__1((&vlSymsp->TOP__v__u_dcache));
        Vriscv_top_biriscv_csr_regfile___stl_sequent__TOP__v__u_core__u_csr__u_csrfile__1((&vlSymsp->TOP__v__u_core__u_csr__u_csrfile));
        Vriscv_top_riscv_top___stl_sequent__TOP__v__1((&vlSymsp->TOP__v));
        Vriscv_top_biriscv_issue___ico_sequent__TOP__v__u_core__u_issue__0((&vlSymsp->TOP__v__u_core__u_issue));
        Vriscv_top_dcache___ico_sequent__TOP__v__u_dcache__1((&vlSymsp->TOP__v__u_dcache));
        Vriscv_top_riscv_core__S1___ico_sequent__TOP__v__u_core__2((&vlSymsp->TOP__v__u_core));
        Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d__0((&vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d));
        Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d__0((&vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d));
        Vriscv_top_biriscv_csr__SB0___ico_sequent__TOP__v__u_core__u_csr__0((&vlSymsp->TOP__v__u_core__u_csr));
        Vriscv_top_dcache_core___ico_sequent__TOP__v__u_dcache__u_core__1((&vlSymsp->TOP__v__u_dcache__u_core));
        Vriscv_top_riscv_top___ico_sequent__TOP__v__2((&vlSymsp->TOP__v));
        Vriscv_top_biriscv_issue___ico_sequent__TOP__v__u_core__u_issue__1((&vlSymsp->TOP__v__u_core__u_issue));
        Vriscv_top_icache___ico_sequent__TOP__v__u_icache__1((&vlSymsp->TOP__v__u_icache));
        Vriscv_top_dcache___ico_sequent__TOP__v__u_dcache__2((&vlSymsp->TOP__v__u_dcache));
        Vriscv_top_riscv_core__S1___stl_sequent__TOP__v__u_core__3((&vlSymsp->TOP__v__u_core));
        Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe0_dec0_verif__0((&vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec0_verif));
        Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb__0((&vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb));
        Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe0_dec1_verif__0((&vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif));
        Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb__0((&vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb));
        Vriscv_top_biriscv_issue___ico_sequent__TOP__v__u_core__u_issue__2((&vlSymsp->TOP__v__u_core__u_issue));
        Vriscv_top_riscv_core__S1___ico_sequent__TOP__v__u_core__4((&vlSymsp->TOP__v__u_core));
        Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d__1((&vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d));
        Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d__1((&vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d));
        Vriscv_top_biriscv_csr__SB0___ico_sequent__TOP__v__u_core__u_csr__1((&vlSymsp->TOP__v__u_core__u_csr));
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vriscv_top_riscv_core__S1___act_sequent__TOP__v__u_core__2((&vlSymsp->TOP__v__u_core));
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vriscv_top_riscv_core__S1___act_sequent__TOP__v__u_core__3((&vlSymsp->TOP__v__u_core));
    }
    if ((3ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vriscv_top_riscv_core__S1___act_comb__TOP__v__u_core__3((&vlSymsp->TOP__v__u_core));
    }
    if ((5ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vriscv_top_riscv_core__S1___act_comb__TOP__v__u_core__1((&vlSymsp->TOP__v__u_core));
    }
}

VL_ATTR_COLD void Vriscv_top___024root___stl_sequent__TOP__0(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___stl_sequent__TOP__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_SUI(32, vlSelfRef.axi_i_araddr_o, (0xffffffe0U 
                                                 & vlSymsp->TOP__v__u_icache.__PVT__lookup_addr_q));
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
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__rst_i, vlSelfRef.rst_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__clk_i, vlSelfRef.clk_i);
    VL_ASSIGN_ISU(32, vlSelfRef.__Vcellinp__v__axi_i_rdata_i, vlSelfRef.axi_i_rdata_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__axi_d_rlast_i, vlSelfRef.axi_d_rlast_i);
    if (vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__buf_valid_q) {
        vlSelfRef.__Vcellout__v__axi_d_wstrb_o = (0xfU 
                                                  & (IData)(
                                                            (vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__buf_q 
                                                             >> 0x20U)));
        vlSelfRef.__Vcellout__v__axi_d_wdata_o = (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__buf_q);
    } else {
        vlSelfRef.__Vcellout__v__axi_d_wstrb_o = (0xfU 
                                                  & vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q
                                                  [vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][2U]);
        vlSelfRef.__Vcellout__v__axi_d_wdata_o = vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q
            [vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][1U];
    }
    vlSelfRef.__Vcellout__v__axi_d_awaddr_o = (0xfffffffcU 
                                               & vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q
                                               [vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][0U]);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__intr_i, vlSelfRef.intr_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__axi_d_arready_i, vlSelfRef.axi_d_arready_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__axi_d_wready_i, vlSelfRef.axi_d_wready_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__axi_d_awready_i, vlSelfRef.axi_d_awready_i);
    vlSelfRef.__Vcellout__v__axi_d_awlen_o = (0xffU 
                                              & (vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q
                                                 [vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][2U] 
                                                 >> 5U));
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__axi_i_rlast_i, vlSelfRef.axi_i_rlast_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__axi_i_rvalid_i, vlSelfRef.axi_i_rvalid_i);
    VL_ASSIGN_ISU(32, vlSelfRef.__Vcellinp__v__reset_vector_i, vlSelfRef.reset_vector_i);
    VL_ASSIGN_ISU(32, vlSelfRef.__Vcellinp__v__axi_d_rdata_i, vlSelfRef.axi_d_rdata_i);
    VL_ASSIGN_ISU(2, vlSelfRef.__Vcellinp__v__axi_d_rresp_i, vlSelfRef.axi_d_rresp_i);
    VL_ASSIGN_ISU(2, vlSelfRef.__Vcellinp__v__axi_d_bresp_i, vlSelfRef.axi_d_bresp_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__axi_d_rvalid_i, vlSelfRef.axi_d_rvalid_i);
    VL_ASSIGN_ISI(1, vlSelfRef.__Vcellinp__v__axi_d_bvalid_i, vlSelfRef.axi_d_bvalid_i);
    VL_ASSIGN_SUI(4, vlSelfRef.axi_d_wstrb_o, vlSelfRef.__Vcellout__v__axi_d_wstrb_o);
    VL_ASSIGN_SUI(32, vlSelfRef.axi_d_wdata_o, vlSelfRef.__Vcellout__v__axi_d_wdata_o);
    VL_ASSIGN_SUI(32, vlSelfRef.axi_d_araddr_o, vlSelfRef.__Vcellout__v__axi_d_awaddr_o);
    VL_ASSIGN_SUI(32, vlSelfRef.axi_d_awaddr_o, vlSelfRef.__Vcellout__v__axi_d_awaddr_o);
    VL_ASSIGN_SUI(8, vlSelfRef.axi_d_arlen_o, vlSelfRef.__Vcellout__v__axi_d_awlen_o);
    VL_ASSIGN_SUI(8, vlSelfRef.axi_d_awlen_o, vlSelfRef.__Vcellout__v__axi_d_awlen_o);
}

VL_ATTR_COLD void Vriscv_top___024root___stl_sequent__TOP__1(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___stl_sequent__TOP__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vcellout__v__axi_d_arvalid_o = ((~ (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__req_is_write_w)) 
                                                & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__req_can_issue_w));
    vlSelfRef.__Vcellout__v__axi_d_wvalid_o = ((IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__buf_valid_q) 
                                               | ((~ (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__wvalid_inhibit_q)) 
                                                  & (IData)(vlSymsp->TOP__v__u_dcache.u_axi__DOT__u_axi__DOT____VdfgRegularize_h88420251_0_0)));
    vlSelfRef.__Vcellout__v__axi_d_awvalid_o = ((~ (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__awvalid_inhibit_q)) 
                                                & (IData)(vlSymsp->TOP__v__u_dcache.u_axi__DOT__u_axi__DOT____VdfgRegularize_h88420251_0_0));
    vlSelfRef.__Vcellout__v__axi_i_arvalid_o = (((1U 
                                                  == (IData)(vlSymsp->TOP__v__u_icache.__PVT__state_q)) 
                                                 & (2U 
                                                    == (IData)(vlSymsp->TOP__v__u_icache.__PVT__next_state_r))) 
                                                | (IData)(vlSymsp->TOP__v__u_icache.__PVT__axi_arvalid_q));
    VL_ASSIGN_SII(1, vlSelfRef.axi_d_arvalid_o, vlSelfRef.__Vcellout__v__axi_d_arvalid_o);
    VL_ASSIGN_SII(1, vlSelfRef.axi_d_wvalid_o, vlSelfRef.__Vcellout__v__axi_d_wvalid_o);
    VL_ASSIGN_SII(1, vlSelfRef.axi_d_awvalid_o, vlSelfRef.__Vcellout__v__axi_d_awvalid_o);
    vlSelfRef.__Vcellout__v__axi_d_wlast_o = (1U & 
                                              ((IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__buf_valid_q)
                                                ? (IData)(
                                                          (vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__buf_q 
                                                           >> 0x24U))
                                                : (
                                                   ((IData)(vlSelfRef.__Vcellout__v__axi_d_awvalid_o) 
                                                    & (0U 
                                                       == (IData)(vlSelfRef.__Vcellout__v__axi_d_awlen_o))) 
                                                   | (1U 
                                                      == (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q)))));
    VL_ASSIGN_SII(1, vlSelfRef.axi_i_arvalid_o, vlSelfRef.__Vcellout__v__axi_i_arvalid_o);
    VL_ASSIGN_SII(1, vlSelfRef.axi_d_wlast_o, vlSelfRef.__Vcellout__v__axi_d_wlast_o);
}
