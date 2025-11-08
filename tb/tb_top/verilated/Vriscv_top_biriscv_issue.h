// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top.h for the primary calling header

#ifndef VERILATED_VRISCV_TOP_BIRISCV_ISSUE_H_
#define VERILATED_VRISCV_TOP_BIRISCV_ISSUE_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vriscv_top_biriscv_regfile;
class Vriscv_top_biriscv_trace_sim;


class Vriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_top_biriscv_issue final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_top_biriscv_regfile* u_regfile;
    Vriscv_top_biriscv_trace_sim* __PVT__u_pipe0_dec0_verif;
    Vriscv_top_biriscv_trace_sim* __PVT__u_pipe0_dec1_verif;
    Vriscv_top_biriscv_trace_sim* __PVT__u_pipe0_ctrl__DOT__u_trace_d;
    Vriscv_top_biriscv_trace_sim* __PVT__u_pipe0_ctrl__DOT__u_trace_wb;
    Vriscv_top_biriscv_trace_sim* __PVT__u_pipe1_ctrl__DOT__u_trace_d;
    Vriscv_top_biriscv_trace_sim* __PVT__u_pipe1_ctrl__DOT__u_trace_wb;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__fetch0_valid_i,0,0);
        VL_IN8(__PVT__fetch0_fault_fetch_i,0,0);
        VL_IN8(__PVT__fetch0_fault_page_i,0,0);
        VL_IN8(__PVT__fetch0_instr_exec_i,0,0);
        VL_IN8(__PVT__fetch0_instr_lsu_i,0,0);
        VL_IN8(__PVT__fetch0_instr_branch_i,0,0);
        VL_IN8(__PVT__fetch0_instr_mul_i,0,0);
        VL_IN8(__PVT__fetch0_instr_div_i,0,0);
        VL_IN8(__PVT__fetch0_instr_csr_i,0,0);
        VL_IN8(__PVT__fetch0_instr_rd_valid_i,0,0);
        VL_IN8(__PVT__fetch0_instr_invalid_i,0,0);
        VL_IN8(__PVT__fetch1_valid_i,0,0);
        VL_IN8(__PVT__fetch1_fault_fetch_i,0,0);
        VL_IN8(__PVT__fetch1_fault_page_i,0,0);
        VL_IN8(__PVT__fetch1_instr_exec_i,0,0);
        VL_IN8(__PVT__fetch1_instr_lsu_i,0,0);
        VL_IN8(__PVT__fetch1_instr_branch_i,0,0);
        VL_IN8(__PVT__fetch1_instr_mul_i,0,0);
        VL_IN8(__PVT__fetch1_instr_div_i,0,0);
        VL_IN8(__PVT__fetch1_instr_csr_i,0,0);
        VL_IN8(__PVT__fetch1_instr_rd_valid_i,0,0);
        VL_IN8(__PVT__fetch1_instr_invalid_i,0,0);
        VL_IN8(__PVT__branch_exec0_request_i,0,0);
        VL_IN8(__PVT__branch_exec0_is_taken_i,0,0);
        VL_IN8(__PVT__branch_exec0_is_not_taken_i,0,0);
        VL_IN8(__PVT__branch_exec0_is_call_i,0,0);
        VL_IN8(__PVT__branch_exec0_is_ret_i,0,0);
        VL_IN8(__PVT__branch_exec0_is_jmp_i,0,0);
        VL_IN8(__PVT__branch_d_exec0_request_i,0,0);
        VL_IN8(__PVT__branch_d_exec0_priv_i,1,0);
        VL_IN8(__PVT__branch_exec1_request_i,0,0);
        VL_IN8(__PVT__branch_exec1_is_taken_i,0,0);
        VL_IN8(__PVT__branch_exec1_is_not_taken_i,0,0);
        VL_IN8(__PVT__branch_exec1_is_call_i,0,0);
        VL_IN8(__PVT__branch_exec1_is_ret_i,0,0);
        VL_IN8(__PVT__branch_exec1_is_jmp_i,0,0);
        VL_IN8(__PVT__branch_d_exec1_request_i,0,0);
        VL_IN8(__PVT__branch_d_exec1_priv_i,1,0);
        VL_IN8(__PVT__branch_csr_request_i,0,0);
        VL_IN8(__PVT__branch_csr_priv_i,1,0);
        VL_IN8(__PVT__writeback_mem_valid_i,0,0);
        VL_IN8(__PVT__writeback_mem_exception_i,5,0);
        VL_IN8(__PVT__writeback_div_valid_i,0,0);
        VL_IN8(__PVT__csr_result_e1_write_i,0,0);
        VL_IN8(__PVT__csr_result_e1_exception_i,5,0);
        VL_IN8(__PVT__lsu_stall_i,0,0);
        VL_IN8(__PVT__take_interrupt_i,0,0);
        VL_OUT8(__PVT__fetch0_accept_o,0,0);
        VL_OUT8(__PVT__fetch1_accept_o,0,0);
        VL_OUT8(__PVT__branch_request_o,0,0);
        VL_OUT8(__PVT__branch_priv_o,1,0);
        VL_OUT8(__PVT__branch_info_request_o,0,0);
        VL_OUT8(__PVT__branch_info_is_taken_o,0,0);
        VL_OUT8(__PVT__branch_info_is_not_taken_o,0,0);
        VL_OUT8(__PVT__branch_info_is_call_o,0,0);
        VL_OUT8(__PVT__branch_info_is_ret_o,0,0);
        VL_OUT8(__PVT__branch_info_is_jmp_o,0,0);
        VL_OUT8(__PVT__exec0_opcode_valid_o,0,0);
        VL_OUT8(__PVT__exec1_opcode_valid_o,0,0);
        VL_OUT8(__PVT__lsu_opcode_valid_o,0,0);
        VL_OUT8(__PVT__csr_opcode_valid_o,0,0);
        VL_OUT8(__PVT__mul_opcode_valid_o,0,0);
    };
    struct {
        VL_OUT8(__PVT__div_opcode_valid_o,0,0);
        VL_OUT8(__PVT__opcode0_invalid_o,0,0);
        VL_OUT8(__PVT__opcode0_rd_idx_o,4,0);
        VL_OUT8(__PVT__opcode0_ra_idx_o,4,0);
        VL_OUT8(__PVT__opcode0_rb_idx_o,4,0);
        VL_OUT8(__PVT__opcode1_invalid_o,0,0);
        VL_OUT8(__PVT__opcode1_rd_idx_o,4,0);
        VL_OUT8(__PVT__opcode1_ra_idx_o,4,0);
        VL_OUT8(__PVT__opcode1_rb_idx_o,4,0);
        VL_OUT8(__PVT__lsu_opcode_invalid_o,0,0);
        VL_OUT8(__PVT__lsu_opcode_rd_idx_o,4,0);
        VL_OUT8(__PVT__lsu_opcode_ra_idx_o,4,0);
        VL_OUT8(__PVT__lsu_opcode_rb_idx_o,4,0);
        VL_OUT8(__PVT__mul_opcode_invalid_o,0,0);
        VL_OUT8(__PVT__mul_opcode_rd_idx_o,4,0);
        VL_OUT8(__PVT__mul_opcode_ra_idx_o,4,0);
        VL_OUT8(__PVT__mul_opcode_rb_idx_o,4,0);
        VL_OUT8(__PVT__csr_opcode_invalid_o,0,0);
        VL_OUT8(__PVT__csr_opcode_rd_idx_o,4,0);
        VL_OUT8(__PVT__csr_opcode_ra_idx_o,4,0);
        VL_OUT8(__PVT__csr_opcode_rb_idx_o,4,0);
        VL_OUT8(__PVT__csr_writeback_write_o,0,0);
        VL_OUT8(__PVT__csr_writeback_exception_o,5,0);
        VL_OUT8(__PVT__exec0_hold_o,0,0);
        VL_OUT8(__PVT__exec1_hold_o,0,0);
        VL_OUT8(__PVT__mul_hold_o,0,0);
        VL_OUT8(__PVT__interrupt_inhibit_o,0,0);
        CData/*0:0*/ __PVT__squash_w;
        CData/*0:0*/ __PVT__dual_issue_w;
        CData/*1:0*/ __PVT__priv_x_q;
        CData/*0:0*/ __PVT__mispredicted_r;
        CData/*0:0*/ __PVT__slot0_valid_r;
        CData/*0:0*/ __PVT__slot1_valid_r;
        CData/*0:0*/ __PVT__opcode_a_valid_r;
        CData/*0:0*/ __PVT__opcode_b_valid_r;
        CData/*1:0*/ __PVT__opcode_a_fault_r;
        CData/*1:0*/ __PVT__opcode_b_fault_r;
        CData/*0:0*/ __PVT__issue_a_sb_alloc_w;
        CData/*0:0*/ __PVT__issue_a_exec_w;
        CData/*0:0*/ __PVT__issue_a_lsu_w;
        CData/*0:0*/ __PVT__issue_a_mul_w;
        CData/*0:0*/ __PVT__issue_a_div_w;
        CData/*0:0*/ __PVT__issue_a_csr_w;
        CData/*0:0*/ __PVT__pipe0_squash_e1_e2_w;
        CData/*0:0*/ __PVT__pipe1_squash_e1_e2_w;
        CData/*0:0*/ __PVT__opcode_a_issue_r;
        CData/*0:0*/ __PVT__opcode_a_accept_r;
        CData/*0:0*/ __PVT__pipe0_stall_raw_w;
        CData/*4:0*/ __PVT__pipe0_rd_e1_w;
        CData/*4:0*/ __PVT__pipe0_rd_e2_w;
        CData/*0:0*/ __PVT__pipe0_valid_wb_w;
        CData/*4:0*/ __PVT__pipe0_rd_wb_w;
        CData/*5:0*/ __PVT__issue_a_fault_w;
        CData/*0:0*/ __PVT__opcode_b_issue_r;
        CData/*0:0*/ __PVT__opcode_b_accept_r;
        CData/*0:0*/ __PVT__pipe1_stall_raw_w;
        CData/*4:0*/ __PVT__pipe1_rd_e1_w;
        CData/*4:0*/ __PVT__pipe1_rd_e2_w;
        CData/*0:0*/ __PVT__pipe1_valid_wb_w;
        CData/*4:0*/ __PVT__pipe1_rd_wb_w;
        CData/*5:0*/ __PVT__issue_b_fault_w;
        CData/*0:0*/ __PVT__div_pending_q;
        CData/*0:0*/ __PVT__csr_pending_q;
        CData/*0:0*/ __PVT__pipe1_mux_lsu_r;
    };
    struct {
        CData/*0:0*/ __PVT__pipe1_mux_mul_r;
        CData/*0:0*/ __VdfgRegularize_h47f1efe9_0_0;
        CData/*0:0*/ __VdfgRegularize_h47f1efe9_0_2;
        CData/*0:0*/ __VdfgRegularize_hf12f852d_0_0;
        CData/*0:0*/ __PVT__u_pipe0_ctrl__DOT__valid_e1_q;
        CData/*5:0*/ __PVT__u_pipe0_ctrl__DOT__exception_e1_q;
        CData/*0:0*/ __PVT__u_pipe0_ctrl__DOT__valid_e2_q;
        CData/*0:0*/ __PVT__u_pipe0_ctrl__DOT__csr_wr_e2_q;
        CData/*5:0*/ __PVT__u_pipe0_ctrl__DOT__exception_e2_q;
        CData/*0:0*/ __PVT__u_pipe0_ctrl__DOT__valid_e2_w;
        CData/*0:0*/ __PVT__u_pipe0_ctrl__DOT__load_store_e2_w;
        CData/*5:0*/ __PVT__u_pipe0_ctrl__DOT__exception_e2_r;
        CData/*0:0*/ __PVT__u_pipe0_ctrl__DOT__squash_e1_e2_q;
        CData/*0:0*/ __PVT__u_pipe0_ctrl__DOT__valid_wb_q;
        CData/*0:0*/ __PVT__u_pipe0_ctrl__DOT__csr_wr_wb_q;
        CData/*5:0*/ __PVT__u_pipe0_ctrl__DOT__exception_wb_q;
        CData/*0:0*/ __PVT__u_pipe1_ctrl__DOT__valid_e1_q;
        CData/*5:0*/ __PVT__u_pipe1_ctrl__DOT__exception_e1_q;
        CData/*0:0*/ __PVT__u_pipe1_ctrl__DOT__valid_e2_q;
        CData/*0:0*/ __PVT__u_pipe1_ctrl__DOT__csr_wr_e2_q;
        CData/*5:0*/ __PVT__u_pipe1_ctrl__DOT__exception_e2_q;
        CData/*0:0*/ __PVT__u_pipe1_ctrl__DOT__valid_e2_w;
        CData/*0:0*/ __PVT__u_pipe1_ctrl__DOT__load_store_e2_w;
        CData/*5:0*/ __PVT__u_pipe1_ctrl__DOT__exception_e2_r;
        CData/*0:0*/ __PVT__u_pipe1_ctrl__DOT__squash_e1_e2_q;
        CData/*0:0*/ __PVT__u_pipe1_ctrl__DOT__valid_wb_q;
        CData/*0:0*/ __PVT__u_pipe1_ctrl__DOT__csr_wr_wb_q;
        CData/*5:0*/ __PVT__u_pipe1_ctrl__DOT__exception_wb_q;
        VL_OUT16(__PVT__csr_writeback_waddr_o,11,0);
        SData/*9:0*/ __PVT__u_pipe0_ctrl__DOT__ctrl_e1_q;
        SData/*9:0*/ __PVT__u_pipe0_ctrl__DOT__ctrl_e2_q;
        SData/*9:0*/ __PVT__u_pipe0_ctrl__DOT__ctrl_wb_q;
        SData/*9:0*/ __PVT__u_pipe1_ctrl__DOT__ctrl_e1_q;
        SData/*9:0*/ __PVT__u_pipe1_ctrl__DOT__ctrl_e2_q;
        SData/*9:0*/ __PVT__u_pipe1_ctrl__DOT__ctrl_wb_q;
        SData/*9:0*/ __Vdly__u_pipe0_ctrl__DOT__ctrl_e1_q;
        VL_IN(__PVT__fetch0_instr_i,31,0);
        VL_IN(__PVT__fetch0_pc_i,31,0);
        VL_IN(__PVT__fetch1_instr_i,31,0);
        VL_IN(__PVT__fetch1_pc_i,31,0);
        VL_IN(__PVT__branch_exec0_source_i,31,0);
        VL_IN(__PVT__branch_exec0_pc_i,31,0);
        VL_IN(__PVT__branch_d_exec0_pc_i,31,0);
        VL_IN(__PVT__branch_exec1_source_i,31,0);
        VL_IN(__PVT__branch_exec1_pc_i,31,0);
        VL_IN(__PVT__branch_d_exec1_pc_i,31,0);
        VL_IN(__PVT__branch_csr_pc_i,31,0);
        VL_IN(__PVT__writeback_exec0_value_i,31,0);
        VL_IN(__PVT__writeback_exec1_value_i,31,0);
        VL_IN(__PVT__writeback_mem_value_i,31,0);
        VL_IN(__PVT__writeback_mul_value_i,31,0);
        VL_IN(__PVT__writeback_div_value_i,31,0);
        VL_IN(__PVT__csr_result_e1_value_i,31,0);
        VL_IN(__PVT__csr_result_e1_wdata_i,31,0);
        VL_OUT(__PVT__branch_pc_o,31,0);
        VL_OUT(__PVT__branch_info_source_o,31,0);
        VL_OUT(__PVT__branch_info_pc_o,31,0);
        VL_OUT(__PVT__opcode0_opcode_o,31,0);
        VL_OUT(__PVT__opcode0_pc_o,31,0);
        VL_OUT(__PVT__opcode0_ra_operand_o,31,0);
        VL_OUT(__PVT__opcode0_rb_operand_o,31,0);
        VL_OUT(__PVT__opcode1_opcode_o,31,0);
        VL_OUT(__PVT__opcode1_pc_o,31,0);
        VL_OUT(__PVT__opcode1_ra_operand_o,31,0);
    };
    struct {
        VL_OUT(__PVT__opcode1_rb_operand_o,31,0);
        VL_OUT(__PVT__lsu_opcode_opcode_o,31,0);
        VL_OUT(__PVT__lsu_opcode_pc_o,31,0);
        VL_OUT(__PVT__lsu_opcode_ra_operand_o,31,0);
        VL_OUT(__PVT__lsu_opcode_rb_operand_o,31,0);
        VL_OUT(__PVT__mul_opcode_opcode_o,31,0);
        VL_OUT(__PVT__mul_opcode_pc_o,31,0);
        VL_OUT(__PVT__mul_opcode_ra_operand_o,31,0);
        VL_OUT(__PVT__mul_opcode_rb_operand_o,31,0);
        VL_OUT(__PVT__csr_opcode_opcode_o,31,0);
        VL_OUT(__PVT__csr_opcode_pc_o,31,0);
        VL_OUT(__PVT__csr_opcode_ra_operand_o,31,0);
        VL_OUT(__PVT__csr_opcode_rb_operand_o,31,0);
        VL_OUT(__PVT__csr_writeback_wdata_o,31,0);
        VL_OUT(__PVT__csr_writeback_exception_pc_o,31,0);
        VL_OUT(__PVT__csr_writeback_exception_addr_o,31,0);
        IData/*31:0*/ __PVT__pc_x_q;
        IData/*31:0*/ __PVT__opcode_a_r;
        IData/*31:0*/ __PVT__opcode_b_r;
        IData/*31:0*/ __PVT__opcode_a_pc_r;
        IData/*31:0*/ __PVT__opcode_b_pc_r;
        IData/*31:0*/ __PVT__scoreboard_r;
        IData/*31:0*/ __PVT__issue_a_ra_value_w;
        IData/*31:0*/ __PVT__issue_a_rb_value_w;
        IData/*31:0*/ __PVT__issue_b_ra_value_w;
        IData/*31:0*/ __PVT__issue_b_rb_value_w;
        IData/*31:0*/ __PVT__issue_a_ra_value_r;
        IData/*31:0*/ __PVT__issue_a_rb_value_r;
        IData/*31:0*/ __PVT__issue_b_ra_value_r;
        IData/*31:0*/ __PVT__issue_b_rb_value_r;
        IData/*31:0*/ __PVT__u_pipe0_ctrl__DOT__pc_e1_q;
        IData/*31:0*/ __PVT__u_pipe0_ctrl__DOT__npc_e1_q;
        IData/*31:0*/ __PVT__u_pipe0_ctrl__DOT__opcode_e1_q;
        IData/*31:0*/ __PVT__u_pipe0_ctrl__DOT__operand_ra_e1_q;
        IData/*31:0*/ __PVT__u_pipe0_ctrl__DOT__operand_rb_e1_q;
        IData/*31:0*/ __PVT__u_pipe0_ctrl__DOT__csr_wdata_e2_q;
        IData/*31:0*/ __PVT__u_pipe0_ctrl__DOT__result_e2_q;
        IData/*31:0*/ __PVT__u_pipe0_ctrl__DOT__pc_e2_q;
        IData/*31:0*/ __PVT__u_pipe0_ctrl__DOT__npc_e2_q;
        IData/*31:0*/ __PVT__u_pipe0_ctrl__DOT__opcode_e2_q;
        IData/*31:0*/ __PVT__u_pipe0_ctrl__DOT__operand_ra_e2_q;
        IData/*31:0*/ __PVT__u_pipe0_ctrl__DOT__operand_rb_e2_q;
        IData/*31:0*/ __PVT__u_pipe0_ctrl__DOT__result_e2_r;
        IData/*31:0*/ __PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q;
        IData/*31:0*/ __PVT__u_pipe0_ctrl__DOT__result_wb_q;
        IData/*31:0*/ __PVT__u_pipe0_ctrl__DOT__pc_wb_q;
        IData/*31:0*/ __PVT__u_pipe0_ctrl__DOT__npc_wb_q;
        IData/*31:0*/ __PVT__u_pipe0_ctrl__DOT__opcode_wb_q;
        IData/*31:0*/ __PVT__u_pipe0_ctrl__DOT__operand_ra_wb_q;
        IData/*31:0*/ __PVT__u_pipe0_ctrl__DOT__operand_rb_wb_q;
        IData/*31:0*/ __PVT__u_pipe1_ctrl__DOT__pc_e1_q;
        IData/*31:0*/ __PVT__u_pipe1_ctrl__DOT__npc_e1_q;
        IData/*31:0*/ __PVT__u_pipe1_ctrl__DOT__opcode_e1_q;
        IData/*31:0*/ __PVT__u_pipe1_ctrl__DOT__operand_ra_e1_q;
        IData/*31:0*/ __PVT__u_pipe1_ctrl__DOT__operand_rb_e1_q;
        IData/*31:0*/ __PVT__u_pipe1_ctrl__DOT__csr_wdata_e2_q;
        IData/*31:0*/ __PVT__u_pipe1_ctrl__DOT__result_e2_q;
        IData/*31:0*/ __PVT__u_pipe1_ctrl__DOT__pc_e2_q;
        IData/*31:0*/ __PVT__u_pipe1_ctrl__DOT__npc_e2_q;
        IData/*31:0*/ __PVT__u_pipe1_ctrl__DOT__opcode_e2_q;
        IData/*31:0*/ __PVT__u_pipe1_ctrl__DOT__operand_ra_e2_q;
        IData/*31:0*/ __PVT__u_pipe1_ctrl__DOT__operand_rb_e2_q;
        IData/*31:0*/ __PVT__u_pipe1_ctrl__DOT__result_e2_r;
        IData/*31:0*/ __PVT__u_pipe1_ctrl__DOT__csr_wdata_wb_q;
    };
    struct {
        IData/*31:0*/ __PVT__u_pipe1_ctrl__DOT__result_wb_q;
        IData/*31:0*/ __PVT__u_pipe1_ctrl__DOT__pc_wb_q;
        IData/*31:0*/ __PVT__u_pipe1_ctrl__DOT__npc_wb_q;
        IData/*31:0*/ __PVT__u_pipe1_ctrl__DOT__opcode_wb_q;
        IData/*31:0*/ __PVT__u_pipe1_ctrl__DOT__operand_ra_wb_q;
        IData/*31:0*/ __PVT__u_pipe1_ctrl__DOT__operand_rb_wb_q;
    };

    // INTERNAL VARIABLES
    Vriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_top_biriscv_issue(Vriscv_top__Syms* symsp, const char* v__name);
    ~Vriscv_top_biriscv_issue();
    VL_UNCOPYABLE(Vriscv_top_biriscv_issue);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    uint32_t complete_exception();
    uint32_t complete_opcode0();
    uint32_t complete_opcode1();
    uint32_t complete_pc0();
    uint32_t complete_pc1();
    uint32_t complete_ra0();
    uint32_t complete_ra1();
    uint32_t complete_ra_val0();
    uint32_t complete_ra_val1();
    uint32_t complete_rb0();
    uint32_t complete_rb1();
    uint32_t complete_rb_val0();
    uint32_t complete_rb_val1();
    uint32_t complete_rd0();
    uint32_t complete_rd1();
    uint32_t complete_rd_val0();
    uint32_t complete_rd_val1();
    bool complete_valid0();
    bool complete_valid1();
};


#endif  // guard
