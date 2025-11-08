// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VRISCV_TOP_H_
#define VERILATED_VRISCV_TOP_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
#include "svdpi.h"

class Vriscv_top__Syms;
class Vriscv_top___024root;
class VerilatedVcdSc;
class Vriscv_top_riscv_top;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vriscv_top VL_NOT_FINAL : public ::sc_core::sc_module, public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vriscv_top__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = true;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    sc_core::sc_in<bool> &clk_i;
    sc_core::sc_in<bool> &rst_i;
    sc_core::sc_in<bool> &axi_i_awready_i;
    sc_core::sc_in<bool> &axi_i_wready_i;
    sc_core::sc_in<bool> &axi_i_bvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<2> > &axi_i_bresp_i;
    sc_core::sc_in<sc_dt::sc_uint<4> > &axi_i_bid_i;
    sc_core::sc_in<bool> &axi_i_arready_i;
    sc_core::sc_in<bool> &axi_i_rvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<2> > &axi_i_rresp_i;
    sc_core::sc_in<sc_dt::sc_uint<4> > &axi_i_rid_i;
    sc_core::sc_in<bool> &axi_i_rlast_i;
    sc_core::sc_in<bool> &axi_d_awready_i;
    sc_core::sc_in<bool> &axi_d_wready_i;
    sc_core::sc_in<bool> &axi_d_bvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<2> > &axi_d_bresp_i;
    sc_core::sc_in<sc_dt::sc_uint<4> > &axi_d_bid_i;
    sc_core::sc_in<bool> &axi_d_arready_i;
    sc_core::sc_in<bool> &axi_d_rvalid_i;
    sc_core::sc_in<sc_dt::sc_uint<2> > &axi_d_rresp_i;
    sc_core::sc_in<sc_dt::sc_uint<4> > &axi_d_rid_i;
    sc_core::sc_in<bool> &axi_d_rlast_i;
    sc_core::sc_in<bool> &intr_i;
    sc_core::sc_out<bool> &axi_i_awvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > &axi_i_awid_o;
    sc_core::sc_out<sc_dt::sc_uint<8> > &axi_i_awlen_o;
    sc_core::sc_out<sc_dt::sc_uint<2> > &axi_i_awburst_o;
    sc_core::sc_out<bool> &axi_i_wvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > &axi_i_wstrb_o;
    sc_core::sc_out<bool> &axi_i_wlast_o;
    sc_core::sc_out<bool> &axi_i_bready_o;
    sc_core::sc_out<bool> &axi_i_arvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > &axi_i_arid_o;
    sc_core::sc_out<sc_dt::sc_uint<8> > &axi_i_arlen_o;
    sc_core::sc_out<sc_dt::sc_uint<2> > &axi_i_arburst_o;
    sc_core::sc_out<bool> &axi_i_rready_o;
    sc_core::sc_out<bool> &axi_d_awvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > &axi_d_awid_o;
    sc_core::sc_out<sc_dt::sc_uint<8> > &axi_d_awlen_o;
    sc_core::sc_out<sc_dt::sc_uint<2> > &axi_d_awburst_o;
    sc_core::sc_out<bool> &axi_d_wvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > &axi_d_wstrb_o;
    sc_core::sc_out<bool> &axi_d_wlast_o;
    sc_core::sc_out<bool> &axi_d_bready_o;
    sc_core::sc_out<bool> &axi_d_arvalid_o;
    sc_core::sc_out<sc_dt::sc_uint<4> > &axi_d_arid_o;
    sc_core::sc_out<sc_dt::sc_uint<8> > &axi_d_arlen_o;
    sc_core::sc_out<sc_dt::sc_uint<2> > &axi_d_arburst_o;
    sc_core::sc_out<bool> &axi_d_rready_o;
    sc_core::sc_in<sc_dt::sc_uint<32> > &axi_i_rdata_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > &axi_d_rdata_i;
    sc_core::sc_in<sc_dt::sc_uint<32> > &reset_vector_i;
    sc_core::sc_out<sc_dt::sc_uint<32> > &axi_i_awaddr_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > &axi_i_wdata_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > &axi_i_araddr_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > &axi_d_awaddr_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > &axi_d_wdata_o;
    sc_core::sc_out<sc_dt::sc_uint<32> > &axi_d_araddr_o;

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vriscv_top_riscv_top* const v;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vriscv_top___024root* const rootp;

    // CONSTRUCTORS
    SC_CTOR(Vriscv_top);
    virtual ~Vriscv_top();
  private:
    VL_UNCOPYABLE(Vriscv_top);  ///< Copying not allowed

  public:
    // API METHODS
  private:
    void eval() { eval_step(); }
    void eval_step();
  public:
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// SC tracing; avoid overloaded virtual function lint warning
    void trace(sc_core::sc_trace_file* tfp) const override { ::sc_core::sc_module::trace(tfp); }

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
