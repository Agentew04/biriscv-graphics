// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top_dcache_core_data_ram.h"

VL_ATTR_COLD void Vriscv_top_dcache_core_data_ram___ctor_var_reset(Vriscv_top_dcache_core_data_ram* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_dcache_core_data_ram___ctor_var_reset\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk0_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17644424279843308210ull);
    vlSelf->__PVT__rst0_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1127225172293664518ull);
    vlSelf->__PVT__addr0_i = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1222684595415111315ull);
    vlSelf->__PVT__data0_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15125005074863952480ull);
    vlSelf->__PVT__wr0_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9511294345768462633ull);
    vlSelf->__PVT__clk1_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11336264106723722119ull);
    vlSelf->__PVT__rst1_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12182334298908186391ull);
    vlSelf->__PVT__addr1_i = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5436673784384284525ull);
    vlSelf->__PVT__data1_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2757824405415766962ull);
    vlSelf->__PVT__wr1_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9576472014007943117ull);
    vlSelf->__PVT__data0_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15452099297953504952ull);
    vlSelf->__PVT__data1_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7946437652340287339ull);
    for (int __Vi0 = 0; __Vi0 < 2048; ++__Vi0) {
        vlSelf->ram[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12779093550319448395ull);
    }
    vlSelf->__PVT__ram_read0_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3530240296428032956ull);
    vlSelf->__PVT__ram_read1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6094868176375116815ull);
}
