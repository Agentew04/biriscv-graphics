// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vriscv_top__Syms.h"


VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("v", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_icache__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1174,0,"CORE_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"ICACHE_AXI_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"DCACHE_AXI_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"SUPPORT_BRANCH_PREDICTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"SUPPORT_MULDIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"SUPPORT_SUPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"SUPPORT_MMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"SUPPORT_DUAL_ISSUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"SUPPORT_LOAD_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"SUPPORT_MUL_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"SUPPORT_REGFILE_XILINX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"EXTRA_DECODE_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1176,0,"MEM_CACHE_ADDR_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1177,0,"MEM_CACHE_ADDR_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1178,0,"NUM_BTB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1179,0,"NUM_BTB_ENTRIES_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1180,0,"NUM_BHT_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1181,0,"NUM_BHT_ENTRIES_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"RAS_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"GSHARE_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"BHT_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1182,0,"NUM_RAS_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1183,0,"NUM_RAS_ENTRIES_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"axi_i_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"axi_i_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"axi_i_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"axi_i_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+7,0,"axi_i_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"axi_i_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"axi_i_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"axi_i_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"axi_i_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"axi_i_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+13,0,"axi_i_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"axi_d_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"axi_d_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"axi_d_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"axi_d_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"axi_d_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+19,0,"axi_d_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"axi_d_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"axi_d_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"axi_d_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"axi_d_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+24,0,"axi_d_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"reset_vector_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1184,0,"axi_i_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1185,0,"axi_i_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"axi_i_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1187,0,"axi_i_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1188,0,"axi_i_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1184,0,"axi_i_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1185,0,"axi_i_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"axi_i_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1184,0,"axi_i_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"axi_i_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"axi_i_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+489,0,"axi_i_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"axi_i_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1189,0,"axi_i_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1190,0,"axi_i_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1191,0,"axi_i_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"axi_d_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+491,0,"axi_d_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"axi_d_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+492,0,"axi_d_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1190,0,"axi_d_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+493,0,"axi_d_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+494,0,"axi_d_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+495,0,"axi_d_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+496,0,"axi_d_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1191,0,"axi_d_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"axi_d_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+491,0,"axi_d_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"axi_d_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+492,0,"axi_d_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1190,0,"axi_d_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1191,0,"axi_d_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1136,0,"icache_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"icache_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"dcache_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"dcache_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"dcache_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"dcache_resp_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declQuad(c+1137,0,"icache_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1174,0,"cpu_id_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"dcache_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+502,0,"dcache_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"dcache_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"icache_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"dcache_writeback_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1192,0,"dcache_req_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+504,0,"dcache_cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"icache_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+316,0,"dcache_data_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+409,0,"icache_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"dcache_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"icache_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1139,0,"icache_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"dcache_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+506,0,"dcache_data_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_dcache", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_core", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_icache", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_icache__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__u_core__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1174,0,"AXI_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+502,0,"mem_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"mem_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"mem_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"mem_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+504,0,"mem_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1192,0,"mem_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+500,0,"mem_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"mem_writeback_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"mem_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"axi_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"axi_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"axi_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"axi_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"axi_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+19,0,"axi_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"axi_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"axi_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"axi_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"axi_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+24,0,"axi_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+316,0,"mem_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"mem_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"mem_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"mem_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"mem_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+490,0,"axi_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+491,0,"axi_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"axi_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+492,0,"axi_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1190,0,"axi_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+493,0,"axi_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+494,0,"axi_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+495,0,"axi_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+496,0,"axi_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1191,0,"axi_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"axi_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+491,0,"axi_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"axi_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+492,0,"axi_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1190,0,"axi_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1191,0,"axi_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+507,0,"mem_uncached_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"pmem_cache_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+509,0,"mem_uncached_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"pmem_cache_len_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+36,0,"mem_cached_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+21,0,"pmem_cache_read_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+510,0,"mem_cached_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"pmem_uncached_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"pmem_len_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+511,0,"pmem_uncached_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"mem_cached_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"pmem_cache_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"pmem_cache_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"pmem_cache_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"pmem_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"pmem_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1192,0,"mem_cached_req_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+383,0,"mem_uncached_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"pmem_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+506,0,"mem_uncached_data_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+512,0,"pmem_uncached_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1148,0,"mem_cached_data_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"pmem_uncached_read_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+513,0,"mem_uncached_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"pmem_uncached_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"mem_uncached_data_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1149,0,"pmem_write_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+385,0,"pmem_uncached_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+42,0,"mem_cached_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+514,0,"mem_cached_resp_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1187,0,"pmem_uncached_len_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+506,0,"mem_cached_data_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"pmem_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+515,0,"pmem_select_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"mem_cached_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+504,0,"mem_uncached_cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+502,0,"mem_cached_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+517,0,"mem_uncached_writeback_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+434,0,"pmem_cache_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+386,0,"pmem_cache_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1192,0,"mem_uncached_req_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+518,0,"pmem_uncached_write_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+519,0,"mem_uncached_resp_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+44,0,"pmem_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+504,0,"mem_cached_cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"mem_uncached_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+384,0,"mem_uncached_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"mem_uncached_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"pmem_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1140,0,"pmem_cache_write_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+521,0,"mem_cached_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+502,0,"mem_uncached_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+387,0,"pmem_uncached_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"pmem_read_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+435,0,"mem_cached_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,0,"mem_cached_writeback_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_core", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__u_core__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_axi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1174,0,"AXI_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"outport_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"outport_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"outport_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"outport_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"outport_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+19,0,"outport_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"outport_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"outport_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"outport_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"outport_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+24,0,"outport_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"inport_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+44,0,"inport_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"inport_len_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"inport_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1149,0,"inport_write_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+490,0,"outport_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+491,0,"outport_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"outport_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+492,0,"outport_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1190,0,"outport_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+493,0,"outport_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+494,0,"outport_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+495,0,"outport_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+496,0,"outport_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1191,0,"outport_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"outport_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+491,0,"outport_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"outport_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+492,0,"outport_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1190,0,"outport_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1191,0,"outport_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"inport_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"inport_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"inport_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"inport_read_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+16,0,"bvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"rvalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"bresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+22,0,"rresp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+388,0,"accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+523,0,"res_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"req_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+524,0,"res_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"req_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+526,0,"req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBit(c+47,0,"req_push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1150,0,"req_data_in_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBit(c+529,0,"req_can_issue_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"req_is_read_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"req_is_write_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+492,0,"req_len_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+532,0,"req_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+533,0,"req_last_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"res_push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"resp_pop_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+534,0,"resp_outstanding_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("u_axi", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"inport_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"inport_write_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+491,0,"inport_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"inport_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+492,0,"inport_len_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1190,0,"inport_burst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+535,0,"inport_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+536,0,"inport_wstrb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1191,0,"inport_bready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1191,0,"inport_rready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"outport_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"outport_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"outport_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"outport_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"outport_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+19,0,"outport_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"outport_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"outport_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"outport_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"outport_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+24,0,"outport_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"inport_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"inport_bvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"inport_bresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+18,0,"inport_bid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+20,0,"inport_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"inport_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+22,0,"inport_rresp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+23,0,"inport_rid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+24,0,"inport_rlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+490,0,"outport_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+491,0,"outport_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"outport_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+492,0,"outport_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1190,0,"outport_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+493,0,"outport_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+494,0,"outport_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+495,0,"outport_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+496,0,"outport_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1191,0,"outport_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+497,0,"outport_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+491,0,"outport_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"outport_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+492,0,"outport_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1190,0,"outport_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1191,0,"outport_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"awvalid_inhibit_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,0,"wvalid_inhibit_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+539,0,"req_cnt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+540,0,"wlast_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"buf_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+542,0,"buf_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 36,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_req", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1193,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1194,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1150,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBit(c+47,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+388,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+526,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBit(c+520,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+525,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1194,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ram_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+544+i*3,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 76,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+550,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+551,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+552,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+502,0,"mem_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"mem_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"mem_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"mem_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+504,0,"mem_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1192,0,"mem_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+500,0,"mem_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"mem_writeback_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"mem_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1148,0,"mem_cached_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"mem_cached_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"mem_cached_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"mem_cached_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+514,0,"mem_cached_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+21,0,"mem_uncached_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+509,0,"mem_uncached_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"mem_uncached_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"mem_uncached_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+519,0,"mem_uncached_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+316,0,"mem_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"mem_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"mem_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"mem_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"mem_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+502,0,"mem_cached_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"mem_cached_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"mem_cached_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"mem_cached_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+504,0,"mem_cached_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1192,0,"mem_cached_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+510,0,"mem_cached_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,0,"mem_cached_writeback_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"mem_cached_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+502,0,"mem_uncached_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"mem_uncached_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"mem_uncached_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"mem_uncached_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+504,0,"mem_uncached_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1192,0,"mem_uncached_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+507,0,"mem_uncached_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"mem_uncached_writeback_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"mem_uncached_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+515,0,"cache_active_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+553,0,"hold_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+554,0,"cache_access_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"pending_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+555,0,"pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_pmem_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"outport_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"outport_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"outport_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"outport_read_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+515,0,"select_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+385,0,"inport0_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+387,0,"inport0_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1187,0,"inport0_len_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+512,0,"inport0_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+518,0,"inport0_write_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"inport1_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+40,0,"inport1_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"inport1_len_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"inport1_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1140,0,"inport1_write_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"outport_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+44,0,"outport_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"outport_len_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"outport_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1149,0,"outport_write_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+511,0,"inport0_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"inport0_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"inport0_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"inport0_read_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+508,0,"inport1_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"inport1_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"inport1_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"inport1_read_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,0,"outport_wr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+44,0,"outport_rd_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"outport_len_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"outport_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1149,0,"outport_write_data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+556,0,"select_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_uncached", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+502,0,"mem_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"mem_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+46,0,"mem_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"mem_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+504,0,"mem_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1192,0,"mem_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+507,0,"mem_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+517,0,"mem_writeback_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+513,0,"mem_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+511,0,"outport_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"outport_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"outport_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"outport_read_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"mem_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+509,0,"mem_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"mem_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"mem_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+519,0,"mem_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+385,0,"outport_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+387,0,"outport_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1187,0,"outport_len_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+512,0,"outport_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+518,0,"outport_write_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+557,0,"res_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+558,0,"req_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"request_complete_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"req_pop_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+559,0,"req_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+560,0,"req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 69,0);
    tracep->declBit(c+563,0,"drop_req_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"req_push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"res_push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+564,0,"request_pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"request_in_progress_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"req_is_read_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+392,0,"req_is_write_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+393,0,"req_is_drop_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"dropped_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_req", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1195,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1194,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+53,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 69,0);
    tracep->declBit(c+51,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+390,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+560,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 69,0);
    tracep->declBit(c+558,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+559,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1194,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ram_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+566+i*3,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 69,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+572,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+573,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+574,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_resp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1196,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1194,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1192,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+52,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+383,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+519,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+557,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+575,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1194,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ram_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+576+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+578,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+579,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+580,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_icache__u_tag0__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_icache__u_tag1__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_icache__u_data0__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_icache__u_data1__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_icache__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_icache__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1174,0,"AXI_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1139,0,"req_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"req_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"req_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"req_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"axi_awready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"axi_wready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"axi_bvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"axi_bresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+7,0,"axi_bid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"axi_arready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"axi_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"axi_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"axi_rresp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+12,0,"axi_rid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+13,0,"axi_rlast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"req_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1136,0,"req_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"req_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1137,0,"req_inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1184,0,"axi_awvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1185,0,"axi_awaddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"axi_awid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1187,0,"axi_awlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1188,0,"axi_awburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1184,0,"axi_wvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1185,0,"axi_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"axi_wstrb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1184,0,"axi_wlast_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"axi_bready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"axi_arvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+489,0,"axi_araddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"axi_arid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1189,0,"axi_arlen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1190,0,"axi_arburst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1191,0,"axi_rready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1194,0,"ICACHE_NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1197,0,"ICACHE_NUM_LINES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1182,0,"ICACHE_LINE_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1179,0,"ICACHE_LINE_SIZE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1178,0,"ICACHE_LINE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1182,0,"ICACHE_LINE_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1198,0,"ICACHE_DATA_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1179,0,"ICACHE_TAG_REQ_LINE_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1199,0,"ICACHE_TAG_REQ_LINE_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1182,0,"ICACHE_TAG_REQ_LINE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1200,0,"CACHE_TAG_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1200,0,"CACHE_TAG_VALID_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1201,0,"CACHE_TAG_DATA_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1202,0,"ICACHE_TAG_CMP_ADDR_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1203,0,"ICACHE_TAG_CMP_ADDR_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1200,0,"ICACHE_TAG_CMP_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"req_line_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1204,0,"CACHE_DATA_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"req_data_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+1194,0,"STATE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1188,0,"STATE_FLUSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1190,0,"STATE_LOOKUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1205,0,"STATE_REFILL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1206,0,"STATE_RELOOKUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+410,0,"next_state_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+581,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+582,0,"invalidate_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+583,0,"replace_way_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+584,0,"lookup_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+585,0,"lookup_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+586,0,"req_pc_tag_cmp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+58,0,"tag_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+587,0,"tag_data_in_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+394,0,"tag0_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+444,0,"tag0_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("u_tag0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_icache__u_tag0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+445,0,"tag0_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+446,0,"tag0_addr_bits_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+1141,0,"tag0_hit_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"tag1_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+447,0,"tag1_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->pushPrefix("u_tag1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_icache__u_tag1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+448,0,"tag1_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+449,0,"tag1_addr_bits_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+1142,0,"tag1_hit_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1143,0,"tag_hit_any_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"data_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+588,0,"data_write_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+589,0,"refill_word_idx_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+590,0,"refill_lower_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+396,0,"data0_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+450,0,"data0_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("u_data0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_icache__u_data0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+397,0,"data1_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+452,0,"data1_data_out_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("u_data1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_icache__u_data1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+591,0,"flush_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1137,0,"inst_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+592,0,"axi_arvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"axi_error_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_csr__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1175,0,"SUPPORT_BRANCH_PREDICTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"SUPPORT_MULDIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"SUPPORT_SUPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"SUPPORT_MMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"SUPPORT_DUAL_ISSUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"SUPPORT_LOAD_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"SUPPORT_MUL_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"SUPPORT_REGFILE_XILINX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"EXTRA_DECODE_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1176,0,"MEM_CACHE_ADDR_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1177,0,"MEM_CACHE_ADDR_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1178,0,"NUM_BTB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1179,0,"NUM_BTB_ENTRIES_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1180,0,"NUM_BHT_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1181,0,"NUM_BHT_ENTRIES_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"RAS_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"GSHARE_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"BHT_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1182,0,"NUM_RAS_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1183,0,"NUM_RAS_ENTRIES_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+316,0,"mem_d_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"mem_d_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"mem_d_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"mem_d_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"mem_d_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+409,0,"mem_i_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1136,0,"mem_i_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"mem_i_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1137,0,"mem_i_inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+25,0,"intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"reset_vector_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"cpu_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+502,0,"mem_d_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"mem_d_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"mem_d_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"mem_d_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+504,0,"mem_d_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1192,0,"mem_d_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+500,0,"mem_d_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"mem_d_writeback_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"mem_d_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1139,0,"mem_i_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"mem_i_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"mem_i_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"mem_i_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+503,0,"mmu_lsu_writeback_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"csr_opcode_rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+61,0,"mul_opcode_rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+593,0,"fetch1_instr_csr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"branch_d_exec1_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"mmu_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"lsu_opcode_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+595,0,"branch_exec0_source_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1206,0,"fetch_in_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+318,0,"csr_opcode_rb_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"writeback_mem_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+596,0,"writeback_div_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+63,0,"csr_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+597,0,"branch_csr_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1137,0,"mmu_ifetch_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+380,0,"mmu_lsu_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+598,0,"fetch0_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+599,0,"branch_exec0_is_call_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"mul_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"branch_exec0_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+601,0,"mmu_mxr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+602,0,"branch_exec0_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"opcode0_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+320,0,"opcode0_ra_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1136,0,"mmu_ifetch_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"csr_opcode_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+603,0,"csr_writeback_exception_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+604,0,"branch_exec1_is_call_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+605,0,"branch_exec1_is_not_taken_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1188,0,"branch_d_exec0_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+606,0,"branch_exec1_is_taken_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"opcode1_rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+318,0,"opcode0_rb_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+607,0,"fetch1_instr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+608,0,"csr_writeback_exception_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+609,0,"fetch1_instr_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"mmu_lsu_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1184,0,"fetch_in_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"fetch0_instr_rd_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"branch_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"csr_opcode_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,0,"mmu_lsu_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"writeback_mem_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+611,0,"csr_result_e1_exception_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+612,0,"fetch0_instr_div_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+613,0,"fetch0_fault_fetch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+614,0,"branch_info_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+615,0,"fetch1_fault_page_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+506,0,"mmu_lsu_data_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+501,0,"mmu_lsu_resp_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1192,0,"mmu_lsu_req_tag_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+616,0,"fetch1_instr_div_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+617,0,"branch_exec1_source_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"mul_opcode_opcode_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+321,0,"branch_d_exec0_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+398,0,"branch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"mul_opcode_ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"csr_opcode_rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+73,0,"lsu_stall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"opcode1_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+618,0,"branch_info_is_not_taken_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+399,0,"branch_csr_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"opcode0_ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+619,0,"branch_info_is_taken_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"mul_opcode_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"mul_opcode_rb_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+620,0,"branch_info_is_ret_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+621,0,"branch_exec0_is_taken_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+323,0,"mul_opcode_ra_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+622,0,"fetch1_instr_exec_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+623,0,"fetch0_instr_exec_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"exec1_hold_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"exec0_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+624,0,"writeback_exec1_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+625,0,"branch_info_is_jmp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+324,0,"opcode1_rb_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+626,0,"fetch1_instr_lsu_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+627,0,"branch_exec1_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"lsu_opcode_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+502,0,"mmu_lsu_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"mul_hold_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"mmu_ifetch_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+628,0,"branch_exec1_is_jmp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"mmu_ifetch_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+629,0,"branch_csr_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+325,0,"lsu_opcode_ra_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"mmu_lsu_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+630,0,"fetch0_instr_mul_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"fetch0_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+631,0,"branch_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+78,0,"div_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+632,0,"fetch0_instr_lsu_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"interrupt_inhibit_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"mmu_ifetch_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+633,0,"branch_exec1_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+634,0,"fetch0_instr_csr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+400,0,"writeback_mem_exception_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+635,0,"fetch1_instr_branch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+636,0,"fetch0_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+637,0,"csr_result_e1_write_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+320,0,"csr_opcode_ra_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"opcode0_opcode_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1188,0,"branch_d_exec1_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+638,0,"branch_exec0_is_not_taken_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+639,0,"branch_exec1_is_ret_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+640,0,"writeback_div_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+326,0,"opcode1_ra_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"mul_opcode_rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+34,0,"mmu_ifetch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1139,0,"mmu_ifetch_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,0,"fetch0_fault_page_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"mmu_ifetch_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"opcode1_opcode_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"lsu_opcode_rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+85,0,"lsu_opcode_opcode_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1184,0,"mmu_load_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+642,0,"mmu_satp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+643,0,"csr_result_e1_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"opcode1_ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+500,0,"mmu_lsu_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+644,0,"writeback_exec0_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"csr_opcode_ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+645,0,"ifence_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"exec1_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+646,0,"branch_exec0_is_jmp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+647,0,"fetch1_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+648,0,"csr_writeback_wdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+88,0,"fetch1_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+649,0,"csr_writeback_write_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+650,0,"take_interrupt_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+651,0,"csr_result_e1_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"opcode1_rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+652,0,"fetch0_instr_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+653,0,"csr_writeback_waddr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+654,0,"fetch1_fault_fetch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"fetch1_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"fetch0_instr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+504,0,"mmu_lsu_cacheable_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"branch_d_exec0_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"opcode1_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"exec0_hold_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"opcode0_rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1184,0,"opcode0_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"lsu_opcode_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"branch_info_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+657,0,"mmu_priv_d_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"csr_opcode_opcode_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+658,0,"fetch0_instr_branch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"mul_opcode_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,0,"branch_exec0_is_ret_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+316,0,"mmu_lsu_data_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+660,0,"writeback_mul_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+499,0,"mmu_lsu_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"lsu_opcode_rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+32,0,"mmu_lsu_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+661,0,"fetch1_instr_rd_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+328,0,"lsu_opcode_rb_operand_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+662,0,"mmu_sum_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+663,0,"branch_info_source_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+664,0,"branch_info_is_call_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"opcode0_rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+329,0,"branch_d_exec1_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"lsu_opcode_ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+665,0,"csr_writeback_exception_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+666,0,"fetch1_instr_mul_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"mmu_store_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_csr__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_issue", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_div", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1184,0,"opcode_invalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+75,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+320,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+640,0,"writeback_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+596,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+640,0,"valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+596,0,"wb_result_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+94,0,"inst_div_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"inst_divu_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"inst_rem_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"inst_remu_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"div_rem_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"signed_operation_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"div_operation_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+667,0,"dividend_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+668,0,"divisor_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 62,0);
    tracep->declBus(c+670,0,"quotient_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+671,0,"q_mask_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+672,0,"div_inst_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+673,0,"div_busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+674,0,"invert_res_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+675,0,"last_a_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+676,0,"last_b_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+677,0,"last_div_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+678,0,"last_divu_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+679,0,"last_rem_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+680,0,"last_remu_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"div_start_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+681,0,"div_complete_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+682,0,"div_result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_exec0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1184,0,"opcode_invalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+75,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+320,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"hold_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"branch_request_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+621,0,"branch_is_taken_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"branch_is_not_taken_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+595,0,"branch_source_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+599,0,"branch_is_call_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,0,"branch_is_ret_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+646,0,"branch_is_jmp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+602,0,"branch_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+327,0,"branch_d_request_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+321,0,"branch_d_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1188,0,"branch_d_priv_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+644,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"imm20_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"imm12_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"bimm_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"jimm20_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"shamt_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1153,0,"alu_func_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+330,0,"alu_input_a_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+331,0,"alu_input_b_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1116,0,"alu_p_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+644,0,"result_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,0,"less_than_signed__Vstatic__v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+333,0,"greater_than_signed__Vstatic__v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+334,0,"branch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+335,0,"branch_taken_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+321,0,"branch_target_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+336,0,"branch_call_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+337,0,"branch_ret_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+338,0,"branch_jmp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+621,0,"branch_taken_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"branch_ntaken_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+602,0,"pc_x_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+595,0,"pc_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+599,0,"branch_call_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,0,"branch_ret_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+646,0,"branch_jmp_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1153,0,"alu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+330,0,"alu_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+331,0,"alu_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1116,0,"alu_p_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1116,0,"result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1117,0,"shift_right_fill_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,16);
    tracep->declBus(c+1118,0,"shift_right_1_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1119,0,"shift_right_2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1120,0,"shift_right_4_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1121,0,"shift_right_8_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1122,0,"shift_left_1_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1123,0,"shift_left_2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1124,0,"shift_left_4_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1125,0,"shift_left_8_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+339,0,"sub_res_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,0,"addsub_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+414,0,"addsub_Ci",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1154,0,"addsub_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1207,0,"Co0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1208,0,"Co1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1209,0,"Co2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1210,0,"Co3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1155,0,"unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_adder32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+330,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+414,0,"Ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1191,0,"Cprop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1154,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1155,0,"Co0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1155,0,"Co1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1155,0,"Co2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1155,0,"Co3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_adder8_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+340,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+415,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+414,0,"Ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1156,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1155,0,"Co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_adder8_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+341,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+416,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1155,0,"Ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1157,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1155,0,"Co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_adder8_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+342,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+417,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1155,0,"Ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1158,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1155,0,"Co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_adder8_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+343,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+418,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1155,0,"Ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1159,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1155,0,"Co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_exec1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+83,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1184,0,"opcode_invalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+86,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+89,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+326,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"hold_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+627,0,"branch_request_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+606,0,"branch_is_taken_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+605,0,"branch_is_not_taken_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+617,0,"branch_source_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+604,0,"branch_is_call_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+639,0,"branch_is_ret_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+628,0,"branch_is_jmp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+633,0,"branch_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+317,0,"branch_d_request_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+329,0,"branch_d_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1188,0,"branch_d_priv_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+624,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"imm20_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"imm12_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"bimm_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"jimm20_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"shamt_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1160,0,"alu_func_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+344,0,"alu_input_a_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+345,0,"alu_input_b_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1126,0,"alu_p_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+624,0,"result_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+346,0,"less_than_signed__Vstatic__v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+347,0,"greater_than_signed__Vstatic__v",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+348,0,"branch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"branch_taken_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+329,0,"branch_target_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+350,0,"branch_call_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+351,0,"branch_ret_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"branch_jmp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+606,0,"branch_taken_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+605,0,"branch_ntaken_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+633,0,"pc_x_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+617,0,"pc_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+604,0,"branch_call_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+639,0,"branch_ret_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+628,0,"branch_jmp_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1160,0,"alu_op_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+344,0,"alu_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+345,0,"alu_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1126,0,"alu_p_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1126,0,"result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1127,0,"shift_right_fill_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,16);
    tracep->declBus(c+1128,0,"shift_right_1_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1129,0,"shift_right_2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1130,0,"shift_right_4_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1131,0,"shift_right_8_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1132,0,"shift_left_1_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1133,0,"shift_left_2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1134,0,"shift_left_4_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1135,0,"shift_left_8_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+353,0,"sub_res_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+419,0,"addsub_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+420,0,"addsub_Ci",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1161,0,"addsub_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1211,0,"Co0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1212,0,"Co1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1213,0,"Co2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1214,0,"Co3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1162,0,"unused",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_adder32", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+344,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+419,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+420,0,"Ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1191,0,"Cprop",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1161,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1162,0,"Co0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1162,0,"Co1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1162,0,"Co2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1162,0,"Co3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_adder8_0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+354,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+421,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+420,0,"Ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1163,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1162,0,"Co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_adder8_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+355,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+422,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1162,0,"Ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1164,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1162,0,"Co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_adder8_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+356,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+423,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1162,0,"Ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1165,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1162,0,"Co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_adder8_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+357,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+424,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1162,0,"Ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1166,0,"S",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1162,0,"Co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_frontend", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1175,0,"SUPPORT_BRANCH_PREDICTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"SUPPORT_MULDIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"SUPPORT_MMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"EXTRA_DECODE_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1178,0,"NUM_BTB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1179,0,"NUM_BTB_ENTRIES_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1180,0,"NUM_BHT_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1181,0,"NUM_BHT_ENTRIES_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"RAS_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"GSHARE_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"BHT_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1182,0,"NUM_RAS_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1183,0,"NUM_RAS_ENTRIES_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"icache_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1136,0,"icache_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"icache_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1137,0,"icache_inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1184,0,"icache_page_fault_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"fetch0_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"fetch1_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+645,0,"fetch_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"branch_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+398,0,"branch_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+631,0,"branch_priv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+91,0,"branch_info_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+619,0,"branch_info_is_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+618,0,"branch_info_is_not_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+663,0,"branch_info_source_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+664,0,"branch_info_is_call_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+620,0,"branch_info_is_ret_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+625,0,"branch_info_is_jmp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+614,0,"branch_info_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1139,0,"icache_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"icache_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"icache_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"icache_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1206,0,"icache_priv_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+636,0,"fetch0_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"fetch0_instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+598,0,"fetch0_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+613,0,"fetch0_fault_fetch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,0,"fetch0_fault_page_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+623,0,"fetch0_instr_exec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+632,0,"fetch0_instr_lsu_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+658,0,"fetch0_instr_branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+630,0,"fetch0_instr_mul_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+612,0,"fetch0_instr_div_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"fetch0_instr_csr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"fetch0_instr_rd_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+652,0,"fetch0_instr_invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"fetch1_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+607,0,"fetch1_instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+647,0,"fetch1_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+654,0,"fetch1_fault_fetch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+615,0,"fetch1_fault_page_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+622,0,"fetch1_instr_exec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+626,0,"fetch1_instr_lsu_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"fetch1_instr_branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+666,0,"fetch1_instr_mul_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"fetch1_instr_div_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"fetch1_instr_csr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+661,0,"fetch1_instr_rd_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+609,0,"fetch1_instr_invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"fetch_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1144,0,"fetch_instr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+683,0,"fetch_fault_page_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"next_pc_f_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"next_taken_f_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"fetch_pc_f_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+684,0,"fetch_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+685,0,"fetch_pred_branch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+686,0,"fetch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+687,0,"fetch_fault_fetch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"fetch_pc_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_decode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1175,0,"SUPPORT_MULDIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"EXTRA_DECODE_STAGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"fetch_in_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1144,0,"fetch_in_instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+685,0,"fetch_in_pred_branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+687,0,"fetch_in_fault_fetch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+683,0,"fetch_in_fault_page_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+686,0,"fetch_in_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+79,0,"fetch_out0_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"fetch_out1_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"branch_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+398,0,"branch_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+631,0,"branch_priv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+684,0,"fetch_in_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+636,0,"fetch_out0_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"fetch_out0_instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+598,0,"fetch_out0_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+613,0,"fetch_out0_fault_fetch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,0,"fetch_out0_fault_page_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+623,0,"fetch_out0_instr_exec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+632,0,"fetch_out0_instr_lsu_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+658,0,"fetch_out0_instr_branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+630,0,"fetch_out0_instr_mul_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+612,0,"fetch_out0_instr_div_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"fetch_out0_instr_csr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"fetch_out0_instr_rd_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+652,0,"fetch_out0_instr_invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"fetch_out1_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+607,0,"fetch_out1_instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+647,0,"fetch_out1_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+654,0,"fetch_out1_fault_fetch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+615,0,"fetch_out1_fault_page_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+622,0,"fetch_out1_instr_exec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+626,0,"fetch_out1_instr_lsu_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"fetch_out1_instr_branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+666,0,"fetch_out1_instr_mul_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"fetch_out1_instr_div_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"fetch_out1_instr_csr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+661,0,"fetch_out1_instr_rd_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+609,0,"fetch_out1_instr_invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1191,0,"enable_muldiv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("genblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_dec0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+636,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+688,0,"fetch_fault_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1191,0,"enable_muldiv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+652,0,"invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+623,0,"exec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+632,0,"lsu_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+658,0,"branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+630,0,"mul_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+612,0,"div_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"csr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"rd_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+652,0,"invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_dec1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+655,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+689,0,"fetch_fault_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1191,0,"enable_muldiv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+607,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+609,0,"invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+622,0,"exec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+626,0,"lsu_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+666,0,"mul_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"div_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"csr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+661,0,"rd_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+609,0,"invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_fifo", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1198,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1194,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1194,0,"OPC_INFO_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+358,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+686,0,"pc_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+685,0,"pred_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+1167,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+690,0,"info0_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+690,0,"info1_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+684,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+636,0,"valid0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+598,0,"pc0_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+656,0,"data0_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+691,0,"info0_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+79,0,"pop0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"valid1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+647,0,"pc1_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+607,0,"data1_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+692,0,"info1_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+88,0,"pop1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1194,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pc_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+693+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("valid0_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+695+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("valid1_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+697+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("info0_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+699+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("info1_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+701+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ram_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+703+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+707,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+708,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+709,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+359,0,"push_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"pop1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"pop2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"pop_complete_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+710,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_fetch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1174,0,"SUPPORT_MMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+684,0,"fetch_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+409,0,"icache_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1136,0,"icache_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"icache_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1137,0,"icache_inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1184,0,"icache_page_fault_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+645,0,"fetch_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"branch_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+398,0,"branch_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+631,0,"branch_priv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+110,0,"next_pc_f_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"next_taken_f_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+358,0,"fetch_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1144,0,"fetch_instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+685,0,"fetch_pred_branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+687,0,"fetch_fault_fetch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+683,0,"fetch_fault_page_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+686,0,"fetch_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1139,0,"icache_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"icache_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"icache_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"icache_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1206,0,"icache_priv_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"pc_f_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+411,0,"pc_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+711,0,"active_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1146,0,"icache_busy_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"stall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+712,0,"branch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+713,0,"branch_pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1215,0,"branch_priv_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+116,0,"branch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"branch_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1206,0,"branch_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+714,0,"stall_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+715,0,"icache_fetch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+716,0,"icache_invalidate_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+717,0,"pc_f_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+718,0,"pc_d_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+719,0,"pred_d_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+112,0,"icache_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1206,0,"icache_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+116,0,"fetch_resp_drop_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+720,0,"skid_buffer_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 99,0);
    tracep->declBit(c+724,0,"skid_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_npc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1175,0,"SUPPORT_BRANCH_PREDICTION",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1178,0,"NUM_BTB_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1179,0,"NUM_BTB_ENTRIES_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1180,0,"NUM_BHT_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1181,0,"NUM_BHT_ENTRIES_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"RAS_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"GSHARE_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"BHT_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1182,0,"NUM_RAS_ENTRIES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1183,0,"NUM_RAS_ENTRIES_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+91,0,"branch_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+619,0,"branch_is_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+618,0,"branch_is_not_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+663,0,"branch_source_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+664,0,"branch_is_call_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+620,0,"branch_is_ret_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+625,0,"branch_is_jmp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+614,0,"branch_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"pc_f_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+411,0,"pc_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"next_pc_f_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"next_taken_f_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1216,0,"RAS_INVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("BRANCH_PREDICTION", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+360,0,"pred_taken_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1169,0,"pred_ntaken_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"btb_valid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"btb_upper_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1217,0,"btb_next_pc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+120,0,"btb_is_call_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"btb_is_ret_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+725,0,"ras_index_real_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+122,0,"ras_index_real_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("ras_stack_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+726+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+734,0,"ras_index_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+361,0,"ras_index_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+735,0,"ras_pc_pred_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+123,0,"ras_call_pred_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"ras_ret_pred_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+736,0,"i3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+737,0,"global_history_real_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+738,0,"global_history_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+125,0,"gshare_wr_entry_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+126,0,"gshare_rd_entry_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+739,0,"bht_wr_entry_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+127,0,"bht_rd_entry_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+740,0,"i4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+128,0,"bht_predict_taken_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("btb_pc_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+741+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("btb_target_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+773+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("btb_is_call_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+805+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("btb_is_ret_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+837+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("btb_is_jmp_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBit(c+869+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+118,0,"btb_valid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"btb_upper_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"btb_is_call_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"btb_is_ret_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+129,0,"btb_next_pc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+130,0,"btb_is_jmp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"btb_entry_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+132,0,"i0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+133,0,"btb_wr_entry_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+901,0,"btb_wr_alloc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+134,0,"btb_hit_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"btb_miss_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"i1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+902,0,"i2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("u_lru", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1178,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1179,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1218,0,"INITIAL_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1219,0,"TAP_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"hit_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"hit_entry_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+135,0,"alloc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+901,0,"alloc_entry_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+903,0,"lfsr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_lsu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1176,0,"MEM_CACHE_ADDR_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1177,0,"MEM_CACHE_ADDR_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1184,0,"opcode_invalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+93,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+92,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+325,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"mem_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"mem_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"mem_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"mem_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"mem_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+1184,0,"mem_load_fault_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"mem_store_fault_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+502,0,"mem_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"mem_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"mem_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"mem_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+504,0,"mem_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1192,0,"mem_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+500,0,"mem_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"mem_writeback_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"mem_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"writeback_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+319,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+400,0,"writeback_exception_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+73,0,"stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+904,0,"mem_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"mem_data_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+905,0,"mem_rd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+906,0,"mem_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+504,0,"mem_cacheable_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+500,0,"mem_invalidate_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"mem_writeback_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"mem_flush_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"mem_unaligned_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+908,0,"mem_unaligned_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+909,0,"mem_load_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+910,0,"mem_xb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+911,0,"mem_xh_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+912,0,"mem_ls_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+913,0,"pending_lsu_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"issue_lsu_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"complete_ok_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"complete_err_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"delay_lsu_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"load_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"load_signed_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"store_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+144,0,"req_lb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+145,0,"req_lh_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+146,0,"req_lw_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+147,0,"req_sb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+148,0,"req_sh_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+149,0,"req_sw_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+150,0,"req_sw_lw_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+151,0,"req_sh_lh_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+362,0,"mem_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+363,0,"mem_unaligned_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+364,0,"mem_data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+365,0,"mem_rd_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+366,0,"mem_wr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+152,0,"dcache_flush_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+153,0,"dcache_writeback_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+154,0,"dcache_invalidate_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+914,0,"resp_load_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+915,0,"resp_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+916,0,"resp_byte_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+917,0,"resp_half_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+918,0,"resp_signed_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+367,0,"addr_lsb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+368,0,"load_byte_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+369,0,"load_half_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+370,0,"load_signed_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+319,0,"wb_result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+919,0,"fault_load_align_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+920,0,"fault_store_align_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+401,0,"fault_load_bus_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+402,0,"fault_store_bus_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"fault_load_page_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"fault_store_page_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_lsu_request", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1220,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1194,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+921,0,"data_in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+155,0,"push_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"pop_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+923,0,"data_out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBit(c+925,0,"accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+926,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1194,0,"COUNT_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ram_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+927+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 35,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+931,0,"rd_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+932,0,"wr_ptr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+933,0,"count_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+934,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_mmu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1176,0,"MEM_CACHE_ADDR_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1177,0,"MEM_CACHE_ADDR_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"SUPPORT_MMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+657,0,"priv_d_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+662,0,"sum_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+601,0,"mxr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+642,0,"satp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1139,0,"fetch_in_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"fetch_in_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"fetch_in_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"fetch_in_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1206,0,"fetch_in_priv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+409,0,"fetch_out_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1136,0,"fetch_out_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"fetch_out_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1137,0,"fetch_out_inst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+502,0,"lsu_in_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"lsu_in_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"lsu_in_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"lsu_in_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+504,0,"lsu_in_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1192,0,"lsu_in_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+500,0,"lsu_in_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"lsu_in_writeback_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"lsu_in_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+316,0,"lsu_out_data_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"lsu_out_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"lsu_out_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"lsu_out_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"lsu_out_resp_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+409,0,"fetch_in_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1136,0,"fetch_in_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+505,0,"fetch_in_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1137,0,"fetch_in_inst_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1139,0,"fetch_out_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+498,0,"fetch_out_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"fetch_out_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"fetch_out_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1184,0,"fetch_in_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+316,0,"lsu_in_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"lsu_in_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"lsu_in_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"lsu_in_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"lsu_in_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+502,0,"lsu_out_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"lsu_out_data_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"lsu_out_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"lsu_out_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+504,0,"lsu_out_cacheable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1192,0,"lsu_out_req_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+500,0,"lsu_out_invalidate_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+503,0,"lsu_out_writeback_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+499,0,"lsu_out_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"lsu_in_load_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"lsu_in_store_fault_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1194,0,"STATE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"STATE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"STATE_LEVEL_FIRST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1194,0,"STATE_LEVEL_SECOND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1183,0,"STATE_UPDATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mul", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1184,0,"opcode_invalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+71,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+82,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+323,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"hold_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+660,0,"writeback_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1194,0,"MULT_STAGES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+660,0,"result_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+935,0,"result_e3_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+936,0,"operand_a_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+938,0,"operand_b_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+940,0,"mulhi_sel_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+941,0,"mult_result_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declQuad(c+1170,0,"operand_b_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+1172,0,"operand_a_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+944,0,"result_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+156,0,"mult_inst_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__u_core__u_tag0__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__u_core__u_tag1__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__u_core__u_data0__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__u_core__u_data1__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__u_core__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__u_core__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+502,0,"mem_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+506,0,"mem_data_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"mem_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"mem_wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+504,0,"mem_cacheable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1192,0,"mem_req_tag_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+510,0,"mem_invalidate_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,0,"mem_writeback_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+516,0,"mem_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+508,0,"outport_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"outport_ack_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"outport_error_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"outport_read_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1148,0,"mem_data_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"mem_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+435,0,"mem_ack_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"mem_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+514,0,"mem_resp_tag_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+434,0,"outport_wr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+40,0,"outport_rd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"outport_len_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"outport_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1140,0,"outport_write_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1194,0,"DCACHE_NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1197,0,"DCACHE_NUM_LINES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1182,0,"DCACHE_LINE_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1179,0,"DCACHE_LINE_SIZE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1178,0,"DCACHE_LINE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1182,0,"DCACHE_LINE_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1179,0,"DCACHE_TAG_REQ_LINE_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1199,0,"DCACHE_TAG_REQ_LINE_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1182,0,"DCACHE_TAG_REQ_LINE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1200,0,"CACHE_TAG_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1200,0,"CACHE_TAG_DIRTY_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1201,0,"CACHE_TAG_VALID_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1221,0,"CACHE_TAG_DATA_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1202,0,"DCACHE_TAG_CMP_ADDR_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1203,0,"DCACHE_TAG_CMP_ADDR_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1200,0,"DCACHE_TAG_CMP_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1222,0,"STATE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"STATE_RESET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1223,0,"STATE_FLUSH_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1224,0,"STATE_FLUSH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1225,0,"STATE_LOOKUP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1226,0,"STATE_READ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1227,0,"STATE_WRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1228,0,"STATE_REFILL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1229,0,"STATE_EVICT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1230,0,"STATE_EVICT_WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1231,0,"STATE_INVALIDATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1232,0,"STATE_WRITEBACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+157,0,"next_state_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+945,0,"state_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+946,0,"mem_addr_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+947,0,"mem_data_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+948,0,"mem_wr_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+949,0,"mem_rd_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+514,0,"mem_tag_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+950,0,"mem_inval_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+951,0,"mem_writeback_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+952,0,"mem_flush_m_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"mem_accept_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+953,0,"req_addr_tag_cmp_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+954,0,"replace_way_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+434,0,"pmem_wr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+40,0,"pmem_rd_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"pmem_len_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+955,0,"pmem_last_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"pmem_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1140,0,"pmem_write_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+508,0,"pmem_accept_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+382,0,"pmem_ack_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"pmem_error_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"pmem_read_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+436,0,"evict_way_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"tag_dirty_any_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+437,0,"tag_hit_and_dirty_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+956,0,"flushing_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+158,0,"tag_addr_x_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+957,0,"tag_addr_m_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+958,0,"tag_data_in_m_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+159,0,"tag0_write_m_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+426,0,"tag0_data_out_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->pushPrefix("u_tag0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__u_core__u_tag0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+427,0,"tag0_valid_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+428,0,"tag0_dirty_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+429,0,"tag0_addr_bits_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+438,0,"tag0_hit_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"tag1_write_m_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+430,0,"tag1_data_out_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->pushPrefix("u_tag1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__u_core__u_tag1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+431,0,"tag1_valid_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+432,0,"tag1_dirty_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+433,0,"tag1_addr_bits_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBit(c+439,0,"tag1_hit_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+440,0,"tag_hit_any_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1233,0,"EVICT_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+441,0,"evict_way_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1147,0,"evict_data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"evict_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+442,0,"evict_addr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 26,0);
    tracep->declBus(c+1147,0,"evict_data_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1196,0,"CACHE_DATA_ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"data_addr_x_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+162,0,"data_addr_m_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+959,0,"data_write_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+163,0,"data0_write_m_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+454,0,"data0_data_out_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+403,0,"data0_data_in_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_data0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__u_core__u_data0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+164,0,"data1_write_m_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+455,0,"data1_data_out_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+403,0,"data1_data_in_m_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_data1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__u_core__u_data1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+960,0,"flush_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+961,0,"flush_last_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1148,0,"data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+435,0,"mem_ack_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+962,0,"pmem_rd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+963,0,"pmem_wr0_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+964,0,"pmem_len_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+965,0,"pmem_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+966,0,"pmem_wr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+967,0,"pmem_write_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+521,0,"error_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"refill_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"evict_request_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+968,0,"dbg_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_regfile__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe0_dec0_verif__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe0_dec1_verif__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1175,0,"SUPPORT_MULDIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"SUPPORT_DUAL_ISSUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"SUPPORT_LOAD_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"SUPPORT_MUL_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"SUPPORT_REGFILE_XILINX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+636,0,"fetch0_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+656,0,"fetch0_instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+598,0,"fetch0_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+613,0,"fetch0_fault_fetch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,0,"fetch0_fault_page_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+623,0,"fetch0_instr_exec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+632,0,"fetch0_instr_lsu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+658,0,"fetch0_instr_branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+630,0,"fetch0_instr_mul_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+612,0,"fetch0_instr_div_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"fetch0_instr_csr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"fetch0_instr_rd_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+652,0,"fetch0_instr_invalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"fetch1_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+607,0,"fetch1_instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+647,0,"fetch1_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+654,0,"fetch1_fault_fetch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+615,0,"fetch1_fault_page_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+622,0,"fetch1_instr_exec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+626,0,"fetch1_instr_lsu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"fetch1_instr_branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+666,0,"fetch1_instr_mul_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"fetch1_instr_div_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"fetch1_instr_csr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+661,0,"fetch1_instr_rd_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+609,0,"fetch1_instr_invalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+600,0,"branch_exec0_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+621,0,"branch_exec0_is_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"branch_exec0_is_not_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+595,0,"branch_exec0_source_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+599,0,"branch_exec0_is_call_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+659,0,"branch_exec0_is_ret_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+646,0,"branch_exec0_is_jmp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+602,0,"branch_exec0_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+327,0,"branch_d_exec0_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+321,0,"branch_d_exec0_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1188,0,"branch_d_exec0_priv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+627,0,"branch_exec1_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+606,0,"branch_exec1_is_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+605,0,"branch_exec1_is_not_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+617,0,"branch_exec1_source_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+604,0,"branch_exec1_is_call_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+639,0,"branch_exec1_is_ret_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+628,0,"branch_exec1_is_jmp_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+633,0,"branch_exec1_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+317,0,"branch_d_exec1_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+329,0,"branch_d_exec1_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1188,0,"branch_d_exec1_priv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+597,0,"branch_csr_request_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+399,0,"branch_csr_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+629,0,"branch_csr_priv_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+644,0,"writeback_exec0_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+624,0,"writeback_exec1_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"writeback_mem_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+319,0,"writeback_mem_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+400,0,"writeback_mem_exception_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+660,0,"writeback_mul_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+640,0,"writeback_div_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+596,0,"writeback_div_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+651,0,"csr_result_e1_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+637,0,"csr_result_e1_write_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+643,0,"csr_result_e1_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+611,0,"csr_result_e1_exception_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+73,0,"lsu_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+650,0,"take_interrupt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"fetch0_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"fetch1_accept_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"branch_request_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+398,0,"branch_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+631,0,"branch_priv_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+91,0,"branch_info_request_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+619,0,"branch_info_is_taken_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+618,0,"branch_info_is_not_taken_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+663,0,"branch_info_source_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+664,0,"branch_info_is_call_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+620,0,"branch_info_is_ret_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+625,0,"branch_info_is_jmp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+614,0,"branch_info_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+78,0,"exec0_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"exec1_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+90,0,"lsu_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"csr_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+64,0,"mul_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"div_opcode_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"opcode0_opcode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"opcode0_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1184,0,"opcode0_invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"opcode0_rd_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+75,0,"opcode0_ra_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"opcode0_rb_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+320,0,"opcode0_ra_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"opcode0_rb_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"opcode1_opcode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"opcode1_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1184,0,"opcode1_invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"opcode1_rd_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+86,0,"opcode1_ra_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+89,0,"opcode1_rb_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+326,0,"opcode1_ra_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"opcode1_rb_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"lsu_opcode_opcode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"lsu_opcode_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1184,0,"lsu_opcode_invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+84,0,"lsu_opcode_rd_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+93,0,"lsu_opcode_ra_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+92,0,"lsu_opcode_rb_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+325,0,"lsu_opcode_ra_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+328,0,"lsu_opcode_rb_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"mul_opcode_opcode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"mul_opcode_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1184,0,"mul_opcode_invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"mul_opcode_rd_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+71,0,"mul_opcode_ra_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+82,0,"mul_opcode_rb_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+323,0,"mul_opcode_ra_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+322,0,"mul_opcode_rb_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"csr_opcode_opcode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"csr_opcode_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"csr_opcode_invalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"csr_opcode_rd_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+75,0,"csr_opcode_ra_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"csr_opcode_rb_idx_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+320,0,"csr_opcode_ra_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"csr_opcode_rb_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+649,0,"csr_writeback_write_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+653,0,"csr_writeback_waddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+648,0,"csr_writeback_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+603,0,"csr_writeback_exception_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+665,0,"csr_writeback_exception_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+608,0,"csr_writeback_exception_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+77,0,"exec0_hold_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"exec1_hold_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"mul_hold_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"interrupt_inhibit_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1191,0,"enable_dual_issue_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1191,0,"enable_muldiv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1191,0,"enable_mul_bypass_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"stall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"squash_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+167,0,"single_issue_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"dual_issue_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+971,0,"pc_x_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+972,0,"priv_x_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+91,0,"mispredicted_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+169,0,"slot0_valid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+170,0,"slot1_valid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+171,0,"opcode_a_valid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+172,0,"opcode_b_valid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"opcode_a_fault_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+174,0,"opcode_b_fault_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"opcode_a_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"opcode_b_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"opcode_a_pc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"opcode_b_pc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"issue_a_ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"issue_a_rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,0,"issue_a_rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+175,0,"issue_a_sb_alloc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+176,0,"issue_a_exec_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"issue_a_lsu_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"issue_a_branch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"issue_a_mul_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"issue_a_div_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"issue_a_csr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"issue_a_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+86,0,"issue_b_ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+89,0,"issue_b_rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"issue_b_rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+661,0,"issue_b_sb_alloc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+622,0,"issue_b_exec_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+626,0,"issue_b_lsu_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"issue_b_branch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+666,0,"issue_b_mul_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"issue_b_div_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+593,0,"issue_b_csr_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+609,0,"issue_b_invalid_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"pipe0_squash_e1_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"pipe1_squash_e1_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"opcode_a_issue_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"opcode_a_accept_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"pipe0_stall_raw_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+973,0,"pipe0_load_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+974,0,"pipe0_store_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+975,0,"pipe0_mul_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+976,0,"pipe0_branch_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+977,0,"pipe0_rd_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+978,0,"pipe0_pc_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+979,0,"pipe0_opcode_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+980,0,"pipe0_operand_ra_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+981,0,"pipe0_operand_rb_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+982,0,"pipe0_load_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+983,0,"pipe0_mul_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"pipe0_rd_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+371,0,"pipe0_result_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"pipe0_valid_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"pipe0_csr_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"pipe0_rd_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+984,0,"pipe0_result_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+985,0,"pipe0_pc_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"pipe0_opc_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+987,0,"pipe0_ra_val_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+988,0,"pipe0_rb_val_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+989,0,"pipe0_exception_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+191,0,"issue_a_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+87,0,"opcode_b_issue_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"opcode_b_accept_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+193,0,"pipe1_stall_raw_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+990,0,"pipe1_load_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"pipe1_store_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+992,0,"pipe1_mul_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+993,0,"pipe1_branch_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+994,0,"pipe1_rd_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+995,0,"pipe1_pc_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+996,0,"pipe1_opcode_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+997,0,"pipe1_operand_ra_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+998,0,"pipe1_operand_rb_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+999,0,"pipe1_load_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1000,0,"pipe1_mul_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"pipe1_rd_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+372,0,"pipe1_result_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+195,0,"pipe1_valid_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"pipe1_rd_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1001,0,"pipe1_result_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1002,0,"pipe1_pc_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1003,0,"pipe1_opc_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1004,0,"pipe1_ra_val_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1005,0,"pipe1_rb_val_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1006,0,"pipe1_exception_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+197,0,"issue_b_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1007,0,"div_pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1008,0,"csr_pending_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+198,0,"scoreboard_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+199,0,"pipe1_mux_lsu_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"pipe1_mux_mul_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1009,0,"pipe1_ok_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"dual_issue_ok_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+373,0,"issue_a_ra_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"issue_a_rb_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+375,0,"issue_b_ra_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+376,0,"issue_b_rb_value_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_regfile", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_regfile__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+320,0,"issue_a_ra_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"issue_a_rb_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+326,0,"issue_b_ra_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"issue_b_rb_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_pipe0_dec0_verif", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe0_dec0_verif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+1010,0,"v_pipe0_rs1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1011,0,"v_pipe0_rs2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("u_pipe0_dec1_verif", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe0_dec1_verif__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBus(c+1012,0,"v_pipe1_rs1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1013,0,"v_pipe1_rs2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("u_pipe0_ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1175,0,"SUPPORT_LOAD_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"SUPPORT_MUL_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"issue_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"issue_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"issue_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"issue_lsu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"issue_csr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+180,0,"issue_div_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"issue_mul_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"issue_branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+175,0,"issue_rd_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"issue_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+191,0,"issue_exception_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+650,0,"take_interrupt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"issue_branch_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+321,0,"issue_branch_target_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"issue_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"issue_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+320,0,"issue_operand_ra_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"issue_operand_rb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+644,0,"alu_result_e1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+651,0,"csr_result_value_e1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+637,0,"csr_result_write_e1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+643,0,"csr_result_wdata_e1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+611,0,"csr_result_exception_e1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+973,0,"load_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+974,0,"store_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+975,0,"mul_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+976,0,"branch_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+977,0,"rd_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+978,0,"pc_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+979,0,"opcode_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+980,0,"operand_ra_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+981,0,"operand_rb_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"mem_complete_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+319,0,"mem_result_e2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+400,0,"mem_exception_e2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+660,0,"mul_result_e2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+982,0,"load_e2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+983,0,"mul_e2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+187,0,"rd_e2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+371,0,"result_e2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+640,0,"div_complete_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+596,0,"div_result_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+188,0,"valid_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+189,0,"csr_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"rd_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+984,0,"result_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+985,0,"pc_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"opcode_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+987,0,"operand_ra_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+988,0,"operand_rb_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+989,0,"exception_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+649,0,"csr_write_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+653,0,"csr_waddr_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+648,0,"csr_wdata_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+186,0,"stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"squash_e1_e2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"squash_e1_e2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"squash_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"squash_e1_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+377,0,"branch_misaligned_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1014,0,"valid_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1015,0,"ctrl_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+978,0,"pc_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1016,0,"npc_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+979,0,"opcode_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+980,0,"operand_ra_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+981,0,"operand_rb_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1017,0,"exception_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1018,0,"alu_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1019,0,"csr_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1020,0,"div_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1021,0,"valid_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1022,0,"ctrl_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1023,0,"csr_wr_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1024,0,"csr_wdata_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1025,0,"result_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1026,0,"pc_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1027,0,"npc_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1028,0,"opcode_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1029,0,"operand_ra_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1030,0,"operand_rb_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1031,0,"exception_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+371,0,"result_e2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+203,0,"valid_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1032,0,"load_store_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"exception_e2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1033,0,"squash_e1_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1034,0,"valid_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1035,0,"ctrl_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+649,0,"csr_wr_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+648,0,"csr_wdata_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+984,0,"result_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+985,0,"pc_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1036,0,"npc_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"opcode_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+987,0,"operand_ra_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+988,0,"operand_rb_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+989,0,"exception_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+205,0,"complete_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_trace_d", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_trace_wb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_pipe1_ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1175,0,"SUPPORT_LOAD_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"SUPPORT_MUL_BYPASS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+87,0,"issue_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+192,0,"issue_accept_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"issue_stall_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+626,0,"issue_lsu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"issue_csr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"issue_div_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+666,0,"issue_mul_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"issue_branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+661,0,"issue_rd_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"issue_rd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+197,0,"issue_exception_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+650,0,"take_interrupt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"issue_branch_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+329,0,"issue_branch_target_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"issue_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"issue_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+326,0,"issue_operand_ra_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"issue_operand_rb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+624,0,"alu_result_e1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+651,0,"csr_result_value_e1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+637,0,"csr_result_write_e1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+643,0,"csr_result_wdata_e1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+611,0,"csr_result_exception_e1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+990,0,"load_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"store_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+992,0,"mul_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+993,0,"branch_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+994,0,"rd_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+995,0,"pc_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+996,0,"opcode_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+997,0,"operand_ra_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+998,0,"operand_rb_e1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+69,0,"mem_complete_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+319,0,"mem_result_e2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+400,0,"mem_exception_e2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+660,0,"mul_result_e2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+999,0,"load_e2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1000,0,"mul_e2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+194,0,"rd_e2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+372,0,"result_e2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+640,0,"div_complete_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+596,0,"div_result_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+195,0,"valid_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"csr_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"rd_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1001,0,"result_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1002,0,"pc_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1003,0,"opcode_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1004,0,"operand_ra_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1005,0,"operand_rb_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1006,0,"exception_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1037,0,"csr_write_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1038,0,"csr_waddr_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1039,0,"csr_wdata_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+193,0,"stall_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"squash_e1_e2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"squash_e1_e2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"squash_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"squash_e1_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+378,0,"branch_misaligned_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1040,0,"valid_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1041,0,"ctrl_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+995,0,"pc_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1042,0,"npc_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+996,0,"opcode_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+997,0,"operand_ra_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+998,0,"operand_rb_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1043,0,"exception_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1044,0,"alu_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"csr_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1046,0,"div_e1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1047,0,"valid_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1048,0,"ctrl_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1049,0,"csr_wr_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1050,0,"csr_wdata_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1051,0,"result_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1052,0,"pc_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1053,0,"npc_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1054,0,"opcode_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1055,0,"operand_ra_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1056,0,"operand_rb_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1057,0,"exception_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+372,0,"result_e2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+208,0,"valid_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1058,0,"load_store_e2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+209,0,"exception_e2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1059,0,"squash_e1_e2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1060,0,"valid_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1061,0,"ctrl_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+1037,0,"csr_wr_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1039,0,"csr_wdata_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1001,0,"result_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1002,0,"pc_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1062,0,"npc_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1003,0,"opcode_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1004,0,"operand_ra_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1005,0,"operand_rb_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1006,0,"exception_wb_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+210,0,"complete_wb_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_trace_d", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("u_trace_wb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_icache__u_tag0__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_icache__u_tag0__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+587,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+394,0,"wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+444,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+444,0,"ram_read_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_icache__u_tag1__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_icache__u_tag1__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+587,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBit(c+395,0,"wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+447,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+447,0,"ram_read_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_icache__u_data0__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_icache__u_data0__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declQuad(c+404,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+396,0,"wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+450,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+450,0,"ram_read_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_icache__u_data1__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_icache__u_data1__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declQuad(c+404,0,"data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+397,0,"wr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+452,0,"data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+452,0,"ram_read_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_csr__u_csrfile__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_csr__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_csr__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1175,0,"SUPPORT_MULDIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"SUPPORT_SUPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+63,0,"opcode_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"opcode_opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"opcode_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+66,0,"opcode_invalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"opcode_rd_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+75,0,"opcode_ra_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"opcode_rb_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+320,0,"opcode_ra_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"opcode_rb_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+649,0,"csr_writeback_write_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+653,0,"csr_writeback_waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+648,0,"csr_writeback_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+603,0,"csr_writeback_exception_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+665,0,"csr_writeback_exception_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+608,0,"csr_writeback_exception_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"cpu_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"reset_vector_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+80,0,"interrupt_inhibit_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+651,0,"csr_result_e1_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+637,0,"csr_result_e1_write_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+643,0,"csr_result_e1_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+611,0,"csr_result_e1_exception_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+597,0,"branch_csr_request_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+399,0,"branch_csr_pc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+629,0,"branch_csr_priv_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+650,0,"take_interrupt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+645,0,"ifence_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+657,0,"mmu_priv_d_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+662,0,"mmu_sum_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+601,0,"mmu_mxr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"mmu_flush_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+642,0,"mmu_satp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+211,0,"ecall_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"ebreak_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"eret_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"eret_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+215,0,"csrrw_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+216,0,"csrrs_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"csrrc_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"csrrwi_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"csrrsi_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+220,0,"csrrci_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"wfi_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"fence_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"sfence_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+224,0,"ifence_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1063,0,"current_priv_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+214,0,"csr_priv_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+225,0,"csr_readonly_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+226,0,"csr_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+227,0,"set_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"clr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"csr_fault_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+379,0,"data_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+229,0,"satp_update_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"timer_irq_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1234,0,"misa_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+230,0,"csr_rdata_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1064,0,"csr_branch_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1065,0,"csr_target_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1066,0,"interrupt_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1067,0,"status_reg_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+642,0,"satp_reg_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_csrfile", VerilatedTracePrefixType::SCOPE_MODULE);
    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_csr__u_csrfile__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+637,0,"rd_valid_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+651,0,"rd_result_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+643,0,"csr_wdata_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+611,0,"exception_e1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+231,0,"eret_fault_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+650,0,"take_interrupt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+594,0,"tlb_flush_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+645,0,"ifence_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1068,0,"branch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1069,0,"branch_target_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1070,0,"init_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__u_core__u_tag0__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__u_core__u_tag0__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+158,0,"addr0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"clk1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+957,0,"addr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+958,0,"data1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+159,0,"wr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+426,0,"data0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+426,0,"ram_read0_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__u_core__u_tag1__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__u_core__u_tag1__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+158,0,"addr0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"clk1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+957,0,"addr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+958,0,"data1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBit(c+160,0,"wr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+430,0,"data0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+430,0,"ram_read0_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__u_core__u_data0__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__u_core__u_data0__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"addr0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1185,0,"data0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"wr0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1,0,"clk1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"addr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+403,0,"data1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"wr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+454,0,"data0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+456,0,"data1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+454,0,"ram_read0_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+456,0,"ram_read1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__u_core__u_data1__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_dcache__u_core__u_data1__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"addr0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+1185,0,"data0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"wr0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1,0,"clk1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+162,0,"addr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+403,0,"data1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"wr1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+455,0,"data0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+457,0,"data1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+455,0,"ram_read0_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+457,0,"ram_read1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_csr__u_csrfile__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_csr__u_csrfile__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1175,0,"SUPPORT_MTIMECMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1174,0,"SUPPORT_SUPER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"ext_intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"timer_intr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1174,0,"cpu_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1234,0,"misa_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+603,0,"exception_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+665,0,"exception_pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+608,0,"exception_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+63,0,"csr_ren_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+232,0,"csr_raddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+230,0,"csr_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1071,0,"csr_waddr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+648,0,"csr_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1064,0,"csr_branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1065,0,"csr_target_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1063,0,"priv_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1067,0,"status_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+642,0,"satp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1066,0,"interrupt_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1072,0,"csr_mepc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1073,0,"csr_mcause_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1067,0,"csr_sr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1074,0,"csr_mtvec_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1075,0,"csr_mip_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1076,0,"csr_mie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1063,0,"csr_mpriv_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1077,0,"csr_mcycle_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1078,0,"csr_mcycle_h_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1079,0,"csr_mscratch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1080,0,"csr_mtval_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1081,0,"csr_mtimecmp_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1082,0,"csr_mtime_ie_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1083,0,"csr_medeleg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1084,0,"csr_mideleg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1085,0,"csr_sepc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1086,0,"csr_stvec_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1087,0,"csr_scause_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1088,0,"csr_stval_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+642,0,"csr_satp_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1089,0,"csr_sscratch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1090,0,"irq_pending_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1066,0,"irq_masked_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1206,0,"irq_priv_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1235,0,"m_enabled_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1236,0,"m_interrupts_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1237,0,"s_enabled_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1238,0,"s_interrupts_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1091,0,"irq_priv_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1092,0,"csr_mip_upd_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+233,0,"buffer_mip_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+230,0,"rdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1093,0,"csr_mepc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1094,0,"csr_mcause_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1095,0,"csr_mtval_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1096,0,"csr_sr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1097,0,"csr_mtvec_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+406,0,"csr_mip_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1098,0,"csr_mie_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1099,0,"csr_mpriv_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1100,0,"csr_mcycle_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1101,0,"csr_mscratch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1102,0,"csr_mtimecmp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1103,0,"csr_mtime_ie_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1104,0,"csr_medeleg_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,0,"csr_mideleg_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1106,0,"csr_mip_next_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+407,0,"csr_mip_next_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1107,0,"csr_sepc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1108,0,"csr_stvec_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1109,0,"csr_scause_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1110,0,"csr_stval_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1111,0,"csr_satp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1112,0,"csr_sscratch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1113,0,"is_exception_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1184,0,"exception_s_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1064,0,"branch_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1065,0,"branch_target_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_regfile__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_regfile__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1174,0,"SUPPORT_REGFILE_XILINX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1175,0,"SUPPORT_DUAL_ISSUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"rst_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+190,0,"rd0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+196,0,"rd1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+984,0,"rd0_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1001,0,"rd1_value_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"ra0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"rb0_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+86,0,"ra1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+89,0,"rb1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+373,0,"ra0_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"rb0_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+375,0,"ra1_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+376,0,"rb1_value_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("REGFILE", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+458,0,"reg_r1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"reg_r2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+460,0,"reg_r3_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+461,0,"reg_r4_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+462,0,"reg_r5_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+463,0,"reg_r6_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+464,0,"reg_r7_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+465,0,"reg_r8_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+466,0,"reg_r9_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+467,0,"reg_r10_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+468,0,"reg_r11_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+469,0,"reg_r12_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+470,0,"reg_r13_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+471,0,"reg_r14_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+472,0,"reg_r15_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+473,0,"reg_r16_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+474,0,"reg_r17_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+475,0,"reg_r18_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+476,0,"reg_r19_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+477,0,"reg_r20_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+478,0,"reg_r21_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+479,0,"reg_r22_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+480,0,"reg_r23_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+481,0,"reg_r24_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+482,0,"reg_r25_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+483,0,"reg_r26_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+484,0,"reg_r27_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+485,0,"reg_r28_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+486,0,"reg_r29_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+487,0,"reg_r30_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+488,0,"reg_r31_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1185,0,"x0_zero_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+458,0,"x1_ra_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+459,0,"x2_sp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+460,0,"x3_gp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+461,0,"x4_tp_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+462,0,"x5_t0_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+463,0,"x6_t1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+464,0,"x7_t2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+465,0,"x8_s0_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+466,0,"x9_s1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+467,0,"x10_a0_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+468,0,"x11_a1_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+469,0,"x12_a2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+470,0,"x13_a3_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+471,0,"x14_a4_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+472,0,"x15_a5_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+473,0,"x16_a6_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+474,0,"x17_a7_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+475,0,"x18_s2_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+476,0,"x19_s3_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+477,0,"x20_s4_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+478,0,"x21_s5_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+479,0,"x22_s6_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+480,0,"x23_s7_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+481,0,"x24_s8_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+482,0,"x25_s9_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+483,0,"x26_s10_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+484,0,"x27_s11_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+485,0,"x28_t3_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+486,0,"x29_t4_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+487,0,"x30_t5_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+488,0,"x31_t6_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+373,0,"ra0_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"rb0_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+375,0,"ra1_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+376,0,"rb1_value_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe0_dec0_verif__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe0_dec0_verif__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+188,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+985,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+234,0,"dbg_inst_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+237,0,"dbg_inst_ra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+240,0,"dbg_inst_rb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+243,0,"dbg_inst_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+246,0,"dbg_inst_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"dbg_inst_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1010,0,"ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1011,0,"rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1114,0,"rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe0_dec1_verif__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe0_dec1_verif__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+195,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1002,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1003,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+248,0,"dbg_inst_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+251,0,"dbg_inst_ra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+254,0,"dbg_inst_rb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+257,0,"dbg_inst_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+260,0,"dbg_inst_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+261,0,"dbg_inst_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1013,0,"rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1115,0,"rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+78,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+65,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+262,0,"dbg_inst_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+265,0,"dbg_inst_ra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+268,0,"dbg_inst_rb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+271,0,"dbg_inst_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+274,0,"dbg_inst_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+275,0,"dbg_inst_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+72,0,"rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+60,0,"rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+188,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+985,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+276,0,"dbg_inst_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+279,0,"dbg_inst_ra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+282,0,"dbg_inst_rb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+285,0,"dbg_inst_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+288,0,"dbg_inst_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"dbg_inst_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1010,0,"ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1011,0,"rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1114,0,"rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+87,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+289,0,"dbg_inst_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+292,0,"dbg_inst_ra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+295,0,"dbg_inst_rb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+298,0,"dbg_inst_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+301,0,"dbg_inst_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"dbg_inst_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+89,0,"rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+67,0,"rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb__0(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_sub__TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+195,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1002,0,"pc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1003,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+303,0,"dbg_inst_str",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+306,0,"dbg_inst_ra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+309,0,"dbg_inst_rb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declArray(c+312,0,"dbg_inst_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 79,0);
    tracep->declBus(c+315,0,"dbg_inst_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+261,0,"dbg_inst_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1012,0,"ra_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1013,0,"rb_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1115,0,"rd_idx_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_init_top(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_init_top\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vriscv_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vriscv_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vriscv_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vriscv_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vriscv_top___024root__trace_register(Vriscv_top___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_register\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vriscv_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vriscv_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vriscv_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vriscv_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_const_0_sub_0(Vriscv_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vriscv_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_const_0\n"); );
    // Init
    Vriscv_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_top___024root*>(voidSelf);
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vriscv_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_const_0_sub_0(Vriscv_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_const_0_sub_0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1174,(0U),32);
    bufp->fullIData(oldp+1175,(1U),32);
    bufp->fullIData(oldp+1176,(0x80000000U),32);
    bufp->fullIData(oldp+1177,(0x8fffffffU),32);
    bufp->fullIData(oldp+1178,(0x20U),32);
    bufp->fullIData(oldp+1179,(5U),32);
    bufp->fullIData(oldp+1180,(0x200U),32);
    bufp->fullIData(oldp+1181,(9U),32);
    bufp->fullIData(oldp+1182,(8U),32);
    bufp->fullIData(oldp+1183,(3U),32);
    bufp->fullBit(oldp+1184,(0U));
    bufp->fullIData(oldp+1185,(0U),32);
    bufp->fullCData(oldp+1186,(0U),4);
    bufp->fullCData(oldp+1187,(0U),8);
    bufp->fullCData(oldp+1188,(0U),2);
    bufp->fullCData(oldp+1189,(7U),8);
    bufp->fullCData(oldp+1190,(1U),2);
    bufp->fullBit(oldp+1191,(1U));
    bufp->fullSData(oldp+1192,(0U),11);
    bufp->fullIData(oldp+1193,(0x4dU),32);
    bufp->fullIData(oldp+1194,(2U),32);
    bufp->fullIData(oldp+1195,(0x46U),32);
    bufp->fullIData(oldp+1196,(0xbU),32);
    bufp->fullIData(oldp+1197,(0x100U),32);
    bufp->fullIData(oldp+1198,(0x40U),32);
    bufp->fullIData(oldp+1199,(0xcU),32);
    bufp->fullIData(oldp+1200,(0x13U),32);
    bufp->fullIData(oldp+1201,(0x14U),32);
    bufp->fullIData(oldp+1202,(0xdU),32);
    bufp->fullIData(oldp+1203,(0x1fU),32);
    bufp->fullIData(oldp+1204,(0xaU),32);
    bufp->fullCData(oldp+1205,(2U),2);
    bufp->fullCData(oldp+1206,(3U),2);
    bufp->fullBit(oldp+1207,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__Co0));
    bufp->fullBit(oldp+1208,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__Co1));
    bufp->fullBit(oldp+1209,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__Co2));
    bufp->fullBit(oldp+1210,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__Co3));
    bufp->fullBit(oldp+1211,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__Co0));
    bufp->fullBit(oldp+1212,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__Co1));
    bufp->fullBit(oldp+1213,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__Co2));
    bufp->fullBit(oldp+1214,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__Co3));
    bufp->fullCData(oldp+1215,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__branch_priv_q),2);
    bufp->fullIData(oldp+1216,(1U),32);
    bufp->fullIData(oldp+1217,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_w),32);
    bufp->fullSData(oldp+1218,(1U),16);
    bufp->fullSData(oldp+1219,(0xb400U),16);
    bufp->fullIData(oldp+1220,(0x24U),32);
    bufp->fullIData(oldp+1221,(0x15U),32);
    bufp->fullIData(oldp+1222,(4U),32);
    bufp->fullCData(oldp+1223,(1U),4);
    bufp->fullCData(oldp+1224,(2U),4);
    bufp->fullCData(oldp+1225,(3U),4);
    bufp->fullCData(oldp+1226,(4U),4);
    bufp->fullCData(oldp+1227,(5U),4);
    bufp->fullCData(oldp+1228,(6U),4);
    bufp->fullCData(oldp+1229,(7U),4);
    bufp->fullCData(oldp+1230,(8U),4);
    bufp->fullCData(oldp+1231,(9U),4);
    bufp->fullCData(oldp+1232,(0xaU),4);
    bufp->fullIData(oldp+1233,(0x1bU),32);
    bufp->fullIData(oldp+1234,(0x40001100U),32);
    bufp->fullBit(oldp+1235,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__m_enabled_r));
    bufp->fullIData(oldp+1236,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__m_interrupts_r),32);
    bufp->fullBit(oldp+1237,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__s_enabled_r));
    bufp->fullIData(oldp+1238,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__s_interrupts_r),32);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_full_0_sub_0(Vriscv_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vriscv_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_full_0\n"); );
    // Init
    Vriscv_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vriscv_top___024root*>(voidSelf);
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vriscv_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vriscv_top___024root__trace_full_0_sub_0(Vriscv_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_top___024root__trace_full_0_sub_0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.__Vcellinp__v__clk_i));
    bufp->fullBit(oldp+2,(vlSelfRef.__Vcellinp__v__rst_i));
    bufp->fullBit(oldp+3,(vlSelfRef.__Vcellinp__v__axi_i_awready_i));
    bufp->fullBit(oldp+4,(vlSelfRef.__Vcellinp__v__axi_i_wready_i));
    bufp->fullBit(oldp+5,(vlSelfRef.__Vcellinp__v__axi_i_bvalid_i));
    bufp->fullCData(oldp+6,(vlSelfRef.__Vcellinp__v__axi_i_bresp_i),2);
    bufp->fullCData(oldp+7,(vlSelfRef.__Vcellinp__v__axi_i_bid_i),4);
    bufp->fullBit(oldp+8,(vlSelfRef.__Vcellinp__v__axi_i_arready_i));
    bufp->fullBit(oldp+9,(vlSelfRef.__Vcellinp__v__axi_i_rvalid_i));
    bufp->fullIData(oldp+10,(vlSelfRef.__Vcellinp__v__axi_i_rdata_i),32);
    bufp->fullCData(oldp+11,(vlSelfRef.__Vcellinp__v__axi_i_rresp_i),2);
    bufp->fullCData(oldp+12,(vlSelfRef.__Vcellinp__v__axi_i_rid_i),4);
    bufp->fullBit(oldp+13,(vlSelfRef.__Vcellinp__v__axi_i_rlast_i));
    bufp->fullBit(oldp+14,(vlSelfRef.__Vcellinp__v__axi_d_awready_i));
    bufp->fullBit(oldp+15,(vlSelfRef.__Vcellinp__v__axi_d_wready_i));
    bufp->fullBit(oldp+16,(vlSelfRef.__Vcellinp__v__axi_d_bvalid_i));
    bufp->fullCData(oldp+17,(vlSelfRef.__Vcellinp__v__axi_d_bresp_i),2);
    bufp->fullCData(oldp+18,(vlSelfRef.__Vcellinp__v__axi_d_bid_i),4);
    bufp->fullBit(oldp+19,(vlSelfRef.__Vcellinp__v__axi_d_arready_i));
    bufp->fullBit(oldp+20,(vlSelfRef.__Vcellinp__v__axi_d_rvalid_i));
    bufp->fullIData(oldp+21,(vlSelfRef.__Vcellinp__v__axi_d_rdata_i),32);
    bufp->fullCData(oldp+22,(vlSelfRef.__Vcellinp__v__axi_d_rresp_i),2);
    bufp->fullCData(oldp+23,(vlSelfRef.__Vcellinp__v__axi_d_rid_i),4);
    bufp->fullBit(oldp+24,(vlSelfRef.__Vcellinp__v__axi_d_rlast_i));
    bufp->fullBit(oldp+25,(vlSelfRef.__Vcellinp__v__intr_i));
    bufp->fullIData(oldp+26,(vlSelfRef.__Vcellinp__v__reset_vector_i),32);
    bufp->fullBit(oldp+27,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_error_w));
    bufp->fullBit(oldp+28,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_ack_w));
    bufp->fullBit(oldp+29,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__resp_pop_w));
    bufp->fullBit(oldp+30,(vlSymsp->TOP__v.__PVT__dcache_ack_w));
    bufp->fullBit(oldp+31,(vlSymsp->TOP__v.__PVT__dcache_rd_w));
    bufp->fullBit(oldp+32,(vlSymsp->TOP__v.__PVT__dcache_accept_w));
    bufp->fullCData(oldp+33,(vlSymsp->TOP__v.__PVT__dcache_wr_w),4);
    bufp->fullIData(oldp+34,((0xfffffff8U & vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w)),32);
    bufp->fullCData(oldp+35,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_len_w),8);
    bufp->fullCData(oldp+36,(((IData)(vlSymsp->TOP__v__u_dcache.u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_4)
                               ? (IData)(vlSymsp->TOP__v.__PVT__dcache_wr_w)
                               : 0U)),4);
    bufp->fullCData(oldp+37,(((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_select_w)
                               ? (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_len_w)
                               : 0U)),8);
    bufp->fullBit(oldp+38,(vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_accept_w));
    bufp->fullIData(oldp+39,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_addr_w),32);
    bufp->fullBit(oldp+40,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_rd_w));
    bufp->fullIData(oldp+41,(((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_select_w)
                               ? vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_addr_w
                               : (0xfffffffcU & vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                                  [vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][0U]))),32);
    bufp->fullBit(oldp+42,(vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_rd_w));
    bufp->fullCData(oldp+43,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_wr_w),4);
    bufp->fullBit(oldp+44,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_rd_w));
    bufp->fullCData(oldp+45,(vlSymsp->TOP__v__u_dcache.__PVT__mem_uncached_wr_w),4);
    bufp->fullBit(oldp+46,(vlSymsp->TOP__v__u_dcache.__PVT__mem_uncached_rd_w));
    bufp->fullBit(oldp+47,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__req_push_w));
    bufp->fullBit(oldp+48,(vlSymsp->TOP__v__u_dcache.__PVT__u_mux__DOT__request_w));
    bufp->fullCData(oldp+49,(vlSymsp->TOP__v__u_dcache.__PVT__u_mux__DOT__pending_r),5);
    bufp->fullBit(oldp+50,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__request_w));
    bufp->fullBit(oldp+51,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__req_push_w));
    bufp->fullBit(oldp+52,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__res_push_w));
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
    bufp->fullWData(oldp+53,(__Vtemp_1),70);
    bufp->fullCData(oldp+56,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w 
                                       >> 5U))),8);
    bufp->fullSData(oldp+57,((0x3ffU & (vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w 
                                        >> 3U))),10);
    bufp->fullCData(oldp+58,(vlSymsp->TOP__v__u_icache.__PVT__tag_addr_r),8);
    bufp->fullSData(oldp+59,(vlSymsp->TOP__v__u_icache.__PVT__data_addr_r),10);
    bufp->fullCData(oldp+60,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                       >> 7U))),5);
    bufp->fullCData(oldp+61,((0x1fU & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_mul_r)
                                        ? (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                           >> 7U) : 
                                       (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                        >> 7U)))),5);
    bufp->fullIData(oldp+62,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_lsu_r)
                               ? vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r
                               : vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r)),32);
    bufp->fullBit(oldp+63,(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w));
    bufp->fullBit(oldp+64,(vlSymsp->TOP__v__u_core.__PVT__mul_opcode_valid_w));
    bufp->fullIData(oldp+65,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r),32);
    bufp->fullBit(oldp+66,(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_invalid_w));
    bufp->fullCData(oldp+67,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                       >> 7U))),5);
    bufp->fullBit(oldp+68,(vlSymsp->TOP__v__u_core.__PVT__branch_request_w));
    bufp->fullBit(oldp+69,(vlSymsp->TOP__v__u_core.__PVT__writeback_mem_valid_w));
    bufp->fullIData(oldp+70,(vlSymsp->TOP__v__u_core.__PVT__mul_opcode_opcode_w),32);
    bufp->fullCData(oldp+71,((0x1fU & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_mul_r)
                                        ? (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                           >> 0xfU)))),5);
    bufp->fullCData(oldp+72,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+73,(vlSymsp->TOP__v__u_core.__PVT__lsu_stall_w));
    bufp->fullIData(oldp+74,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r),32);
    bufp->fullCData(oldp+75,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                       >> 0xfU))),5);
    bufp->fullIData(oldp+76,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_mul_r)
                               ? vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r
                               : vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r)),32);
    bufp->fullBit(oldp+77,(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w));
    bufp->fullBit(oldp+78,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r));
    bufp->fullBit(oldp+79,(((~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q)) 
                            & (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_accept_r) 
                                & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot0_valid_r)) 
                               | (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot1_valid_r)))));
    bufp->fullBit(oldp+80,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__csr_pending_q) 
                            | (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_csr_w))));
    bufp->fullIData(oldp+81,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r),32);
    bufp->fullCData(oldp+82,((0x1fU & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_mul_r)
                                        ? (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                           >> 0x14U)
                                        : (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                           >> 0x14U)))),5);
    bufp->fullIData(oldp+83,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r),32);
    bufp->fullCData(oldp+84,((0x1fU & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_lsu_r)
                                        ? (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                           >> 7U) : 
                                       (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                        >> 7U)))),5);
    bufp->fullIData(oldp+85,(vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w),32);
    bufp->fullCData(oldp+86,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                       >> 0xfU))),5);
    bufp->fullBit(oldp+87,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_issue_r));
    bufp->fullBit(oldp+88,(((~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q)) 
                            & (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_accept_r) 
                                & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot1_valid_r)) 
                               | (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_accept_r)))));
    bufp->fullCData(oldp+89,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+90,(vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_valid_w));
    bufp->fullBit(oldp+91,(vlSymsp->TOP__v__u_core__u_issue.__PVT__mispredicted_r));
    bufp->fullCData(oldp+92,((0x1fU & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_lsu_r)
                                        ? (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                           >> 0x14U)
                                        : (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                           >> 0x14U)))),5);
    bufp->fullCData(oldp+93,((0x1fU & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_lsu_r)
                                        ? (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                           >> 0xfU)
                                        : (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                           >> 0xfU)))),5);
    bufp->fullBit(oldp+94,((0x2004033U == (0xfe00707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))));
    bufp->fullBit(oldp+95,((0x2005033U == (0xfe00707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))));
    bufp->fullBit(oldp+96,((0x2006033U == (0xfe00707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))));
    bufp->fullBit(oldp+97,((0x2007033U == (0xfe00707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))));
    bufp->fullBit(oldp+98,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_operation_w) 
                            | ((0x2006033U == (0xfe00707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                               | (0x2007033U == (0xfe00707fU 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))))));
    bufp->fullBit(oldp+99,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__signed_operation_w));
    bufp->fullBit(oldp+100,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_operation_w));
    bufp->fullBit(oldp+101,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r) 
                             & ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_operation_w) 
                                | ((0x2006033U == (0xfe00707fU 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                                   | (0x2007033U == 
                                      (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))))));
    bufp->fullIData(oldp+102,((0xfffff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)),32);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__imm12_r),32);
    bufp->fullIData(oldp+104,((((- (IData)((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
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
    bufp->fullIData(oldp+105,((((- (IData)((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                            >> 0x1fU))) 
                                << 0x14U) | (((0xff000U 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r) 
                                              | (0x800U 
                                                 & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                    >> 9U))) 
                                             | (0x7feU 
                                                & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                   >> 0x14U))))),32);
    bufp->fullIData(oldp+106,((0xfffff000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)),32);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__imm12_r),32);
    bufp->fullIData(oldp+108,((((- (IData)((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
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
    bufp->fullIData(oldp+109,((((- (IData)((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                            >> 0x1fU))) 
                                << 0x14U) | (((0xff000U 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r) 
                                              | (0x800U 
                                                 & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                    >> 9U))) 
                                             | (0x7feU 
                                                & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                   >> 0x14U))))),32);
    bufp->fullIData(oldp+110,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w)
                                ? vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q
                               [vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q]
                                : ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_npc__DOT____VdfgRegularize_he46ab735_0_1)
                                    ? vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r
                                    : ((IData)(8U) 
                                       + (0xfffffff8U 
                                          & vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w))))),32);
    bufp->fullCData(oldp+111,(((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_npc__DOT____VdfgRegularize_he46ab735_0_2)
                                ? ((4U & vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w)
                                    ? ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r) 
                                       << 1U) : (((IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (~ (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r)))))
                                : 0U)),2);
    bufp->fullIData(oldp+112,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w),32);
    bufp->fullBit(oldp+113,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop1_w));
    bufp->fullBit(oldp+114,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop2_w));
    bufp->fullBit(oldp+115,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pop_complete_w));
    bufp->fullBit(oldp+116,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__branch_w));
    bufp->fullIData(oldp+117,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__branch_pc_w),32);
    bufp->fullBit(oldp+118,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r));
    bufp->fullBit(oldp+119,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r));
    bufp->fullBit(oldp+120,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_r));
    bufp->fullBit(oldp+121,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_r));
    bufp->fullCData(oldp+122,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_r),3);
    bufp->fullBit(oldp+123,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_call_pred_w));
    bufp->fullBit(oldp+124,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_ret_pred_w));
    bufp->fullSData(oldp+125,((0x1ffU & (((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__mispredicted_r)
                                           ? (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q)
                                           : (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q)) 
                                         ^ (vlSymsp->TOP__v__u_core.__PVT__branch_info_source_w 
                                            >> 2U)))),9);
    bufp->fullSData(oldp+126,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q) 
                               ^ ((0x1feU & (vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w 
                                             >> 2U)) 
                                  | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r)))),9);
    bufp->fullSData(oldp+127,(((0x1feU & (vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w 
                                          >> 2U)) | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r))),9);
    bufp->fullBit(oldp+128,((2U <= vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__bht_sat_q
                             [((0x1feU & (vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_f_w 
                                          >> 2U)) | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_upper_r))])));
    bufp->fullIData(oldp+129,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_next_pc_r),32);
    bufp->fullBit(oldp+130,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_r));
    bufp->fullCData(oldp+131,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_entry_r),5);
    bufp->fullIData(oldp+132,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i0),32);
    bufp->fullCData(oldp+133,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_wr_entry_r),5);
    bufp->fullBit(oldp+134,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_hit_r));
    bufp->fullBit(oldp+135,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_miss_r));
    bufp->fullIData(oldp+136,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i1),32);
    bufp->fullBit(oldp+137,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__issue_lsu_e1_w));
    bufp->fullBit(oldp+138,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__complete_ok_e2_w));
    bufp->fullBit(oldp+139,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__complete_err_e2_w));
    bufp->fullBit(oldp+140,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__delay_lsu_e2_w));
    bufp->fullBit(oldp+141,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__load_inst_w));
    bufp->fullBit(oldp+142,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__load_signed_inst_w));
    bufp->fullBit(oldp+143,(((0x23U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w)) 
                             | ((0x1023U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w)) 
                                | (0x2023U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w))))));
    bufp->fullBit(oldp+144,(((3U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w)) 
                             | (0x4003U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w)))));
    bufp->fullBit(oldp+145,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__req_lh_w));
    bufp->fullBit(oldp+146,(((0x2003U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w)) 
                             | (0x6003U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w)))));
    bufp->fullBit(oldp+147,((0x23U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w))));
    bufp->fullBit(oldp+148,((0x1023U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w))));
    bufp->fullBit(oldp+149,((0x2023U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w))));
    bufp->fullBit(oldp+150,(((0x2023U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w)) 
                             | ((0x2003U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w)) 
                                | (0x6003U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w))))));
    bufp->fullBit(oldp+151,(((0x1023U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_opcode_w)) 
                             | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__req_lh_w))));
    bufp->fullBit(oldp+152,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__dcache_flush_w));
    bufp->fullBit(oldp+153,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__dcache_writeback_w));
    bufp->fullBit(oldp+154,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__dcache_invalidate_w));
    bufp->fullBit(oldp+155,(vlSymsp->TOP__v__u_core.u_lsu__DOT____Vcellinp__u_lsu_request__push_i));
    bufp->fullBit(oldp+156,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mult_inst_w));
    bufp->fullCData(oldp+157,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__next_state_r),4);
    bufp->fullCData(oldp+158,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag_addr_x_r),8);
    bufp->fullBit(oldp+159,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag0_write_m_r));
    bufp->fullBit(oldp+160,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag1_write_m_r));
    bufp->fullSData(oldp+161,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_addr_x_r),11);
    bufp->fullSData(oldp+162,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_addr_m_r),11);
    bufp->fullCData(oldp+163,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data0_write_m_r),4);
    bufp->fullCData(oldp+164,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data1_write_m_r),4);
    bufp->fullBit(oldp+165,(((6U != (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__state_q)) 
                             & (6U == (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__next_state_r)))));
    bufp->fullBit(oldp+166,(vlSymsp->TOP__v__u_core__u_issue.__PVT__squash_w));
    bufp->fullBit(oldp+167,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_accept_r) 
                             & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r) 
                                & ((~ (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__dual_issue_w)) 
                                   & (~ (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q)))))));
    bufp->fullBit(oldp+168,(vlSymsp->TOP__v__u_core__u_issue.__PVT__dual_issue_w));
    bufp->fullBit(oldp+169,(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot0_valid_r));
    bufp->fullBit(oldp+170,(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot1_valid_r));
    bufp->fullBit(oldp+171,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_valid_r));
    bufp->fullBit(oldp+172,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_valid_r));
    bufp->fullCData(oldp+173,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_fault_r),2);
    bufp->fullCData(oldp+174,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_fault_r),2);
    bufp->fullBit(oldp+175,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_sb_alloc_w));
    bufp->fullBit(oldp+176,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_exec_w));
    bufp->fullBit(oldp+177,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_lsu_w));
    bufp->fullBit(oldp+178,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot0_valid_r)
                              ? ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_55) 
                                 | ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_62) 
                                    | ((0x4063U == 
                                        (0x707fU & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                       | ((0x5063U 
                                           == (0x707fU 
                                               & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                          | (IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_61)))))
                              : (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_branch_w))));
    bufp->fullBit(oldp+179,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_mul_w));
    bufp->fullBit(oldp+180,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_div_w));
    bufp->fullBit(oldp+181,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_csr_w));
    bufp->fullBit(oldp+182,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__slot0_valid_r)
                              ? (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_invalid_w)
                              : (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_invalid_w))));
    bufp->fullBit(oldp+183,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_squash_e1_e2_w));
    bufp->fullBit(oldp+184,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_squash_e1_e2_w));
    bufp->fullBit(oldp+185,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_accept_r));
    bufp->fullBit(oldp+186,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_stall_raw_w));
    bufp->fullCData(oldp+187,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_e2_w),5);
    bufp->fullBit(oldp+188,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_valid_wb_w));
    bufp->fullBit(oldp+189,((1U & ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)) 
                                   & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_wb_q) 
                                      >> 3U)))));
    bufp->fullCData(oldp+190,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w),5);
    bufp->fullCData(oldp+191,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_fault_w),6);
    bufp->fullBit(oldp+192,(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_accept_r));
    bufp->fullBit(oldp+193,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_stall_raw_w));
    bufp->fullCData(oldp+194,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_e2_w),5);
    bufp->fullBit(oldp+195,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_valid_wb_w));
    bufp->fullCData(oldp+196,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w),5);
    bufp->fullCData(oldp+197,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_fault_w),6);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__v__u_core__u_issue.__PVT__scoreboard_r),32);
    bufp->fullBit(oldp+199,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_lsu_r));
    bufp->fullBit(oldp+200,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_mux_mul_r));
    bufp->fullBit(oldp+201,((((IData)(vlSymsp->TOP__v__u_core__u_issue.__VdfgRegularize_h47f1efe9_0_2) 
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
    bufp->fullBit(oldp+202,((0U != (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__exception_e2_r))));
    bufp->fullBit(oldp+203,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__valid_e2_w));
    bufp->fullCData(oldp+204,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__exception_e2_r),6);
    bufp->fullBit(oldp+205,(((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)) 
                             & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_wb_q) 
                                >> 9U))));
    bufp->fullBit(oldp+206,((1U & ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)) 
                                   & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_wb_q) 
                                      >> 3U)))));
    bufp->fullBit(oldp+207,((0U != (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__exception_e2_r))));
    bufp->fullBit(oldp+208,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__valid_e2_w));
    bufp->fullCData(oldp+209,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__exception_e2_r),6);
    bufp->fullBit(oldp+210,(((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__exec1_hold_w)) 
                             & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_wb_q) 
                                >> 9U))));
    bufp->fullBit(oldp+211,(((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                             & (0x73U == vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))));
    bufp->fullBit(oldp+212,(((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                             & (0x100073U == vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))));
    bufp->fullBit(oldp+213,(((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                             & (0x200073U == (0xcfffffffU 
                                              & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))));
    bufp->fullCData(oldp+214,((3U & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                     >> 0x1cU))),2);
    bufp->fullBit(oldp+215,(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrw_w));
    bufp->fullBit(oldp+216,(((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                             & (0x2073U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))));
    bufp->fullBit(oldp+217,(((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                             & (0x3073U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))));
    bufp->fullBit(oldp+218,(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrwi_w));
    bufp->fullBit(oldp+219,(((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                             & (0x6073U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))));
    bufp->fullBit(oldp+220,(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrci_w));
    bufp->fullBit(oldp+221,(((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                             & (0x10500073U == (0xffff8fffU 
                                                & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))));
    bufp->fullBit(oldp+222,(((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                             & (0xfU == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))));
    bufp->fullBit(oldp+223,(vlSymsp->TOP__v__u_core__u_csr.__PVT__sfence_w));
    bufp->fullBit(oldp+224,(vlSymsp->TOP__v__u_core__u_csr.__PVT__ifence_w));
    bufp->fullBit(oldp+225,((3U == (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+226,((IData)((((0U != (0xf8000U 
                                              & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                                      | (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrw_w)) 
                                     | (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__csrrwi_w)))));
    bufp->fullBit(oldp+227,(vlSymsp->TOP__v__u_core__u_csr.__PVT__set_r));
    bufp->fullBit(oldp+228,(vlSymsp->TOP__v__u_core__u_csr.__PVT__clr_r));
    bufp->fullBit(oldp+229,(vlSymsp->TOP__v__u_core__u_csr.__PVT__satp_update_w));
    bufp->fullIData(oldp+230,(vlSymsp->TOP__v__u_core__u_csr.__PVT__csr_rdata_w),32);
    bufp->fullBit(oldp+231,(vlSymsp->TOP__v__u_core__u_csr.__PVT__eret_fault_w));
    bufp->fullSData(oldp+232,((vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+233,((((IData)(vlSymsp->TOP__v__u_core.__PVT__csr_opcode_valid_w) 
                              & ((0x344U == (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                             >> 0x14U)) 
                                 | (0x144U == (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                               >> 0x14U)))) 
                             | (IData)(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_upd_q))));
    bufp->fullWData(oldp+234,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec0_verif.__PVT__dbg_inst_str),80);
    bufp->fullWData(oldp+237,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec0_verif.__PVT__dbg_inst_ra),80);
    bufp->fullWData(oldp+240,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec0_verif.__PVT__dbg_inst_rb),80);
    bufp->fullWData(oldp+243,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec0_verif.__PVT__dbg_inst_rd),80);
    bufp->fullIData(oldp+246,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec0_verif.__PVT__dbg_inst_imm),32);
    bufp->fullIData(oldp+247,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_valid_wb_w)
                                ? vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__pc_wb_q
                                : 0U)),32);
    bufp->fullWData(oldp+248,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif.__PVT__dbg_inst_str),80);
    bufp->fullWData(oldp+251,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif.__PVT__dbg_inst_ra),80);
    bufp->fullWData(oldp+254,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif.__PVT__dbg_inst_rb),80);
    bufp->fullWData(oldp+257,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif.__PVT__dbg_inst_rd),80);
    bufp->fullIData(oldp+260,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif.__PVT__dbg_inst_imm),32);
    bufp->fullIData(oldp+261,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_valid_wb_w)
                                ? vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__pc_wb_q
                                : 0U)),32);
    bufp->fullWData(oldp+262,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d.__PVT__dbg_inst_str),80);
    bufp->fullWData(oldp+265,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d.__PVT__dbg_inst_ra),80);
    bufp->fullWData(oldp+268,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d.__PVT__dbg_inst_rb),80);
    bufp->fullWData(oldp+271,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d.__PVT__dbg_inst_rd),80);
    bufp->fullIData(oldp+274,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d.__PVT__dbg_inst_imm),32);
    bufp->fullIData(oldp+275,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r)
                                ? vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r
                                : 0U)),32);
    bufp->fullWData(oldp+276,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb.__PVT__dbg_inst_str),80);
    bufp->fullWData(oldp+279,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb.__PVT__dbg_inst_ra),80);
    bufp->fullWData(oldp+282,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb.__PVT__dbg_inst_rb),80);
    bufp->fullWData(oldp+285,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb.__PVT__dbg_inst_rd),80);
    bufp->fullIData(oldp+288,(vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb.__PVT__dbg_inst_imm),32);
    bufp->fullWData(oldp+289,(vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d.__PVT__dbg_inst_str),80);
    bufp->fullWData(oldp+292,(vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d.__PVT__dbg_inst_ra),80);
    bufp->fullWData(oldp+295,(vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d.__PVT__dbg_inst_rb),80);
    bufp->fullWData(oldp+298,(vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d.__PVT__dbg_inst_rd),80);
    bufp->fullIData(oldp+301,(vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d.__PVT__dbg_inst_imm),32);
    bufp->fullIData(oldp+302,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_issue_r)
                                ? vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r
                                : 0U)),32);
    bufp->fullWData(oldp+303,(vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb.__PVT__dbg_inst_str),80);
    bufp->fullWData(oldp+306,(vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb.__PVT__dbg_inst_ra),80);
    bufp->fullWData(oldp+309,(vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb.__PVT__dbg_inst_rb),80);
    bufp->fullWData(oldp+312,(vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb.__PVT__dbg_inst_rd),80);
    bufp->fullIData(oldp+315,(vlSymsp->TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb.__PVT__dbg_inst_imm),32);
    bufp->fullIData(oldp+316,(vlSymsp->TOP__v.__PVT__dcache_data_rd_w),32);
    bufp->fullBit(oldp+317,(vlSymsp->TOP__v__u_core.__PVT__branch_d_exec1_request_w));
    bufp->fullIData(oldp+318,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_r),32);
    bufp->fullIData(oldp+319,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__wb_result_r),32);
    bufp->fullIData(oldp+320,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_r),32);
    bufp->fullIData(oldp+321,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_target_r),32);
    bufp->fullIData(oldp+322,(vlSymsp->TOP__v__u_core.__PVT__mul_opcode_rb_operand_w),32);
    bufp->fullIData(oldp+323,(vlSymsp->TOP__v__u_core.__PVT__mul_opcode_ra_operand_w),32);
    bufp->fullIData(oldp+324,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_r),32);
    bufp->fullIData(oldp+325,(vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_ra_operand_w),32);
    bufp->fullIData(oldp+326,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_r),32);
    bufp->fullBit(oldp+327,(vlSymsp->TOP__v__u_core.__PVT__branch_d_exec0_request_w));
    bufp->fullIData(oldp+328,(vlSymsp->TOP__v__u_core.__PVT__lsu_opcode_rb_operand_w),32);
    bufp->fullIData(oldp+329,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_target_r),32);
    bufp->fullIData(oldp+330,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_a_r),32);
    bufp->fullIData(oldp+331,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_b_r),32);
    bufp->fullIData(oldp+332,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__less_than_signed__Vstatic__v),32);
    bufp->fullIData(oldp+333,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__greater_than_signed__Vstatic__v),32);
    bufp->fullBit(oldp+334,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_r));
    bufp->fullBit(oldp+335,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_taken_r));
    bufp->fullBit(oldp+336,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_call_r));
    bufp->fullBit(oldp+337,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_ret_r));
    bufp->fullBit(oldp+338,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_jmp_r));
    bufp->fullIData(oldp+339,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__sub_res_w),32);
    bufp->fullCData(oldp+340,((0xffU & vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_a_r)),8);
    bufp->fullCData(oldp+341,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_a_r 
                                        >> 8U))),8);
    bufp->fullCData(oldp+342,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_a_r 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+343,((vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_a_r 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+344,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_a_r),32);
    bufp->fullIData(oldp+345,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_b_r),32);
    bufp->fullIData(oldp+346,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__less_than_signed__Vstatic__v),32);
    bufp->fullIData(oldp+347,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__greater_than_signed__Vstatic__v),32);
    bufp->fullBit(oldp+348,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_r));
    bufp->fullBit(oldp+349,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_taken_r));
    bufp->fullBit(oldp+350,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_call_r));
    bufp->fullBit(oldp+351,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_ret_r));
    bufp->fullBit(oldp+352,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_jmp_r));
    bufp->fullIData(oldp+353,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__sub_res_w),32);
    bufp->fullCData(oldp+354,((0xffU & vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_a_r)),8);
    bufp->fullCData(oldp+355,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_a_r 
                                        >> 8U))),8);
    bufp->fullCData(oldp+356,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_a_r 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+357,((vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_a_r 
                               >> 0x18U)),8);
    bufp->fullBit(oldp+358,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_valid_w));
    bufp->fullBit(oldp+359,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__push_w));
    bufp->fullBit(oldp+360,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__pred_taken_w));
    bufp->fullCData(oldp+361,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_r),3);
    bufp->fullIData(oldp+362,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_r),32);
    bufp->fullBit(oldp+363,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_r));
    bufp->fullIData(oldp+364,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_r),32);
    bufp->fullBit(oldp+365,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_rd_r));
    bufp->fullCData(oldp+366,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_wr_r),4);
    bufp->fullCData(oldp+367,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__addr_lsb_r),2);
    bufp->fullBit(oldp+368,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__load_byte_r));
    bufp->fullBit(oldp+369,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__load_half_r));
    bufp->fullBit(oldp+370,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__load_signed_r));
    bufp->fullIData(oldp+371,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_e2_r),32);
    bufp->fullIData(oldp+372,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_e2_r),32);
    bufp->fullIData(oldp+373,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_ra_value_w),32);
    bufp->fullIData(oldp+374,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_a_rb_value_w),32);
    bufp->fullIData(oldp+375,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_ra_value_w),32);
    bufp->fullIData(oldp+376,(vlSymsp->TOP__v__u_core__u_issue.__PVT__issue_b_rb_value_w),32);
    bufp->fullBit(oldp+377,(((IData)(vlSymsp->TOP__v__u_core.__PVT__branch_d_exec0_request_w) 
                             & (0U != (3U & vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_target_r)))));
    bufp->fullBit(oldp+378,(((IData)(vlSymsp->TOP__v__u_core.__PVT__branch_d_exec1_request_w) 
                             & (0U != (3U & vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_target_r)))));
    bufp->fullIData(oldp+379,(vlSymsp->TOP__v__u_core__u_csr.__PVT__data_r),32);
    bufp->fullBit(oldp+380,(vlSymsp->TOP__v.__PVT__dcache_error_w));
    bufp->fullBit(oldp+381,(((~ (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_pmem_mux__DOT__select_q)) 
                             & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_ack_w))));
    bufp->fullBit(oldp+382,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_ack_w));
    bufp->fullBit(oldp+383,(vlSymsp->TOP__v__u_dcache.__PVT__mem_uncached_ack_w));
    bufp->fullBit(oldp+384,(((~ (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_pmem_mux__DOT__select_q)) 
                             & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_error_w))));
    bufp->fullCData(oldp+385,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_uncached_wr_w),4);
    bufp->fullBit(oldp+386,(((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_error_w) 
                             & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_pmem_mux__DOT__select_q))));
    bufp->fullBit(oldp+387,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_uncached_rd_w));
    bufp->fullBit(oldp+388,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__accept_w));
    bufp->fullBit(oldp+389,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__res_push_w));
    bufp->fullBit(oldp+390,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__request_complete_w));
    bufp->fullBit(oldp+391,(((~ (IData)(vlSymsp->TOP__v__u_dcache.__PVT__mem_uncached_ack_w)) 
                             & (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__request_pending_q))));
    bufp->fullBit(oldp+392,(((~ (IData)(vlSymsp->TOP__v__u_dcache.u_uncached__DOT____VdfgRegularize_h08c420ae_0_0)) 
                             & (IData)(vlSymsp->TOP__v__u_dcache.u_uncached__DOT____VdfgRegularize_h08c420ae_0_1))));
    bufp->fullBit(oldp+393,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__req_is_drop_w));
    bufp->fullBit(oldp+394,(vlSymsp->TOP__v__u_icache.__PVT__tag0_write_r));
    bufp->fullBit(oldp+395,(vlSymsp->TOP__v__u_icache.__PVT__tag1_write_r));
    bufp->fullBit(oldp+396,(((~ (IData)(vlSymsp->TOP__v__u_icache.__PVT__replace_way_q)) 
                             & (IData)(vlSelfRef.__Vcellinp__v__axi_i_rvalid_i))));
    bufp->fullBit(oldp+397,(((IData)(vlSelfRef.__Vcellinp__v__axi_i_rvalid_i) 
                             & (IData)(vlSymsp->TOP__v__u_icache.__PVT__replace_way_q))));
    bufp->fullIData(oldp+398,(((IData)(vlSymsp->TOP__v__u_core.__PVT__branch_csr_request_w)
                                ? vlSymsp->TOP__v__u_core.__PVT__branch_csr_pc_w
                                : vlSymsp->TOP__v__u_core__u_issue.__PVT__pc_x_q)),32);
    bufp->fullIData(oldp+399,(vlSymsp->TOP__v__u_core.__PVT__branch_csr_pc_w),32);
    bufp->fullCData(oldp+400,(vlSymsp->TOP__v__u_core.__PVT__writeback_mem_exception_w),6);
    bufp->fullBit(oldp+401,(((IData)(vlSymsp->TOP__v.__PVT__dcache_error_w) 
                             & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__resp_load_w))));
    bufp->fullBit(oldp+402,(((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__resp_load_w)) 
                             & (IData)(vlSymsp->TOP__v.__PVT__dcache_error_w))));
    bufp->fullIData(oldp+403,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data0_data_in_m_w),32);
    bufp->fullQData(oldp+404,(vlSymsp->TOP__v__u_icache__u_data0.__PVT__data_i),64);
    bufp->fullIData(oldp+406,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_r),32);
    bufp->fullIData(oldp+407,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_next_r),32);
    bufp->fullBit(oldp+408,(vlSelfRef.__Vcellout__v__axi_i_arvalid_o));
    bufp->fullBit(oldp+409,(vlSymsp->TOP__v.__PVT__icache_accept_w));
    bufp->fullCData(oldp+410,(vlSymsp->TOP__v__u_icache.__PVT__next_state_r),2);
    bufp->fullBit(oldp+411,((1U & (~ (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__stall_w)))));
    bufp->fullBit(oldp+412,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__stall_w));
    bufp->fullIData(oldp+413,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B),32);
    bufp->fullBit(oldp+414,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_Ci));
    bufp->fullCData(oldp+415,((0xffU & vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B)),8);
    bufp->fullCData(oldp+416,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                        >> 8U))),8);
    bufp->fullCData(oldp+417,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+418,((vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+419,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B),32);
    bufp->fullBit(oldp+420,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_Ci));
    bufp->fullCData(oldp+421,((0xffU & vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B)),8);
    bufp->fullCData(oldp+422,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                        >> 8U))),8);
    bufp->fullCData(oldp+423,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+424,((vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                               >> 0x18U)),8);
    bufp->fullBit(oldp+425,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag_dirty_any_m_w));
    bufp->fullIData(oldp+426,(vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q),21);
    bufp->fullBit(oldp+427,((1U & (vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                   >> 0x14U))));
    bufp->fullBit(oldp+428,((1U & (vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                   >> 0x13U))));
    bufp->fullIData(oldp+429,((0x7ffffU & vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q)),19);
    bufp->fullIData(oldp+430,(vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q),21);
    bufp->fullBit(oldp+431,((1U & (vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q 
                                   >> 0x14U))));
    bufp->fullBit(oldp+432,((1U & (vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q 
                                   >> 0x13U))));
    bufp->fullIData(oldp+433,((0x7ffffU & vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q)),19);
    bufp->fullCData(oldp+434,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_wr_w),4);
    bufp->fullBit(oldp+435,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_ack_r));
    bufp->fullBit(oldp+436,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__evict_way_w));
    bufp->fullBit(oldp+437,((((IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag0_hit_m_w) 
                              & (vlSymsp->TOP__v__u_dcache__u_core__u_tag0.__PVT__ram_read0_q 
                                 >> 0x13U)) | ((IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag1_hit_m_w) 
                                               & (vlSymsp->TOP__v__u_dcache__u_core__u_tag1.__PVT__ram_read0_q 
                                                  >> 0x13U)))));
    bufp->fullBit(oldp+438,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag0_hit_m_w));
    bufp->fullBit(oldp+439,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag1_hit_m_w));
    bufp->fullBit(oldp+440,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag_hit_any_m_w));
    bufp->fullBit(oldp+441,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__evict_way_r));
    bufp->fullIData(oldp+442,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__evict_addr_r),27);
    bufp->fullBit(oldp+443,(((7U == (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__state_q)) 
                             & ((IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__evict_way_w) 
                                | (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_writeback_m_q)))));
    bufp->fullIData(oldp+444,(vlSymsp->TOP__v__u_icache__u_tag0.__PVT__ram_read_q),20);
    bufp->fullBit(oldp+445,((1U & (vlSymsp->TOP__v__u_icache__u_tag0.__PVT__ram_read_q 
                                   >> 0x13U))));
    bufp->fullIData(oldp+446,((0x7ffffU & vlSymsp->TOP__v__u_icache__u_tag0.__PVT__ram_read_q)),19);
    bufp->fullIData(oldp+447,(vlSymsp->TOP__v__u_icache__u_tag1.__PVT__ram_read_q),20);
    bufp->fullBit(oldp+448,((1U & (vlSymsp->TOP__v__u_icache__u_tag1.__PVT__ram_read_q 
                                   >> 0x13U))));
    bufp->fullIData(oldp+449,((0x7ffffU & vlSymsp->TOP__v__u_icache__u_tag1.__PVT__ram_read_q)),19);
    bufp->fullQData(oldp+450,(vlSymsp->TOP__v__u_icache__u_data0.__PVT__ram_read_q),64);
    bufp->fullQData(oldp+452,(vlSymsp->TOP__v__u_icache__u_data1.__PVT__ram_read_q),64);
    bufp->fullIData(oldp+454,(vlSymsp->TOP__v__u_dcache__u_core__u_data0.__PVT__ram_read0_q),32);
    bufp->fullIData(oldp+455,(vlSymsp->TOP__v__u_dcache__u_core__u_data1.__PVT__ram_read0_q),32);
    bufp->fullIData(oldp+456,(vlSymsp->TOP__v__u_dcache__u_core__u_data0.__PVT__ram_read1_q),32);
    bufp->fullIData(oldp+457,(vlSymsp->TOP__v__u_dcache__u_core__u_data1.__PVT__ram_read1_q),32);
    bufp->fullIData(oldp+458,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r1_q),32);
    bufp->fullIData(oldp+459,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r2_q),32);
    bufp->fullIData(oldp+460,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r3_q),32);
    bufp->fullIData(oldp+461,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r4_q),32);
    bufp->fullIData(oldp+462,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r5_q),32);
    bufp->fullIData(oldp+463,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r6_q),32);
    bufp->fullIData(oldp+464,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r7_q),32);
    bufp->fullIData(oldp+465,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r8_q),32);
    bufp->fullIData(oldp+466,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r9_q),32);
    bufp->fullIData(oldp+467,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r10_q),32);
    bufp->fullIData(oldp+468,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r11_q),32);
    bufp->fullIData(oldp+469,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r12_q),32);
    bufp->fullIData(oldp+470,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r13_q),32);
    bufp->fullIData(oldp+471,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r14_q),32);
    bufp->fullIData(oldp+472,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r15_q),32);
    bufp->fullIData(oldp+473,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r16_q),32);
    bufp->fullIData(oldp+474,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r17_q),32);
    bufp->fullIData(oldp+475,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r18_q),32);
    bufp->fullIData(oldp+476,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r19_q),32);
    bufp->fullIData(oldp+477,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r20_q),32);
    bufp->fullIData(oldp+478,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r21_q),32);
    bufp->fullIData(oldp+479,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r22_q),32);
    bufp->fullIData(oldp+480,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r23_q),32);
    bufp->fullIData(oldp+481,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r24_q),32);
    bufp->fullIData(oldp+482,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r25_q),32);
    bufp->fullIData(oldp+483,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r26_q),32);
    bufp->fullIData(oldp+484,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r27_q),32);
    bufp->fullIData(oldp+485,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r28_q),32);
    bufp->fullIData(oldp+486,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r29_q),32);
    bufp->fullIData(oldp+487,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r30_q),32);
    bufp->fullIData(oldp+488,(vlSymsp->TOP__v__u_core__u_issue__u_regfile.__PVT__REGFILE__DOT__reg_r31_q),32);
    bufp->fullIData(oldp+489,((0xffffffe0U & vlSymsp->TOP__v__u_icache.__PVT__lookup_addr_q)),32);
    bufp->fullBit(oldp+490,(vlSelfRef.__Vcellout__v__axi_d_awvalid_o));
    bufp->fullIData(oldp+491,(vlSelfRef.__Vcellout__v__axi_d_awaddr_o),32);
    bufp->fullCData(oldp+492,(vlSelfRef.__Vcellout__v__axi_d_awlen_o),8);
    bufp->fullBit(oldp+493,(vlSelfRef.__Vcellout__v__axi_d_wvalid_o));
    bufp->fullIData(oldp+494,(vlSelfRef.__Vcellout__v__axi_d_wdata_o),32);
    bufp->fullCData(oldp+495,(vlSelfRef.__Vcellout__v__axi_d_wstrb_o),4);
    bufp->fullBit(oldp+496,(vlSelfRef.__Vcellout__v__axi_d_wlast_o));
    bufp->fullBit(oldp+497,(vlSelfRef.__Vcellout__v__axi_d_arvalid_o));
    bufp->fullBit(oldp+498,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__icache_invalidate_q) 
                             | (IData)(vlSymsp->TOP__v__u_core__u_csr.__PVT__ifence_q))));
    bufp->fullBit(oldp+499,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_flush_q));
    bufp->fullBit(oldp+500,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_invalidate_q));
    bufp->fullSData(oldp+501,(((IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_mux__DOT__cache_access_q)
                                ? (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_tag_m_q)
                                : vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__ram_q
                               [vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q])),11);
    bufp->fullIData(oldp+502,((0xfffffffcU & vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q)),32);
    bufp->fullBit(oldp+503,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_writeback_q));
    bufp->fullBit(oldp+504,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_cacheable_q));
    bufp->fullBit(oldp+505,(vlSymsp->TOP__v__u_icache.__PVT__axi_error_q));
    bufp->fullIData(oldp+506,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_data_wr_q),32);
    bufp->fullBit(oldp+507,(((IData)(vlSymsp->TOP__v__u_dcache.u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_2) 
                             & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_invalidate_q))));
    bufp->fullBit(oldp+508,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_accept_w));
    bufp->fullBit(oldp+509,(((2U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__count_q)) 
                             & (2U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__count_q)))));
    bufp->fullBit(oldp+510,(vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_invalidate_w));
    bufp->fullBit(oldp+511,(((~ (IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_select_w)) 
                             & (2U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__count_q)))));
    bufp->fullIData(oldp+512,((0xfffffffcU & vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                               [vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][0U])),32);
    bufp->fullBit(oldp+513,(((IData)(vlSymsp->TOP__v__u_dcache.u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_2) 
                             & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_flush_q))));
    bufp->fullSData(oldp+514,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_tag_m_q),11);
    bufp->fullBit(oldp+515,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_select_w));
    bufp->fullBit(oldp+516,(vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_flush_w));
    bufp->fullBit(oldp+517,(((IData)(vlSymsp->TOP__v__u_dcache.u_mux__DOT____VdfgRegularize_h7a1a3dfb_0_2) 
                             & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_writeback_q))));
    bufp->fullIData(oldp+518,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                              [vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q][1U]),32);
    bufp->fullSData(oldp+519,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__ram_q
                              [vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q]),11);
    bufp->fullBit(oldp+520,((2U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__count_q))));
    bufp->fullBit(oldp+521,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__error_q));
    bufp->fullBit(oldp+522,(vlSymsp->TOP__v__u_dcache.__PVT__mem_cached_writeback_w));
    bufp->fullBit(oldp+523,((2U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__resp_outstanding_q))));
    bufp->fullBit(oldp+524,((0U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__resp_outstanding_q))));
    bufp->fullBit(oldp+525,((0U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__count_q))));
    bufp->fullWData(oldp+526,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q
                              [vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q]),77);
    bufp->fullBit(oldp+529,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__req_can_issue_w));
    bufp->fullBit(oldp+530,(((IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__req_can_issue_w) 
                             & (IData)(vlSymsp->TOP__v__u_dcache.u_axi__DOT____VdfgRegularize_h2534fa66_0_0))));
    bufp->fullBit(oldp+531,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__req_is_write_w));
    bufp->fullCData(oldp+532,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__req_cnt_q),8);
    bufp->fullBit(oldp+533,(((IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__req_is_write_w) 
                             & ((0U == (IData)(vlSelfRef.__Vcellout__v__axi_d_awlen_o)) 
                                & (0U == (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__req_cnt_q))))));
    bufp->fullCData(oldp+534,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__resp_outstanding_q),2);
    bufp->fullIData(oldp+535,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q
                              [vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][1U]),32);
    bufp->fullCData(oldp+536,((0xfU & vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q
                               [vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q][2U])),4);
    bufp->fullBit(oldp+537,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__awvalid_inhibit_q));
    bufp->fullBit(oldp+538,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__wvalid_inhibit_q));
    bufp->fullCData(oldp+539,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q),8);
    bufp->fullBit(oldp+540,((((IData)(vlSelfRef.__Vcellout__v__axi_d_awvalid_o) 
                              & (0U == (IData)(vlSelfRef.__Vcellout__v__axi_d_awlen_o))) 
                             | (1U == (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__req_cnt_q)))));
    bufp->fullBit(oldp+541,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__buf_valid_q));
    bufp->fullQData(oldp+542,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_axi__DOT__buf_q),37);
    bufp->fullWData(oldp+544,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q[0]),77);
    bufp->fullWData(oldp+547,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__ram_q[1]),77);
    bufp->fullBit(oldp+550,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__rd_ptr_q));
    bufp->fullBit(oldp+551,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__wr_ptr_q));
    bufp->fullCData(oldp+552,(vlSymsp->TOP__v__u_dcache.__PVT__u_axi__DOT__u_req__DOT__count_q),2);
    bufp->fullBit(oldp+553,(vlSymsp->TOP__v__u_dcache.__PVT__u_mux__DOT__hold_w));
    bufp->fullBit(oldp+554,(vlSymsp->TOP__v__u_dcache.__PVT__u_mux__DOT__cache_access_q));
    bufp->fullCData(oldp+555,(vlSymsp->TOP__v__u_dcache.__PVT__u_mux__DOT__pending_q),5);
    bufp->fullBit(oldp+556,(vlSymsp->TOP__v__u_dcache.__PVT__u_pmem_mux__DOT__select_q));
    bufp->fullBit(oldp+557,((2U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__count_q))));
    bufp->fullBit(oldp+558,((2U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__count_q))));
    bufp->fullBit(oldp+559,((0U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__count_q))));
    bufp->fullWData(oldp+560,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q
                              [vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q]),70);
    bufp->fullBit(oldp+563,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__drop_req_w));
    bufp->fullBit(oldp+564,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__request_pending_q));
    bufp->fullBit(oldp+565,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__dropped_q));
    bufp->fullWData(oldp+566,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q[0]),70);
    bufp->fullWData(oldp+569,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__ram_q[1]),70);
    bufp->fullBit(oldp+572,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__rd_ptr_q));
    bufp->fullBit(oldp+573,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__wr_ptr_q));
    bufp->fullCData(oldp+574,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_req__DOT__count_q),2);
    bufp->fullBit(oldp+575,((0U != (IData)(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__count_q))));
    bufp->fullSData(oldp+576,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__ram_q[0]),11);
    bufp->fullSData(oldp+577,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__ram_q[1]),11);
    bufp->fullBit(oldp+578,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__rd_ptr_q));
    bufp->fullBit(oldp+579,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__wr_ptr_q));
    bufp->fullCData(oldp+580,(vlSymsp->TOP__v__u_dcache.__PVT__u_uncached__DOT__u_resp__DOT__count_q),2);
    bufp->fullCData(oldp+581,(vlSymsp->TOP__v__u_icache.__PVT__state_q),2);
    bufp->fullBit(oldp+582,(vlSymsp->TOP__v__u_icache.__PVT__invalidate_q));
    bufp->fullBit(oldp+583,(vlSymsp->TOP__v__u_icache.__PVT__replace_way_q));
    bufp->fullBit(oldp+584,(vlSymsp->TOP__v__u_icache.__PVT__lookup_valid_q));
    bufp->fullIData(oldp+585,(vlSymsp->TOP__v__u_icache.__PVT__lookup_addr_q),32);
    bufp->fullIData(oldp+586,((vlSymsp->TOP__v__u_icache.__PVT__lookup_addr_q 
                               >> 0xdU)),19);
    bufp->fullIData(oldp+587,(vlSymsp->TOP__v__u_icache.__PVT__tag_data_in_r),20);
    bufp->fullSData(oldp+588,(vlSymsp->TOP__v__u_icache.__PVT__data_write_addr_q),10);
    bufp->fullCData(oldp+589,(vlSymsp->TOP__v__u_icache.__PVT__refill_word_idx_q),3);
    bufp->fullIData(oldp+590,(vlSymsp->TOP__v__u_icache.__PVT__refill_lower_q),32);
    bufp->fullCData(oldp+591,(vlSymsp->TOP__v__u_icache.__PVT__flush_addr_q),8);
    bufp->fullBit(oldp+592,(vlSymsp->TOP__v__u_icache.__PVT__axi_arvalid_q));
    bufp->fullBit(oldp+593,(((0x73U == vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w) 
                             | ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_58) 
                                | ((0x1073U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                   | ((0x2073U == (0x707fU 
                                                   & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                      | ((0x3073U == 
                                          (0x707fU 
                                           & vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w)) 
                                         | ((0x5073U 
                                             == (0x707fU 
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
    bufp->fullBit(oldp+594,(vlSymsp->TOP__v__u_core__u_csr.__PVT__tlb_flush_q));
    bufp->fullIData(oldp+595,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__pc_m_q),32);
    bufp->fullIData(oldp+596,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__wb_result_q),32);
    bufp->fullBit(oldp+597,(vlSymsp->TOP__v__u_core.__PVT__branch_csr_request_w));
    bufp->fullIData(oldp+598,((vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
                               << 3U)),32);
    bufp->fullBit(oldp+599,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_call_q));
    bufp->fullBit(oldp+600,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_ntaken_q) 
                             | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_taken_q))));
    bufp->fullBit(oldp+601,((1U & (vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q 
                                   >> 0x13U))));
    bufp->fullIData(oldp+602,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__pc_x_q),32);
    bufp->fullCData(oldp+603,(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w),6);
    bufp->fullBit(oldp+604,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_call_q));
    bufp->fullBit(oldp+605,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_ntaken_q));
    bufp->fullBit(oldp+606,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_taken_q));
    bufp->fullIData(oldp+607,(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_w),32);
    bufp->fullIData(oldp+608,(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_addr_w),32);
    bufp->fullBit(oldp+609,(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_invalid_w));
    bufp->fullBit(oldp+610,(vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_rd_valid_w));
    bufp->fullCData(oldp+611,(vlSymsp->TOP__v__u_core__u_csr.__PVT__exception_e1_q),6);
    bufp->fullBit(oldp+612,(((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_57) 
                             | (IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_59))));
    bufp->fullBit(oldp+613,(vlSymsp->TOP__v__u_core.__PVT__fetch0_fault_fetch_w));
    bufp->fullIData(oldp+614,(vlSymsp->TOP__v__u_core.__PVT__branch_info_pc_w),32);
    bufp->fullBit(oldp+615,(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_page_w));
    bufp->fullBit(oldp+616,(((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_57) 
                             | (IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec1__DOT____VdfgRegularize_h27ba1afc_0_59))));
    bufp->fullIData(oldp+617,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__pc_m_q),32);
    bufp->fullBit(oldp+618,(vlSymsp->TOP__v__u_core.__PVT__branch_info_is_not_taken_w));
    bufp->fullBit(oldp+619,(vlSymsp->TOP__v__u_core.__PVT__branch_info_is_taken_w));
    bufp->fullBit(oldp+620,(vlSymsp->TOP__v__u_core.__PVT__branch_info_is_ret_w));
    bufp->fullBit(oldp+621,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_taken_q));
    bufp->fullBit(oldp+622,(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_exec_w));
    bufp->fullBit(oldp+623,(vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_exec_w));
    bufp->fullIData(oldp+624,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__result_q),32);
    bufp->fullBit(oldp+625,(vlSymsp->TOP__v__u_core.__PVT__branch_info_is_jmp_w));
    bufp->fullBit(oldp+626,(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_lsu_w));
    bufp->fullBit(oldp+627,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_ntaken_q) 
                             | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_taken_q))));
    bufp->fullBit(oldp+628,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_jmp_q));
    bufp->fullCData(oldp+629,(vlSymsp->TOP__v__u_core.__PVT__branch_csr_priv_w),2);
    bufp->fullBit(oldp+630,(((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_56) 
                             | (IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_60))));
    bufp->fullCData(oldp+631,(((IData)(vlSymsp->TOP__v__u_core.__PVT__branch_csr_request_w)
                                ? (IData)(vlSymsp->TOP__v__u_core.__PVT__branch_csr_priv_w)
                                : (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__priv_x_q))),2);
    bufp->fullBit(oldp+632,(((3U == (0x707fU & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                             | ((0x1003U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                | ((0x2003U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                   | ((0x4003U == (0x707fU 
                                                   & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                      | ((0x5003U == 
                                          (0x707fU 
                                           & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                         | ((0x6003U 
                                             == (0x707fU 
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
    bufp->fullIData(oldp+633,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__pc_x_q),32);
    bufp->fullBit(oldp+634,(((0x73U == vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w) 
                             | ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_58) 
                                | ((0x1073U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                   | ((0x2073U == (0x707fU 
                                                   & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                      | ((0x3073U == 
                                          (0x707fU 
                                           & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                         | ((0x5073U 
                                             == (0x707fU 
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
    bufp->fullBit(oldp+635,(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_branch_w));
    bufp->fullBit(oldp+636,(vlSymsp->TOP__v__u_core.__PVT__fetch0_valid_w));
    bufp->fullBit(oldp+637,(vlSymsp->TOP__v__u_core__u_csr.__PVT__rd_valid_e1_q));
    bufp->fullBit(oldp+638,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_ntaken_q));
    bufp->fullBit(oldp+639,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__branch_ret_q));
    bufp->fullBit(oldp+640,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__valid_q));
    bufp->fullBit(oldp+641,(vlSymsp->TOP__v__u_core.__PVT__fetch0_fault_page_w));
    bufp->fullIData(oldp+642,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_satp_q),32);
    bufp->fullIData(oldp+643,(vlSymsp->TOP__v__u_core__u_csr.__PVT__csr_wdata_e1_q),32);
    bufp->fullIData(oldp+644,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__result_q),32);
    bufp->fullBit(oldp+645,(vlSymsp->TOP__v__u_core__u_csr.__PVT__ifence_q));
    bufp->fullBit(oldp+646,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_jmp_q));
    bufp->fullIData(oldp+647,((4U | (vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT____VdfgRegularize_h8d0eb69c_0_1 
                                     << 3U))),32);
    bufp->fullIData(oldp+648,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q),32);
    bufp->fullBit(oldp+649,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wr_wb_q));
    bufp->fullBit(oldp+650,(vlSymsp->TOP__v__u_core__u_csr.__PVT__take_interrupt_q));
    bufp->fullIData(oldp+651,(vlSymsp->TOP__v__u_core__u_csr.__PVT__rd_result_e1_q),32);
    bufp->fullBit(oldp+652,(vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_invalid_w));
    bufp->fullSData(oldp+653,((vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                               >> 0x14U)),12);
    bufp->fullBit(oldp+654,(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_fetch_w));
    bufp->fullBit(oldp+655,(vlSymsp->TOP__v__u_core.__PVT__fetch1_valid_w));
    bufp->fullIData(oldp+656,(vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w),32);
    bufp->fullCData(oldp+657,((3U & ((0x20000U & vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q)
                                      ? (vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q 
                                         >> 0xbU) : (IData)(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q)))),2);
    bufp->fullBit(oldp+658,(((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_55) 
                             | ((IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_62) 
                                | ((0x4063U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                   | ((0x5063U == (0x707fU 
                                                   & vlSymsp->TOP__v__u_core.__PVT__fetch0_instr_w)) 
                                      | (IData)(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_dec0__DOT____VdfgRegularize_h27ba1afc_0_61)))))));
    bufp->fullBit(oldp+659,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__branch_ret_q));
    bufp->fullIData(oldp+660,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__result_e2_q),32);
    bufp->fullBit(oldp+661,(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_rd_valid_w));
    bufp->fullBit(oldp+662,((1U & (vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q 
                                   >> 0x12U))));
    bufp->fullIData(oldp+663,(vlSymsp->TOP__v__u_core.__PVT__branch_info_source_w),32);
    bufp->fullBit(oldp+664,(vlSymsp->TOP__v__u_core.__PVT__branch_info_is_call_w));
    bufp->fullIData(oldp+665,(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_pc_w),32);
    bufp->fullBit(oldp+666,(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_mul_w));
    bufp->fullIData(oldp+667,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__dividend_q),32);
    bufp->fullQData(oldp+668,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__divisor_q),63);
    bufp->fullIData(oldp+670,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__quotient_q),32);
    bufp->fullIData(oldp+671,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__q_mask_q),32);
    bufp->fullBit(oldp+672,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_inst_q));
    bufp->fullBit(oldp+673,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_busy_q));
    bufp->fullBit(oldp+674,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__invert_res_q));
    bufp->fullIData(oldp+675,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__last_a_q),32);
    bufp->fullIData(oldp+676,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__last_b_q),32);
    bufp->fullBit(oldp+677,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__last_div_q));
    bufp->fullBit(oldp+678,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__last_divu_q));
    bufp->fullBit(oldp+679,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__last_rem_q));
    bufp->fullBit(oldp+680,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__last_remu_q));
    bufp->fullBit(oldp+681,(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_complete_w));
    bufp->fullIData(oldp+682,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__div_inst_q)
                                ? ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__invert_res_q)
                                    ? (- vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__quotient_q)
                                    : vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__quotient_q)
                                : ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__invert_res_q)
                                    ? (- vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__dividend_q)
                                    : vlSymsp->TOP__v__u_core.__PVT__u_div__DOT__dividend_q))),32);
    bufp->fullBit(oldp+683,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_fault_page_w));
    bufp->fullBit(oldp+684,((2U != (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q))));
    bufp->fullCData(oldp+685,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pred_branch_w),2);
    bufp->fullIData(oldp+686,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_pc_w),32);
    bufp->fullBit(oldp+687,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_fault_fetch_w));
    bufp->fullBit(oldp+688,(((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_fault_fetch_w) 
                             | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch0_fault_page_w))));
    bufp->fullBit(oldp+689,(((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_fetch_w) 
                             | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_fault_page_w))));
    bufp->fullCData(oldp+690,(vlSymsp->TOP__v__u_core.u_frontend__DOT__u_decode__DOT____Vcellinp__genblk1__DOT__u_fifo__info0_in_i),2);
    bufp->fullCData(oldp+691,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q
                              [vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]),2);
    bufp->fullCData(oldp+692,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q
                              [vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q]),2);
    bufp->fullIData(oldp+693,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q[0]),32);
    bufp->fullIData(oldp+694,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__pc_q[1]),32);
    bufp->fullBit(oldp+695,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q[0]));
    bufp->fullBit(oldp+696,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid0_q[1]));
    bufp->fullBit(oldp+697,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q[0]));
    bufp->fullBit(oldp+698,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__valid1_q[1]));
    bufp->fullCData(oldp+699,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q[0]),2);
    bufp->fullCData(oldp+700,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info0_q[1]),2);
    bufp->fullCData(oldp+701,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q[0]),2);
    bufp->fullCData(oldp+702,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__info1_q[1]),2);
    bufp->fullQData(oldp+703,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q[0]),64);
    bufp->fullQData(oldp+705,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__ram_q[1]),64);
    bufp->fullBit(oldp+707,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__rd_ptr_q));
    bufp->fullBit(oldp+708,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__wr_ptr_q));
    bufp->fullCData(oldp+709,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__count_q),2);
    bufp->fullIData(oldp+710,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_decode__DOT__genblk1__DOT__u_fifo__DOT__i),32);
    bufp->fullBit(oldp+711,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__active_q));
    bufp->fullBit(oldp+712,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__branch_q));
    bufp->fullIData(oldp+713,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__branch_pc_q),32);
    bufp->fullBit(oldp+714,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__stall_q));
    bufp->fullBit(oldp+715,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__icache_fetch_q));
    bufp->fullBit(oldp+716,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__icache_invalidate_q));
    bufp->fullIData(oldp+717,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__pc_f_q),32);
    bufp->fullIData(oldp+718,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__pc_d_q),32);
    bufp->fullCData(oldp+719,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__pred_d_q),2);
    bufp->fullWData(oldp+720,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__skid_buffer_q),100);
    bufp->fullBit(oldp+724,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__skid_valid_q));
    bufp->fullCData(oldp+725,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_real_q),3);
    bufp->fullIData(oldp+726,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[0]),32);
    bufp->fullIData(oldp+727,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[1]),32);
    bufp->fullIData(oldp+728,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[2]),32);
    bufp->fullIData(oldp+729,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[3]),32);
    bufp->fullIData(oldp+730,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[4]),32);
    bufp->fullIData(oldp+731,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[5]),32);
    bufp->fullIData(oldp+732,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[6]),32);
    bufp->fullIData(oldp+733,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q[7]),32);
    bufp->fullCData(oldp+734,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q),3);
    bufp->fullIData(oldp+735,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_stack_q
                              [vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__ras_index_q]),32);
    bufp->fullIData(oldp+736,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i3),32);
    bufp->fullSData(oldp+737,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_real_q),9);
    bufp->fullSData(oldp+738,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__global_history_q),9);
    bufp->fullSData(oldp+739,((0x1ffU & (vlSymsp->TOP__v__u_core.__PVT__branch_info_source_w 
                                         >> 2U))),9);
    bufp->fullIData(oldp+740,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i4),32);
    bufp->fullIData(oldp+741,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[0]),32);
    bufp->fullIData(oldp+742,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[1]),32);
    bufp->fullIData(oldp+743,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[2]),32);
    bufp->fullIData(oldp+744,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[3]),32);
    bufp->fullIData(oldp+745,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[4]),32);
    bufp->fullIData(oldp+746,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[5]),32);
    bufp->fullIData(oldp+747,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[6]),32);
    bufp->fullIData(oldp+748,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[7]),32);
    bufp->fullIData(oldp+749,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[8]),32);
    bufp->fullIData(oldp+750,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[9]),32);
    bufp->fullIData(oldp+751,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[10]),32);
    bufp->fullIData(oldp+752,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[11]),32);
    bufp->fullIData(oldp+753,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[12]),32);
    bufp->fullIData(oldp+754,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[13]),32);
    bufp->fullIData(oldp+755,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[14]),32);
    bufp->fullIData(oldp+756,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[15]),32);
    bufp->fullIData(oldp+757,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[16]),32);
    bufp->fullIData(oldp+758,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[17]),32);
    bufp->fullIData(oldp+759,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[18]),32);
    bufp->fullIData(oldp+760,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[19]),32);
    bufp->fullIData(oldp+761,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[20]),32);
    bufp->fullIData(oldp+762,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[21]),32);
    bufp->fullIData(oldp+763,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[22]),32);
    bufp->fullIData(oldp+764,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[23]),32);
    bufp->fullIData(oldp+765,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[24]),32);
    bufp->fullIData(oldp+766,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[25]),32);
    bufp->fullIData(oldp+767,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[26]),32);
    bufp->fullIData(oldp+768,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[27]),32);
    bufp->fullIData(oldp+769,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[28]),32);
    bufp->fullIData(oldp+770,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[29]),32);
    bufp->fullIData(oldp+771,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[30]),32);
    bufp->fullIData(oldp+772,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_pc_q[31]),32);
    bufp->fullIData(oldp+773,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[0]),32);
    bufp->fullIData(oldp+774,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[1]),32);
    bufp->fullIData(oldp+775,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[2]),32);
    bufp->fullIData(oldp+776,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[3]),32);
    bufp->fullIData(oldp+777,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[4]),32);
    bufp->fullIData(oldp+778,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[5]),32);
    bufp->fullIData(oldp+779,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[6]),32);
    bufp->fullIData(oldp+780,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[7]),32);
    bufp->fullIData(oldp+781,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[8]),32);
    bufp->fullIData(oldp+782,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[9]),32);
    bufp->fullIData(oldp+783,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[10]),32);
    bufp->fullIData(oldp+784,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[11]),32);
    bufp->fullIData(oldp+785,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[12]),32);
    bufp->fullIData(oldp+786,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[13]),32);
    bufp->fullIData(oldp+787,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[14]),32);
    bufp->fullIData(oldp+788,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[15]),32);
    bufp->fullIData(oldp+789,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[16]),32);
    bufp->fullIData(oldp+790,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[17]),32);
    bufp->fullIData(oldp+791,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[18]),32);
    bufp->fullIData(oldp+792,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[19]),32);
    bufp->fullIData(oldp+793,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[20]),32);
    bufp->fullIData(oldp+794,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[21]),32);
    bufp->fullIData(oldp+795,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[22]),32);
    bufp->fullIData(oldp+796,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[23]),32);
    bufp->fullIData(oldp+797,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[24]),32);
    bufp->fullIData(oldp+798,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[25]),32);
    bufp->fullIData(oldp+799,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[26]),32);
    bufp->fullIData(oldp+800,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[27]),32);
    bufp->fullIData(oldp+801,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[28]),32);
    bufp->fullIData(oldp+802,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[29]),32);
    bufp->fullIData(oldp+803,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[30]),32);
    bufp->fullIData(oldp+804,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_target_q[31]),32);
    bufp->fullBit(oldp+805,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[0]));
    bufp->fullBit(oldp+806,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[1]));
    bufp->fullBit(oldp+807,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[2]));
    bufp->fullBit(oldp+808,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[3]));
    bufp->fullBit(oldp+809,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[4]));
    bufp->fullBit(oldp+810,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[5]));
    bufp->fullBit(oldp+811,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[6]));
    bufp->fullBit(oldp+812,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[7]));
    bufp->fullBit(oldp+813,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[8]));
    bufp->fullBit(oldp+814,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[9]));
    bufp->fullBit(oldp+815,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[10]));
    bufp->fullBit(oldp+816,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[11]));
    bufp->fullBit(oldp+817,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[12]));
    bufp->fullBit(oldp+818,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[13]));
    bufp->fullBit(oldp+819,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[14]));
    bufp->fullBit(oldp+820,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[15]));
    bufp->fullBit(oldp+821,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[16]));
    bufp->fullBit(oldp+822,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[17]));
    bufp->fullBit(oldp+823,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[18]));
    bufp->fullBit(oldp+824,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[19]));
    bufp->fullBit(oldp+825,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[20]));
    bufp->fullBit(oldp+826,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[21]));
    bufp->fullBit(oldp+827,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[22]));
    bufp->fullBit(oldp+828,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[23]));
    bufp->fullBit(oldp+829,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[24]));
    bufp->fullBit(oldp+830,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[25]));
    bufp->fullBit(oldp+831,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[26]));
    bufp->fullBit(oldp+832,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[27]));
    bufp->fullBit(oldp+833,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[28]));
    bufp->fullBit(oldp+834,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[29]));
    bufp->fullBit(oldp+835,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[30]));
    bufp->fullBit(oldp+836,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_call_q[31]));
    bufp->fullBit(oldp+837,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[0]));
    bufp->fullBit(oldp+838,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[1]));
    bufp->fullBit(oldp+839,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[2]));
    bufp->fullBit(oldp+840,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[3]));
    bufp->fullBit(oldp+841,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[4]));
    bufp->fullBit(oldp+842,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[5]));
    bufp->fullBit(oldp+843,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[6]));
    bufp->fullBit(oldp+844,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[7]));
    bufp->fullBit(oldp+845,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[8]));
    bufp->fullBit(oldp+846,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[9]));
    bufp->fullBit(oldp+847,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[10]));
    bufp->fullBit(oldp+848,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[11]));
    bufp->fullBit(oldp+849,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[12]));
    bufp->fullBit(oldp+850,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[13]));
    bufp->fullBit(oldp+851,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[14]));
    bufp->fullBit(oldp+852,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[15]));
    bufp->fullBit(oldp+853,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[16]));
    bufp->fullBit(oldp+854,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[17]));
    bufp->fullBit(oldp+855,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[18]));
    bufp->fullBit(oldp+856,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[19]));
    bufp->fullBit(oldp+857,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[20]));
    bufp->fullBit(oldp+858,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[21]));
    bufp->fullBit(oldp+859,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[22]));
    bufp->fullBit(oldp+860,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[23]));
    bufp->fullBit(oldp+861,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[24]));
    bufp->fullBit(oldp+862,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[25]));
    bufp->fullBit(oldp+863,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[26]));
    bufp->fullBit(oldp+864,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[27]));
    bufp->fullBit(oldp+865,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[28]));
    bufp->fullBit(oldp+866,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[29]));
    bufp->fullBit(oldp+867,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[30]));
    bufp->fullBit(oldp+868,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_ret_q[31]));
    bufp->fullBit(oldp+869,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[0]));
    bufp->fullBit(oldp+870,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[1]));
    bufp->fullBit(oldp+871,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[2]));
    bufp->fullBit(oldp+872,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[3]));
    bufp->fullBit(oldp+873,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[4]));
    bufp->fullBit(oldp+874,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[5]));
    bufp->fullBit(oldp+875,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[6]));
    bufp->fullBit(oldp+876,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[7]));
    bufp->fullBit(oldp+877,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[8]));
    bufp->fullBit(oldp+878,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[9]));
    bufp->fullBit(oldp+879,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[10]));
    bufp->fullBit(oldp+880,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[11]));
    bufp->fullBit(oldp+881,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[12]));
    bufp->fullBit(oldp+882,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[13]));
    bufp->fullBit(oldp+883,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[14]));
    bufp->fullBit(oldp+884,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[15]));
    bufp->fullBit(oldp+885,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[16]));
    bufp->fullBit(oldp+886,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[17]));
    bufp->fullBit(oldp+887,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[18]));
    bufp->fullBit(oldp+888,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[19]));
    bufp->fullBit(oldp+889,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[20]));
    bufp->fullBit(oldp+890,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[21]));
    bufp->fullBit(oldp+891,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[22]));
    bufp->fullBit(oldp+892,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[23]));
    bufp->fullBit(oldp+893,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[24]));
    bufp->fullBit(oldp+894,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[25]));
    bufp->fullBit(oldp+895,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[26]));
    bufp->fullBit(oldp+896,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[27]));
    bufp->fullBit(oldp+897,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[28]));
    bufp->fullBit(oldp+898,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[29]));
    bufp->fullBit(oldp+899,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[30]));
    bufp->fullBit(oldp+900,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_is_jmp_q[31]));
    bufp->fullCData(oldp+901,((0x1fU & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q))),5);
    bufp->fullIData(oldp+902,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__i2),32);
    bufp->fullSData(oldp+903,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__u_lru__DOT__lfsr_q),16);
    bufp->fullIData(oldp+904,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q),32);
    bufp->fullBit(oldp+905,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_rd_q));
    bufp->fullCData(oldp+906,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_wr_q),4);
    bufp->fullBit(oldp+907,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e1_q));
    bufp->fullBit(oldp+908,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q));
    bufp->fullBit(oldp+909,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_load_q));
    bufp->fullBit(oldp+910,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_xb_q));
    bufp->fullBit(oldp+911,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_xh_q));
    bufp->fullBit(oldp+912,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_ls_q));
    bufp->fullBit(oldp+913,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__pending_lsu_e2_q));
    bufp->fullBit(oldp+914,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__resp_load_w));
    bufp->fullIData(oldp+915,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__resp_addr_w),32);
    bufp->fullBit(oldp+916,((1U & (IData)((vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                           [vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                           >> 1U)))));
    bufp->fullBit(oldp+917,((1U & (IData)((vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                           [vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                           >> 2U)))));
    bufp->fullBit(oldp+918,((1U & (IData)((vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                                           [vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q] 
                                           >> 3U)))));
    bufp->fullBit(oldp+919,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q) 
                             & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__resp_load_w))));
    bufp->fullBit(oldp+920,(((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__resp_load_w)) 
                             & (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_unaligned_e2_q))));
    bufp->fullQData(oldp+921,((((QData)((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_addr_q)) 
                                << 4U) | (QData)((IData)(
                                                         ((((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_ls_q) 
                                                            << 3U) 
                                                           | ((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_xh_q) 
                                                              << 2U)) 
                                                          | (((IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_xb_q) 
                                                              << 1U) 
                                                             | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__mem_load_q))))))),36);
    bufp->fullQData(oldp+923,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q
                              [vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q]),36);
    bufp->fullBit(oldp+925,((2U != (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q))));
    bufp->fullBit(oldp+926,((0U != (IData)(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q))));
    bufp->fullQData(oldp+927,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q[0]),36);
    bufp->fullQData(oldp+929,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__ram_q[1]),36);
    bufp->fullBit(oldp+931,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__rd_ptr_q));
    bufp->fullBit(oldp+932,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__wr_ptr_q));
    bufp->fullCData(oldp+933,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__count_q),2);
    bufp->fullIData(oldp+934,(vlSymsp->TOP__v__u_core.__PVT__u_lsu__DOT__u_lsu_request__DOT__i),32);
    bufp->fullIData(oldp+935,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__result_e3_q),32);
    bufp->fullQData(oldp+936,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__operand_a_e1_q),33);
    bufp->fullQData(oldp+938,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__operand_b_e1_q),33);
    bufp->fullBit(oldp+940,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mulhi_sel_e1_q));
    bufp->fullWData(oldp+941,(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mult_result_w),65);
    bufp->fullIData(oldp+944,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mulhi_sel_e1_q)
                                ? vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mult_result_w[1U]
                                : vlSymsp->TOP__v__u_core.__PVT__u_mul__DOT__mult_result_w[0U])),32);
    bufp->fullCData(oldp+945,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__state_q),4);
    bufp->fullIData(oldp+946,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_addr_m_q),32);
    bufp->fullIData(oldp+947,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_data_m_q),32);
    bufp->fullCData(oldp+948,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_wr_m_q),4);
    bufp->fullBit(oldp+949,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_rd_m_q));
    bufp->fullBit(oldp+950,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_inval_m_q));
    bufp->fullBit(oldp+951,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_writeback_m_q));
    bufp->fullBit(oldp+952,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_flush_m_q));
    bufp->fullIData(oldp+953,((vlSymsp->TOP__v__u_dcache__u_core.__PVT__mem_addr_m_q 
                               >> 0xdU)),19);
    bufp->fullBit(oldp+954,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__replace_way_q));
    bufp->fullBit(oldp+955,((0U == (IData)(vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_len_q))));
    bufp->fullBit(oldp+956,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__flushing_q));
    bufp->fullCData(oldp+957,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag_addr_m_r),8);
    bufp->fullIData(oldp+958,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__tag_data_in_m_r),21);
    bufp->fullSData(oldp+959,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_write_addr_q),11);
    bufp->fullCData(oldp+960,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__flush_addr_q),8);
    bufp->fullBit(oldp+961,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__flush_last_q));
    bufp->fullBit(oldp+962,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_rd_q));
    bufp->fullBit(oldp+963,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_wr0_q));
    bufp->fullCData(oldp+964,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_len_q),8);
    bufp->fullIData(oldp+965,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_addr_q),32);
    bufp->fullCData(oldp+966,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_wr_q),4);
    bufp->fullIData(oldp+967,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__pmem_write_data_q),32);
    bufp->fullWData(oldp+968,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__dbg_state),80);
    bufp->fullIData(oldp+971,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pc_x_q),32);
    bufp->fullCData(oldp+972,(vlSymsp->TOP__v__u_core__u_issue.__PVT__priv_x_q),2);
    bufp->fullBit(oldp+973,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+974,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+975,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                   >> 5U))));
    bufp->fullBit(oldp+976,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                   >> 6U))));
    bufp->fullCData(oldp+977,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_e1_w),5);
    bufp->fullIData(oldp+978,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__pc_e1_q),32);
    bufp->fullIData(oldp+979,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_e1_q),32);
    bufp->fullIData(oldp+980,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__operand_ra_e1_q),32);
    bufp->fullIData(oldp+981,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__operand_rb_e1_q),32);
    bufp->fullBit(oldp+982,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e2_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+983,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e2_q) 
                                   >> 5U))));
    bufp->fullIData(oldp+984,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q),32);
    bufp->fullIData(oldp+985,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__pc_wb_q),32);
    bufp->fullIData(oldp+986,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q),32);
    bufp->fullIData(oldp+987,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__operand_ra_wb_q),32);
    bufp->fullIData(oldp+988,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__operand_rb_wb_q),32);
    bufp->fullCData(oldp+989,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__exception_wb_q),6);
    bufp->fullBit(oldp+990,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+991,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+992,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                   >> 5U))));
    bufp->fullBit(oldp+993,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                   >> 6U))));
    bufp->fullCData(oldp+994,(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_e1_w),5);
    bufp->fullIData(oldp+995,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__pc_e1_q),32);
    bufp->fullIData(oldp+996,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_e1_q),32);
    bufp->fullIData(oldp+997,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__operand_ra_e1_q),32);
    bufp->fullIData(oldp+998,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__operand_rb_e1_q),32);
    bufp->fullBit(oldp+999,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+1000,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q) 
                                    >> 5U))));
    bufp->fullIData(oldp+1001,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q),32);
    bufp->fullIData(oldp+1002,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__pc_wb_q),32);
    bufp->fullIData(oldp+1003,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q),32);
    bufp->fullIData(oldp+1004,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__operand_ra_wb_q),32);
    bufp->fullIData(oldp+1005,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__operand_rb_wb_q),32);
    bufp->fullCData(oldp+1006,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__exception_wb_q),6);
    bufp->fullBit(oldp+1007,(vlSymsp->TOP__v__u_core__u_issue.__PVT__div_pending_q));
    bufp->fullBit(oldp+1008,(vlSymsp->TOP__v__u_core__u_issue.__PVT__csr_pending_q));
    bufp->fullBit(oldp+1009,(((IData)(vlSymsp->TOP__v__u_core__u_issue.__VdfgRegularize_h47f1efe9_0_2) 
                              | ((IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_lsu_w) 
                                 | (IData)(vlSymsp->TOP__v__u_core.__PVT__fetch1_instr_mul_w)))));
    bufp->fullCData(oldp+1010,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1011,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+1012,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1013,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                         >> 0x14U))),5);
    bufp->fullBit(oldp+1014,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__valid_e1_q));
    bufp->fullSData(oldp+1015,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q),10);
    bufp->fullIData(oldp+1016,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__npc_e1_q),32);
    bufp->fullCData(oldp+1017,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__exception_e1_q),6);
    bufp->fullBit(oldp+1018,((1U & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q))));
    bufp->fullBit(oldp+1019,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1020,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e1_q) 
                                    >> 4U))));
    bufp->fullBit(oldp+1021,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__valid_e2_q));
    bufp->fullSData(oldp+1022,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_e2_q),10);
    bufp->fullBit(oldp+1023,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wr_e2_q));
    bufp->fullIData(oldp+1024,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_e2_q),32);
    bufp->fullIData(oldp+1025,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_e2_q),32);
    bufp->fullIData(oldp+1026,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__pc_e2_q),32);
    bufp->fullIData(oldp+1027,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__npc_e2_q),32);
    bufp->fullIData(oldp+1028,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_e2_q),32);
    bufp->fullIData(oldp+1029,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__operand_ra_e2_q),32);
    bufp->fullIData(oldp+1030,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__operand_rb_e2_q),32);
    bufp->fullCData(oldp+1031,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__exception_e2_q),6);
    bufp->fullBit(oldp+1032,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__load_store_e2_w));
    bufp->fullBit(oldp+1033,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__squash_e1_e2_q));
    bufp->fullBit(oldp+1034,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__valid_wb_q));
    bufp->fullSData(oldp+1035,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__ctrl_wb_q),10);
    bufp->fullIData(oldp+1036,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__npc_wb_q),32);
    bufp->fullBit(oldp+1037,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__csr_wr_wb_q));
    bufp->fullSData(oldp+1038,((vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                >> 0x14U)),12);
    bufp->fullIData(oldp+1039,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__csr_wdata_wb_q),32);
    bufp->fullBit(oldp+1040,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__valid_e1_q));
    bufp->fullSData(oldp+1041,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q),10);
    bufp->fullIData(oldp+1042,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__npc_e1_q),32);
    bufp->fullCData(oldp+1043,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__exception_e1_q),6);
    bufp->fullBit(oldp+1044,((1U & (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q))));
    bufp->fullBit(oldp+1045,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                    >> 3U))));
    bufp->fullBit(oldp+1046,((1U & ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e1_q) 
                                    >> 4U))));
    bufp->fullBit(oldp+1047,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__valid_e2_q));
    bufp->fullSData(oldp+1048,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_e2_q),10);
    bufp->fullBit(oldp+1049,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__csr_wr_e2_q));
    bufp->fullIData(oldp+1050,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__csr_wdata_e2_q),32);
    bufp->fullIData(oldp+1051,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_e2_q),32);
    bufp->fullIData(oldp+1052,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__pc_e2_q),32);
    bufp->fullIData(oldp+1053,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__npc_e2_q),32);
    bufp->fullIData(oldp+1054,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_e2_q),32);
    bufp->fullIData(oldp+1055,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__operand_ra_e2_q),32);
    bufp->fullIData(oldp+1056,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__operand_rb_e2_q),32);
    bufp->fullCData(oldp+1057,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__exception_e2_q),6);
    bufp->fullBit(oldp+1058,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__load_store_e2_w));
    bufp->fullBit(oldp+1059,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__squash_e1_e2_q));
    bufp->fullBit(oldp+1060,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__valid_wb_q));
    bufp->fullSData(oldp+1061,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__ctrl_wb_q),10);
    bufp->fullIData(oldp+1062,(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__npc_wb_q),32);
    bufp->fullCData(oldp+1063,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_q),2);
    bufp->fullBit(oldp+1064,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__branch_r));
    bufp->fullIData(oldp+1065,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__branch_target_r),32);
    bufp->fullIData(oldp+1066,(vlSymsp->TOP__v__u_core__u_csr.__PVT__interrupt_w),32);
    bufp->fullIData(oldp+1067,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_q),32);
    bufp->fullBit(oldp+1068,(vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_q));
    bufp->fullIData(oldp+1069,(vlSymsp->TOP__v__u_core__u_csr.__PVT__branch_target_q),32);
    bufp->fullCData(oldp+1070,(vlSymsp->TOP__v__u_core__u_csr.__PVT__init_done),3);
    bufp->fullSData(oldp+1071,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_waddr_i),12);
    bufp->fullIData(oldp+1072,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mepc_q),32);
    bufp->fullIData(oldp+1073,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcause_q),32);
    bufp->fullIData(oldp+1074,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtvec_q),32);
    bufp->fullIData(oldp+1075,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_q),32);
    bufp->fullIData(oldp+1076,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mie_q),32);
    bufp->fullIData(oldp+1077,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_q),32);
    bufp->fullIData(oldp+1078,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_h_q),32);
    bufp->fullIData(oldp+1079,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mscratch_q),32);
    bufp->fullIData(oldp+1080,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtval_q),32);
    bufp->fullIData(oldp+1081,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtimecmp_q),32);
    bufp->fullBit(oldp+1082,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtime_ie_q));
    bufp->fullIData(oldp+1083,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_medeleg_q),32);
    bufp->fullIData(oldp+1084,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mideleg_q),32);
    bufp->fullIData(oldp+1085,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sepc_q),32);
    bufp->fullIData(oldp+1086,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_stvec_q),32);
    bufp->fullIData(oldp+1087,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_scause_q),32);
    bufp->fullIData(oldp+1088,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_stval_q),32);
    bufp->fullIData(oldp+1089,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sscratch_q),32);
    bufp->fullIData(oldp+1090,((vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mie_q 
                                & vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_q)),32);
    bufp->fullCData(oldp+1091,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__irq_priv_q),2);
    bufp->fullBit(oldp+1092,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_upd_q));
    bufp->fullIData(oldp+1093,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mepc_r),32);
    bufp->fullIData(oldp+1094,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcause_r),32);
    bufp->fullIData(oldp+1095,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtval_r),32);
    bufp->fullIData(oldp+1096,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sr_r),32);
    bufp->fullIData(oldp+1097,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtvec_r),32);
    bufp->fullIData(oldp+1098,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mie_r),32);
    bufp->fullCData(oldp+1099,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mpriv_r),2);
    bufp->fullIData(oldp+1100,(((IData)(1U) + vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mcycle_q)),32);
    bufp->fullIData(oldp+1101,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mscratch_r),32);
    bufp->fullIData(oldp+1102,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtimecmp_r),32);
    bufp->fullBit(oldp+1103,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mtime_ie_r));
    bufp->fullIData(oldp+1104,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_medeleg_r),32);
    bufp->fullIData(oldp+1105,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mideleg_r),32);
    bufp->fullIData(oldp+1106,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_mip_next_q),32);
    bufp->fullIData(oldp+1107,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sepc_r),32);
    bufp->fullIData(oldp+1108,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_stvec_r),32);
    bufp->fullIData(oldp+1109,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_scause_r),32);
    bufp->fullIData(oldp+1110,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_stval_r),32);
    bufp->fullIData(oldp+1111,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_satp_r),32);
    bufp->fullIData(oldp+1112,(vlSymsp->TOP__v__u_core__u_csr__u_csrfile.__PVT__csr_sscratch_r),32);
    bufp->fullBit(oldp+1113,((0x10U == (0x30U & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))));
    bufp->fullCData(oldp+1114,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                         >> 7U))),5);
    bufp->fullCData(oldp+1115,((0x1fU & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                         >> 7U))),5);
    bufp->fullIData(oldp+1116,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__result_r),32);
    bufp->fullSData(oldp+1117,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_fill_r),16);
    bufp->fullIData(oldp+1118,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_1_r),32);
    bufp->fullIData(oldp+1119,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_2_r),32);
    bufp->fullIData(oldp+1120,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_4_r),32);
    bufp->fullIData(oldp+1121,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__shift_right_8_r),32);
    bufp->fullIData(oldp+1122,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_1_r),32);
    bufp->fullIData(oldp+1123,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_2_r),32);
    bufp->fullIData(oldp+1124,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_4_r),32);
    bufp->fullIData(oldp+1125,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__shift_left_8_r),32);
    bufp->fullIData(oldp+1126,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__result_r),32);
    bufp->fullSData(oldp+1127,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_fill_r),16);
    bufp->fullIData(oldp+1128,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_1_r),32);
    bufp->fullIData(oldp+1129,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_2_r),32);
    bufp->fullIData(oldp+1130,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_4_r),32);
    bufp->fullIData(oldp+1131,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__shift_right_8_r),32);
    bufp->fullIData(oldp+1132,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_1_r),32);
    bufp->fullIData(oldp+1133,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_2_r),32);
    bufp->fullIData(oldp+1134,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_4_r),32);
    bufp->fullIData(oldp+1135,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__shift_left_8_r),32);
    bufp->fullBit(oldp+1136,(vlSymsp->TOP__v.__PVT__icache_valid_w));
    bufp->fullQData(oldp+1137,(vlSymsp->TOP__v__u_icache.__PVT__inst_r),64);
    bufp->fullBit(oldp+1139,(vlSymsp->TOP__v.__PVT__icache_rd_w));
    bufp->fullIData(oldp+1140,(vlSymsp->TOP__v__u_dcache.__PVT__pmem_cache_write_data_w),32);
    bufp->fullBit(oldp+1141,(vlSymsp->TOP__v__u_icache.__PVT__tag0_hit_w));
    bufp->fullBit(oldp+1142,(vlSymsp->TOP__v__u_icache.__PVT__tag1_hit_w));
    bufp->fullBit(oldp+1143,(vlSymsp->TOP__v__u_icache.__PVT__tag_hit_any_w));
    bufp->fullQData(oldp+1144,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_instr_w),64);
    bufp->fullBit(oldp+1146,(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__icache_busy_w));
    bufp->fullIData(oldp+1147,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__evict_data_r),32);
    bufp->fullIData(oldp+1148,(vlSymsp->TOP__v__u_dcache__u_core.__PVT__data_r),32);
    bufp->fullIData(oldp+1149,(((IData)(vlSymsp->TOP__v__u_dcache.__PVT__pmem_select_w)
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
    bufp->fullWData(oldp+1150,(__Vtemp_2),77);
    bufp->fullCData(oldp+1153,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_func_r),4);
    bufp->fullIData(oldp+1154,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_S),32);
    bufp->fullBit(oldp+1155,(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__unused));
    bufp->fullCData(oldp+1156,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_a_r 
                                         + (vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                            + (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_Ci))))),8);
    bufp->fullCData(oldp+1157,((0xffU & ((vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_a_r 
                                          >> 8U) + 
                                         ((vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                           >> 8U) + (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__unused))))),8);
    bufp->fullCData(oldp+1158,((0xffU & ((vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_a_r 
                                          >> 0x10U) 
                                         + ((vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                             >> 0x10U) 
                                            + (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__unused))))),8);
    bufp->fullCData(oldp+1159,((0xffU & ((vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__alu_input_a_r 
                                          >> 0x18U) 
                                         + ((vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__addsub_B 
                                             >> 0x18U) 
                                            + (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec0__DOT__u_alu__DOT__unused))))),8);
    bufp->fullCData(oldp+1160,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_func_r),4);
    bufp->fullIData(oldp+1161,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_S),32);
    bufp->fullBit(oldp+1162,(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__unused));
    bufp->fullCData(oldp+1163,((0xffU & (vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_a_r 
                                         + (vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                            + (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_Ci))))),8);
    bufp->fullCData(oldp+1164,((0xffU & ((vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_a_r 
                                          >> 8U) + 
                                         ((vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                           >> 8U) + (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__unused))))),8);
    bufp->fullCData(oldp+1165,((0xffU & ((vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_a_r 
                                          >> 0x10U) 
                                         + ((vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                             >> 0x10U) 
                                            + (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__unused))))),8);
    bufp->fullCData(oldp+1166,((0xffU & ((vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__alu_input_a_r 
                                          >> 0x18U) 
                                         + ((vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__addsub_B 
                                             >> 0x18U) 
                                            + (IData)(vlSymsp->TOP__v__u_core.__PVT__u_exec1__DOT__u_alu__DOT__unused))))),8);
    bufp->fullQData(oldp+1167,((((IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_fault_fetch_w) 
                                 | (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_fault_page_w))
                                 ? 0ULL : vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__fetch_instr_w)),64);
    bufp->fullBit(oldp+1169,(((IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__btb_valid_r) 
                              & ((~ (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_npc__DOT__BRANCH_PREDICTION__DOT__pred_taken_w)) 
                                 & (~ (IData)(vlSymsp->TOP__v__u_core.__PVT__u_frontend__DOT__u_fetch__DOT__stall_w))))));
    bufp->fullQData(oldp+1170,(((0x2002033U == (0xfe00707fU 
                                                & vlSymsp->TOP__v__u_core.__PVT__mul_opcode_opcode_w))
                                 ? (QData)((IData)(vlSymsp->TOP__v__u_core.__PVT__mul_opcode_rb_operand_w))
                                 : ((0x2001033U == 
                                     (0xfe00707fU & vlSymsp->TOP__v__u_core.__PVT__mul_opcode_opcode_w))
                                     ? (((QData)((IData)(
                                                         (vlSymsp->TOP__v__u_core.__PVT__mul_opcode_rb_operand_w 
                                                          >> 0x1fU))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__v__u_core.__PVT__mul_opcode_rb_operand_w)))
                                     : (QData)((IData)(vlSymsp->TOP__v__u_core.__PVT__mul_opcode_rb_operand_w))))),33);
    bufp->fullQData(oldp+1172,(((0x2002033U == (0xfe00707fU 
                                                & vlSymsp->TOP__v__u_core.__PVT__mul_opcode_opcode_w))
                                 ? vlSymsp->TOP__v__u_core.u_mul__DOT____VdfgRegularize_hce0f6733_0_3
                                 : ((0x2001033U == 
                                     (0xfe00707fU & vlSymsp->TOP__v__u_core.__PVT__mul_opcode_opcode_w))
                                     ? vlSymsp->TOP__v__u_core.u_mul__DOT____VdfgRegularize_hce0f6733_0_3
                                     : (QData)((IData)(vlSymsp->TOP__v__u_core.__PVT__mul_opcode_ra_operand_w))))),33);
}
