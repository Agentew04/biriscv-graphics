// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_icache.h"

void Vriscv_top_icache___ctor_var_reset(Vriscv_top_icache* vlSelf);

Vriscv_top_icache::Vriscv_top_icache(Vriscv_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vriscv_top_icache___ctor_var_reset(this);
}

void Vriscv_top_icache::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vriscv_top_icache::~Vriscv_top_icache() {
}
