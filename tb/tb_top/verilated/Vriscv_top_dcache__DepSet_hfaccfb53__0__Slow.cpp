// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top_dcache.h"

VL_ATTR_COLD void Vriscv_top_dcache___ctor_var_reset(Vriscv_top_dcache* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vriscv_top_dcache___ctor_var_reset\n"); );
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
    vlSelf->__PVT__axi_awready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12234127594790196950ull);
    vlSelf->__PVT__axi_wready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7050310087720455162ull);
    vlSelf->__PVT__axi_bvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17884255309029706377ull);
    vlSelf->__PVT__axi_bresp_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4948651740071558206ull);
    vlSelf->__PVT__axi_bid_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3388930068798728493ull);
    vlSelf->__PVT__axi_arready_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12491755914061494437ull);
    vlSelf->__PVT__axi_rvalid_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6116699644905141477ull);
    vlSelf->__PVT__axi_rdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14292434775926565658ull);
    vlSelf->__PVT__axi_rresp_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15348780561301092950ull);
    vlSelf->__PVT__axi_rid_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14831536278709261127ull);
    vlSelf->__PVT__axi_rlast_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11572285030873530849ull);
    vlSelf->__PVT__mem_data_rd_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5092392772498258719ull);
    vlSelf->__PVT__mem_accept_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9405624153584002197ull);
    vlSelf->__PVT__mem_ack_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3774331407141873773ull);
    vlSelf->__PVT__mem_error_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16082422893818280768ull);
    vlSelf->__PVT__mem_resp_tag_o = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 7322408623079987106ull);
    vlSelf->__PVT__axi_awvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7327984137061904351ull);
    vlSelf->__PVT__axi_awaddr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7267623093193198726ull);
    vlSelf->__PVT__axi_awid_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12461940426905577253ull);
    vlSelf->__PVT__axi_awlen_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4074157082755575289ull);
    vlSelf->__PVT__axi_awburst_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 176980601595116580ull);
    vlSelf->__PVT__axi_wvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10794807576791005878ull);
    vlSelf->__PVT__axi_wdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6930959795036371449ull);
    vlSelf->__PVT__axi_wstrb_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 90723018697249997ull);
    vlSelf->__PVT__axi_wlast_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14700880663978339238ull);
    vlSelf->__PVT__axi_bready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9831559737062490045ull);
    vlSelf->__PVT__axi_arvalid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14120138030509770650ull);
    vlSelf->__PVT__axi_araddr_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8847945662364852958ull);
    vlSelf->__PVT__axi_arid_o = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11701233974866078480ull);
    vlSelf->__PVT__axi_arlen_o = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15039786379651921318ull);
    vlSelf->__PVT__axi_arburst_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6936750927876520979ull);
    vlSelf->__PVT__axi_rready_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12090954112486446778ull);
    vlSelf->__PVT__pmem_cache_accept_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10254587763437033909ull);
    vlSelf->__PVT__pmem_cache_len_w = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9166358124743350973ull);
    vlSelf->__PVT__mem_cached_invalidate_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4809204355868027316ull);
    vlSelf->__PVT__mem_cached_accept_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9550311264627295795ull);
    vlSelf->__PVT__pmem_cache_ack_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9469267345833022746ull);
    vlSelf->__PVT__pmem_cache_addr_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8104357455475836653ull);
    vlSelf->__PVT__pmem_cache_rd_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 519973741538484053ull);
    vlSelf->__PVT__pmem_error_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11292123532526830942ull);
    vlSelf->__PVT__mem_uncached_ack_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14484860436029678385ull);
    vlSelf->__PVT__pmem_ack_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6894191384018772386ull);
    vlSelf->__PVT__pmem_uncached_wr_w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17715957043905981925ull);
    vlSelf->__PVT__mem_cached_rd_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1101969900345184044ull);
    vlSelf->__PVT__pmem_wr_w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3873982397505634858ull);
    vlSelf->__PVT__pmem_select_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15410585910399346647ull);
    vlSelf->__PVT__mem_cached_flush_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16599313590934715619ull);
    vlSelf->__PVT__pmem_cache_wr_w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3885213211287679099ull);
    vlSelf->__PVT__pmem_rd_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944401157891237006ull);
    vlSelf->__PVT__mem_uncached_wr_w = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2572902984898752477ull);
    vlSelf->__PVT__mem_uncached_rd_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17863454309314744303ull);
    vlSelf->__PVT__pmem_accept_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4945686866851312822ull);
    vlSelf->__PVT__pmem_cache_write_data_w = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16468710026339052842ull);
    vlSelf->__PVT__pmem_uncached_rd_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7382732471437899278ull);
    vlSelf->__PVT__mem_cached_writeback_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8978357019042767431ull);
    vlSelf->__PVT__u_uncached__DOT__res_accept_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2297794257467862659ull);
    vlSelf->__PVT__u_uncached__DOT__req_accept_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10209009228213275702ull);
    vlSelf->__PVT__u_uncached__DOT__request_complete_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17096489962560850312ull);
    vlSelf->__PVT__u_uncached__DOT__req_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 843373438795942644ull);
    vlSelf->__PVT__u_uncached__DOT__drop_req_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4643027881492799647ull);
    vlSelf->__PVT__u_uncached__DOT__request_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16479120568894217653ull);
    vlSelf->__PVT__u_uncached__DOT__req_push_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4446669697836116839ull);
    vlSelf->__PVT__u_uncached__DOT__res_push_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7919598525759511951ull);
    vlSelf->__PVT__u_uncached__DOT__request_pending_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5361376272334329293ull);
    vlSelf->__PVT__u_uncached__DOT__req_is_drop_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6415225391729697445ull);
    vlSelf->__PVT__u_uncached__DOT__dropped_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7044813898207037148ull);
    vlSelf->u_uncached__DOT____VdfgRegularize_h08c420ae_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3549633161273204565ull);
    vlSelf->u_uncached__DOT____VdfgRegularize_h08c420ae_0_1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17721951806826152542ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(70, vlSelf->__PVT__u_uncached__DOT__u_req__DOT__ram_q[__Vi0], __VscopeHash, 2566970441082214799ull);
    }
    vlSelf->__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10390174971481629317ull);
    vlSelf->__PVT__u_uncached__DOT__u_req__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13601425871223347632ull);
    vlSelf->__PVT__u_uncached__DOT__u_req__DOT__count_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1579495454389033597ull);
    vlSelf->__PVT__u_uncached__DOT__u_resp__DOT__valid_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1933734103300080144ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_uncached__DOT__u_resp__DOT__ram_q[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 5702202212774221630ull);
    }
    vlSelf->__PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2092576115089884104ull);
    vlSelf->__PVT__u_uncached__DOT__u_resp__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5555022121443677794ull);
    vlSelf->__PVT__u_uncached__DOT__u_resp__DOT__count_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1280822682135988564ull);
    vlSelf->__PVT__u_pmem_mux__DOT__select_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 626941509133912854ull);
    vlSelf->__PVT__u_mux__DOT__hold_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8359593267680555505ull);
    vlSelf->__PVT__u_mux__DOT__cache_access_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 496416670772123248ull);
    vlSelf->__PVT__u_mux__DOT__request_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4827584709773208405ull);
    vlSelf->__PVT__u_mux__DOT__pending_r = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15423844803227756150ull);
    vlSelf->__PVT__u_mux__DOT__pending_q = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17575903389407727113ull);
    vlSelf->u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13137994911133740447ull);
    vlSelf->u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17349903247099129203ull);
    vlSelf->__PVT__u_axi__DOT__accept_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10354616085759595592ull);
    vlSelf->__PVT__u_axi__DOT__res_accept_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18102052273023972020ull);
    vlSelf->__PVT__u_axi__DOT__res_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9173597891306736492ull);
    vlSelf->__PVT__u_axi__DOT__req_valid_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10674810464218365310ull);
    vlSelf->__PVT__u_axi__DOT__req_push_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5600307492302319095ull);
    vlSelf->__PVT__u_axi__DOT__req_can_issue_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8745855265074210844ull);
    vlSelf->__PVT__u_axi__DOT__req_is_write_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13481015377764807785ull);
    vlSelf->__PVT__u_axi__DOT__req_cnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6010474137103040627ull);
    vlSelf->__PVT__u_axi__DOT__res_push_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 983201837274647877ull);
    vlSelf->__PVT__u_axi__DOT__resp_pop_w = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7295887188620891778ull);
    vlSelf->__PVT__u_axi__DOT__resp_outstanding_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12784525722901624818ull);
    vlSelf->u_axi__DOT____VdfgRegularize_h2534fa66_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10598129749807212711ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(77, vlSelf->__PVT__u_axi__DOT__u_req__DOT__ram_q[__Vi0], __VscopeHash, 551001119186628327ull);
    }
    vlSelf->__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3690249857806164045ull);
    vlSelf->__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12534360937688206780ull);
    vlSelf->__PVT__u_axi__DOT__u_req__DOT__count_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15197278483456783848ull);
    vlSelf->__PVT__u_axi__DOT__u_axi__DOT__awvalid_inhibit_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4097791878644431270ull);
    vlSelf->__PVT__u_axi__DOT__u_axi__DOT__wvalid_inhibit_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9482808440521539246ull);
    vlSelf->__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10105023942708244759ull);
    vlSelf->__PVT__u_axi__DOT__u_axi__DOT__buf_valid_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12396624105822389065ull);
    vlSelf->__PVT__u_axi__DOT__u_axi__DOT__buf_q = VL_SCOPED_RAND_RESET_Q(37, __VscopeHash, 1932324717742567081ull);
    vlSelf->u_axi__DOT__u_axi__DOT____VdfgRegularize_h88420251_0_0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10485528021895785871ull);
}
