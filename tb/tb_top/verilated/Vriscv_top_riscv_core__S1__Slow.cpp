// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_riscv_core__S1.h"

void Vriscv_top_riscv_core__S1___ctor_var_reset(Vriscv_top_riscv_core__S1* vlSelf);

Vriscv_top_riscv_core__S1::Vriscv_top_riscv_core__S1(Vriscv_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vriscv_top_riscv_core__S1___ctor_var_reset(this);
}

void Vriscv_top_riscv_core__S1::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vriscv_top_riscv_core__S1::~Vriscv_top_riscv_core__S1() {
}
