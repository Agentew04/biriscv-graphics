// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_biriscv_csr__SB0.h"

void Vriscv_top_biriscv_csr__SB0___ctor_var_reset(Vriscv_top_biriscv_csr__SB0* vlSelf);

Vriscv_top_biriscv_csr__SB0::Vriscv_top_biriscv_csr__SB0(Vriscv_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vriscv_top_biriscv_csr__SB0___ctor_var_reset(this);
}

void Vriscv_top_biriscv_csr__SB0::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vriscv_top_biriscv_csr__SB0::~Vriscv_top_biriscv_csr__SB0() {
}
