// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vriscv_top__Syms.h"


void Vriscv_top___024root__trace_chg_0_sub_0(Vriscv_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vriscv_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_chg_0\n"); );
    // Init
    Vriscv_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_top___024root*>(voidSelf);
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vriscv_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vriscv_top___024root__trace_chg_0_sub_0(Vriscv_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_chg_0_sub_0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.__Vcellinp__v__clk_i));
        bufp->chgBit(oldp+1,(vlSelfRef.__Vcellinp__v__rst_i));
        bufp->chgBit(oldp+2,(vlSelfRef.__Vcellinp__v__axi_i_awready_i));
        bufp->chgBit(oldp+3,(vlSelfRef.__Vcellinp__v__axi_i_wready_i));
        bufp->chgBit(oldp+4,(vlSelfRef.__Vcellinp__v__axi_i_bvalid_i));
        bufp->chgCData(oldp+5,(vlSelfRef.__Vcellinp__v__axi_i_bresp_i),2);
        bufp->chgCData(oldp+6,(vlSelfRef.__Vcellinp__v__axi_i_bid_i),4);
        bufp->chgBit(oldp+7,(vlSelfRef.__Vcellinp__v__axi_i_arready_i));
        bufp->chgBit(oldp+8,(vlSelfRef.__Vcellinp__v__axi_i_rvalid_i));
        bufp->chgIData(oldp+9,(vlSelfRef.__Vcellinp__v__axi_i_rdata_i),32);
        bufp->chgCData(oldp+10,(vlSelfRef.__Vcellinp__v__axi_i_rresp_i),2);
        bufp->chgCData(oldp+11,(vlSelfRef.__Vcellinp__v__axi_i_rid_i),4);
        bufp->chgBit(oldp+12,(vlSelfRef.__Vcellinp__v__axi_i_rlast_i));
        bufp->chgBit(oldp+13,(vlSelfRef.__Vcellinp__v__axi_d_awready_i));
        bufp->chgBit(oldp+14,(vlSelfRef.__Vcellinp__v__axi_d_wready_i));
        bufp->chgBit(oldp+15,(vlSelfRef.__Vcellinp__v__axi_d_bvalid_i));
        bufp->chgCData(oldp+16,(vlSelfRef.__Vcellinp__v__axi_d_bresp_i),2);
        bufp->chgCData(oldp+17,(vlSelfRef.__Vcellinp__v__axi_d_bid_i),4);
        bufp->chgBit(oldp+18,(vlSelfRef.__Vcellinp__v__axi_d_arready_i));
        bufp->chgBit(oldp+19,(vlSelfRef.__Vcellinp__v__axi_d_rvalid_i));
        bufp->chgIData(oldp+20,(vlSelfRef.__Vcellinp__v__axi_d_rdata_i),32);
        bufp->chgCData(oldp+21,(vlSelfRef.__Vcellinp__v__axi_d_rresp_i),2);
        bufp->chgCData(oldp+22,(vlSelfRef.__Vcellinp__v__axi_d_rid_i),4);
        bufp->chgBit(oldp+23,(vlSelfRef.__Vcellinp__v__axi_d_rlast_i));
        bufp->chgBit(oldp+24,(vlSelfRef.__Vcellinp__v__intr_i));
        bufp->chgIData(oldp+25,(vlSelfRef.__Vcellinp__v__reset_vector_i),32);
        bufp->chgBit(oldp+26,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_error_w));
        bufp->chgBit(oldp+27,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_ack_w));
        bufp->chgBit(oldp+28,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__resp_pop_w));
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [4U]) | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgBit(oldp+29,(vlSymsp->TOP__v.__PVT__dcache_ack_w));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__v.__PVT__dcache_rd_w));
        bufp->chgBit(oldp+31,(vlSymsp->TOP__v.__PVT__dcache_accept_w));
        bufp->chgCData(oldp+32,(vlSymsp->TOP__v.__PVT__dcache_wr_w),4);
        bufp->chgIData(oldp+33,((0xfffffff8U & vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w)),32);
        bufp->chgCData(oldp+34,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_len_w),8);
        bufp->chgCData(oldp+35,(((IData)(vlSymsp->TOP__v__u_dcache.u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_4)
                                  ? (IData)(vlSymsp->TOP__v.__PVT__dcache_wr_w)
                                  : 0U)),4);
        bufp->chgCData(oldp+36,(((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_select_w)
                                  ? (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_len_w)
                                  : 0U)),8);
        bufp->chgBit(oldp+37,(vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_accept_w));
        bufp->chgIData(oldp+38,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_addr_w),32);
        bufp->chgBit(oldp+39,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_rd_w));
        bufp->chgIData(oldp+40,(((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_select_w)
                                  ? vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_addr_w
                                  : (0xfffffffcU & 
                                     vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                     [vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][0U]))),32);
        bufp->chgBit(oldp+41,(vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_rd_w));
        bufp->chgCData(oldp+42,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_wr_w),4);
        bufp->chgBit(oldp+43,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_rd_w));
        bufp->chgCData(oldp+44,(vlSymsp->TOP__v__u_dcache.__PVT__mem_uncached_wr_w),4);
        bufp->chgBit(oldp+45,(vlSymsp->TOP__v__u_dcache.__PVT__mem_uncached_rd_w));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__req_push_w));
        bufp->chgBit(oldp+47,(vlSymsp->TOP__v__u_dcache.__PVT__u_mux__DOT__request_w));
        bufp->chgCData(oldp+48,(vlSymsp->TOP__v__u_dcache.__PVT__u_mux__DOT__pending_r),5);
        bufp->chgBit(oldp+49,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__request_w));
        bufp->chgBit(oldp+50,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__req_push_w));
        bufp->chgBit(oldp+51,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__res_push_w));
        __Vtemp_1[0U] = (IData)((((QData)((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_wr_q)) 
                                  << 0x20U) | (QData)((IData)(
                                                              (0xfffffffcU 
                                                               & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q)))));
        __Vtemp_1[1U] = (IData)(((((QData)((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_wr_q)) 
                                   << 0x20U) | (QData)((IData)(
                                                               (0xfffffffcU 
                                                                & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q)))) 
                                 >> 0x20U));
        __Vtemp_1[2U] = (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__drop_req_w) 
                          << 5U) | (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__mem_uncached_rd_w) 
                                     << 4U) | (IData)(vlSymsp->TOP__v__u_dcache.__PVT__mem_uncached_wr_w)));
        bufp->chgWData(oldp+52,(__Vtemp_1),70);
        bufp->chgCData(oldp+55,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w 
                                          >> 5U))),8);
        bufp->chgSData(oldp+56,((0x3ffU & (vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w 
                                           >> 3U))),10);
        bufp->chgCData(oldp+57,(vlSymsp->TOP__v__u_icache.__PVT__tag_addr_r),8);
        bufp->chgSData(oldp+58,(vlSymsp->TOP__v__u_icache.__PVT__data_addr_r),10);
        bufp->chgCData(oldp+59,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                          >> 7U))),5);
        bufp->chgCData(oldp+60,((0x1fU & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_mul_r)
                                           ? (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                              >> 7U)
                                           : (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                              >> 7U)))),5);
        bufp->chgIData(oldp+61,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_lsu_r)
                                  ? vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r
                                  : vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r)),32);
        bufp->chgBit(oldp+62,(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w));
        bufp->chgBit(oldp+63,(vlSymsp->TOP__v__u_core.__PVT__mul_opcode_valid_w));
        bufp->chgIData(oldp+64,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r),32);
        bufp->chgBit(oldp+65,(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_invalid_w));
        bufp->chgCData(oldp+66,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                          >> 7U))),5);
        bufp->chgBit(oldp+67,(vlSymsp->TOP__v__u_core.__PVT__branch_request_w));
        bufp->chgBit(oldp+68,(vlSymsp->TOP__v__u_core.__PVT__writeback_mem_valid_w));
        bufp->chgIData(oldp+69,(vlSymsp->TOP__v__u_core.__PVT__mul_opcode_opcode_w),32);
        bufp->chgCData(oldp+70,((0x1fU & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_mul_r)
                                           ? (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                              >> 0xfU)
                                           : (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                              >> 0xfU)))),5);
        bufp->chgCData(oldp+71,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+72,(vlSymsp->TOP__v__u_core.__PVT__lsu_stall_w));
        bufp->chgIData(oldp+73,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r),32);
        bufp->chgCData(oldp+74,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                          >> 0xfU))),5);
        bufp->chgIData(oldp+75,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_mul_r)
                                  ? vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r
                                  : vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r)),32);
        bufp->chgBit(oldp+76,(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w));
        bufp->chgBit(oldp+77,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r));
        bufp->chgBit(oldp+78,(((~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q)) 
                               & (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_accept_r) 
                                   & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot0_valid_r)) 
                                  | (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot1_valid_r)))));
        bufp->chgBit(oldp+79,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__csr_pending_q) 
                               | (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_csr_w))));
        bufp->chgIData(oldp+80,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r),32);
        bufp->chgCData(oldp+81,((0x1fU & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_mul_r)
                                           ? (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                              >> 0x14U)
                                           : (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                              >> 0x14U)))),5);
        bufp->chgIData(oldp+82,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r),32);
        bufp->chgCData(oldp+83,((0x1fU & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_lsu_r)
                                           ? (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                              >> 7U)
                                           : (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                              >> 7U)))),5);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w),32);
        bufp->chgCData(oldp+85,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                          >> 0xfU))),5);
        bufp->chgBit(oldp+86,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_issue_r));
        bufp->chgBit(oldp+87,(((~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q)) 
                               & (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_accept_r) 
                                   & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot1_valid_r)) 
                                  | (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_accept_r)))));
        bufp->chgCData(oldp+88,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                          >> 0x14U))),5);
        bufp->chgBit(oldp+89,(vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_valid_w));
        bufp->chgBit(oldp+90,(vlSymsp->TOP__v__u_core__u_issue.__PVT__mispredicted_r));
        bufp->chgCData(oldp+91,((0x1fU & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_lsu_r)
                                           ? (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                              >> 0x14U)
                                           : (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                              >> 0x14U)))),5);
        bufp->chgCData(oldp+92,((0x1fU & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_lsu_r)
                                           ? (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                              >> 0xfU)
                                           : (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                              >> 0xfU)))),5);
        bufp->chgBit(oldp+93,((0x2004033U == (0xfe00707fU 
                                              & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))));
        bufp->chgBit(oldp+94,((0x2005033U == (0xfe00707fU 
                                              & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))));
        bufp->chgBit(oldp+95,((0x2006033U == (0xfe00707fU 
                                              & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))));
        bufp->chgBit(oldp+96,((0x2007033U == (0xfe00707fU 
                                              & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))));
        bufp->chgBit(oldp+97,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_operation_w) 
                               | ((0x2006033U == (0xfe00707fU 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                                  | (0x2007033U == 
                                     (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))))));
        bufp->chgBit(oldp+98,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__signed_operation_w));
        bufp->chgBit(oldp+99,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_operation_w));
        bufp->chgBit(oldp+100,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r) 
                                & ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_operation_w) 
                                   | ((0x2006033U == 
                                       (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                                      | (0x2007033U 
                                         == (0xfe00707fU 
                                             & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))))));
        bufp->chgIData(oldp+101,((0xfffff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)),32);
        bufp->chgIData(oldp+102,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__imm12_r),32);
        bufp->chgIData(oldp+103,((((- (IData)((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                               >> 0x1fU))) 
                                   << 0xdU) | (((0x1000U 
                                                 & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                    >> 0x13U)) 
                                                | (0x800U 
                                                   & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                      << 4U))) 
                                               | ((0x7e0U 
                                                   & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                        >> 7U)))))),32);
        bufp->chgIData(oldp+104,((((- (IData)((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                               >> 0x1fU))) 
                                   << 0x14U) | (((0xff000U 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r) 
                                                 | (0x800U 
                                                    & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                       >> 9U))) 
                                                | (0x7feU 
                                                   & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                      >> 0x14U))))),32);
        bufp->chgIData(oldp+105,((0xfffff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)),32);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__imm12_r),32);
        bufp->chgIData(oldp+107,((((- (IData)((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                               >> 0x1fU))) 
                                   << 0xdU) | (((0x1000U 
                                                 & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                    >> 0x13U)) 
                                                | (0x800U 
                                                   & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                      << 4U))) 
                                               | ((0x7e0U 
                                                   & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                        >> 7U)))))),32);
        bufp->chgIData(oldp+108,((((- (IData)((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                               >> 0x1fU))) 
                                   << 0x14U) | (((0xff000U 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r) 
                                                 | (0x800U 
                                                    & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                       >> 9U))) 
                                                | (0x7feU 
                                                   & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                      >> 0x14U))))),32);
        bufp->chgIData(oldp+109,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w)
                                   ? vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q
                                  [vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q]
                                   : ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_npc__DOT____VdfgRegularize_he46ab735_0_1)
                                       ? vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r
                                       : ((IData)(8U) 
                                          + (0xfffffff8U 
                                             & vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w))))),32);
        bufp->chgCData(oldp+110,(((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_npc__DOT____VdfgRegularize_he46ab735_0_2)
                                   ? ((4U & vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w)
                                       ? ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r) 
                                          << 1U) : 
                                      (((IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r) 
                                        << 1U) | (1U 
                                                  & (~ (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r)))))
                                   : 0U)),2);
        bufp->chgIData(oldp+111,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w),32);
        bufp->chgBit(oldp+112,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop1_w));
        bufp->chgBit(oldp+113,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop2_w));
        bufp->chgBit(oldp+114,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop_complete_w));
        bufp->chgBit(oldp+115,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__branch_w));
        bufp->chgIData(oldp+116,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__branch_pc_w),32);
        bufp->chgBit(oldp+117,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r));
        bufp->chgBit(oldp+118,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r));
        bufp->chgBit(oldp+119,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r));
        bufp->chgBit(oldp+120,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r));
        bufp->chgCData(oldp+121,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_r),3);
        bufp->chgBit(oldp+122,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_call_pred_w));
        bufp->chgBit(oldp+123,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w));
        bufp->chgSData(oldp+124,((0x1ffU & (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__mispredicted_r)
                                              ? (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q)
                                              : (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q)) 
                                            ^ (vlSymsp->TOP__v__u_core.__PVT__branch_info_source_w 
                                               >> 2U)))),9);
        bufp->chgSData(oldp+125,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q) 
                                  ^ ((0x1feU & (vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w 
                                                >> 2U)) 
                                     | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r)))),9);
        bufp->chgSData(oldp+126,(((0x1feU & (vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w 
                                             >> 2U)) 
                                  | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r))),9);
        bufp->chgBit(oldp+127,((2U <= vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q
                                [((0x1feU & (vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w 
                                             >> 2U)) 
                                  | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r))])));
        bufp->chgIData(oldp+128,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r),32);
        bufp->chgBit(oldp+129,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r));
        bufp->chgCData(oldp+130,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r),5);
        bufp->chgIData(oldp+131,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0),32);
        bufp->chgCData(oldp+132,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r),5);
        bufp->chgBit(oldp+133,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r));
        bufp->chgBit(oldp+134,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_miss_r));
        bufp->chgIData(oldp+135,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1),32);
        bufp->chgBit(oldp+136,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__issue_lsu_e1_w));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__complete_ok_e2_w));
        bufp->chgBit(oldp+138,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__complete_err_e2_w));
        bufp->chgBit(oldp+139,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__delay_lsu_e2_w));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__load_inst_w));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__load_signed_inst_w));
        bufp->chgBit(oldp+142,(((0x23U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w)) 
                                | ((0x1023U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w)) 
                                   | (0x2023U == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w))))));
        bufp->chgBit(oldp+143,(((3U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w)) 
                                | (0x4003U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w)))));
        bufp->chgBit(oldp+144,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__req_lh_w));
        bufp->chgBit(oldp+145,(((0x2003U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w)) 
                                | (0x6003U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w)))));
        bufp->chgBit(oldp+146,((0x23U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w))));
        bufp->chgBit(oldp+147,((0x1023U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w))));
        bufp->chgBit(oldp+148,((0x2023U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w))));
        bufp->chgBit(oldp+149,(((0x2023U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w)) 
                                | ((0x2003U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w)) 
                                   | (0x6003U == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w))))));
        bufp->chgBit(oldp+150,(((0x1023U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w)) 
                                | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__req_lh_w))));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__dcache_flush_w));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__dcache_writeback_w));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__dcache_invalidate_w));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellinp__u_lsu_request__push_i));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mult_inst_w));
        bufp->chgCData(oldp+156,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__next_state_r),4);
        bufp->chgCData(oldp+157,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag_addr_x_r),8);
        bufp->chgBit(oldp+158,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag0_write_m_r));
        bufp->chgBit(oldp+159,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag1_write_m_r));
        bufp->chgSData(oldp+160,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_addr_x_r),11);
        bufp->chgSData(oldp+161,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_addr_m_r),11);
        bufp->chgCData(oldp+162,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data0_write_m_r),4);
        bufp->chgCData(oldp+163,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data1_write_m_r),4);
        bufp->chgBit(oldp+164,(((6U != (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__state_q)) 
                                & (6U == (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__next_state_r)))));
        bufp->chgBit(oldp+165,(vlSymsp->TOP__v__u_core__u_issue.__PVT__squash_w));
        bufp->chgBit(oldp+166,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_accept_r) 
                                & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r) 
                                   & ((~ (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__dual_issue_w)) 
                                      & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q)))))));
        bufp->chgBit(oldp+167,(vlSymsp->TOP__v__u_core__u_issue.__PVT__dual_issue_w));
        bufp->chgBit(oldp+168,(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot0_valid_r));
        bufp->chgBit(oldp+169,(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot1_valid_r));
        bufp->chgBit(oldp+170,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_valid_r));
        bufp->chgBit(oldp+171,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_valid_r));
        bufp->chgCData(oldp+172,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_fault_r),2);
        bufp->chgCData(oldp+173,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_fault_r),2);
        bufp->chgBit(oldp+174,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_sb_alloc_w));
        bufp->chgBit(oldp+175,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_exec_w));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_lsu_w));
        bufp->chgBit(oldp+177,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot0_valid_r)
                                 ? ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_55) 
                                    | ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_62) 
                                       | ((0x4063U 
                                           == (0x707fU 
                                               & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                          | ((0x5063U 
                                              == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                             | (IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_61)))))
                                 : (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_branch_w))));
        bufp->chgBit(oldp+178,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_mul_w));
        bufp->chgBit(oldp+179,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_div_w));
        bufp->chgBit(oldp+180,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_csr_w));
        bufp->chgBit(oldp+181,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot0_valid_r)
                                 ? (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_invalid_w)
                                 : (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_invalid_w))));
        bufp->chgBit(oldp+182,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_squash_e1_e2_w));
        bufp->chgBit(oldp+183,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_squash_e1_e2_w));
        bufp->chgBit(oldp+184,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_accept_r));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_stall_raw_w));
        bufp->chgCData(oldp+186,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_e2_w),5);
        bufp->chgBit(oldp+187,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_valid_wb_w));
        bufp->chgBit(oldp+188,((1U & ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)) 
                                      & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_wb_q) 
                                         >> 3U)))));
        bufp->chgCData(oldp+189,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w),5);
        bufp->chgCData(oldp+190,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_fault_w),6);
        bufp->chgBit(oldp+191,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_accept_r));
        bufp->chgBit(oldp+192,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_stall_raw_w));
        bufp->chgCData(oldp+193,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_e2_w),5);
        bufp->chgBit(oldp+194,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_valid_wb_w));
        bufp->chgCData(oldp+195,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w),5);
        bufp->chgCData(oldp+196,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_fault_w),6);
        bufp->chgIData(oldp+197,(vlSymsp->TOP__v__u_core__u_issue.__PVT__scoreboard_r),32);
        bufp->chgBit(oldp+198,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_lsu_r));
        bufp->chgBit(oldp+199,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_mul_r));
        bufp->chgBit(oldp+200,((((IData)(vlSymsp->TOP__v__u_core__u_issue.__VdfgRegularize_h47f1efe9_0_2) 
                                 | ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_lsu_w) 
                                    | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_mul_w))) 
                                & ((~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q)) 
                                   & ((((IData)(vlSymsp->TOP__v__u_core__u_issue.__VdfgRegularize_h47f1efe9_0_0) 
                                        | (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_mul_w)) 
                                       & (IData)(vlSymsp->TOP__v__u_core__u_issue.__VdfgRegularize_h47f1efe9_0_2)) 
                                      | ((((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_exec_w) 
                                           | (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_mul_w)) 
                                          & (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_lsu_w)) 
                                         | ((IData)(vlSymsp->TOP__v__u_core__u_issue.__VdfgRegularize_h47f1efe9_0_0) 
                                            & (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_mul_w))))))));
        bufp->chgBit(oldp+201,((0U != (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__exception_e2_r))));
        bufp->chgBit(oldp+202,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__valid_e2_w));
        bufp->chgCData(oldp+203,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__exception_e2_r),6);
        bufp->chgBit(oldp+204,(((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)) 
                                & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_wb_q) 
                                   >> 9U))));
        bufp->chgBit(oldp+205,((1U & ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)) 
                                      & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_wb_q) 
                                         >> 3U)))));
        bufp->chgBit(oldp+206,((0U != (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__exception_e2_r))));
        bufp->chgBit(oldp+207,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__valid_e2_w));
        bufp->chgCData(oldp+208,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__exception_e2_r),6);
        bufp->chgBit(oldp+209,(((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)) 
                                & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_wb_q) 
                                   >> 9U))));
        bufp->chgBit(oldp+210,(((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                & (0x73U == vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))));
        bufp->chgBit(oldp+211,(((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                & (0x100073U == vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))));
        bufp->chgBit(oldp+212,(((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                & (0x200073U == (0xcfffffffU 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))));
        bufp->chgCData(oldp+213,((3U & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                        >> 0x1cU))),2);
        bufp->chgBit(oldp+214,(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrw_w));
        bufp->chgBit(oldp+215,(((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                & (0x2073U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))));
        bufp->chgBit(oldp+216,(((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                & (0x3073U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))));
        bufp->chgBit(oldp+217,(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrwi_w));
        bufp->chgBit(oldp+218,(((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                & (0x6073U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))));
        bufp->chgBit(oldp+219,(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrci_w));
        bufp->chgBit(oldp+220,(((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                & (0x10500073U == (0xffff8fffU 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))));
        bufp->chgBit(oldp+221,(((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                & (0xfU == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))));
        bufp->chgBit(oldp+222,(vlSymsp->TOP__v__u_core__u_csr.__PVT__sfence_w));
        bufp->chgBit(oldp+223,(vlSymsp->TOP__v__u_core__u_csr.__PVT__ifence_w));
        bufp->chgBit(oldp+224,((3U == (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+225,((IData)((((0U != (0xf8000U 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                                         | (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrw_w)) 
                                        | (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrwi_w)))));
        bufp->chgBit(oldp+226,(vlSymsp->TOP__v__u_core__u_csr.__PVT__set_r));
        bufp->chgBit(oldp+227,(vlSymsp->TOP__v__u_core__u_csr.__PVT__clr_r));
        bufp->chgBit(oldp+228,(vlSymsp->TOP__v__u_core__u_csr.__PVT__satp_update_w));
        bufp->chgIData(oldp+229,(vlSymsp->TOP__v__u_core__u_csr.__PVT__csr_rdata_w),32);
        bufp->chgBit(oldp+230,(vlSymsp->TOP__v__u_core__u_csr.__PVT__eret_fault_w));
        bufp->chgSData(oldp+231,((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+232,((((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                                 & ((0x344U == (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                >> 0x14U)) 
                                    | (0x144U == (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                  >> 0x14U)))) 
                                | (IData)(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_upd_q))));
        bufp->chgWData(oldp+233,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec0_verif.__PVT__dbg_inst_str),80);
        bufp->chgWData(oldp+236,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec0_verif.__PVT__dbg_inst_ra),80);
        bufp->chgWData(oldp+239,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec0_verif.__PVT__dbg_inst_rb),80);
        bufp->chgWData(oldp+242,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec0_verif.__PVT__dbg_inst_rd),80);
        bufp->chgIData(oldp+245,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec0_verif.__PVT__dbg_inst_imm),32);
        bufp->chgIData(oldp+246,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_valid_wb_w)
                                   ? vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__pc_wb_q
                                   : 0U)),32);
        bufp->chgWData(oldp+247,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif.__PVT__dbg_inst_str),80);
        bufp->chgWData(oldp+250,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif.__PVT__dbg_inst_ra),80);
        bufp->chgWData(oldp+253,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif.__PVT__dbg_inst_rb),80);
        bufp->chgWData(oldp+256,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif.__PVT__dbg_inst_rd),80);
        bufp->chgIData(oldp+259,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif.__PVT__dbg_inst_imm),32);
        bufp->chgIData(oldp+260,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_valid_wb_w)
                                   ? vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__pc_wb_q
                                   : 0U)),32);
        bufp->chgWData(oldp+261,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d.__PVT__dbg_inst_str),80);
        bufp->chgWData(oldp+264,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d.__PVT__dbg_inst_ra),80);
        bufp->chgWData(oldp+267,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d.__PVT__dbg_inst_rb),80);
        bufp->chgWData(oldp+270,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d.__PVT__dbg_inst_rd),80);
        bufp->chgIData(oldp+273,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d.__PVT__dbg_inst_imm),32);
        bufp->chgIData(oldp+274,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r)
                                   ? vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r
                                   : 0U)),32);
        bufp->chgWData(oldp+275,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb.__PVT__dbg_inst_str),80);
        bufp->chgWData(oldp+278,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb.__PVT__dbg_inst_ra),80);
        bufp->chgWData(oldp+281,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb.__PVT__dbg_inst_rb),80);
        bufp->chgWData(oldp+284,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb.__PVT__dbg_inst_rd),80);
        bufp->chgIData(oldp+287,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb.__PVT__dbg_inst_imm),32);
        bufp->chgWData(oldp+288,(vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d.__PVT__dbg_inst_str),80);
        bufp->chgWData(oldp+291,(vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d.__PVT__dbg_inst_ra),80);
        bufp->chgWData(oldp+294,(vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d.__PVT__dbg_inst_rb),80);
        bufp->chgWData(oldp+297,(vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d.__PVT__dbg_inst_rd),80);
        bufp->chgIData(oldp+300,(vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d.__PVT__dbg_inst_imm),32);
        bufp->chgIData(oldp+301,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_issue_r)
                                   ? vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r
                                   : 0U)),32);
        bufp->chgWData(oldp+302,(vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb.__PVT__dbg_inst_str),80);
        bufp->chgWData(oldp+305,(vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb.__PVT__dbg_inst_ra),80);
        bufp->chgWData(oldp+308,(vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb.__PVT__dbg_inst_rb),80);
        bufp->chgWData(oldp+311,(vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb.__PVT__dbg_inst_rd),80);
        bufp->chgIData(oldp+314,(vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb.__PVT__dbg_inst_imm),32);
    }
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity
                       [1U] | vlSelfRef.__Vm_traceActivity
                       [4U]) | vlSelfRef.__Vm_traceActivity
                      [9U])))) {
        bufp->chgIData(oldp+315,(vlSymsp->TOP__v.__PVT__dcache_data_rd_w),32);
        bufp->chgBit(oldp+316,(vlSymsp->TOP__v__u_core.__PVT__branch_d_exec1_request_w));
        bufp->chgIData(oldp+317,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r),32);
        bufp->chgIData(oldp+318,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__wb_result_r),32);
        bufp->chgIData(oldp+319,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r),32);
        bufp->chgIData(oldp+320,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_target_r),32);
        bufp->chgIData(oldp+321,(vlSymsp->TOP__v__u_core.__PVT__mul_opcode_rb_operand_w),32);
        bufp->chgIData(oldp+322,(vlSymsp->TOP__v__u_core.__PVT__mul_opcode_ra_operand_w),32);
        bufp->chgIData(oldp+323,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r),32);
        bufp->chgIData(oldp+324,(vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_ra_operand_w),32);
        bufp->chgIData(oldp+325,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r),32);
        bufp->chgBit(oldp+326,(vlSymsp->TOP__v__u_core.__PVT__branch_d_exec0_request_w));
        bufp->chgIData(oldp+327,(vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_rb_operand_w),32);
        bufp->chgIData(oldp+328,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_target_r),32);
        bufp->chgIData(oldp+329,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_a_r),32);
        bufp->chgIData(oldp+330,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_b_r),32);
        bufp->chgIData(oldp+331,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__less_than_signed__Vstatic__v),32);
        bufp->chgIData(oldp+332,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__greater_than_signed__Vstatic__v),32);
        bufp->chgBit(oldp+333,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_r));
        bufp->chgBit(oldp+334,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_taken_r));
        bufp->chgBit(oldp+335,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_call_r));
        bufp->chgBit(oldp+336,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_ret_r));
        bufp->chgBit(oldp+337,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_jmp_r));
        bufp->chgIData(oldp+338,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__sub_res_w),32);
        bufp->chgCData(oldp+339,((0xffU & vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_a_r)),8);
        bufp->chgCData(oldp+340,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_a_r 
                                           >> 8U))),8);
        bufp->chgCData(oldp+341,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_a_r 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+342,((vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_a_r 
                                  >> 0x18U)),8);
        bufp->chgIData(oldp+343,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_a_r),32);
        bufp->chgIData(oldp+344,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_b_r),32);
        bufp->chgIData(oldp+345,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__less_than_signed__Vstatic__v),32);
        bufp->chgIData(oldp+346,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__greater_than_signed__Vstatic__v),32);
        bufp->chgBit(oldp+347,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_r));
        bufp->chgBit(oldp+348,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_taken_r));
        bufp->chgBit(oldp+349,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_call_r));
        bufp->chgBit(oldp+350,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_ret_r));
        bufp->chgBit(oldp+351,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_jmp_r));
        bufp->chgIData(oldp+352,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__sub_res_w),32);
        bufp->chgCData(oldp+353,((0xffU & vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_a_r)),8);
        bufp->chgCData(oldp+354,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_a_r 
                                           >> 8U))),8);
        bufp->chgCData(oldp+355,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_a_r 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+356,((vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_a_r 
                                  >> 0x18U)),8);
        bufp->chgBit(oldp+357,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_valid_w));
        bufp->chgBit(oldp+358,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__push_w));
        bufp->chgBit(oldp+359,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__pred_taken_w));
        bufp->chgCData(oldp+360,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r),3);
        bufp->chgIData(oldp+361,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_r),32);
        bufp->chgBit(oldp+362,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_r));
        bufp->chgIData(oldp+363,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_r),32);
        bufp->chgBit(oldp+364,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_rd_r));
        bufp->chgCData(oldp+365,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_wr_r),4);
        bufp->chgCData(oldp+366,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__addr_lsb_r),2);
        bufp->chgBit(oldp+367,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__load_byte_r));
        bufp->chgBit(oldp+368,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__load_half_r));
        bufp->chgBit(oldp+369,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__load_signed_r));
        bufp->chgIData(oldp+370,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_e2_r),32);
        bufp->chgIData(oldp+371,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_e2_r),32);
        bufp->chgIData(oldp+372,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_w),32);
        bufp->chgIData(oldp+373,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_w),32);
        bufp->chgIData(oldp+374,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_w),32);
        bufp->chgIData(oldp+375,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_w),32);
        bufp->chgBit(oldp+376,(((IData)(vlSymsp->TOP__v__u_core.__PVT__branch_d_exec0_request_w) 
                                & (0U != (3U & vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_target_r)))));
        bufp->chgBit(oldp+377,(((IData)(vlSymsp->TOP__v__u_core.__PVT__branch_d_exec1_request_w) 
                                & (0U != (3U & vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_target_r)))));
        bufp->chgIData(oldp+378,(vlSymsp->TOP__v__u_core__u_csr.__PVT__data_r),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgBit(oldp+379,(vlSymsp->TOP__v.__PVT__dcache_error_w));
        bufp->chgBit(oldp+380,(((~ (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_pmem_mux__DOT__select_q)) 
                                & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_ack_w))));
        bufp->chgBit(oldp+381,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w));
        bufp->chgBit(oldp+382,(vlSymsp->TOP__v__u_dcache.__PVT__mem_uncached_ack_w));
        bufp->chgBit(oldp+383,(((~ (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_pmem_mux__DOT__select_q)) 
                                & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_error_w))));
        bufp->chgCData(oldp+384,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_uncached_wr_w),4);
        bufp->chgBit(oldp+385,(((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_error_w) 
                                & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_pmem_mux__DOT__select_q))));
        bufp->chgBit(oldp+386,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_uncached_rd_w));
        bufp->chgBit(oldp+387,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__accept_w));
        bufp->chgBit(oldp+388,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__res_push_w));
        bufp->chgBit(oldp+389,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__request_complete_w));
        bufp->chgBit(oldp+390,(((~ (IData)(vlSymsp->TOP__v__u_dcache.__PVT__mem_uncached_ack_w)) 
                                & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__request_pending_q))));
        bufp->chgBit(oldp+391,(((~ (IData)(vlSymsp->TOP__v__u_dcache.u_uncached__DOT____VdfgRegularize_h08c420ae_0_0)) 
                                & (IData)(vlSymsp->TOP__v__u_dcache.u_uncached__DOT____VdfgRegularize_h08c420ae_0_1))));
        bufp->chgBit(oldp+392,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__req_is_drop_w));
        bufp->chgBit(oldp+393,(vlSymsp->TOP__v__u_icache.__PVT__tag0_write_r));
        bufp->chgBit(oldp+394,(vlSymsp->TOP__v__u_icache.__PVT__tag1_write_r));
        bufp->chgBit(oldp+395,(((~ (IData)(vlSymsp->TOP__v__u_icache.__PVT__replace_way_q)) 
                                & (IData)(vlSelfRef.__Vcellinp__v__axi_i_rvalid_i))));
        bufp->chgBit(oldp+396,(((IData)(vlSelfRef.__Vcellinp__v__axi_i_rvalid_i) 
                                & (IData)(vlSymsp->TOP__v__u_icache.__PVT__replace_way_q))));
        bufp->chgIData(oldp+397,(((IData)(vlSymsp->TOP__v__u_core.__PVT__branch_csr_request_w)
                                   ? vlSymsp->TOP__v__u_core.__PVT__branch_csr_pc_w
                                   : vlSymsp->TOP__v__u_core__u_issue.__PVT__pc_x_q)),32);
        bufp->chgIData(oldp+398,(vlSymsp->TOP__v__u_core.__PVT__branch_csr_pc_w),32);
        bufp->chgCData(oldp+399,(vlSymsp->TOP__v__u_core.__PVT__writeback_mem_exception_w),6);
        bufp->chgBit(oldp+400,(((IData)(vlSymsp->TOP__v.__PVT__dcache_error_w) 
                                & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__resp_load_w))));
        bufp->chgBit(oldp+401,(((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__resp_load_w)) 
                                & (IData)(vlSymsp->TOP__v.__PVT__dcache_error_w))));
        bufp->chgIData(oldp+402,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data0_data_in_m_w),32);
        bufp->chgQData(oldp+403,(vlSymsp->TOP__v__u_icache__u_data0.__PVT__data_i),64);
        bufp->chgIData(oldp+405,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_r),32);
        bufp->chgIData(oldp+406,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_next_r),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [9U])))) {
        bufp->chgBit(oldp+407,(vlSelfRef.__Vcellout__v__axi_i_arvalid_o));
        bufp->chgBit(oldp+408,(vlSymsp->TOP__v.__PVT__icache_accept_w));
        bufp->chgCData(oldp+409,(vlSymsp->TOP__v__u_icache.__PVT__next_state_r),2);
        bufp->chgBit(oldp+410,((1U & (~ (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__stall_w)))));
        bufp->chgBit(oldp+411,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__stall_w));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+412,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B),32);
        bufp->chgBit(oldp+413,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_Ci));
        bufp->chgCData(oldp+414,((0xffU & vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B)),8);
        bufp->chgCData(oldp+415,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                           >> 8U))),8);
        bufp->chgCData(oldp+416,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+417,((vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                  >> 0x18U)),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+418,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B),32);
        bufp->chgBit(oldp+419,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_Ci));
        bufp->chgCData(oldp+420,((0xffU & vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B)),8);
        bufp->chgCData(oldp+421,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                           >> 8U))),8);
        bufp->chgCData(oldp+422,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                           >> 0x10U))),8);
        bufp->chgCData(oldp+423,((vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                  >> 0x18U)),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgBit(oldp+424,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag_dirty_any_m_w));
        bufp->chgIData(oldp+425,(vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q),21);
        bufp->chgBit(oldp+426,((1U & (vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                      >> 0x14U))));
        bufp->chgBit(oldp+427,((1U & (vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                      >> 0x13U))));
        bufp->chgIData(oldp+428,((0x7ffffU & vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q)),19);
        bufp->chgIData(oldp+429,(vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q),21);
        bufp->chgBit(oldp+430,((1U & (vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q 
                                      >> 0x14U))));
        bufp->chgBit(oldp+431,((1U & (vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q 
                                      >> 0x13U))));
        bufp->chgIData(oldp+432,((0x7ffffU & vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q)),19);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[4U] 
                      | vlSelfRef.__Vm_traceActivity
                      [6U])))) {
        bufp->chgCData(oldp+433,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_wr_w),4);
        bufp->chgBit(oldp+434,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_ack_r));
        bufp->chgBit(oldp+435,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__evict_way_w));
        bufp->chgBit(oldp+436,((((IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag0_hit_m_w) 
                                 & (vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                    >> 0x13U)) | ((IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag1_hit_m_w) 
                                                  & (vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q 
                                                     >> 0x13U)))));
        bufp->chgBit(oldp+437,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag0_hit_m_w));
        bufp->chgBit(oldp+438,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag1_hit_m_w));
        bufp->chgBit(oldp+439,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag_hit_any_m_w));
        bufp->chgBit(oldp+440,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__evict_way_r));
        bufp->chgIData(oldp+441,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__evict_addr_r),27);
        bufp->chgBit(oldp+442,(((7U == (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__state_q)) 
                                & ((IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__evict_way_w) 
                                   | (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_writeback_m_q)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgIData(oldp+443,(vlSymsp->TOP__v__u_icache__u_tag0.__PVT__ram_read_q),20);
        bufp->chgBit(oldp+444,((1U & (vlSymsp->TOP__v__u_icache__u_tag0.__PVT__ram_read_q 
                                      >> 0x13U))));
        bufp->chgIData(oldp+445,((0x7ffffU & vlSymsp->TOP__v__u_icache__u_tag0.__PVT__ram_read_q)),19);
        bufp->chgIData(oldp+446,(vlSymsp->TOP__v__u_icache__u_tag1.__PVT__ram_read_q),20);
        bufp->chgBit(oldp+447,((1U & (vlSymsp->TOP__v__u_icache__u_tag1.__PVT__ram_read_q 
                                      >> 0x13U))));
        bufp->chgIData(oldp+448,((0x7ffffU & vlSymsp->TOP__v__u_icache__u_tag1.__PVT__ram_read_q)),19);
        bufp->chgQData(oldp+449,(vlSymsp->TOP__v__u_icache__u_data0.__PVT__ram_read_q),64);
        bufp->chgQData(oldp+451,(vlSymsp->TOP__v__u_icache__u_data1.__PVT__ram_read_q),64);
        bufp->chgIData(oldp+453,(vlSymsp->TOP__v__u_dcache__u_core__u_data0.__PVT__ram_read0_q),32);
        bufp->chgIData(oldp+454,(vlSymsp->TOP__v__u_dcache__u_core__u_data1.__PVT__ram_read0_q),32);
        bufp->chgIData(oldp+455,(vlSymsp->TOP__v__u_dcache__u_core__u_data0.__PVT__ram_read1_q),32);
        bufp->chgIData(oldp+456,(vlSymsp->TOP__v__u_dcache__u_core__u_data1.__PVT__ram_read1_q),32);
        bufp->chgIData(oldp+457,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r1_q),32);
        bufp->chgIData(oldp+458,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r2_q),32);
        bufp->chgIData(oldp+459,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r3_q),32);
        bufp->chgIData(oldp+460,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r4_q),32);
        bufp->chgIData(oldp+461,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r5_q),32);
        bufp->chgIData(oldp+462,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r6_q),32);
        bufp->chgIData(oldp+463,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r7_q),32);
        bufp->chgIData(oldp+464,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r8_q),32);
        bufp->chgIData(oldp+465,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r9_q),32);
        bufp->chgIData(oldp+466,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r10_q),32);
        bufp->chgIData(oldp+467,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r11_q),32);
        bufp->chgIData(oldp+468,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r12_q),32);
        bufp->chgIData(oldp+469,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r13_q),32);
        bufp->chgIData(oldp+470,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r14_q),32);
        bufp->chgIData(oldp+471,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r15_q),32);
        bufp->chgIData(oldp+472,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r16_q),32);
        bufp->chgIData(oldp+473,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r17_q),32);
        bufp->chgIData(oldp+474,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r18_q),32);
        bufp->chgIData(oldp+475,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r19_q),32);
        bufp->chgIData(oldp+476,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r20_q),32);
        bufp->chgIData(oldp+477,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r21_q),32);
        bufp->chgIData(oldp+478,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r22_q),32);
        bufp->chgIData(oldp+479,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r23_q),32);
        bufp->chgIData(oldp+480,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r24_q),32);
        bufp->chgIData(oldp+481,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r25_q),32);
        bufp->chgIData(oldp+482,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r26_q),32);
        bufp->chgIData(oldp+483,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r27_q),32);
        bufp->chgIData(oldp+484,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r28_q),32);
        bufp->chgIData(oldp+485,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r29_q),32);
        bufp->chgIData(oldp+486,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r30_q),32);
        bufp->chgIData(oldp+487,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r31_q),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgIData(oldp+488,((0xffffffe0U & vlSymsp->TOP__v__u_icache.__PVT__lookup_addr_q)),32);
        bufp->chgBit(oldp+489,(vlSelfRef.__Vcellout__v__axi_d_awvalid_o));
        bufp->chgIData(oldp+490,(vlSelfRef.__Vcellout__v__axi_d_awaddr_o),32);
        bufp->chgCData(oldp+491,(vlSelfRef.__Vcellout__v__axi_d_awlen_o),8);
        bufp->chgBit(oldp+492,(vlSelfRef.__Vcellout__v__axi_d_wvalid_o));
        bufp->chgIData(oldp+493,(vlSelfRef.__Vcellout__v__axi_d_wdata_o),32);
        bufp->chgCData(oldp+494,(vlSelfRef.__Vcellout__v__axi_d_wstrb_o),4);
        bufp->chgBit(oldp+495,(vlSelfRef.__Vcellout__v__axi_d_wlast_o));
        bufp->chgBit(oldp+496,(vlSelfRef.__Vcellout__v__axi_d_arvalid_o));
        bufp->chgBit(oldp+497,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__icache_invalidate_q) 
                                | (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__ifence_q))));
        bufp->chgBit(oldp+498,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_flush_q));
        bufp->chgBit(oldp+499,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_invalidate_q));
        bufp->chgSData(oldp+500,(((IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_mux__DOT__cache_access_q)
                                   ? (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_tag_m_q)
                                   : vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__ram_q
                                  [vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q])),11);
        bufp->chgIData(oldp+501,((0xfffffffcU & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q)),32);
        bufp->chgBit(oldp+502,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_writeback_q));
        bufp->chgBit(oldp+503,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_cacheable_q));
        bufp->chgBit(oldp+504,(vlSymsp->TOP__v__u_icache.__PVT__axi_error_q));
        bufp->chgIData(oldp+505,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_wr_q),32);
        bufp->chgBit(oldp+506,(((IData)(vlSymsp->TOP__v__u_dcache.u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_2) 
                                & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_invalidate_q))));
        bufp->chgBit(oldp+507,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_accept_w));
        bufp->chgBit(oldp+508,(((2U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__count_q)) 
                                & (2U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__count_q)))));
        bufp->chgBit(oldp+509,(vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_invalidate_w));
        bufp->chgBit(oldp+510,(((~ (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_select_w)) 
                                & (2U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__count_q)))));
        bufp->chgIData(oldp+511,((0xfffffffcU & vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                  [vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][0U])),32);
        bufp->chgBit(oldp+512,(((IData)(vlSymsp->TOP__v__u_dcache.u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_2) 
                                & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_flush_q))));
        bufp->chgSData(oldp+513,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_tag_m_q),11);
        bufp->chgBit(oldp+514,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_select_w));
        bufp->chgBit(oldp+515,(vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_flush_w));
        bufp->chgBit(oldp+516,(((IData)(vlSymsp->TOP__v__u_dcache.u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_2) 
                                & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_writeback_q))));
        bufp->chgIData(oldp+517,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                 [vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][1U]),32);
        bufp->chgSData(oldp+518,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__ram_q
                                 [vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q]),11);
        bufp->chgBit(oldp+519,((2U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__count_q))));
        bufp->chgBit(oldp+520,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__error_q));
        bufp->chgBit(oldp+521,(vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_writeback_w));
        bufp->chgBit(oldp+522,((2U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__resp_outstanding_q))));
        bufp->chgBit(oldp+523,((0U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__resp_outstanding_q))));
        bufp->chgBit(oldp+524,((0U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__count_q))));
        bufp->chgWData(oldp+525,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q
                                 [vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q]),77);
        bufp->chgBit(oldp+528,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__req_can_issue_w));
        bufp->chgBit(oldp+529,(((IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__req_can_issue_w) 
                                & (IData)(vlSymsp->TOP__v__u_dcache.u_axi__DOT____VdfgRegularize_h2534fa66_0_0))));
        bufp->chgBit(oldp+530,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__req_is_write_w));
        bufp->chgCData(oldp+531,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__req_cnt_q),8);
        bufp->chgBit(oldp+532,(((IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__req_is_write_w) 
                                & ((0U == (IData)(vlSelfRef.__Vcellout__v__axi_d_awlen_o)) 
                                   & (0U == (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__req_cnt_q))))));
        bufp->chgCData(oldp+533,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__resp_outstanding_q),2);
        bufp->chgIData(oldp+534,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q
                                 [vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][1U]),32);
        bufp->chgCData(oldp+535,((0xfU & vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q
                                  [vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][2U])),4);
        bufp->chgBit(oldp+536,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__awvalid_inhibit_q));
        bufp->chgBit(oldp+537,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__wvalid_inhibit_q));
        bufp->chgCData(oldp+538,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q),8);
        bufp->chgBit(oldp+539,((((IData)(vlSelfRef.__Vcellout__v__axi_d_awvalid_o) 
                                 & (0U == (IData)(vlSelfRef.__Vcellout__v__axi_d_awlen_o))) 
                                | (1U == (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q)))));
        bufp->chgBit(oldp+540,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__buf_valid_q));
        bufp->chgQData(oldp+541,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__buf_q),37);
        bufp->chgWData(oldp+543,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q[0]),77);
        bufp->chgWData(oldp+546,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q[1]),77);
        bufp->chgBit(oldp+549,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q));
        bufp->chgBit(oldp+550,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q));
        bufp->chgCData(oldp+551,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__count_q),2);
        bufp->chgBit(oldp+552,(vlSymsp->TOP__v__u_dcache.__PVT__u_mux__DOT__hold_w));
        bufp->chgBit(oldp+553,(vlSymsp->TOP__v__u_dcache.__PVT__u_mux__DOT__cache_access_q));
        bufp->chgCData(oldp+554,(vlSymsp->TOP__v__u_dcache.__PVT__u_mux__DOT__pending_q),5);
        bufp->chgBit(oldp+555,(vlSymsp->TOP__v__u_dcache.__PVT__u_pmem_mux__DOT__select_q));
        bufp->chgBit(oldp+556,((2U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__count_q))));
        bufp->chgBit(oldp+557,((2U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__count_q))));
        bufp->chgBit(oldp+558,((0U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__count_q))));
        bufp->chgWData(oldp+559,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                 [vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q]),70);
        bufp->chgBit(oldp+562,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__drop_req_w));
        bufp->chgBit(oldp+563,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__request_pending_q));
        bufp->chgBit(oldp+564,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__dropped_q));
        bufp->chgWData(oldp+565,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q[0]),70);
        bufp->chgWData(oldp+568,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q[1]),70);
        bufp->chgBit(oldp+571,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q));
        bufp->chgBit(oldp+572,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__wr_ptr_q));
        bufp->chgCData(oldp+573,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__count_q),2);
        bufp->chgBit(oldp+574,((0U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__count_q))));
        bufp->chgSData(oldp+575,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__ram_q[0]),11);
        bufp->chgSData(oldp+576,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__ram_q[1]),11);
        bufp->chgBit(oldp+577,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q));
        bufp->chgBit(oldp+578,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__wr_ptr_q));
        bufp->chgCData(oldp+579,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__count_q),2);
        bufp->chgCData(oldp+580,(vlSymsp->TOP__v__u_icache.__PVT__state_q),2);
        bufp->chgBit(oldp+581,(vlSymsp->TOP__v__u_icache.__PVT__invalidate_q));
        bufp->chgBit(oldp+582,(vlSymsp->TOP__v__u_icache.__PVT__replace_way_q));
        bufp->chgBit(oldp+583,(vlSymsp->TOP__v__u_icache.__PVT__lookup_valid_q));
        bufp->chgIData(oldp+584,(vlSymsp->TOP__v__u_icache.__PVT__lookup_addr_q),32);
        bufp->chgIData(oldp+585,((vlSymsp->TOP__v__u_icache.__PVT__lookup_addr_q 
                                  >> 0xdU)),19);
        bufp->chgIData(oldp+586,(vlSymsp->TOP__v__u_icache.__PVT__tag_data_in_r),20);
        bufp->chgSData(oldp+587,(vlSymsp->TOP__v__u_icache.__PVT__data_write_addr_q),10);
        bufp->chgCData(oldp+588,(vlSymsp->TOP__v__u_icache.__PVT__refill_word_idx_q),3);
        bufp->chgIData(oldp+589,(vlSymsp->TOP__v__u_icache.__PVT__refill_lower_q),32);
        bufp->chgCData(oldp+590,(vlSymsp->TOP__v__u_icache.__PVT__flush_addr_q),8);
        bufp->chgBit(oldp+591,(vlSymsp->TOP__v__u_icache.__PVT__axi_arvalid_q));
        bufp->chgBit(oldp+592,(((0x73U == vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w) 
                                | ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_58) 
                                   | ((0x1073U == (0x707fU 
                                                   & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                      | ((0x2073U == 
                                          (0x707fU 
                                           & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                         | ((0x3073U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                            | ((0x5073U 
                                                == 
                                                (0x707fU 
                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                               | ((0x6073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                  | ((0x7073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                     | ((0x10500073U 
                                                         == 
                                                         (0xffff8fffU 
                                                          & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                        | ((0xfU 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                           | ((0x100fU 
                                                               == 
                                                               (0x707fU 
                                                                & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                              | ((0x12000073U 
                                                                  == 
                                                                  (0xfe007fffU 
                                                                   & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                                                 | ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_invalid_w) 
                                                                    | ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_fetch_w) 
                                                                       | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_page_w)))))))))))))))));
        bufp->chgBit(oldp+593,(vlSymsp->TOP__v__u_core__u_csr.__PVT__tlb_flush_q));
        bufp->chgIData(oldp+594,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__pc_m_q),32);
        bufp->chgIData(oldp+595,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__wb_result_q),32);
        bufp->chgBit(oldp+596,(vlSymsp->TOP__v__u_core.__PVT__branch_csr_request_w));
        bufp->chgIData(oldp+597,((vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
                                  << 3U)),32);
        bufp->chgBit(oldp+598,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_call_q));
        bufp->chgBit(oldp+599,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_ntaken_q) 
                                | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_taken_q))));
        bufp->chgBit(oldp+600,((1U & (vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q 
                                      >> 0x13U))));
        bufp->chgIData(oldp+601,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__pc_x_q),32);
        bufp->chgCData(oldp+602,(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w),6);
        bufp->chgBit(oldp+603,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_call_q));
        bufp->chgBit(oldp+604,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_ntaken_q));
        bufp->chgBit(oldp+605,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_taken_q));
        bufp->chgIData(oldp+606,(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w),32);
        bufp->chgIData(oldp+607,(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_addr_w),32);
        bufp->chgBit(oldp+608,(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_invalid_w));
        bufp->chgBit(oldp+609,(vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_rd_valid_w));
        bufp->chgCData(oldp+610,(vlSymsp->TOP__v__u_core__u_csr.__PVT__exception_e1_q),6);
        bufp->chgBit(oldp+611,(((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_57) 
                                | (IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_59))));
        bufp->chgBit(oldp+612,(vlSymsp->TOP__v__u_core.__PVT__fetch0_fault_fetch_w));
        bufp->chgIData(oldp+613,(vlSymsp->TOP__v__u_core.__PVT__branch_info_pc_w),32);
        bufp->chgBit(oldp+614,(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_page_w));
        bufp->chgBit(oldp+615,(((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_57) 
                                | (IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_59))));
        bufp->chgIData(oldp+616,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__pc_m_q),32);
        bufp->chgBit(oldp+617,(vlSymsp->TOP__v__u_core.__PVT__branch_info_is_not_taken_w));
        bufp->chgBit(oldp+618,(vlSymsp->TOP__v__u_core.__PVT__branch_info_is_taken_w));
        bufp->chgBit(oldp+619,(vlSymsp->TOP__v__u_core.__PVT__branch_info_is_ret_w));
        bufp->chgBit(oldp+620,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_taken_q));
        bufp->chgBit(oldp+621,(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_exec_w));
        bufp->chgBit(oldp+622,(vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_exec_w));
        bufp->chgIData(oldp+623,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__result_q),32);
        bufp->chgBit(oldp+624,(vlSymsp->TOP__v__u_core.__PVT__branch_info_is_jmp_w));
        bufp->chgBit(oldp+625,(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_lsu_w));
        bufp->chgBit(oldp+626,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_ntaken_q) 
                                | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_taken_q))));
        bufp->chgBit(oldp+627,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_jmp_q));
        bufp->chgCData(oldp+628,(vlSymsp->TOP__v__u_core.__PVT__branch_csr_priv_w),2);
        bufp->chgBit(oldp+629,(((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_56) 
                                | (IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_60))));
        bufp->chgCData(oldp+630,(((IData)(vlSymsp->TOP__v__u_core.__PVT__branch_csr_request_w)
                                   ? (IData)(vlSymsp->TOP__v__u_core.__PVT__branch_csr_priv_w)
                                   : (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__priv_x_q))),2);
        bufp->chgBit(oldp+631,(((3U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                | ((0x1003U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                   | ((0x2003U == (0x707fU 
                                                   & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                      | ((0x4003U == 
                                          (0x707fU 
                                           & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                         | ((0x5003U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                            | ((0x6003U 
                                                == 
                                                (0x707fU 
                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                               | ((0x23U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                  | ((0x1023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                     | (0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w))))))))))));
        bufp->chgIData(oldp+632,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__pc_x_q),32);
        bufp->chgBit(oldp+633,(((0x73U == vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w) 
                                | ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_58) 
                                   | ((0x1073U == (0x707fU 
                                                   & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                      | ((0x2073U == 
                                          (0x707fU 
                                           & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                         | ((0x3073U 
                                             == (0x707fU 
                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                            | ((0x5073U 
                                                == 
                                                (0x707fU 
                                                 & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                               | ((0x6073U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                  | ((0x7073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                     | ((0x10500073U 
                                                         == 
                                                         (0xffff8fffU 
                                                          & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                        | ((0xfU 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                           | ((0x100fU 
                                                               == 
                                                               (0x707fU 
                                                                & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                              | ((0x12000073U 
                                                                  == 
                                                                  (0xfe007fffU 
                                                                   & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                                                 | ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_invalid_w) 
                                                                    | ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_fault_fetch_w) 
                                                                       | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_fault_page_w)))))))))))))))));
        bufp->chgBit(oldp+634,(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_branch_w));
        bufp->chgBit(oldp+635,(vlSymsp->TOP__v__u_core.__PVT__fetch0_valid_w));
        bufp->chgBit(oldp+636,(vlSymsp->TOP__v__u_core__u_csr.__PVT__rd_valid_e1_q));
        bufp->chgBit(oldp+637,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_ntaken_q));
        bufp->chgBit(oldp+638,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_ret_q));
        bufp->chgBit(oldp+639,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__valid_q));
        bufp->chgBit(oldp+640,(vlSymsp->TOP__v__u_core.__PVT__fetch0_fault_page_w));
        bufp->chgIData(oldp+641,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_satp_q),32);
        bufp->chgIData(oldp+642,(vlSymsp->TOP__v__u_core__u_csr.__PVT__csr_wdata_e1_q),32);
        bufp->chgIData(oldp+643,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__result_q),32);
        bufp->chgBit(oldp+644,(vlSymsp->TOP__v__u_core__u_csr.__PVT__ifence_q));
        bufp->chgBit(oldp+645,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_jmp_q));
        bufp->chgIData(oldp+646,((4U | (vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
                                        << 3U))),32);
        bufp->chgIData(oldp+647,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q),32);
        bufp->chgBit(oldp+648,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wr_wb_q));
        bufp->chgBit(oldp+649,(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q));
        bufp->chgIData(oldp+650,(vlSymsp->TOP__v__u_core__u_csr.__PVT__rd_result_e1_q),32);
        bufp->chgBit(oldp+651,(vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_invalid_w));
        bufp->chgSData(oldp+652,((vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                  >> 0x14U)),12);
        bufp->chgBit(oldp+653,(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_fetch_w));
        bufp->chgBit(oldp+654,(vlSymsp->TOP__v__u_core.__PVT__fetch1_valid_w));
        bufp->chgIData(oldp+655,(vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w),32);
        bufp->chgCData(oldp+656,((3U & ((0x20000U & vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q)
                                         ? (vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q 
                                            >> 0xbU)
                                         : (IData)(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q)))),2);
        bufp->chgBit(oldp+657,(((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_55) 
                                | ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_62) 
                                   | ((0x4063U == (0x707fU 
                                                   & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                      | ((0x5063U == 
                                          (0x707fU 
                                           & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                         | (IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_61)))))));
        bufp->chgBit(oldp+658,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_ret_q));
        bufp->chgIData(oldp+659,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__result_e2_q),32);
        bufp->chgBit(oldp+660,(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_rd_valid_w));
        bufp->chgBit(oldp+661,((1U & (vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q 
                                      >> 0x12U))));
        bufp->chgIData(oldp+662,(vlSymsp->TOP__v__u_core.__PVT__branch_info_source_w),32);
        bufp->chgBit(oldp+663,(vlSymsp->TOP__v__u_core.__PVT__branch_info_is_call_w));
        bufp->chgIData(oldp+664,(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_pc_w),32);
        bufp->chgBit(oldp+665,(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_mul_w));
        bufp->chgIData(oldp+666,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__dividend_q),32);
        bufp->chgQData(oldp+667,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__divisor_q),63);
        bufp->chgIData(oldp+669,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__quotient_q),32);
        bufp->chgIData(oldp+670,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__q_mask_q),32);
        bufp->chgBit(oldp+671,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_inst_q));
        bufp->chgBit(oldp+672,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_busy_q));
        bufp->chgBit(oldp+673,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__invert_res_q));
        bufp->chgIData(oldp+674,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__last_a_q),32);
        bufp->chgIData(oldp+675,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__last_b_q),32);
        bufp->chgBit(oldp+676,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__last_div_q));
        bufp->chgBit(oldp+677,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__last_divu_q));
        bufp->chgBit(oldp+678,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__last_rem_q));
        bufp->chgBit(oldp+679,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__last_remu_q));
        bufp->chgBit(oldp+680,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_complete_w));
        bufp->chgIData(oldp+681,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_inst_q)
                                   ? ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__invert_res_q)
                                       ? (- vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__quotient_q)
                                       : vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__quotient_q)
                                   : ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__invert_res_q)
                                       ? (- vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__dividend_q)
                                       : vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__dividend_q))),32);
        bufp->chgBit(oldp+682,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_fault_page_w));
        bufp->chgBit(oldp+683,((2U != (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q))));
        bufp->chgCData(oldp+684,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pred_branch_w),2);
        bufp->chgIData(oldp+685,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_w),32);
        bufp->chgBit(oldp+686,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_fault_fetch_w));
        bufp->chgBit(oldp+687,(((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_fault_fetch_w) 
                                | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_fault_page_w))));
        bufp->chgBit(oldp+688,(((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_fetch_w) 
                                | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_page_w))));
        bufp->chgCData(oldp+689,(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_fifo__info0_in_i),2);
        bufp->chgCData(oldp+690,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q
                                 [vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]),2);
        bufp->chgCData(oldp+691,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q
                                 [vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]),2);
        bufp->chgIData(oldp+692,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q[0]),32);
        bufp->chgIData(oldp+693,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q[1]),32);
        bufp->chgBit(oldp+694,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q[0]));
        bufp->chgBit(oldp+695,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q[1]));
        bufp->chgBit(oldp+696,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q[0]));
        bufp->chgBit(oldp+697,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q[1]));
        bufp->chgCData(oldp+698,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q[0]),2);
        bufp->chgCData(oldp+699,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q[1]),2);
        bufp->chgCData(oldp+700,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q[0]),2);
        bufp->chgCData(oldp+701,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q[1]),2);
        bufp->chgQData(oldp+702,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q[0]),64);
        bufp->chgQData(oldp+704,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q[1]),64);
        bufp->chgBit(oldp+706,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q));
        bufp->chgBit(oldp+707,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q));
        bufp->chgCData(oldp+708,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q),2);
        bufp->chgIData(oldp+709,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__i),32);
        bufp->chgBit(oldp+710,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__active_q));
        bufp->chgBit(oldp+711,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__branch_q));
        bufp->chgIData(oldp+712,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__branch_pc_q),32);
        bufp->chgBit(oldp+713,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__stall_q));
        bufp->chgBit(oldp+714,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__icache_fetch_q));
        bufp->chgBit(oldp+715,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__icache_invalidate_q));
        bufp->chgIData(oldp+716,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__pc_f_q),32);
        bufp->chgIData(oldp+717,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__pc_d_q),32);
        bufp->chgCData(oldp+718,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__pred_d_q),2);
        bufp->chgWData(oldp+719,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q),100);
        bufp->chgBit(oldp+723,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__skid_valid_q));
        bufp->chgCData(oldp+724,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q),3);
        bufp->chgIData(oldp+725,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[0]),32);
        bufp->chgIData(oldp+726,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[1]),32);
        bufp->chgIData(oldp+727,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[2]),32);
        bufp->chgIData(oldp+728,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[3]),32);
        bufp->chgIData(oldp+729,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[4]),32);
        bufp->chgIData(oldp+730,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[5]),32);
        bufp->chgIData(oldp+731,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[6]),32);
        bufp->chgIData(oldp+732,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[7]),32);
        bufp->chgCData(oldp+733,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q),3);
        bufp->chgIData(oldp+734,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q
                                 [vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q]),32);
        bufp->chgIData(oldp+735,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i3),32);
        bufp->chgSData(oldp+736,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q),9);
        bufp->chgSData(oldp+737,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q),9);
        bufp->chgSData(oldp+738,((0x1ffU & (vlSymsp->TOP__v__u_core.__PVT__branch_info_source_w 
                                            >> 2U))),9);
        bufp->chgIData(oldp+739,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i4),32);
        bufp->chgIData(oldp+740,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0]),32);
        bufp->chgIData(oldp+741,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[1]),32);
        bufp->chgIData(oldp+742,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[2]),32);
        bufp->chgIData(oldp+743,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[3]),32);
        bufp->chgIData(oldp+744,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[4]),32);
        bufp->chgIData(oldp+745,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[5]),32);
        bufp->chgIData(oldp+746,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[6]),32);
        bufp->chgIData(oldp+747,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[7]),32);
        bufp->chgIData(oldp+748,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[8]),32);
        bufp->chgIData(oldp+749,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[9]),32);
        bufp->chgIData(oldp+750,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[10]),32);
        bufp->chgIData(oldp+751,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[11]),32);
        bufp->chgIData(oldp+752,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[12]),32);
        bufp->chgIData(oldp+753,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[13]),32);
        bufp->chgIData(oldp+754,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[14]),32);
        bufp->chgIData(oldp+755,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[15]),32);
        bufp->chgIData(oldp+756,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[16]),32);
        bufp->chgIData(oldp+757,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[17]),32);
        bufp->chgIData(oldp+758,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[18]),32);
        bufp->chgIData(oldp+759,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[19]),32);
        bufp->chgIData(oldp+760,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[20]),32);
        bufp->chgIData(oldp+761,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[21]),32);
        bufp->chgIData(oldp+762,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[22]),32);
        bufp->chgIData(oldp+763,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[23]),32);
        bufp->chgIData(oldp+764,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[24]),32);
        bufp->chgIData(oldp+765,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[25]),32);
        bufp->chgIData(oldp+766,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[26]),32);
        bufp->chgIData(oldp+767,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[27]),32);
        bufp->chgIData(oldp+768,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[28]),32);
        bufp->chgIData(oldp+769,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[29]),32);
        bufp->chgIData(oldp+770,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[30]),32);
        bufp->chgIData(oldp+771,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[31]),32);
        bufp->chgIData(oldp+772,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0]),32);
        bufp->chgIData(oldp+773,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[1]),32);
        bufp->chgIData(oldp+774,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[2]),32);
        bufp->chgIData(oldp+775,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[3]),32);
        bufp->chgIData(oldp+776,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[4]),32);
        bufp->chgIData(oldp+777,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[5]),32);
        bufp->chgIData(oldp+778,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[6]),32);
        bufp->chgIData(oldp+779,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[7]),32);
        bufp->chgIData(oldp+780,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[8]),32);
        bufp->chgIData(oldp+781,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[9]),32);
        bufp->chgIData(oldp+782,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[10]),32);
        bufp->chgIData(oldp+783,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[11]),32);
        bufp->chgIData(oldp+784,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[12]),32);
        bufp->chgIData(oldp+785,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[13]),32);
        bufp->chgIData(oldp+786,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[14]),32);
        bufp->chgIData(oldp+787,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[15]),32);
        bufp->chgIData(oldp+788,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[16]),32);
        bufp->chgIData(oldp+789,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[17]),32);
        bufp->chgIData(oldp+790,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[18]),32);
        bufp->chgIData(oldp+791,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[19]),32);
        bufp->chgIData(oldp+792,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[20]),32);
        bufp->chgIData(oldp+793,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[21]),32);
        bufp->chgIData(oldp+794,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[22]),32);
        bufp->chgIData(oldp+795,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[23]),32);
        bufp->chgIData(oldp+796,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[24]),32);
        bufp->chgIData(oldp+797,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[25]),32);
        bufp->chgIData(oldp+798,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[26]),32);
        bufp->chgIData(oldp+799,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[27]),32);
        bufp->chgIData(oldp+800,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[28]),32);
        bufp->chgIData(oldp+801,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[29]),32);
        bufp->chgIData(oldp+802,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[30]),32);
        bufp->chgIData(oldp+803,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[31]),32);
        bufp->chgBit(oldp+804,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0]));
        bufp->chgBit(oldp+805,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[1]));
        bufp->chgBit(oldp+806,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[2]));
        bufp->chgBit(oldp+807,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[3]));
        bufp->chgBit(oldp+808,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[4]));
        bufp->chgBit(oldp+809,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[5]));
        bufp->chgBit(oldp+810,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[6]));
        bufp->chgBit(oldp+811,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[7]));
        bufp->chgBit(oldp+812,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[8]));
        bufp->chgBit(oldp+813,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[9]));
        bufp->chgBit(oldp+814,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[10]));
        bufp->chgBit(oldp+815,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[11]));
        bufp->chgBit(oldp+816,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[12]));
        bufp->chgBit(oldp+817,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[13]));
        bufp->chgBit(oldp+818,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[14]));
        bufp->chgBit(oldp+819,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[15]));
        bufp->chgBit(oldp+820,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[16]));
        bufp->chgBit(oldp+821,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[17]));
        bufp->chgBit(oldp+822,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[18]));
        bufp->chgBit(oldp+823,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[19]));
        bufp->chgBit(oldp+824,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[20]));
        bufp->chgBit(oldp+825,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[21]));
        bufp->chgBit(oldp+826,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[22]));
        bufp->chgBit(oldp+827,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[23]));
        bufp->chgBit(oldp+828,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[24]));
        bufp->chgBit(oldp+829,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[25]));
        bufp->chgBit(oldp+830,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[26]));
        bufp->chgBit(oldp+831,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[27]));
        bufp->chgBit(oldp+832,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[28]));
        bufp->chgBit(oldp+833,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[29]));
        bufp->chgBit(oldp+834,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[30]));
        bufp->chgBit(oldp+835,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[31]));
        bufp->chgBit(oldp+836,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0]));
        bufp->chgBit(oldp+837,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[1]));
        bufp->chgBit(oldp+838,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[2]));
        bufp->chgBit(oldp+839,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[3]));
        bufp->chgBit(oldp+840,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[4]));
        bufp->chgBit(oldp+841,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[5]));
        bufp->chgBit(oldp+842,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[6]));
        bufp->chgBit(oldp+843,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[7]));
        bufp->chgBit(oldp+844,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[8]));
        bufp->chgBit(oldp+845,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[9]));
        bufp->chgBit(oldp+846,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[10]));
        bufp->chgBit(oldp+847,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[11]));
        bufp->chgBit(oldp+848,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[12]));
        bufp->chgBit(oldp+849,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[13]));
        bufp->chgBit(oldp+850,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[14]));
        bufp->chgBit(oldp+851,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[15]));
        bufp->chgBit(oldp+852,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[16]));
        bufp->chgBit(oldp+853,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[17]));
        bufp->chgBit(oldp+854,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[18]));
        bufp->chgBit(oldp+855,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[19]));
        bufp->chgBit(oldp+856,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[20]));
        bufp->chgBit(oldp+857,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[21]));
        bufp->chgBit(oldp+858,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[22]));
        bufp->chgBit(oldp+859,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[23]));
        bufp->chgBit(oldp+860,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[24]));
        bufp->chgBit(oldp+861,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[25]));
        bufp->chgBit(oldp+862,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[26]));
        bufp->chgBit(oldp+863,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[27]));
        bufp->chgBit(oldp+864,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[28]));
        bufp->chgBit(oldp+865,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[29]));
        bufp->chgBit(oldp+866,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[30]));
        bufp->chgBit(oldp+867,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[31]));
        bufp->chgBit(oldp+868,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0]));
        bufp->chgBit(oldp+869,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[1]));
        bufp->chgBit(oldp+870,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[2]));
        bufp->chgBit(oldp+871,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[3]));
        bufp->chgBit(oldp+872,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[4]));
        bufp->chgBit(oldp+873,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[5]));
        bufp->chgBit(oldp+874,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[6]));
        bufp->chgBit(oldp+875,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[7]));
        bufp->chgBit(oldp+876,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[8]));
        bufp->chgBit(oldp+877,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[9]));
        bufp->chgBit(oldp+878,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[10]));
        bufp->chgBit(oldp+879,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[11]));
        bufp->chgBit(oldp+880,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[12]));
        bufp->chgBit(oldp+881,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[13]));
        bufp->chgBit(oldp+882,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[14]));
        bufp->chgBit(oldp+883,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[15]));
        bufp->chgBit(oldp+884,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[16]));
        bufp->chgBit(oldp+885,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[17]));
        bufp->chgBit(oldp+886,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[18]));
        bufp->chgBit(oldp+887,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[19]));
        bufp->chgBit(oldp+888,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[20]));
        bufp->chgBit(oldp+889,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[21]));
        bufp->chgBit(oldp+890,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[22]));
        bufp->chgBit(oldp+891,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[23]));
        bufp->chgBit(oldp+892,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[24]));
        bufp->chgBit(oldp+893,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[25]));
        bufp->chgBit(oldp+894,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[26]));
        bufp->chgBit(oldp+895,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[27]));
        bufp->chgBit(oldp+896,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[28]));
        bufp->chgBit(oldp+897,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[29]));
        bufp->chgBit(oldp+898,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[30]));
        bufp->chgBit(oldp+899,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[31]));
        bufp->chgCData(oldp+900,((0x1fU & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q))),5);
        bufp->chgIData(oldp+901,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2),32);
        bufp->chgSData(oldp+902,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q),16);
        bufp->chgIData(oldp+903,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q),32);
        bufp->chgBit(oldp+904,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_rd_q));
        bufp->chgCData(oldp+905,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_wr_q),4);
        bufp->chgBit(oldp+906,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e1_q));
        bufp->chgBit(oldp+907,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q));
        bufp->chgBit(oldp+908,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_load_q));
        bufp->chgBit(oldp+909,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_xb_q));
        bufp->chgBit(oldp+910,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_xh_q));
        bufp->chgBit(oldp+911,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_ls_q));
        bufp->chgBit(oldp+912,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__pending_lsu_e2_q));
        bufp->chgBit(oldp+913,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__resp_load_w));
        bufp->chgIData(oldp+914,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__resp_addr_w),32);
        bufp->chgBit(oldp+915,((1U & (IData)((vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                              [vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                              >> 1U)))));
        bufp->chgBit(oldp+916,((1U & (IData)((vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                              [vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                              >> 2U)))));
        bufp->chgBit(oldp+917,((1U & (IData)((vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                              [vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                              >> 3U)))));
        bufp->chgBit(oldp+918,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q) 
                                & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__resp_load_w))));
        bufp->chgBit(oldp+919,(((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__resp_load_w)) 
                                & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q))));
        bufp->chgQData(oldp+920,((((QData)((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q)) 
                                   << 4U) | (QData)((IData)(
                                                            ((((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_ls_q) 
                                                               << 3U) 
                                                              | ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_xh_q) 
                                                                 << 2U)) 
                                                             | (((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_xb_q) 
                                                                 << 1U) 
                                                                | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_load_q))))))),36);
        bufp->chgQData(oldp+922,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                 [vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q]),36);
        bufp->chgBit(oldp+924,((2U != (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q))));
        bufp->chgBit(oldp+925,((0U != (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q))));
        bufp->chgQData(oldp+926,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q[0]),36);
        bufp->chgQData(oldp+928,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q[1]),36);
        bufp->chgBit(oldp+930,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q));
        bufp->chgBit(oldp+931,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q));
        bufp->chgCData(oldp+932,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q),2);
        bufp->chgIData(oldp+933,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__i),32);
        bufp->chgIData(oldp+934,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__result_e3_q),32);
        bufp->chgQData(oldp+935,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__operand_a_e1_q),33);
        bufp->chgQData(oldp+937,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__operand_b_e1_q),33);
        bufp->chgBit(oldp+939,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mulhi_sel_e1_q));
        bufp->chgWData(oldp+940,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mult_result_w),65);
        bufp->chgIData(oldp+943,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mulhi_sel_e1_q)
                                   ? vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mult_result_w[1U]
                                   : vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mult_result_w[0U])),32);
        bufp->chgCData(oldp+944,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__state_q),4);
        bufp->chgIData(oldp+945,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_addr_m_q),32);
        bufp->chgIData(oldp+946,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_data_m_q),32);
        bufp->chgCData(oldp+947,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_wr_m_q),4);
        bufp->chgBit(oldp+948,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_rd_m_q));
        bufp->chgBit(oldp+949,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_inval_m_q));
        bufp->chgBit(oldp+950,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_writeback_m_q));
        bufp->chgBit(oldp+951,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_flush_m_q));
        bufp->chgIData(oldp+952,((vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_addr_m_q 
                                  >> 0xdU)),19);
        bufp->chgBit(oldp+953,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__replace_way_q));
        bufp->chgBit(oldp+954,((0U == (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_len_q))));
        bufp->chgBit(oldp+955,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__flushing_q));
        bufp->chgCData(oldp+956,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag_addr_m_r),8);
        bufp->chgIData(oldp+957,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag_data_in_m_r),21);
        bufp->chgSData(oldp+958,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_write_addr_q),11);
        bufp->chgCData(oldp+959,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__flush_addr_q),8);
        bufp->chgBit(oldp+960,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__flush_last_q));
        bufp->chgBit(oldp+961,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_rd_q));
        bufp->chgBit(oldp+962,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_wr0_q));
        bufp->chgCData(oldp+963,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_len_q),8);
        bufp->chgIData(oldp+964,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_addr_q),32);
        bufp->chgCData(oldp+965,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_wr_q),4);
        bufp->chgIData(oldp+966,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_write_data_q),32);
        bufp->chgWData(oldp+967,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__dbg_state),80);
        bufp->chgIData(oldp+970,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pc_x_q),32);
        bufp->chgCData(oldp+971,(vlSymsp->TOP__v__u_core__u_issue.__PVT__priv_x_q),2);
        bufp->chgBit(oldp+972,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                      >> 1U))));
        bufp->chgBit(oldp+973,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                      >> 2U))));
        bufp->chgBit(oldp+974,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                      >> 5U))));
        bufp->chgBit(oldp+975,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                      >> 6U))));
        bufp->chgCData(oldp+976,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_e1_w),5);
        bufp->chgIData(oldp+977,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__pc_e1_q),32);
        bufp->chgIData(oldp+978,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_e1_q),32);
        bufp->chgIData(oldp+979,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__operand_ra_e1_q),32);
        bufp->chgIData(oldp+980,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__operand_rb_e1_q),32);
        bufp->chgBit(oldp+981,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e2_q) 
                                      >> 1U))));
        bufp->chgBit(oldp+982,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e2_q) 
                                      >> 5U))));
        bufp->chgIData(oldp+983,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q),32);
        bufp->chgIData(oldp+984,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__pc_wb_q),32);
        bufp->chgIData(oldp+985,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q),32);
        bufp->chgIData(oldp+986,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__operand_ra_wb_q),32);
        bufp->chgIData(oldp+987,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__operand_rb_wb_q),32);
        bufp->chgCData(oldp+988,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__exception_wb_q),6);
        bufp->chgBit(oldp+989,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                      >> 1U))));
        bufp->chgBit(oldp+990,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                      >> 2U))));
        bufp->chgBit(oldp+991,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                      >> 5U))));
        bufp->chgBit(oldp+992,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                      >> 6U))));
        bufp->chgCData(oldp+993,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_e1_w),5);
        bufp->chgIData(oldp+994,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__pc_e1_q),32);
        bufp->chgIData(oldp+995,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_e1_q),32);
        bufp->chgIData(oldp+996,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__operand_ra_e1_q),32);
        bufp->chgIData(oldp+997,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__operand_rb_e1_q),32);
        bufp->chgBit(oldp+998,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q) 
                                      >> 1U))));
        bufp->chgBit(oldp+999,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q) 
                                      >> 5U))));
        bufp->chgIData(oldp+1000,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q),32);
        bufp->chgIData(oldp+1001,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__pc_wb_q),32);
        bufp->chgIData(oldp+1002,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q),32);
        bufp->chgIData(oldp+1003,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__operand_ra_wb_q),32);
        bufp->chgIData(oldp+1004,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__operand_rb_wb_q),32);
        bufp->chgCData(oldp+1005,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__exception_wb_q),6);
        bufp->chgBit(oldp+1006,(vlSymsp->TOP__v__u_core__u_issue.__PVT__div_pending_q));
        bufp->chgBit(oldp+1007,(vlSymsp->TOP__v__u_core__u_issue.__PVT__csr_pending_q));
        bufp->chgBit(oldp+1008,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__VdfgRegularize_h47f1efe9_0_2) 
                                 | ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_lsu_w) 
                                    | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_mul_w)))));
        bufp->chgCData(oldp+1009,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1010,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                            >> 0x14U))),5);
        bufp->chgCData(oldp+1011,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                            >> 0xfU))),5);
        bufp->chgCData(oldp+1012,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                            >> 0x14U))),5);
        bufp->chgBit(oldp+1013,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__valid_e1_q));
        bufp->chgSData(oldp+1014,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q),10);
        bufp->chgIData(oldp+1015,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__npc_e1_q),32);
        bufp->chgCData(oldp+1016,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__exception_e1_q),6);
        bufp->chgBit(oldp+1017,((1U & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q))));
        bufp->chgBit(oldp+1018,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                       >> 3U))));
        bufp->chgBit(oldp+1019,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                       >> 4U))));
        bufp->chgBit(oldp+1020,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__valid_e2_q));
        bufp->chgSData(oldp+1021,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e2_q),10);
        bufp->chgBit(oldp+1022,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wr_e2_q));
        bufp->chgIData(oldp+1023,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_e2_q),32);
        bufp->chgIData(oldp+1024,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_e2_q),32);
        bufp->chgIData(oldp+1025,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__pc_e2_q),32);
        bufp->chgIData(oldp+1026,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__npc_e2_q),32);
        bufp->chgIData(oldp+1027,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_e2_q),32);
        bufp->chgIData(oldp+1028,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__operand_ra_e2_q),32);
        bufp->chgIData(oldp+1029,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__operand_rb_e2_q),32);
        bufp->chgCData(oldp+1030,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__exception_e2_q),6);
        bufp->chgBit(oldp+1031,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__load_store_e2_w));
        bufp->chgBit(oldp+1032,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__squash_e1_e2_q));
        bufp->chgBit(oldp+1033,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__valid_wb_q));
        bufp->chgSData(oldp+1034,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_wb_q),10);
        bufp->chgIData(oldp+1035,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__npc_wb_q),32);
        bufp->chgBit(oldp+1036,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__csr_wr_wb_q));
        bufp->chgSData(oldp+1037,((vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                   >> 0x14U)),12);
        bufp->chgIData(oldp+1038,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__csr_wdata_wb_q),32);
        bufp->chgBit(oldp+1039,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__valid_e1_q));
        bufp->chgSData(oldp+1040,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q),10);
        bufp->chgIData(oldp+1041,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__npc_e1_q),32);
        bufp->chgCData(oldp+1042,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__exception_e1_q),6);
        bufp->chgBit(oldp+1043,((1U & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q))));
        bufp->chgBit(oldp+1044,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                       >> 3U))));
        bufp->chgBit(oldp+1045,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                       >> 4U))));
        bufp->chgBit(oldp+1046,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__valid_e2_q));
        bufp->chgSData(oldp+1047,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q),10);
        bufp->chgBit(oldp+1048,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__csr_wr_e2_q));
        bufp->chgIData(oldp+1049,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__csr_wdata_e2_q),32);
        bufp->chgIData(oldp+1050,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_e2_q),32);
        bufp->chgIData(oldp+1051,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__pc_e2_q),32);
        bufp->chgIData(oldp+1052,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__npc_e2_q),32);
        bufp->chgIData(oldp+1053,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_e2_q),32);
        bufp->chgIData(oldp+1054,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__operand_ra_e2_q),32);
        bufp->chgIData(oldp+1055,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__operand_rb_e2_q),32);
        bufp->chgCData(oldp+1056,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__exception_e2_q),6);
        bufp->chgBit(oldp+1057,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__load_store_e2_w));
        bufp->chgBit(oldp+1058,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__squash_e1_e2_q));
        bufp->chgBit(oldp+1059,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__valid_wb_q));
        bufp->chgSData(oldp+1060,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_wb_q),10);
        bufp->chgIData(oldp+1061,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__npc_wb_q),32);
        bufp->chgCData(oldp+1062,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q),2);
        bufp->chgBit(oldp+1063,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__branch_r));
        bufp->chgIData(oldp+1064,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__branch_target_r),32);
        bufp->chgIData(oldp+1065,(vlSymsp->TOP__v__u_core__u_csr.__PVT__interrupt_w),32);
        bufp->chgIData(oldp+1066,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q),32);
        bufp->chgBit(oldp+1067,(vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_q));
        bufp->chgIData(oldp+1068,(vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_target_q),32);
        bufp->chgCData(oldp+1069,(vlSymsp->TOP__v__u_core__u_csr.__PVT__init_done),3);
        bufp->chgSData(oldp+1070,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_waddr_i),12);
        bufp->chgIData(oldp+1071,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mepc_q),32);
        bufp->chgIData(oldp+1072,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcause_q),32);
        bufp->chgIData(oldp+1073,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtvec_q),32);
        bufp->chgIData(oldp+1074,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_q),32);
        bufp->chgIData(oldp+1075,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mie_q),32);
        bufp->chgIData(oldp+1076,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_q),32);
        bufp->chgIData(oldp+1077,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_h_q),32);
        bufp->chgIData(oldp+1078,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mscratch_q),32);
        bufp->chgIData(oldp+1079,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtval_q),32);
        bufp->chgIData(oldp+1080,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtimecmp_q),32);
        bufp->chgBit(oldp+1081,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtime_ie_q));
        bufp->chgIData(oldp+1082,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_medeleg_q),32);
        bufp->chgIData(oldp+1083,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mideleg_q),32);
        bufp->chgIData(oldp+1084,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sepc_q),32);
        bufp->chgIData(oldp+1085,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_stvec_q),32);
        bufp->chgIData(oldp+1086,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_scause_q),32);
        bufp->chgIData(oldp+1087,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_stval_q),32);
        bufp->chgIData(oldp+1088,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sscratch_q),32);
        bufp->chgIData(oldp+1089,((vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mie_q 
                                   & vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_q)),32);
        bufp->chgCData(oldp+1090,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__irq_priv_q),2);
        bufp->chgBit(oldp+1091,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_upd_q));
        bufp->chgIData(oldp+1092,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mepc_r),32);
        bufp->chgIData(oldp+1093,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcause_r),32);
        bufp->chgIData(oldp+1094,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtval_r),32);
        bufp->chgIData(oldp+1095,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_r),32);
        bufp->chgIData(oldp+1096,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtvec_r),32);
        bufp->chgIData(oldp+1097,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mie_r),32);
        bufp->chgCData(oldp+1098,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_r),2);
        bufp->chgIData(oldp+1099,(((IData)(1U) + vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_q)),32);
        bufp->chgIData(oldp+1100,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mscratch_r),32);
        bufp->chgIData(oldp+1101,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtimecmp_r),32);
        bufp->chgBit(oldp+1102,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtime_ie_r));
        bufp->chgIData(oldp+1103,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_medeleg_r),32);
        bufp->chgIData(oldp+1104,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mideleg_r),32);
        bufp->chgIData(oldp+1105,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_next_q),32);
        bufp->chgIData(oldp+1106,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sepc_r),32);
        bufp->chgIData(oldp+1107,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_stvec_r),32);
        bufp->chgIData(oldp+1108,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_scause_r),32);
        bufp->chgIData(oldp+1109,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_stval_r),32);
        bufp->chgIData(oldp+1110,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_satp_r),32);
        bufp->chgIData(oldp+1111,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sscratch_r),32);
        bufp->chgBit(oldp+1112,((0x10U == (0x30U & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))));
        bufp->chgCData(oldp+1113,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                            >> 7U))),5);
        bufp->chgCData(oldp+1114,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                            >> 7U))),5);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgIData(oldp+1115,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__result_r),32);
        bufp->chgSData(oldp+1116,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_fill_r),16);
        bufp->chgIData(oldp+1117,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_1_r),32);
        bufp->chgIData(oldp+1118,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_2_r),32);
        bufp->chgIData(oldp+1119,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_4_r),32);
        bufp->chgIData(oldp+1120,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_8_r),32);
        bufp->chgIData(oldp+1121,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_1_r),32);
        bufp->chgIData(oldp+1122,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_2_r),32);
        bufp->chgIData(oldp+1123,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_4_r),32);
        bufp->chgIData(oldp+1124,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_8_r),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgIData(oldp+1125,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__result_r),32);
        bufp->chgSData(oldp+1126,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_fill_r),16);
        bufp->chgIData(oldp+1127,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_1_r),32);
        bufp->chgIData(oldp+1128,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_2_r),32);
        bufp->chgIData(oldp+1129,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_4_r),32);
        bufp->chgIData(oldp+1130,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_8_r),32);
        bufp->chgIData(oldp+1131,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_1_r),32);
        bufp->chgIData(oldp+1132,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_2_r),32);
        bufp->chgIData(oldp+1133,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_4_r),32);
        bufp->chgIData(oldp+1134,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_8_r),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+1135,(vlSymsp->TOP__v.__PVT__icache_valid_w));
        bufp->chgQData(oldp+1136,(vlSymsp->TOP__v__u_icache.__PVT__inst_r),64);
        bufp->chgBit(oldp+1138,(vlSymsp->TOP__v.__PVT__icache_rd_w));
        bufp->chgIData(oldp+1139,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_write_data_w),32);
        bufp->chgBit(oldp+1140,(vlSymsp->TOP__v__u_icache.__PVT__tag0_hit_w));
        bufp->chgBit(oldp+1141,(vlSymsp->TOP__v__u_icache.__PVT__tag1_hit_w));
        bufp->chgBit(oldp+1142,(vlSymsp->TOP__v__u_icache.__PVT__tag_hit_any_w));
        bufp->chgQData(oldp+1143,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_instr_w),64);
        bufp->chgBit(oldp+1145,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__icache_busy_w));
        bufp->chgIData(oldp+1146,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__evict_data_r),32);
    }
    bufp->chgIData(oldp+1147,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_r),32);
    bufp->chgIData(oldp+1148,(((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_select_w)
                                ? vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_write_data_w
                                : vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                               [vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][1U])),32);
    __Vtemp_2[0U] = (IData)((((QData)((IData)(((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_select_w)
                                                ? vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_write_data_w
                                                : vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                               [vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][1U]))) 
                              << 0x20U) | (QData)((IData)(
                                                          ((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_select_w)
                                                            ? vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_addr_w
                                                            : 
                                                           (0xfffffffcU 
                                                            & vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                                            [vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][0U]))))));
    __Vtemp_2[1U] = (IData)(((((QData)((IData)(((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_select_w)
                                                 ? vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_write_data_w
                                                 : 
                                                vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                                [vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][1U]))) 
                               << 0x20U) | (QData)((IData)(
                                                           ((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_select_w)
                                                             ? vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_addr_w
                                                             : 
                                                            (0xfffffffcU 
                                                             & vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                                             [vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][0U]))))) 
                             >> 0x20U));
    __Vtemp_2[2U] = ((((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_select_w)
                        ? (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_len_w)
                        : 0U) << 5U) | (((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_rd_w) 
                                         << 4U) | (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_wr_w)));
    bufp->chgWData(oldp+1149,(__Vtemp_2),77);
    bufp->chgCData(oldp+1152,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_func_r),4);
    bufp->chgIData(oldp+1153,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_S),32);
    bufp->chgBit(oldp+1154,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__unused));
    bufp->chgCData(oldp+1155,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_a_r 
                                        + (vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                           + (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_Ci))))),8);
    bufp->chgCData(oldp+1156,((0xffU & ((vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_a_r 
                                         >> 8U) + (
                                                   (vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                                    >> 8U) 
                                                   + (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__unused))))),8);
    bufp->chgCData(oldp+1157,((0xffU & ((vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_a_r 
                                         >> 0x10U) 
                                        + ((vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                            >> 0x10U) 
                                           + (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__unused))))),8);
    bufp->chgCData(oldp+1158,((0xffU & ((vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_a_r 
                                         >> 0x18U) 
                                        + ((vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                            >> 0x18U) 
                                           + (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__unused))))),8);
    bufp->chgCData(oldp+1159,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_func_r),4);
    bufp->chgIData(oldp+1160,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_S),32);
    bufp->chgBit(oldp+1161,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__unused));
    bufp->chgCData(oldp+1162,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_a_r 
                                        + (vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                           + (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_Ci))))),8);
    bufp->chgCData(oldp+1163,((0xffU & ((vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_a_r 
                                         >> 8U) + (
                                                   (vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                                    >> 8U) 
                                                   + (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__unused))))),8);
    bufp->chgCData(oldp+1164,((0xffU & ((vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_a_r 
                                         >> 0x10U) 
                                        + ((vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                            >> 0x10U) 
                                           + (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__unused))))),8);
    bufp->chgCData(oldp+1165,((0xffU & ((vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_a_r 
                                         >> 0x18U) 
                                        + ((vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                            >> 0x18U) 
                                           + (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__unused))))),8);
    bufp->chgQData(oldp+1166,((((IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_fault_fetch_w) 
                                | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_fault_page_w))
                                ? 0ULL : vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_instr_w)),64);
    bufp->chgBit(oldp+1168,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r) 
                             & ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__pred_taken_w)) 
                                & (~ (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__stall_w))))));
    bufp->chgQData(oldp+1169,(((0x2002033U == (0xfe00707fU 
                                               & vlSymsp->TOP__v__u_core.__PVT__mul_opcode_opcode_w))
                                ? (QData)((IData)(vlSymsp->TOP__v__u_core.__PVT__mul_opcode_rb_operand_w))
                                : ((0x2001033U == (0xfe00707fU 
                                                   & vlSymsp->TOP__v__u_core.__PVT__mul_opcode_opcode_w))
                                    ? (((QData)((IData)(
                                                        (vlSymsp->TOP__v__u_core.__PVT__mul_opcode_rb_operand_w 
                                                         >> 0x1fU))) 
                                        << 0x20U) | (QData)((IData)(vlSymsp->TOP__v__u_core.__PVT__mul_opcode_rb_operand_w)))
                                    : (QData)((IData)(vlSymsp->TOP__v__u_core.__PVT__mul_opcode_rb_operand_w))))),33);
    bufp->chgQData(oldp+1171,(((0x2002033U == (0xfe00707fU 
                                               & vlSymsp->TOP__v__u_core.__PVT__mul_opcode_opcode_w))
                                ? vlSymsp->TOP__v__u_core.u_mul__DOT____VdfgRegularize_hce0f6733_0_3
                                : ((0x2001033U == (0xfe00707fU 
                                                   & vlSymsp->TOP__v__u_core.__PVT__mul_opcode_opcode_w))
                                    ? vlSymsp->TOP__v__u_core.u_mul__DOT____VdfgRegularize_hce0f6733_0_3
                                    : (QData)((IData)(vlSymsp->TOP__v__u_core.__PVT__mul_opcode_ra_operand_w))))),33);
}

void Vriscv_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_cleanup\n"); );
    // Init
    Vriscv_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_top___024root*>(voidSelf);
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
}
