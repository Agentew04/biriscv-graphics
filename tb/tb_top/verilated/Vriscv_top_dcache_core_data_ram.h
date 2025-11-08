// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top.h for the primary calling header

#ifndef VERILATED_VRISCV_TOP_DCACHE_CORE_DATA_RAM_H_
#define VERILATED_VRISCV_TOP_DCACHE_CORE_DATA_RAM_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"


class Vriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_top_dcache_core_data_ram final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk0_i,0,0);
    VL_IN8(__PVT__clk1_i,0,0);
    VL_IN8(__PVT__rst0_i,0,0);
    VL_IN8(__PVT__wr0_i,3,0);
    VL_IN8(__PVT__rst1_i,0,0);
    VL_IN8(__PVT__wr1_i,3,0);
    VL_IN16(__PVT__addr0_i,10,0);
    VL_IN16(__PVT__addr1_i,10,0);
    VL_IN(__PVT__data0_i,31,0);
    VL_IN(__PVT__data1_i,31,0);
    VL_OUT(__PVT__data0_o,31,0);
    VL_OUT(__PVT__data1_o,31,0);
    IData/*31:0*/ __PVT__ram_read0_q;
    IData/*31:0*/ __PVT__ram_read1_q;
    VlUnpacked<IData/*31:0*/, 2048> ram;

    // INTERNAL VARIABLES
    Vriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_top_dcache_core_data_ram(Vriscv_top__Syms* symsp, const char* v__name);
    ~Vriscv_top_dcache_core_data_ram();
    VL_UNCOPYABLE(Vriscv_top_dcache_core_data_ram);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
