// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vriscv_top__pch.h"
#include "verilated_vcd_sc.h"

//============================================================
// Constructors

Vriscv_top::Vriscv_top(sc_core::sc_module_name /* unused */)
    : VerilatedModel{*Verilated::threadContextp()}
    , vlSymsp{new Vriscv_top__Syms(contextp(), name(), this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_i{vlSymsp->TOP.rst_i}
    , axi_i_awready_i{vlSymsp->TOP.axi_i_awready_i}
    , axi_i_wready_i{vlSymsp->TOP.axi_i_wready_i}
    , axi_i_bvalid_i{vlSymsp->TOP.axi_i_bvalid_i}
    , axi_i_bresp_i{vlSymsp->TOP.axi_i_bresp_i}
    , axi_i_bid_i{vlSymsp->TOP.axi_i_bid_i}
    , axi_i_arready_i{vlSymsp->TOP.axi_i_arready_i}
    , axi_i_rvalid_i{vlSymsp->TOP.axi_i_rvalid_i}
    , axi_i_rresp_i{vlSymsp->TOP.axi_i_rresp_i}
    , axi_i_rid_i{vlSymsp->TOP.axi_i_rid_i}
    , axi_i_rlast_i{vlSymsp->TOP.axi_i_rlast_i}
    , axi_d_awready_i{vlSymsp->TOP.axi_d_awready_i}
    , axi_d_wready_i{vlSymsp->TOP.axi_d_wready_i}
    , axi_d_bvalid_i{vlSymsp->TOP.axi_d_bvalid_i}
    , axi_d_bresp_i{vlSymsp->TOP.axi_d_bresp_i}
    , axi_d_bid_i{vlSymsp->TOP.axi_d_bid_i}
    , axi_d_arready_i{vlSymsp->TOP.axi_d_arready_i}
    , axi_d_rvalid_i{vlSymsp->TOP.axi_d_rvalid_i}
    , axi_d_rresp_i{vlSymsp->TOP.axi_d_rresp_i}
    , axi_d_rid_i{vlSymsp->TOP.axi_d_rid_i}
    , axi_d_rlast_i{vlSymsp->TOP.axi_d_rlast_i}
    , intr_i{vlSymsp->TOP.intr_i}
    , axi_i_awvalid_o{vlSymsp->TOP.axi_i_awvalid_o}
    , axi_i_awid_o{vlSymsp->TOP.axi_i_awid_o}
    , axi_i_awlen_o{vlSymsp->TOP.axi_i_awlen_o}
    , axi_i_awburst_o{vlSymsp->TOP.axi_i_awburst_o}
    , axi_i_wvalid_o{vlSymsp->TOP.axi_i_wvalid_o}
    , axi_i_wstrb_o{vlSymsp->TOP.axi_i_wstrb_o}
    , axi_i_wlast_o{vlSymsp->TOP.axi_i_wlast_o}
    , axi_i_bready_o{vlSymsp->TOP.axi_i_bready_o}
    , axi_i_arvalid_o{vlSymsp->TOP.axi_i_arvalid_o}
    , axi_i_arid_o{vlSymsp->TOP.axi_i_arid_o}
    , axi_i_arlen_o{vlSymsp->TOP.axi_i_arlen_o}
    , axi_i_arburst_o{vlSymsp->TOP.axi_i_arburst_o}
    , axi_i_rready_o{vlSymsp->TOP.axi_i_rready_o}
    , axi_d_awvalid_o{vlSymsp->TOP.axi_d_awvalid_o}
    , axi_d_awid_o{vlSymsp->TOP.axi_d_awid_o}
    , axi_d_awlen_o{vlSymsp->TOP.axi_d_awlen_o}
    , axi_d_awburst_o{vlSymsp->TOP.axi_d_awburst_o}
    , axi_d_wvalid_o{vlSymsp->TOP.axi_d_wvalid_o}
    , axi_d_wstrb_o{vlSymsp->TOP.axi_d_wstrb_o}
    , axi_d_wlast_o{vlSymsp->TOP.axi_d_wlast_o}
    , axi_d_bready_o{vlSymsp->TOP.axi_d_bready_o}
    , axi_d_arvalid_o{vlSymsp->TOP.axi_d_arvalid_o}
    , axi_d_arid_o{vlSymsp->TOP.axi_d_arid_o}
    , axi_d_arlen_o{vlSymsp->TOP.axi_d_arlen_o}
    , axi_d_arburst_o{vlSymsp->TOP.axi_d_arburst_o}
    , axi_d_rready_o{vlSymsp->TOP.axi_d_rready_o}
    , axi_i_rdata_i{vlSymsp->TOP.axi_i_rdata_i}
    , axi_d_rdata_i{vlSymsp->TOP.axi_d_rdata_i}
    , reset_vector_i{vlSymsp->TOP.reset_vector_i}
    , axi_i_awaddr_o{vlSymsp->TOP.axi_i_awaddr_o}
    , axi_i_wdata_o{vlSymsp->TOP.axi_i_wdata_o}
    , axi_i_araddr_o{vlSymsp->TOP.axi_i_araddr_o}
    , axi_d_awaddr_o{vlSymsp->TOP.axi_d_awaddr_o}
    , axi_d_wdata_o{vlSymsp->TOP.axi_d_wdata_o}
    , axi_d_araddr_o{vlSymsp->TOP.axi_d_araddr_o}
    , v{vlSymsp->TOP.v}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << clk_i;
    sensitive << rst_i;
    sensitive << axi_i_awready_i;
    sensitive << axi_i_wready_i;
    sensitive << axi_i_bvalid_i;
    sensitive << axi_i_bresp_i;
    sensitive << axi_i_bid_i;
    sensitive << axi_i_arready_i;
    sensitive << axi_i_rvalid_i;
    sensitive << axi_i_rresp_i;
    sensitive << axi_i_rid_i;
    sensitive << axi_i_rlast_i;
    sensitive << axi_d_awready_i;
    sensitive << axi_d_wready_i;
    sensitive << axi_d_bvalid_i;
    sensitive << axi_d_bresp_i;
    sensitive << axi_d_bid_i;
    sensitive << axi_d_arready_i;
    sensitive << axi_d_rvalid_i;
    sensitive << axi_d_rresp_i;
    sensitive << axi_d_rid_i;
    sensitive << axi_d_rlast_i;
    sensitive << intr_i;
    sensitive << axi_i_rdata_i;
    sensitive << axi_d_rdata_i;
    sensitive << reset_vector_i;

}

//============================================================
// Destructor

Vriscv_top::~Vriscv_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vriscv_top___024root___eval_debug_assertions(Vriscv_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vriscv_top___024root___eval_static(Vriscv_top___024root* vlSelf);
void Vriscv_top___024root___eval_initial(Vriscv_top___024root* vlSelf);
void Vriscv_top___024root___eval_settle(Vriscv_top___024root* vlSelf);
void Vriscv_top___024root___eval(Vriscv_top___024root* vlSelf);

void Vriscv_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vriscv_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vriscv_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vriscv_top___024root___eval_static(&(vlSymsp->TOP));
        Vriscv_top___024root___eval_initial(&(vlSymsp->TOP));
        Vriscv_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vriscv_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vriscv_top::eventsPending() { return false; }

uint64_t Vriscv_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

//============================================================
// Invoke final blocks

void Vriscv_top___024root___eval_final(Vriscv_top___024root* vlSelf);

VL_ATTR_COLD void Vriscv_top::final() {
    Vriscv_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vriscv_top::hierName() const { return vlSymsp->name(); }
const char* Vriscv_top::modelName() const { return "Vriscv_top"; }
unsigned Vriscv_top::threads() const { return 1; }
void Vriscv_top::prepareClone() const { contextp()->prepareClone(); }
void Vriscv_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vriscv_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vriscv_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vriscv_top___024root__trace_init_top(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vriscv_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_top___024root*>(voidSelf);
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_decl_types(tracep);
    Vriscv_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_top___024root__trace_register(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_top::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    if (!sc_core::sc_get_curr_simcontext()->elaboration_done()) {
        vl_fatal(__FILE__, __LINE__, name(), "Vriscv_top::trace() is called before sc_core::sc_start(). Run sc_core::sc_start(sc_core::SC_ZERO_TIME) before trace() to complete elaboration.");
    }(void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vriscv_top::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vriscv_top___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
