// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top_biriscv_regfile.h"

VL_ATTR_COLD void Vriscv_top_biriscv_regfile___ctor_var_reset(Vriscv_top_biriscv_regfile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_biriscv_regfile___ctor_var_reset\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->__PVT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726502174457611970ull);
    vlSelf->__PVT__rd0_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2095879876080289334ull);
    vlSelf->__PVT__rd1_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10304170628855693815ull);
    vlSelf->__PVT__rd0_value_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8571077863275677288ull);
    vlSelf->__PVT__rd1_value_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9211611357688752433ull);
    vlSelf->__PVT__ra0_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4540001038445036310ull);
    vlSelf->__PVT__rb0_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6054275470902185349ull);
    vlSelf->__PVT__ra1_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15302668900914974635ull);
    vlSelf->__PVT__rb1_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6270353190634435867ull);
    vlSelf->__PVT__ra0_value_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14148892637744245873ull);
    vlSelf->__PVT__rb0_value_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2381165967323713473ull);
    vlSelf->__PVT__ra1_value_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11796063500417698114ull);
    vlSelf->__PVT__rb1_value_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 933428999198297331ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15305338426272337567ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r2_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13751693625135541676ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r3_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11292980312371045670ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r4_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15705204989340961393ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r5_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12363740984218412601ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r6_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15617881799111693433ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r7_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13657879642606696119ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r8_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13527463908554487819ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r9_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7251015381907641131ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r10_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12196486825285302786ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r11_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16172330505343393601ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r12_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 841625359037016968ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r13_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3952764844216124521ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r14_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3296503604185280591ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r15_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16596372223604512372ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r16_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 786657995690868258ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r17_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6700740309372200946ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r18_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18076013659197378200ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r19_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7279062887127954550ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r20_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15804354657140613327ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r21_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 956106897291071841ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r22_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4624601389244341722ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r23_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5925701866581098038ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r24_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11349941084782026343ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r25_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 95039881154013609ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r26_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12949747734652224452ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r27_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7067564396501063389ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r28_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3254684753686590494ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r29_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17146780260662602096ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r30_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1818886381608324639ull);
    vlSelf->__PVT__REGFILE__DOT__reg_r31_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11614152606940780390ull);
}
