// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vriscv_top__pch.h"
#include "Vriscv_top.h"
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

// FUNCTIONS
Vriscv_top__Syms::~Vriscv_top__Syms()
{
}

Vriscv_top__Syms::Vriscv_top__Syms(VerilatedContext* contextp, const char* namep, Vriscv_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__v{this, Verilated::catName(namep, "v")}
    , TOP__v__u_core{this, Verilated::catName(namep, "v.u_core")}
    , TOP__v__u_core__u_csr{this, Verilated::catName(namep, "v.u_core.u_csr")}
    , TOP__v__u_core__u_csr__u_csrfile{this, Verilated::catName(namep, "v.u_core.u_csr.u_csrfile")}
    , TOP__v__u_core__u_issue{this, Verilated::catName(namep, "v.u_core.u_issue")}
    , TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d{this, Verilated::catName(namep, "v.u_core.u_issue.u_pipe0_ctrl.u_trace_d")}
    , TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb{this, Verilated::catName(namep, "v.u_core.u_issue.u_pipe0_ctrl.u_trace_wb")}
    , TOP__v__u_core__u_issue__u_pipe0_dec0_verif{this, Verilated::catName(namep, "v.u_core.u_issue.u_pipe0_dec0_verif")}
    , TOP__v__u_core__u_issue__u_pipe0_dec1_verif{this, Verilated::catName(namep, "v.u_core.u_issue.u_pipe0_dec1_verif")}
    , TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d{this, Verilated::catName(namep, "v.u_core.u_issue.u_pipe1_ctrl.u_trace_d")}
    , TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb{this, Verilated::catName(namep, "v.u_core.u_issue.u_pipe1_ctrl.u_trace_wb")}
    , TOP__v__u_core__u_issue__u_regfile{this, Verilated::catName(namep, "v.u_core.u_issue.u_regfile")}
    , TOP__v__u_dcache{this, Verilated::catName(namep, "v.u_dcache")}
    , TOP__v__u_dcache__u_core{this, Verilated::catName(namep, "v.u_dcache.u_core")}
    , TOP__v__u_dcache__u_core__u_data0{this, Verilated::catName(namep, "v.u_dcache.u_core.u_data0")}
    , TOP__v__u_dcache__u_core__u_data1{this, Verilated::catName(namep, "v.u_dcache.u_core.u_data1")}
    , TOP__v__u_dcache__u_core__u_tag0{this, Verilated::catName(namep, "v.u_dcache.u_core.u_tag0")}
    , TOP__v__u_dcache__u_core__u_tag1{this, Verilated::catName(namep, "v.u_dcache.u_core.u_tag1")}
    , TOP__v__u_icache{this, Verilated::catName(namep, "v.u_icache")}
    , TOP__v__u_icache__u_data0{this, Verilated::catName(namep, "v.u_icache.u_data0")}
    , TOP__v__u_icache__u_data1{this, Verilated::catName(namep, "v.u_icache.u_data1")}
    , TOP__v__u_icache__u_tag0{this, Verilated::catName(namep, "v.u_icache.u_tag0")}
    , TOP__v__u_icache__u_tag1{this, Verilated::catName(namep, "v.u_icache.u_tag1")}
{
        // Check resources
        Verilated::stackCheck(2479);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.v = &TOP__v;
    TOP__v.u_core = &TOP__v__u_core;
    TOP__v__u_core.u_csr = &TOP__v__u_core__u_csr;
    TOP__v__u_core__u_csr.u_csrfile = &TOP__v__u_core__u_csr__u_csrfile;
    TOP__v__u_core.u_issue = &TOP__v__u_core__u_issue;
    TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__u_trace_d = &TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d;
    TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__u_trace_wb = &TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb;
    TOP__v__u_core__u_issue.__PVT__u_pipe0_dec0_verif = &TOP__v__u_core__u_issue__u_pipe0_dec0_verif;
    TOP__v__u_core__u_issue.__PVT__u_pipe0_dec1_verif = &TOP__v__u_core__u_issue__u_pipe0_dec1_verif;
    TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__u_trace_d = &TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d;
    TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__u_trace_wb = &TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb;
    TOP__v__u_core__u_issue.u_regfile = &TOP__v__u_core__u_issue__u_regfile;
    TOP__v.u_dcache = &TOP__v__u_dcache;
    TOP__v__u_dcache.u_core = &TOP__v__u_dcache__u_core;
    TOP__v__u_dcache__u_core.u_data0 = &TOP__v__u_dcache__u_core__u_data0;
    TOP__v__u_dcache__u_core.u_data1 = &TOP__v__u_dcache__u_core__u_data1;
    TOP__v__u_dcache__u_core.u_tag0 = &TOP__v__u_dcache__u_core__u_tag0;
    TOP__v__u_dcache__u_core.u_tag1 = &TOP__v__u_dcache__u_core__u_tag1;
    TOP__v.u_icache = &TOP__v__u_icache;
    TOP__v__u_icache.u_data0 = &TOP__v__u_icache__u_data0;
    TOP__v__u_icache.u_data1 = &TOP__v__u_icache__u_data1;
    TOP__v__u_icache.u_tag0 = &TOP__v__u_icache__u_tag0;
    TOP__v__u_icache.u_tag1 = &TOP__v__u_icache__u_tag1;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__v.__Vconfigure(true);
    TOP__v__u_core.__Vconfigure(true);
    TOP__v__u_core__u_csr.__Vconfigure(true);
    TOP__v__u_core__u_csr__u_csrfile.__Vconfigure(true);
    TOP__v__u_core__u_issue.__Vconfigure(true);
    TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d.__Vconfigure(true);
    TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb.__Vconfigure(false);
    TOP__v__u_core__u_issue__u_pipe0_dec0_verif.__Vconfigure(false);
    TOP__v__u_core__u_issue__u_pipe0_dec1_verif.__Vconfigure(false);
    TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d.__Vconfigure(false);
    TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb.__Vconfigure(false);
    TOP__v__u_core__u_issue__u_regfile.__Vconfigure(true);
    TOP__v__u_dcache.__Vconfigure(true);
    TOP__v__u_dcache__u_core.__Vconfigure(true);
    TOP__v__u_dcache__u_core__u_data0.__Vconfigure(true);
    TOP__v__u_dcache__u_core__u_data1.__Vconfigure(false);
    TOP__v__u_dcache__u_core__u_tag0.__Vconfigure(true);
    TOP__v__u_dcache__u_core__u_tag1.__Vconfigure(false);
    TOP__v__u_icache.__Vconfigure(true);
    TOP__v__u_icache__u_data0.__Vconfigure(true);
    TOP__v__u_icache__u_data1.__Vconfigure(false);
    TOP__v__u_icache__u_tag0.__Vconfigure(true);
    TOP__v__u_icache__u_tag1.__Vconfigure(false);
    // Setup scopes
    __Vscope_v__u_dcache__u_core__u_data0.configure(this, name(), "v.u_dcache.u_core.u_data0", "u_data0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_v__u_dcache__u_core__u_data1.configure(this, name(), "v.u_dcache.u_core.u_data1", "u_data1", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_v__u_dcache__u_core__u_tag0.configure(this, name(), "v.u_dcache.u_core.u_tag0", "u_tag0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_v__u_dcache__u_core__u_tag1.configure(this, name(), "v.u_dcache.u_core.u_tag1", "u_tag1", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_v__u_icache__u_data0.configure(this, name(), "v.u_icache.u_data0", "u_data0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_v__u_icache__u_data1.configure(this, name(), "v.u_icache.u_data1", "u_data1", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_v__u_icache__u_tag0.configure(this, name(), "v.u_icache.u_tag0", "u_tag0", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_v__u_icache__u_tag1.configure(this, name(), "v.u_icache.u_tag1", "u_tag1", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_v__u_dcache__u_core__u_data0.varInsert(__Vfinal,"ram", &(TOP__v__u_dcache__u_core__u_data0.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,2047,0 ,31,0);
        __Vscope_v__u_dcache__u_core__u_data1.varInsert(__Vfinal,"ram", &(TOP__v__u_dcache__u_core__u_data1.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,2047,0 ,31,0);
        __Vscope_v__u_dcache__u_core__u_tag0.varInsert(__Vfinal,"ram", &(TOP__v__u_dcache__u_core__u_tag0.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,255,0 ,20,0);
        __Vscope_v__u_dcache__u_core__u_tag1.varInsert(__Vfinal,"ram", &(TOP__v__u_dcache__u_core__u_tag1.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,255,0 ,20,0);
        __Vscope_v__u_icache__u_data0.varInsert(__Vfinal,"ram", &(TOP__v__u_icache__u_data0.ram), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1,1 ,1023,0 ,63,0);
        __Vscope_v__u_icache__u_data1.varInsert(__Vfinal,"ram", &(TOP__v__u_icache__u_data1.ram), false, VLVT_UINT64,VLVD_NODIR|VLVF_PUB_RW,1,1 ,1023,0 ,63,0);
        __Vscope_v__u_icache__u_tag0.varInsert(__Vfinal,"ram", &(TOP__v__u_icache__u_tag0.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,255,0 ,19,0);
        __Vscope_v__u_icache__u_tag1.varInsert(__Vfinal,"ram", &(TOP__v__u_icache__u_tag1.ram), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1,1 ,255,0 ,19,0);
    }
}
