// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top_biriscv_trace_sim.h"

VL_ATTR_COLD void Vriscv_top_biriscv_trace_sim___ctor_var_reset(Vriscv_top_biriscv_trace_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_top_biriscv_trace_sim___ctor_var_reset\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 550966959580451262ull);
    vlSelf->__PVT__pc_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13700948051903872402ull);
    vlSelf->__PVT__opcode_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3142920733240924526ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->__PVT__dbg_inst_str, __VscopeHash, 6754592902702167589ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->__PVT__dbg_inst_ra, __VscopeHash, 10154173767197942791ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->__PVT__dbg_inst_rb, __VscopeHash, 12272790781561529690ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->__PVT__dbg_inst_rd, __VscopeHash, 13000349272858513963ull);
    vlSelf->__PVT__dbg_inst_imm = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1299786899921334960ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->__VdfgExtracted_h4ff6f0a0__0, __VscopeHash, 1615421924647014828ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->__VdfgExtracted_hf1ea1c82__0, __VscopeHash, 16549843838559829686ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->__VdfgExtracted_h26d6b5e8__0, __VscopeHash, 13569932246851896906ull);
}
