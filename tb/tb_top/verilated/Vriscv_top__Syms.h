// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRISCV_TOP__SYMS_H_
#define VERILATED_VRISCV_TOP__SYMS_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vriscv_top.h"

// INCLUDE MODULE CLASSES
#include "Vriscv_top___024root.h"
#include "Vriscv_top_riscv_top.h"
#include "Vriscv_top_dcache.h"
#include "Vriscv_top_icache.h"
#include "Vriscv_top_riscv_core__S1.h"
#include "Vriscv_top_dcache_core.h"
#include "Vriscv_top_biriscv_issue.h"
#include "Vriscv_top_icache_tag_ram.h"
#include "Vriscv_top_icache_data_ram.h"
#include "Vriscv_top_biriscv_csr__SB0.h"
#include "Vriscv_top_dcache_core_tag_ram.h"
#include "Vriscv_top_dcache_core_data_ram.h"
#include "Vriscv_top_biriscv_csr_regfile.h"
#include "Vriscv_top_biriscv_regfile.h"
#include "Vriscv_top_biriscv_trace_sim.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vriscv_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vriscv_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vriscv_top___024root           TOP;
    Vriscv_top_riscv_top           TOP__v;
    Vriscv_top_riscv_core__S1      TOP__v__u_core;
    Vriscv_top_biriscv_csr__SB0    TOP__v__u_core__u_csr;
    Vriscv_top_biriscv_csr_regfile TOP__v__u_core__u_csr__u_csrfile;
    Vriscv_top_biriscv_issue       TOP__v__u_core__u_issue;
    Vriscv_top_biriscv_trace_sim   TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d;
    Vriscv_top_biriscv_trace_sim   TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb;
    Vriscv_top_biriscv_trace_sim   TOP__v__u_core__u_issue__u_pipe0_dec0_verif;
    Vriscv_top_biriscv_trace_sim   TOP__v__u_core__u_issue__u_pipe0_dec1_verif;
    Vriscv_top_biriscv_trace_sim   TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d;
    Vriscv_top_biriscv_trace_sim   TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb;
    Vriscv_top_biriscv_regfile     TOP__v__u_core__u_issue__u_regfile;
    Vriscv_top_dcache              TOP__v__u_dcache;
    Vriscv_top_dcache_core         TOP__v__u_dcache__u_core;
    Vriscv_top_dcache_core_data_ram TOP__v__u_dcache__u_core__u_data0;
    Vriscv_top_dcache_core_data_ram TOP__v__u_dcache__u_core__u_data1;
    Vriscv_top_dcache_core_tag_ram TOP__v__u_dcache__u_core__u_tag0;
    Vriscv_top_dcache_core_tag_ram TOP__v__u_dcache__u_core__u_tag1;
    Vriscv_top_icache              TOP__v__u_icache;
    Vriscv_top_icache_data_ram     TOP__v__u_icache__u_data0;
    Vriscv_top_icache_data_ram     TOP__v__u_icache__u_data1;
    Vriscv_top_icache_tag_ram      TOP__v__u_icache__u_tag0;
    Vriscv_top_icache_tag_ram      TOP__v__u_icache__u_tag1;

    // SCOPE NAMES
    VerilatedScope __Vscope_v__u_dcache__u_core__u_data0;
    VerilatedScope __Vscope_v__u_dcache__u_core__u_data1;
    VerilatedScope __Vscope_v__u_dcache__u_core__u_tag0;
    VerilatedScope __Vscope_v__u_dcache__u_core__u_tag1;
    VerilatedScope __Vscope_v__u_icache__u_data0;
    VerilatedScope __Vscope_v__u_icache__u_data1;
    VerilatedScope __Vscope_v__u_icache__u_tag0;
    VerilatedScope __Vscope_v__u_icache__u_tag1;

    // CONSTRUCTORS
    Vriscv_top__Syms(VerilatedContext* contextp, const char* namep, Vriscv_top* modelp);
    ~Vriscv_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
