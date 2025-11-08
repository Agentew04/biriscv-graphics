// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top.h for the primary calling header

#ifndef VERILATED_VRISCV_TOP_DCACHE_H_
#define VERILATED_VRISCV_TOP_DCACHE_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vriscv_top_dcache_core;


class Vriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_top_dcache final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_top_dcache_core* u_core;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__mem_rd_i,0,0);
        VL_IN8(__PVT__mem_wr_i,3,0);
        VL_IN8(__PVT__mem_cacheable_i,0,0);
        VL_IN8(__PVT__mem_invalidate_i,0,0);
        VL_IN8(__PVT__mem_writeback_i,0,0);
        VL_IN8(__PVT__mem_flush_i,0,0);
        VL_IN8(__PVT__axi_awready_i,0,0);
        VL_IN8(__PVT__axi_wready_i,0,0);
        VL_IN8(__PVT__axi_bvalid_i,0,0);
        VL_IN8(__PVT__axi_bresp_i,1,0);
        VL_IN8(__PVT__axi_bid_i,3,0);
        VL_IN8(__PVT__axi_arready_i,0,0);
        VL_IN8(__PVT__axi_rvalid_i,0,0);
        VL_IN8(__PVT__axi_rresp_i,1,0);
        VL_IN8(__PVT__axi_rid_i,3,0);
        VL_IN8(__PVT__axi_rlast_i,0,0);
        VL_OUT8(__PVT__mem_accept_o,0,0);
        VL_OUT8(__PVT__mem_ack_o,0,0);
        VL_OUT8(__PVT__mem_error_o,0,0);
        VL_OUT8(__PVT__axi_awvalid_o,0,0);
        VL_OUT8(__PVT__axi_awid_o,3,0);
        VL_OUT8(__PVT__axi_awlen_o,7,0);
        VL_OUT8(__PVT__axi_awburst_o,1,0);
        VL_OUT8(__PVT__axi_wvalid_o,0,0);
        VL_OUT8(__PVT__axi_wstrb_o,3,0);
        VL_OUT8(__PVT__axi_wlast_o,0,0);
        VL_OUT8(__PVT__axi_bready_o,0,0);
        VL_OUT8(__PVT__axi_arvalid_o,0,0);
        VL_OUT8(__PVT__axi_arid_o,3,0);
        VL_OUT8(__PVT__axi_arlen_o,7,0);
        VL_OUT8(__PVT__axi_arburst_o,1,0);
        VL_OUT8(__PVT__axi_rready_o,0,0);
        CData/*0:0*/ __PVT__pmem_cache_accept_w;
        CData/*7:0*/ __PVT__pmem_cache_len_w;
        CData/*0:0*/ __PVT__mem_cached_invalidate_w;
        CData/*0:0*/ __PVT__mem_cached_accept_w;
        CData/*0:0*/ __PVT__pmem_cache_ack_w;
        CData/*0:0*/ __PVT__pmem_cache_rd_w;
        CData/*0:0*/ __PVT__pmem_error_w;
        CData/*0:0*/ __PVT__mem_uncached_ack_w;
        CData/*0:0*/ __PVT__pmem_ack_w;
        CData/*3:0*/ __PVT__pmem_uncached_wr_w;
        CData/*0:0*/ __PVT__mem_cached_rd_w;
        CData/*3:0*/ __PVT__pmem_wr_w;
        CData/*0:0*/ __PVT__pmem_select_w;
        CData/*0:0*/ __PVT__mem_cached_flush_w;
        CData/*3:0*/ __PVT__pmem_cache_wr_w;
        CData/*0:0*/ __PVT__pmem_rd_w;
        CData/*3:0*/ __PVT__mem_uncached_wr_w;
        CData/*0:0*/ __PVT__mem_uncached_rd_w;
        CData/*0:0*/ __PVT__pmem_accept_w;
        CData/*0:0*/ __PVT__pmem_uncached_rd_w;
        CData/*0:0*/ __PVT__mem_cached_writeback_w;
        CData/*0:0*/ __PVT__u_uncached__DOT__res_accept_w;
        CData/*0:0*/ __PVT__u_uncached__DOT__req_accept_w;
        CData/*0:0*/ __PVT__u_uncached__DOT__request_complete_w;
        CData/*0:0*/ __PVT__u_uncached__DOT__req_valid_w;
        CData/*0:0*/ __PVT__u_uncached__DOT__drop_req_w;
        CData/*0:0*/ __PVT__u_uncached__DOT__request_w;
        CData/*0:0*/ __PVT__u_uncached__DOT__req_push_w;
        CData/*0:0*/ __PVT__u_uncached__DOT__res_push_w;
        CData/*0:0*/ __PVT__u_uncached__DOT__request_pending_q;
    };
    struct {
        CData/*0:0*/ __PVT__u_uncached__DOT__req_is_drop_w;
        CData/*0:0*/ __PVT__u_uncached__DOT__dropped_q;
        CData/*0:0*/ u_uncached__DOT____VdfgRegularize_h08c420ae_0_0;
        CData/*0:0*/ u_uncached__DOT____VdfgRegularize_h08c420ae_0_1;
        CData/*0:0*/ __PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q;
        CData/*0:0*/ __PVT__u_uncached__DOT__u_req__DOT__wr_ptr_q;
        CData/*1:0*/ __PVT__u_uncached__DOT__u_req__DOT__count_q;
        CData/*0:0*/ __PVT__u_uncached__DOT__u_resp__DOT__valid_o;
        CData/*0:0*/ __PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q;
        CData/*0:0*/ __PVT__u_uncached__DOT__u_resp__DOT__wr_ptr_q;
        CData/*1:0*/ __PVT__u_uncached__DOT__u_resp__DOT__count_q;
        CData/*0:0*/ __PVT__u_pmem_mux__DOT__select_q;
        CData/*0:0*/ __PVT__u_mux__DOT__hold_w;
        CData/*0:0*/ __PVT__u_mux__DOT__cache_access_q;
        CData/*0:0*/ __PVT__u_mux__DOT__request_w;
        CData/*4:0*/ __PVT__u_mux__DOT__pending_r;
        CData/*4:0*/ __PVT__u_mux__DOT__pending_q;
        CData/*0:0*/ u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_2;
        CData/*0:0*/ u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_4;
        CData/*0:0*/ __PVT__u_axi__DOT__accept_w;
        CData/*0:0*/ __PVT__u_axi__DOT__res_accept_w;
        CData/*0:0*/ __PVT__u_axi__DOT__res_valid_w;
        CData/*0:0*/ __PVT__u_axi__DOT__req_valid_w;
        CData/*0:0*/ __PVT__u_axi__DOT__req_push_w;
        CData/*0:0*/ __PVT__u_axi__DOT__req_can_issue_w;
        CData/*0:0*/ __PVT__u_axi__DOT__req_is_write_w;
        CData/*7:0*/ __PVT__u_axi__DOT__req_cnt_q;
        CData/*0:0*/ __PVT__u_axi__DOT__res_push_w;
        CData/*0:0*/ __PVT__u_axi__DOT__resp_pop_w;
        CData/*1:0*/ __PVT__u_axi__DOT__resp_outstanding_q;
        CData/*0:0*/ u_axi__DOT____VdfgRegularize_h2534fa66_0_0;
        CData/*0:0*/ __PVT__u_axi__DOT__u_req__DOT__rd_ptr_q;
        CData/*0:0*/ __PVT__u_axi__DOT__u_req__DOT__wr_ptr_q;
        CData/*1:0*/ __PVT__u_axi__DOT__u_req__DOT__count_q;
        CData/*0:0*/ __PVT__u_axi__DOT__u_axi__DOT__awvalid_inhibit_q;
        CData/*0:0*/ __PVT__u_axi__DOT__u_axi__DOT__wvalid_inhibit_q;
        CData/*7:0*/ __PVT__u_axi__DOT__u_axi__DOT__req_cnt_q;
        CData/*0:0*/ __PVT__u_axi__DOT__u_axi__DOT__buf_valid_q;
        CData/*0:0*/ u_axi__DOT__u_axi__DOT____VdfgRegularize_h88420251_0_0;
        VL_IN16(__PVT__mem_req_tag_i,10,0);
        VL_OUT16(__PVT__mem_resp_tag_o,10,0);
        VL_IN(__PVT__mem_addr_i,31,0);
        VL_IN(__PVT__mem_data_wr_i,31,0);
        VL_IN(__PVT__axi_rdata_i,31,0);
        VL_OUT(__PVT__mem_data_rd_o,31,0);
        VL_OUT(__PVT__axi_awaddr_o,31,0);
        VL_OUT(__PVT__axi_wdata_o,31,0);
        VL_OUT(__PVT__axi_araddr_o,31,0);
        IData/*31:0*/ __PVT__pmem_cache_addr_w;
        IData/*31:0*/ __PVT__pmem_cache_write_data_w;
        QData/*36:0*/ __PVT__u_axi__DOT__u_axi__DOT__buf_q;
        VlUnpacked<VlWide<3>/*69:0*/, 2> __PVT__u_uncached__DOT__u_req__DOT__ram_q;
        VlUnpacked<SData/*10:0*/, 2> __PVT__u_uncached__DOT__u_resp__DOT__ram_q;
        VlUnpacked<VlWide<3>/*76:0*/, 2> __PVT__u_axi__DOT__u_req__DOT__ram_q;
    };

    // INTERNAL VARIABLES
    Vriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_top_dcache(Vriscv_top__Syms* symsp, const char* v__name);
    ~Vriscv_top_dcache();
    VL_UNCOPYABLE(Vriscv_top_dcache);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
