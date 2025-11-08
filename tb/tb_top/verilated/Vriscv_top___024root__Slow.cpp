// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top___024root.h"

void Vriscv_top___024root___ctor_var_reset(Vriscv_top___024root* vlSelf);

Vriscv_top___024root::Vriscv_top___024root(Vriscv_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , clk_i("clk_i")
    , rst_i("rst_i")
    , axi_i_awready_i("axi_i_awready_i")
    , axi_i_wready_i("axi_i_wready_i")
    , axi_i_bvalid_i("axi_i_bvalid_i")
    , axi_i_bresp_i("axi_i_bresp_i")
    , axi_i_bid_i("axi_i_bid_i")
    , axi_i_arready_i("axi_i_arready_i")
    , axi_i_rvalid_i("axi_i_rvalid_i")
    , axi_i_rresp_i("axi_i_rresp_i")
    , axi_i_rid_i("axi_i_rid_i")
    , axi_i_rlast_i("axi_i_rlast_i")
    , axi_d_awready_i("axi_d_awready_i")
    , axi_d_wready_i("axi_d_wready_i")
    , axi_d_bvalid_i("axi_d_bvalid_i")
    , axi_d_bresp_i("axi_d_bresp_i")
    , axi_d_bid_i("axi_d_bid_i")
    , axi_d_arready_i("axi_d_arready_i")
    , axi_d_rvalid_i("axi_d_rvalid_i")
    , axi_d_rresp_i("axi_d_rresp_i")
    , axi_d_rid_i("axi_d_rid_i")
    , axi_d_rlast_i("axi_d_rlast_i")
    , intr_i("intr_i")
    , axi_i_awvalid_o("axi_i_awvalid_o")
    , axi_i_awid_o("axi_i_awid_o")
    , axi_i_awlen_o("axi_i_awlen_o")
    , axi_i_awburst_o("axi_i_awburst_o")
    , axi_i_wvalid_o("axi_i_wvalid_o")
    , axi_i_wstrb_o("axi_i_wstrb_o")
    , axi_i_wlast_o("axi_i_wlast_o")
    , axi_i_bready_o("axi_i_bready_o")
    , axi_i_arvalid_o("axi_i_arvalid_o")
    , axi_i_arid_o("axi_i_arid_o")
    , axi_i_arlen_o("axi_i_arlen_o")
    , axi_i_arburst_o("axi_i_arburst_o")
    , axi_i_rready_o("axi_i_rready_o")
    , axi_d_awvalid_o("axi_d_awvalid_o")
    , axi_d_awid_o("axi_d_awid_o")
    , axi_d_awlen_o("axi_d_awlen_o")
    , axi_d_awburst_o("axi_d_awburst_o")
    , axi_d_wvalid_o("axi_d_wvalid_o")
    , axi_d_wstrb_o("axi_d_wstrb_o")
    , axi_d_wlast_o("axi_d_wlast_o")
    , axi_d_bready_o("axi_d_bready_o")
    , axi_d_arvalid_o("axi_d_arvalid_o")
    , axi_d_arid_o("axi_d_arid_o")
    , axi_d_arlen_o("axi_d_arlen_o")
    , axi_d_arburst_o("axi_d_arburst_o")
    , axi_d_rready_o("axi_d_rready_o")
    , axi_i_rdata_i("axi_i_rdata_i")
    , axi_d_rdata_i("axi_d_rdata_i")
    , reset_vector_i("reset_vector_i")
    , axi_i_awaddr_o("axi_i_awaddr_o")
    , axi_i_wdata_o("axi_i_wdata_o")
    , axi_i_araddr_o("axi_i_araddr_o")
    , axi_d_awaddr_o("axi_d_awaddr_o")
    , axi_d_wdata_o("axi_d_wdata_o")
    , axi_d_araddr_o("axi_d_araddr_o")
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vriscv_top___024root___ctor_var_reset(this);
}

void Vriscv_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vriscv_top___024root::~Vriscv_top___024root() {
}
