// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top___024root.h"

VL_ATTR_COLD void Vriscv_top___024root___eval_initial__TOP(Vriscv_top___024root* vlSelf);

VL_ATTR_COLD void Vriscv_top___024root___eval_initial(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_initial\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_top___024root___eval_initial__TOP(vlSelf);
}

VL_ATTR_COLD void Vriscv_top___024root___eval_initial__TOP(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_initial__TOP\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_ASSIGN_SII(1, vlSelfRef.axi_d_rready_o, 1U);
    VL_ASSIGN_SUI(2, vlSelfRef.axi_d_arburst_o, 1U);
    VL_ASSIGN_SUI(4, vlSelfRef.axi_d_arid_o, 0U);
    VL_ASSIGN_SII(1, vlSelfRef.axi_d_bready_o, 1U);
    VL_ASSIGN_SUI(2, vlSelfRef.axi_d_awburst_o, 1U);
    VL_ASSIGN_SUI(4, vlSelfRef.axi_d_awid_o, 0U);
    VL_ASSIGN_SII(1, vlSelfRef.axi_i_rready_o, 1U);
    VL_ASSIGN_SUI(2, vlSelfRef.axi_i_arburst_o, 1U);
    VL_ASSIGN_SUI(8, vlSelfRef.axi_i_arlen_o, 7U);
    VL_ASSIGN_SUI(4, vlSelfRef.axi_i_arid_o, 0U);
    VL_ASSIGN_SII(1, vlSelfRef.axi_i_bready_o, 0U);
    VL_ASSIGN_SII(1, vlSelfRef.axi_i_wlast_o, 0U);
    VL_ASSIGN_SUI(4, vlSelfRef.axi_i_wstrb_o, 0U);
    VL_ASSIGN_SUI(32, vlSelfRef.axi_i_wdata_o, 0U);
    VL_ASSIGN_SII(1, vlSelfRef.axi_i_wvalid_o, 0U);
    VL_ASSIGN_SUI(2, vlSelfRef.axi_i_awburst_o, 0U);
    VL_ASSIGN_SUI(8, vlSelfRef.axi_i_awlen_o, 0U);
    VL_ASSIGN_SUI(4, vlSelfRef.axi_i_awid_o, 0U);
    VL_ASSIGN_SUI(32, vlSelfRef.axi_i_awaddr_o, 0U);
    VL_ASSIGN_SII(1, vlSelfRef.axi_i_awvalid_o, 0U);
}

VL_ATTR_COLD void Vriscv_top___024root___eval_final(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_final\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_top___024root___dump_triggers__stl(Vriscv_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vriscv_top___024root___eval_phase__stl(Vriscv_top___024root* vlSelf);

VL_ATTR_COLD void Vriscv_top___024root___eval_settle(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_settle\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vriscv_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../../src/top/../../src/top/riscv_top.v", 26, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vriscv_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_top___024root___dump_triggers__stl(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___dump_triggers__stl\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] v.u_core.u_exec0.u_alu.unused)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] v.u_core.u_exec1.u_alu.unused)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_top___024root___eval_triggers__stl(Vriscv_top___024root* vlSelf);
VL_ATTR_COLD void Vriscv_top___024root___eval_stl(Vriscv_top___024root* vlSelf);

VL_ATTR_COLD bool Vriscv_top___024root___eval_phase__stl(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___eval_phase__stl\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vriscv_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vriscv_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_top___024root___dump_triggers__ico(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___dump_triggers__ico\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_top___024root___dump_triggers__act(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___dump_triggers__act\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @( v.u_core.u_exec0.alu_func_r)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @( v.u_core.u_exec0.alu_input_a_r)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( v.u_core.u_exec0.alu_input_b_r)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( v.u_core.u_exec0.u_alu.sub_res_w)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( v.u_core.u_exec1.alu_func_r)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @( v.u_core.u_exec1.alu_input_a_r)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @( v.u_core.u_exec1.alu_input_b_r)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @( v.u_core.u_exec1.u_alu.sub_res_w)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge __Vcellinp__v__clk_i)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([hybrid] v.u_core.u_exec0.u_alu.unused)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([hybrid] v.u_core.u_exec1.u_alu.unused)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @(posedge __Vcellinp__v__rst_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vriscv_top___024root___dump_triggers__nba(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___dump_triggers__nba\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @( v.u_core.u_exec0.alu_func_r)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @( v.u_core.u_exec0.alu_input_a_r)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( v.u_core.u_exec0.alu_input_b_r)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( v.u_core.u_exec0.u_alu.sub_res_w)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( v.u_core.u_exec1.alu_func_r)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @( v.u_core.u_exec1.alu_input_a_r)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @( v.u_core.u_exec1.alu_input_b_r)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @( v.u_core.u_exec1.u_alu.sub_res_w)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge __Vcellinp__v__clk_i)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([hybrid] v.u_core.u_exec0.u_alu.unused)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([hybrid] v.u_core.u_exec1.u_alu.unused)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @(posedge __Vcellinp__v__rst_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vriscv_top___024root____Vm_traceActivitySetAll(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root____Vm_traceActivitySetAll\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
}

VL_ATTR_COLD void Vriscv_top___024root___ctor_var_reset(Vriscv_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root___ctor_var_reset\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__Vcellout__v__axi_d_arvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1572493796093641105ull);
    vlSelf->__Vcellout__v__axi_d_wlast_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15731320996655345297ull);
    vlSelf->__Vcellout__v__axi_d_wstrb_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9231935255720344798ull);
    vlSelf->__Vcellout__v__axi_d_wdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4797710462422472896ull);
    vlSelf->__Vcellout__v__axi_d_wvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7429859690013888003ull);
    vlSelf->__Vcellout__v__axi_d_awlen_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18222196930761446166ull);
    vlSelf->__Vcellout__v__axi_d_awaddr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7016460993541288535ull);
    vlSelf->__Vcellout__v__axi_d_awvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10955455861530429828ull);
    vlSelf->__Vcellout__v__axi_i_arvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1023360779527504559ull);
    vlSelf->__Vcellinp__v__reset_vector_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14117889409551563621ull);
    vlSelf->__Vcellinp__v__intr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18401068273822081234ull);
    vlSelf->__Vcellinp__v__axi_d_rlast_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14031158237804299301ull);
    vlSelf->__Vcellinp__v__axi_d_rid_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10030995880301339773ull);
    vlSelf->__Vcellinp__v__axi_d_rresp_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13851065520233995625ull);
    vlSelf->__Vcellinp__v__axi_d_rdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10152927043385348970ull);
    vlSelf->__Vcellinp__v__axi_d_rvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11241537390563057096ull);
    vlSelf->__Vcellinp__v__axi_d_arready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12347553151301067485ull);
    vlSelf->__Vcellinp__v__axi_d_bid_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16162241396273251503ull);
    vlSelf->__Vcellinp__v__axi_d_bresp_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10926716761728265576ull);
    vlSelf->__Vcellinp__v__axi_d_bvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3476097631347501606ull);
    vlSelf->__Vcellinp__v__axi_d_wready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11159912865726818573ull);
    vlSelf->__Vcellinp__v__axi_d_awready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2249206987295067672ull);
    vlSelf->__Vcellinp__v__axi_i_rlast_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16820039250162577622ull);
    vlSelf->__Vcellinp__v__axi_i_rid_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17834895362346490552ull);
    vlSelf->__Vcellinp__v__axi_i_rresp_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1759781187288025950ull);
    vlSelf->__Vcellinp__v__axi_i_rdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16501989376960376708ull);
    vlSelf->__Vcellinp__v__axi_i_rvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8353741675313575109ull);
    vlSelf->__Vcellinp__v__axi_i_arready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4730807969222006378ull);
    vlSelf->__Vcellinp__v__axi_i_bid_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8579634217921572083ull);
    vlSelf->__Vcellinp__v__axi_i_bresp_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7311055113796884756ull);
    vlSelf->__Vcellinp__v__axi_i_bvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14250087713161204929ull);
    vlSelf->__Vcellinp__v__axi_i_wready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7090031497818028ull);
    vlSelf->__Vcellinp__v__axi_i_awready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 271802580323901633ull);
    vlSelf->__Vcellinp__v__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1865308426578385758ull);
    vlSelf->__Vcellinp__v__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11290008058407424912ull);
    vlSelf->__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec0__DOT__u_alu__DOT__unused__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1792162026566809451ull);
    vlSelf->__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec1__DOT__u_alu__DOT__unused__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9467477955748278843ull);
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec0__DOT__alu_func_r__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14943542085106695180ull);
    vlSelf->__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec0__DOT__alu_input_a_r__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7902324634690517637ull);
    vlSelf->__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec0__DOT__alu_input_b_r__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15566887552296923564ull);
    vlSelf->__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec0__DOT__u_alu__DOT__sub_res_w__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7896929102129846058ull);
    vlSelf->__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec1__DOT__alu_func_r__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12540801789517246141ull);
    vlSelf->__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec1__DOT__alu_input_a_r__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11412989160595206324ull);
    vlSelf->__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec1__DOT__alu_input_b_r__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18067209351476050752ull);
    vlSelf->__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec1__DOT__u_alu__DOT__sub_res_w__0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3922167302578015266ull);
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__v__clk_i__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16564201122632283453ull);
    vlSelf->__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec0__DOT__u_alu__DOT__unused__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11420174006774070722ull);
    vlSelf->__Vtrigprevexpr___TOP__v__u_core____PVT__u_exec1__DOT__u_alu__DOT__unused__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17628828481571814167ull);
    vlSelf->__Vtrigprevexpr___TOP____Vcellinp__v__rst_i__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4441710943184943766ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
