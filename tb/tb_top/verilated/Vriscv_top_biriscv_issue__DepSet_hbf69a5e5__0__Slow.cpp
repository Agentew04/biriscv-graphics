// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_biriscv_issue.h"

VL_ATTR_COLD void Vriscv_top_biriscv_issue___stl_sequent__TOP__v__u_core__u_issue__0(Vriscv_top_biriscv_issue* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vriscv_top_biriscv_issue___stl_sequent__TOP__v__u_core__u_issue__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hf12f852d_0_0 = (((IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_ntaken_q) 
                                                 | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_taken_q)) 
                                                & ((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                                   >> 6U));
    vlSelfRef.__PVT__pipe0_rd_e1_w = (0x1fU & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                                              >> 7U)))) 
                                               & (vlSelfRef.__PVT__u_pipe0_ctrl__DOT__opcode_e1_q 
                                                  >> 7U)));
    vlSelfRef.__PVT__pipe1_rd_e1_w = (0x1fU & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                                              >> 7U)))) 
                                               & (vlSelfRef.__PVT__u_pipe1_ctrl__DOT__opcode_e1_q 
                                                  >> 7U)));
    vlSelfRef.__PVT__u_pipe0_ctrl__DOT__load_store_e2_w 
        = (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__u_pipe0_ctrl__DOT__ctrl_e2_q))));
    vlSelfRef.__PVT__u_pipe1_ctrl__DOT__load_store_e2_w 
        = (IData)((0U != (6U & (IData)(vlSelfRef.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q))));
    vlSelfRef.__VdfgRegularize_h47f1efe9_0_2 = ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_branch_w) 
                                                | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_exec_w));
}
