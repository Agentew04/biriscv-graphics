// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top_biriscv_csr_regfile.h"

uint32_t Vriscv_top_biriscv_csr_regfile::get_mcycle() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_biriscv_csr_regfile::get_mcycle\n"); );
    VL_OUT(get_mcycle__Vfuncrtn,31,0);
    // Body
    get_mcycle__Vfuncrtn = this->__PVT__csr_mcycle_q;
    // Final
    return (get_mcycle__Vfuncrtn);
}
