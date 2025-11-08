// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top.h for the primary calling header

#ifndef VERILATED_VRISCV_TOP___024ROOT_H_
#define VERILATED_VRISCV_TOP___024ROOT_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vriscv_top_riscv_top;


class Vriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_top___024root final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_top_riscv_top* v;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellout__v__axi_d_arvalid_o;
    CData/*0:0*/ __Vcellout__v__axi_d_wlast_o;
    CData/*3:0*/ __Vcellout__v__axi_d_wstrb_o;
    CData/*0:0*/ __Vcellout__v__axi_d_wvalid_o;
    CData/*7:0*/ __Vcellout__v__axi_d_awlen_o;
    CData/*0:0*/ __Vcellout__v__axi_d_awvalid_o;
    CData/*0:0*/ __Vcellout__v__axi_i_arvalid_o;
    CData/*0:0*/ __Vcellinp__v__intr_i;
    CData/*0:0*/ __Vcellinp__v__axi_d_rlast_i;
    CData/*3:0*/ __Vcellinp__v__axi_d_rid_i;
    CData/*1:0*/ __Vcellinp__v__axi_d_rresp_i;
    CData/*0:0*/ __Vcellinp__v__axi_d_rvalid_i;
    CData/*0:0*/ __Vcellinp__v__axi_d_arready_i;
    CData/*3:0*/ __Vcellinp__v__axi_d_bid_i;
    CData/*1:0*/ __Vcellinp__v__axi_d_bresp_i;
    CData/*0:0*/ __Vcellinp__v__axi_d_bvalid_i;
    CData/*0:0*/ __Vcellinp__v__axi_d_wready_i;
    CData/*0:0*/ __Vcellinp__v__axi_d_awready_i;
    CData/*0:0*/ __Vcellinp__v__axi_i_rlast_i;
    CData/*3:0*/ __Vcellinp__v__axi_i_rid_i;
    CData/*1:0*/ __Vcellinp__v__axi_i_rresp_i;
    CData/*0:0*/ __Vcellinp__v__axi_i_rvalid_i;
    CData/*0:0*/ __Vcellinp__v__axi_i_arready_i;
    CData/*3:0*/ __Vcellinp__v__axi_i_bid_i;
    CData/*1:0*/ __Vcellinp__v__axi_i_bresp_i;
    CData/*0:0*/ __Vcellinp__v__axi_i_bvalid_i;
    CData/*0:0*/ __Vcellinp__v__axi_i_wready_i;
    CData/*0:0*/ __Vcellinp__v__axi_i_awready_i;
    CData/*0:0*/ __Vcellinp__v__rst_i;
    CData/*0:0*/ __Vcellinp__v__clk_i;
    CData/*0:0*/ __Vtrigprevexpr___TOP__v__u_core____PVT__u_exec0__DOT__u_alu__DOT__unused__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__v__u_core____PVT__u_exec1__DOT__u_alu__DOT__unused__0;
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*3:0*/ __Vtrigprevexpr___TOP__v__u_core____PVT__u_exec0__DOT__alu_func_r__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__v__u_core____PVT__u_exec1__DOT__alu_func_r__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP____Vcellinp__v__clk_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__v__u_core____PVT__u_exec0__DOT__u_alu__DOT__unused__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__v__u_core____PVT__u_exec1__DOT__u_alu__DOT__unused__1;
    CData/*0:0*/ __Vtrigprevexpr___TOP____Vcellinp__v__rst_i__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __Vcellout__v__axi_d_wdata_o;
    IData/*31:0*/ __Vcellout__v__axi_d_awaddr_o;
    IData/*31:0*/ __Vcellinp__v__reset_vector_i;
    IData/*31:0*/ __Vcellinp__v__axi_d_rdata_i;
    IData/*31:0*/ __Vcellinp__v__axi_i_rdata_i;
    IData/*31:0*/ __Vtrigprevexpr___TOP__v__u_core____PVT__u_exec0__DOT__alu_input_a_r__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__v__u_core____PVT__u_exec0__DOT__alu_input_b_r__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__v__u_core____PVT__u_exec0__DOT__u_alu__DOT__sub_res_w__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__v__u_core____PVT__u_exec1__DOT__alu_input_a_r__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__v__u_core____PVT__u_exec1__DOT__alu_input_b_r__0;
    IData/*31:0*/ __Vtrigprevexpr___TOP__v__u_core____PVT__u_exec1__DOT__u_alu__DOT__sub_res_w__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 10> __Vm_traceActivity;
    sc_core::sc_in<bool> clk_i;
    sc_core::sc_in<bool> rst_i;
    sc_core::sc_in<bool> axi_i_awready_i;
    sc_core::sc_in<bool> axi_i_wready_i;
    sc_core::sc_in<bool> axi_i_bvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<2> > axi_i_bresp_i;
    sc_core::sc_in<sc_dt::sc_uint<4> > axi_i_bid_i;
    sc_core::sc_in<bool> axi_i_arready_i;
    sc_core::sc_in<bool> axi_i_rvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<2> > axi_i_rresp_i;
    sc_core::sc_in<sc_dt::sc_uint<4> > axi_i_rid_i;
    sc_core::sc_in<bool> axi_i_rlast_i;
    sc_core::sc_in<bool> axi_d_awready_i;
    sc_core::sc_in<bool> axi_d_wready_i;
    sc_core::sc_in<bool> axi_d_bvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<2> > axi_d_bresp_i;
    sc_core::sc_in<sc_dt::sc_uint<4> > axi_d_bid_i;
    sc_core::sc_in<bool> axi_d_arready_i;
    sc_core::sc_in<bool> axi_d_rvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<2> > axi_d_rresp_i;
    sc_core::sc_in<sc_dt::sc_uint<4> > axi_d_rid_i;
    sc_core::sc_in<bool> axi_d_rlast_i;
    sc_core::sc_in<bool> intr_i;
    sc_core::sc_out<bool> axi_i_awvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > axi_i_awid_o;
    sc_core::sc_out<sc_dt::sc_uint<8> > axi_i_awlen_o;
    sc_core::sc_out<sc_dt::sc_uint<2> > axi_i_awburst_o;
    sc_core::sc_out<bool> axi_i_wvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > axi_i_wstrb_o;
    sc_core::sc_out<bool> axi_i_wlast_o;
    sc_core::sc_out<bool> axi_i_bready_o;
    sc_core::sc_out<bool> axi_i_arvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > axi_i_arid_o;
    sc_core::sc_out<sc_dt::sc_uint<8> > axi_i_arlen_o;
    sc_core::sc_out<sc_dt::sc_uint<2> > axi_i_arburst_o;
    sc_core::sc_out<bool> axi_i_rready_o;
    sc_core::sc_out<bool> axi_d_awvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > axi_d_awid_o;
    sc_core::sc_out<sc_dt::sc_uint<8> > axi_d_awlen_o;
    sc_core::sc_out<sc_dt::sc_uint<2> > axi_d_awburst_o;
    sc_core::sc_out<bool> axi_d_wvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > axi_d_wstrb_o;
    sc_core::sc_out<bool> axi_d_wlast_o;
    sc_core::sc_out<bool> axi_d_bready_o;
    sc_core::sc_out<bool> axi_d_arvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > axi_d_arid_o;
    sc_core::sc_out<sc_dt::sc_uint<8> > axi_d_arlen_o;
    sc_core::sc_out<sc_dt::sc_uint<2> > axi_d_arburst_o;
    sc_core::sc_out<bool> axi_d_rready_o;
    sc_core::sc_in<sc_dt::sc_uint<32> > axi_i_rdata_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > axi_d_rdata_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > reset_vector_i;
    sc_core::sc_out<sc_dt::sc_uint<32> > axi_i_awaddr_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > axi_i_wdata_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > axi_i_araddr_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > axi_d_awaddr_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > axi_d_wdata_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > axi_d_araddr_o;
    VlTriggerVec<3> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<12> __VactTriggered;
    VlTriggerVec<12> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_top___024root(Vriscv_top__Syms* symsp, const char* v__name);
    ~Vriscv_top___024root();
    VL_UNCOPYABLE(Vriscv_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
