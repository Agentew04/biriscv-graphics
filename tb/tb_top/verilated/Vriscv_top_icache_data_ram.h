// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top.h for the primary calling header

#ifndef VERILATED_VRISCV_TOP_ICACHE_DATA_RAM_H_
#define VERILATED_VRISCV_TOP_ICACHE_DATA_RAM_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_top_icache_data_ram final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__wr_i,0,0);
    VL_IN16(__PVT__addr_i,9,0);
    VL_IN64(__PVT__data_i,63,0);
    VL_OUT64(__PVT__data_o,63,0);
    QData/*63:0*/ __PVT__ram_read_q;
    VlUnpacked<QData/*63:0*/, 1024> ram;

    // INTERNAL VARIABLES
    Vriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_top_icache_data_ram(Vriscv_top__Syms* symsp, const char* v__name);
    ~Vriscv_top_icache_data_ram();
    VL_UNCOPYABLE(Vriscv_top_icache_data_ram);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
