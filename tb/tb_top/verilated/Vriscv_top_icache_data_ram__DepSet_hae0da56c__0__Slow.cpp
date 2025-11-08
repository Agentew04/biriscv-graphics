// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top_icache_data_ram.h"

VL_ATTR_COLD void Vriscv_top_icache_data_ram___ctor_var_reset(Vriscv_top_icache_data_ram* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_icache_data_ram___ctor_var_reset\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->__PVT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726502174457611970ull);
    vlSelf->__PVT__addr_i = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5910257723895866083ull);
    vlSelf->__PVT__data_i = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 9877081704222771714ull);
    vlSelf->__PVT__wr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17674650526832231937ull);
    vlSelf->__PVT__data_o = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 14180446042470581157ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->ram[__Vi0] = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 12779093550319448395ull);
    }
    vlSelf->__PVT__ram_read_q = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 10861961834956562692ull);
}
