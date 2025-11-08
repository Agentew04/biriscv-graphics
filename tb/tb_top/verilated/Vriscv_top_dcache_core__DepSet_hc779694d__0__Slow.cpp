// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top_dcache_core.h"

VL_ATTR_COLD void Vriscv_top_dcache_core___ctor_var_reset(Vriscv_top_dcache_core* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_dcache_core___ctor_var_reset\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->__PVT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726502174457611970ull);
    vlSelf->__PVT__mem_addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5219164976016085494ull);
    vlSelf->__PVT__mem_data_wr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2782963118412244048ull);
    vlSelf->__PVT__mem_rd_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10834726175353594979ull);
    vlSelf->__PVT__mem_wr_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3859585908866335846ull);
    vlSelf->__PVT__mem_cacheable_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11989375746797009240ull);
    vlSelf->__PVT__mem_req_tag_i = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 171408441195853786ull);
    vlSelf->__PVT__mem_invalidate_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14744857088142986849ull);
    vlSelf->__PVT__mem_writeback_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2634110620265547017ull);
    vlSelf->__PVT__mem_flush_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11755266206283733650ull);
    vlSelf->__PVT__outport_accept_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 392626481657724370ull);
    vlSelf->__PVT__outport_ack_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6020145422606061552ull);
    vlSelf->__PVT__outport_error_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16286044839077674698ull);
    vlSelf->__PVT__outport_read_data_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 874938759500389918ull);
    vlSelf->__PVT__mem_data_rd_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5092392772498258719ull);
    vlSelf->__PVT__mem_accept_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9405624153584002197ull);
    vlSelf->__PVT__mem_ack_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3774331407141873773ull);
    vlSelf->__PVT__mem_error_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16082422893818280768ull);
    vlSelf->__PVT__mem_resp_tag_o = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7322408623079987106ull);
    vlSelf->__PVT__outport_wr_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10438452264370677842ull);
    vlSelf->__PVT__outport_rd_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3936024269302166134ull);
    vlSelf->__PVT__outport_len_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11029478250458290976ull);
    vlSelf->__PVT__outport_addr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4832156754019338918ull);
    vlSelf->__PVT__outport_write_data_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2982914304090180122ull);
    vlSelf->__PVT__next_state_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9253886169183682447ull);
    vlSelf->__PVT__state_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14578357007859236226ull);
    vlSelf->__PVT__mem_addr_m_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14435091932628861718ull);
    vlSelf->__PVT__mem_data_m_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17141568265332606647ull);
    vlSelf->__PVT__mem_wr_m_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6722389531576261841ull);
    vlSelf->__PVT__mem_rd_m_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17825901557574202420ull);
    vlSelf->__PVT__mem_tag_m_q = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10818686702300554785ull);
    vlSelf->__PVT__mem_inval_m_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10851957218923363016ull);
    vlSelf->__PVT__mem_writeback_m_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14204670507131250408ull);
    vlSelf->__PVT__mem_flush_m_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9374792784182346331ull);
    vlSelf->__PVT__replace_way_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10218525170876242621ull);
    vlSelf->__PVT__evict_way_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10521993944596058743ull);
    vlSelf->__PVT__tag_dirty_any_m_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2861004474003012537ull);
    vlSelf->__PVT__flushing_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7170600666170572470ull);
    vlSelf->__PVT__tag_addr_x_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6028441836581201170ull);
    vlSelf->__PVT__tag_addr_m_r = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9421767567857055956ull);
    vlSelf->__PVT__tag_data_in_m_r = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 4033912330000197891ull);
    vlSelf->__PVT__tag0_write_m_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5951448185079856775ull);
    vlSelf->__PVT__tag0_hit_m_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17907702175289557347ull);
    vlSelf->__PVT__tag1_write_m_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16237916638447742401ull);
    vlSelf->__PVT__tag1_hit_m_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1783406327640180906ull);
    vlSelf->__PVT__tag_hit_any_m_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17375771126007701742ull);
    vlSelf->__PVT__evict_way_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2437355511445409143ull);
    vlSelf->__PVT__evict_data_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2954123181577364350ull);
    vlSelf->__PVT__evict_addr_r = VL_SCOPED_RAND_RESET_I(27, __VscopeHash, 3351201949512753857ull);
    vlSelf->__PVT__data_addr_x_r = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 1629936881003620224ull);
    vlSelf->__PVT__data_addr_m_r = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 10703762325769136499ull);
    vlSelf->__PVT__data_write_addr_q = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14585334991938553732ull);
    vlSelf->__PVT__data0_write_m_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8811267826618642731ull);
    vlSelf->__PVT__data0_data_in_m_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10741950336886492796ull);
    vlSelf->__PVT__data1_write_m_r = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17844052520809009761ull);
    vlSelf->__PVT__flush_addr_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15291150981820230879ull);
    vlSelf->__PVT__flush_last_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11576155878074670124ull);
    vlSelf->__PVT__data_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6612422239040445895ull);
    vlSelf->__PVT__mem_ack_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13600992007025076399ull);
    vlSelf->__PVT__pmem_rd_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3507438283497890589ull);
    vlSelf->__PVT__pmem_wr0_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7843576690949133649ull);
    vlSelf->__PVT__pmem_len_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10636981414421641630ull);
    vlSelf->__PVT__pmem_addr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7199890491004842221ull);
    vlSelf->__PVT__pmem_wr_q = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4749444380667977337ull);
    vlSelf->__PVT__pmem_write_data_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4210722266794192735ull);
    vlSelf->__PVT__error_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16960554246024535960ull);
    VL_SCOPED_RAND_RESET_W(80, vlSelf->__PVT__dbg_state, __VscopeHash, 9035414299298431771ull);
    vlSelf->__VdfgExtracted_h87545026__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8410717614924776708ull);
    vlSelf->__VdfgExtracted_h3d239356__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15959130585761085982ull);
    vlSelf->__VdfgRegularize_h2088a453_0_5 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12305954766783814978ull);
}
