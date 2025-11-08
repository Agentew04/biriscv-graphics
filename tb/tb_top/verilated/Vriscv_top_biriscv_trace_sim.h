// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top.h for the primary calling header

#ifndef VERILATED_VRISCV_TOP_BIRISCV_TRACE_SIM_H_
#define VERILATED_VRISCV_TOP_BIRISCV_TRACE_SIM_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_top_biriscv_trace_sim final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__valid_i,0,0);
    VL_IN(__PVT__pc_i,31,0);
    VL_IN(__PVT__opcode_i,31,0);
    VlWide<3>/*79:0*/ __PVT__dbg_inst_str;
    VlWide<3>/*79:0*/ __PVT__dbg_inst_ra;
    VlWide<3>/*79:0*/ __PVT__dbg_inst_rb;
    VlWide<3>/*79:0*/ __PVT__dbg_inst_rd;
    IData/*31:0*/ __PVT__dbg_inst_imm;
    VlWide<3>/*79:0*/ __VdfgExtracted_h4ff6f0a0__0;
    VlWide<3>/*79:0*/ __VdfgExtracted_hf1ea1c82__0;
    VlWide<3>/*79:0*/ __VdfgExtracted_h26d6b5e8__0;

    // INTERNAL VARIABLES
    Vriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_top_biriscv_trace_sim(Vriscv_top__Syms* symsp, const char* v__name);
    ~Vriscv_top_biriscv_trace_sim();
    VL_UNCOPYABLE(Vriscv_top_biriscv_trace_sim);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
