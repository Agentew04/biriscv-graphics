// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top.h for the primary calling header

#ifndef VERILATED_VRISCV_TOP_RISCV_TOP_H_
#define VERILATED_VRISCV_TOP_RISCV_TOP_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vriscv_top_dcache;
class Vriscv_top_icache;
class Vriscv_top_riscv_core__S1;


class Vriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_top_riscv_top final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_top_dcache* u_dcache;
    Vriscv_top_riscv_core__S1* u_core;
    Vriscv_top_icache* u_icache;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(rst_i,0,0);
        VL_IN8(axi_i_awready_i,0,0);
        VL_IN8(axi_i_wready_i,0,0);
        VL_IN8(axi_i_bvalid_i,0,0);
        VL_IN8(axi_i_bresp_i,1,0);
        VL_IN8(axi_i_bid_i,3,0);
        VL_IN8(axi_i_arready_i,0,0);
        VL_IN8(axi_i_rvalid_i,0,0);
        VL_IN8(axi_i_rresp_i,1,0);
        VL_IN8(axi_i_rid_i,3,0);
        VL_IN8(axi_i_rlast_i,0,0);
        VL_IN8(axi_d_awready_i,0,0);
        VL_IN8(axi_d_wready_i,0,0);
        VL_IN8(axi_d_bvalid_i,0,0);
        VL_IN8(axi_d_bresp_i,1,0);
        VL_IN8(axi_d_bid_i,3,0);
        VL_IN8(axi_d_arready_i,0,0);
        VL_IN8(axi_d_rvalid_i,0,0);
        VL_IN8(axi_d_rresp_i,1,0);
        VL_IN8(axi_d_rid_i,3,0);
        VL_IN8(axi_d_rlast_i,0,0);
        VL_IN8(intr_i,0,0);
        VL_OUT8(__PVT__axi_i_awvalid_o,0,0);
        VL_OUT8(__PVT__axi_i_awid_o,3,0);
        VL_OUT8(__PVT__axi_i_awlen_o,7,0);
        VL_OUT8(__PVT__axi_i_awburst_o,1,0);
        VL_OUT8(__PVT__axi_i_wvalid_o,0,0);
        VL_OUT8(__PVT__axi_i_wstrb_o,3,0);
        VL_OUT8(__PVT__axi_i_wlast_o,0,0);
        VL_OUT8(__PVT__axi_i_bready_o,0,0);
        VL_OUT8(axi_i_arvalid_o,0,0);
        VL_OUT8(__PVT__axi_i_arid_o,3,0);
        VL_OUT8(__PVT__axi_i_arlen_o,7,0);
        VL_OUT8(__PVT__axi_i_arburst_o,1,0);
        VL_OUT8(__PVT__axi_i_rready_o,0,0);
        VL_OUT8(axi_d_awvalid_o,0,0);
        VL_OUT8(__PVT__axi_d_awid_o,3,0);
        VL_OUT8(axi_d_awlen_o,7,0);
        VL_OUT8(__PVT__axi_d_awburst_o,1,0);
        VL_OUT8(axi_d_wvalid_o,0,0);
        VL_OUT8(axi_d_wstrb_o,3,0);
        VL_OUT8(axi_d_wlast_o,0,0);
        VL_OUT8(__PVT__axi_d_bready_o,0,0);
        VL_OUT8(axi_d_arvalid_o,0,0);
        VL_OUT8(__PVT__axi_d_arid_o,3,0);
        VL_OUT8(axi_d_arlen_o,7,0);
        VL_OUT8(__PVT__axi_d_arburst_o,1,0);
        VL_OUT8(__PVT__axi_d_rready_o,0,0);
        CData/*0:0*/ __PVT__icache_valid_w;
        CData/*0:0*/ __PVT__dcache_ack_w;
        CData/*0:0*/ __PVT__dcache_rd_w;
        CData/*0:0*/ __PVT__dcache_accept_w;
        CData/*0:0*/ __PVT__icache_accept_w;
        CData/*3:0*/ __PVT__dcache_wr_w;
        CData/*0:0*/ __PVT__icache_rd_w;
        CData/*0:0*/ __PVT__dcache_error_w;
        VL_IN(axi_i_rdata_i,31,0);
        VL_IN(axi_d_rdata_i,31,0);
        VL_IN(reset_vector_i,31,0);
        VL_OUT(__PVT__axi_i_awaddr_o,31,0);
        VL_OUT(__PVT__axi_i_wdata_o,31,0);
        VL_OUT(axi_i_araddr_o,31,0);
        VL_OUT(axi_d_awaddr_o,31,0);
    };
    struct {
        VL_OUT(axi_d_wdata_o,31,0);
        VL_OUT(axi_d_araddr_o,31,0);
        IData/*31:0*/ __PVT__dcache_data_rd_w;
    };

    // INTERNAL VARIABLES
    Vriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_top_riscv_top(Vriscv_top__Syms* symsp, const char* v__name);
    ~Vriscv_top_riscv_top();
    VL_UNCOPYABLE(Vriscv_top_riscv_top);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
