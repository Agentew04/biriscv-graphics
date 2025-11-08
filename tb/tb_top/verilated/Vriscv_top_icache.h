// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top.h for the primary calling header

#ifndef VERILATED_VRISCV_TOP_ICACHE_H_
#define VERILATED_VRISCV_TOP_ICACHE_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vriscv_top_icache_data_ram;
class Vriscv_top_icache_tag_ram;


class Vriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_top_icache final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_top_icache_tag_ram* u_tag0;
    Vriscv_top_icache_tag_ram* u_tag1;
    Vriscv_top_icache_data_ram* u_data0;
    Vriscv_top_icache_data_ram* u_data1;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__req_rd_i,0,0);
    VL_IN8(__PVT__req_flush_i,0,0);
    VL_IN8(__PVT__req_invalidate_i,0,0);
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
    VL_OUT8(__PVT__req_accept_o,0,0);
    VL_OUT8(__PVT__req_valid_o,0,0);
    VL_OUT8(__PVT__req_error_o,0,0);
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
    CData/*1:0*/ __PVT__next_state_r;
    CData/*1:0*/ __PVT__state_q;
    CData/*0:0*/ __PVT__invalidate_q;
    CData/*0:0*/ __PVT__replace_way_q;
    CData/*0:0*/ __PVT__lookup_valid_q;
    CData/*7:0*/ __PVT__tag_addr_r;
    CData/*0:0*/ __PVT__tag0_write_r;
    CData/*0:0*/ __PVT__tag0_hit_w;
    CData/*0:0*/ __PVT__tag1_write_r;
    CData/*0:0*/ __PVT__tag1_hit_w;
    CData/*0:0*/ __PVT__tag_hit_any_w;
    CData/*2:0*/ __PVT__refill_word_idx_q;
    CData/*7:0*/ __PVT__flush_addr_q;
    CData/*0:0*/ __PVT__axi_arvalid_q;
    CData/*0:0*/ __PVT__axi_error_q;
    SData/*9:0*/ __PVT__data_addr_r;
    SData/*9:0*/ __PVT__data_write_addr_q;
    VL_IN(__PVT__req_pc_i,31,0);
    VL_IN(__PVT__axi_rdata_i,31,0);
    VL_OUT(__PVT__axi_awaddr_o,31,0);
    VL_OUT(__PVT__axi_wdata_o,31,0);
    VL_OUT(__PVT__axi_araddr_o,31,0);
    IData/*31:0*/ __PVT__lookup_addr_q;
    IData/*19:0*/ __PVT__tag_data_in_r;
    IData/*31:0*/ __PVT__refill_lower_q;
    VL_OUT64(__PVT__req_inst_o,63,0);
    QData/*63:0*/ __PVT__inst_r;

    // INTERNAL VARIABLES
    Vriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_top_icache(Vriscv_top__Syms* symsp, const char* v__name);
    ~Vriscv_top_icache();
    VL_UNCOPYABLE(Vriscv_top_icache);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
