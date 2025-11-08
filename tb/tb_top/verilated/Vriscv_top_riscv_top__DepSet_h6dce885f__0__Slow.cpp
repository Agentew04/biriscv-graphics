// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top_riscv_top.h"

VL_ATTR_COLD void Vriscv_top_riscv_top___ctor_var_reset(Vriscv_top_riscv_top* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vriscv_top_riscv_top___ctor_var_reset\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726502174457611970ull);
    vlSelf->axi_i_awready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14766025047644636657ull);
    vlSelf->axi_i_wready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8269567476437713517ull);
    vlSelf->axi_i_bvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11329908568622999426ull);
    vlSelf->axi_i_bresp_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1381934594416018020ull);
    vlSelf->axi_i_bid_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2797354901212218187ull);
    vlSelf->axi_i_arready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15287678307954382679ull);
    vlSelf->axi_i_rvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16780052360933930440ull);
    vlSelf->axi_i_rdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 34627238731027321ull);
    vlSelf->axi_i_rresp_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14012055248941750316ull);
    vlSelf->axi_i_rid_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8866955473213903370ull);
    vlSelf->axi_i_rlast_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 421369090515352394ull);
    vlSelf->axi_d_awready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14980359147590473248ull);
    vlSelf->axi_d_wready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7543485514994633649ull);
    vlSelf->axi_d_bvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3556539609430012942ull);
    vlSelf->axi_d_bresp_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7020780010505512351ull);
    vlSelf->axi_d_bid_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13054151119786225234ull);
    vlSelf->axi_d_arready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10142987107573891221ull);
    vlSelf->axi_d_rvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7029247776012005825ull);
    vlSelf->axi_d_rdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3660904907042371899ull);
    vlSelf->axi_d_rresp_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6167529485948944870ull);
    vlSelf->axi_d_rid_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7140166019199306726ull);
    vlSelf->axi_d_rlast_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 95717124512746171ull);
    vlSelf->intr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9031270550293618600ull);
    vlSelf->reset_vector_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8393161498616798439ull);
    vlSelf->__PVT__axi_i_awvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8953460724627675499ull);
    vlSelf->__PVT__axi_i_awaddr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12700232976703890470ull);
    vlSelf->__PVT__axi_i_awid_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1374467175714061462ull);
    vlSelf->__PVT__axi_i_awlen_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11738460260810562644ull);
    vlSelf->__PVT__axi_i_awburst_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10432341095114637555ull);
    vlSelf->__PVT__axi_i_wvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14471593029846896749ull);
    vlSelf->__PVT__axi_i_wdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14121924870517785077ull);
    vlSelf->__PVT__axi_i_wstrb_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 906629656694248098ull);
    vlSelf->__PVT__axi_i_wlast_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4436412022982032256ull);
    vlSelf->__PVT__axi_i_bready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10271323141225379946ull);
    vlSelf->axi_i_arvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17702331295171327655ull);
    vlSelf->axi_i_araddr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5073211200885827957ull);
    vlSelf->__PVT__axi_i_arid_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10835496200136328140ull);
    vlSelf->__PVT__axi_i_arlen_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11485143317456100862ull);
    vlSelf->__PVT__axi_i_arburst_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9015401283368664958ull);
    vlSelf->__PVT__axi_i_rready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8486195148602698772ull);
    vlSelf->axi_d_awvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10197829223960527609ull);
    vlSelf->axi_d_awaddr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13954351983671074747ull);
    vlSelf->__PVT__axi_d_awid_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1026218471842761276ull);
    vlSelf->axi_d_awlen_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17522246145314166803ull);
    vlSelf->__PVT__axi_d_awburst_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17372173130479828000ull);
    vlSelf->axi_d_wvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17536693725050043820ull);
    vlSelf->axi_d_wdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3650664325262579157ull);
    vlSelf->axi_d_wstrb_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17213111376674661109ull);
    vlSelf->axi_d_wlast_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6456840160096422076ull);
    vlSelf->__PVT__axi_d_bready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13100661326075888602ull);
    vlSelf->axi_d_arvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12444596948046688526ull);
    vlSelf->axi_d_araddr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11285598238097230822ull);
    vlSelf->__PVT__axi_d_arid_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5053977572816179783ull);
    vlSelf->axi_d_arlen_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3091326693240492017ull);
    vlSelf->__PVT__axi_d_arburst_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5938601795384425900ull);
    vlSelf->__PVT__axi_d_rready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 750985352688682445ull);
    vlSelf->__PVT__icache_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17389654207004030164ull);
    vlSelf->__PVT__dcache_ack_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11439641195475365182ull);
    vlSelf->__PVT__dcache_rd_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4703257075778086645ull);
    vlSelf->__PVT__dcache_accept_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17299147548704962728ull);
    vlSelf->__PVT__dcache_data_rd_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16301741309575182382ull);
    vlSelf->__PVT__icache_accept_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15156429100120985597ull);
    vlSelf->__PVT__dcache_wr_w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 56894079769137377ull);
    vlSelf->__PVT__icache_rd_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1027462849533309677ull);
    vlSelf->__PVT__dcache_error_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17954759776634960556ull);
}
