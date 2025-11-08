// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top_biriscv_csr__SB0.h"

VL_ATTR_COLD void Vriscv_top_biriscv_csr__SB0___ctor_var_reset(Vriscv_top_biriscv_csr__SB0* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_biriscv_csr__SB0___ctor_var_reset\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->__PVT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726502174457611970ull);
    vlSelf->__PVT__intr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9031270550293618600ull);
    vlSelf->__PVT__opcode_valid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16982480924762222379ull);
    vlSelf->__PVT__opcode_opcode_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7767630247744091974ull);
    vlSelf->__PVT__opcode_pc_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6435640624736824449ull);
    vlSelf->__PVT__opcode_invalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2151518050736513133ull);
    vlSelf->__PVT__opcode_rd_idx_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2462951064103124320ull);
    vlSelf->__PVT__opcode_ra_idx_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8459162984025992126ull);
    vlSelf->__PVT__opcode_rb_idx_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12164162518468872581ull);
    vlSelf->__PVT__opcode_ra_operand_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3041175409154459088ull);
    vlSelf->__PVT__opcode_rb_operand_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18402755230010304820ull);
    vlSelf->__PVT__csr_writeback_write_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17162300489578175902ull);
    vlSelf->__PVT__csr_writeback_waddr_i = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 15765473004644734917ull);
    vlSelf->__PVT__csr_writeback_wdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3456659777733842466ull);
    vlSelf->__PVT__csr_writeback_exception_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11374246094964515153ull);
    vlSelf->__PVT__csr_writeback_exception_pc_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11659657652916611632ull);
    vlSelf->__PVT__csr_writeback_exception_addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17340426692927007134ull);
    vlSelf->__PVT__cpu_id_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17716042512655663375ull);
    vlSelf->__PVT__reset_vector_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8393161498616798439ull);
    vlSelf->__PVT__interrupt_inhibit_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13484077289636473968ull);
    vlSelf->__PVT__csr_result_e1_value_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14091015343860855883ull);
    vlSelf->__PVT__csr_result_e1_write_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11678071670443426304ull);
    vlSelf->__PVT__csr_result_e1_wdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17316418264662495068ull);
    vlSelf->__PVT__csr_result_e1_exception_o = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10714002264725704107ull);
    vlSelf->__PVT__branch_csr_request_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12741346973900700064ull);
    vlSelf->__PVT__branch_csr_pc_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2314476981932438617ull);
    vlSelf->__PVT__branch_csr_priv_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15174385007397059193ull);
    vlSelf->__PVT__take_interrupt_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10649534952085674446ull);
    vlSelf->__PVT__ifence_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15803255530597903490ull);
    vlSelf->__PVT__mmu_priv_d_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1011565678996284108ull);
    vlSelf->__PVT__mmu_sum_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13857979901860239789ull);
    vlSelf->__PVT__mmu_mxr_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13672856884720734997ull);
    vlSelf->__PVT__mmu_flush_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5194980655320224539ull);
    vlSelf->__PVT__mmu_satp_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 578864763246578270ull);
    vlSelf->__PVT__csrrw_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3865648133222444573ull);
    vlSelf->__PVT__csrrwi_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14435448072637019663ull);
    vlSelf->__PVT__csrrci_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3423614659162751382ull);
    vlSelf->__PVT__sfence_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12140719235794385583ull);
    vlSelf->__PVT__ifence_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3431903498124875712ull);
    vlSelf->__PVT__set_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12423886468420449335ull);
    vlSelf->__PVT__clr_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11573136773523012ull);
    vlSelf->__PVT__data_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6612422239040445895ull);
    vlSelf->__PVT__satp_update_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12445177712657261997ull);
    vlSelf->__PVT__csr_rdata_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1200145802055793827ull);
    vlSelf->__PVT__interrupt_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14725261512023421246ull);
    vlSelf->__PVT__rd_valid_e1_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16542798633850552266ull);
    vlSelf->__PVT__rd_result_e1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10582046144522652159ull);
    vlSelf->__PVT__csr_wdata_e1_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12191166039310977723ull);
    vlSelf->__PVT__exception_e1_q = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18217413147325990511ull);
    vlSelf->__PVT__eret_fault_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6588347846747595302ull);
    vlSelf->__PVT__take_interrupt_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17317744553457008956ull);
    vlSelf->__PVT__tlb_flush_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17432184378802125453ull);
    vlSelf->__PVT__ifence_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6641464407617761867ull);
    vlSelf->__PVT__branch_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4225221708613283737ull);
    vlSelf->__PVT__branch_target_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11745987911920147893ull);
    vlSelf->__PVT__init_done = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 13642578072536774985ull);
    vlSelf->__VdfgRegularize_h7babc46f_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7371050029492869490ull);
}
