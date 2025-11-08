// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_biriscv_trace_sim.h"

VL_INLINE_OPT void Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe0_dec0_verif__0(Vriscv_top_biriscv_trace_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe0_dec0_verif__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
    vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rd[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_rd[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rd[2U] = 0U;
    if (vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_valid_wb_w) {
        if (((((((((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                   | (0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                  | (0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                 | (0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                | (0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
               | (0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
              | (0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
             | (0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) {
            if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x616e6469U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x61646469U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x736c7469U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c746975U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x73U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6f7269U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x786f7269U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))
                      ? 0x736c6c69U : 0x73726c69U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x40005013U == (0xfc00707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                          | (0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                         | (0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                        | (0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                      | (0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                     | (0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                    | (0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) {
            if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73726169U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c7569U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x75697063U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x61U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x616464U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x737562U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x736c74U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))
                      ? 0x736c7475U : 0x786f72U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x6033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                      | (0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                     | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                    | (0x63U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) {
            if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6f72U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x616e64U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x736c6cU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73726cU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x737261U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6a616cU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))
                      ? 0x6a616c72U : 0x626571U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x1063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                          | (0x4063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                         | (0x5063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                        | (0x6063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                       | (0x7063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                      | (3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                     | (0x1003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                    | (0x2003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) {
            if ((0x1063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626e65U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x4063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626c74U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626765U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626c7475U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x7063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x62676575U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c62U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x1003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))
                      ? 0x6c68U : 0x6c77U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                          | (0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                         | (0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                        | (0x23U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                       | (0x1023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                      | (0x2023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                     | (0x73U == vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                    | (0x100073U == vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
            if ((0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c6275U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c6875U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c7775U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x23U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7362U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x1023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7368U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7377U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x73U == vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x63616c6cU;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x65U;
                } else {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7265616bU;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6562U;
                }
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x200073U == (0xcfffffffU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                          | (0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                         | (0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                        | (0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                       | (0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                      | (0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                     | (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                    | (0x2000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) {
            if ((0x200073U == (0xcfffffffU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x65726574U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73727277U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73727273U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73727263U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72727769U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72727369U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72726369U;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6373U;
                } else {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6d756cU;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                }
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x2001033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                          | (0x2002033U == (0xfe00707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                         | (0x2003033U == (0xfe00707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                        | (0x2004033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                       | (0x2005033U == (0xfe00707fU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                      | (0x2006033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                    | (0x100fU == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) {
            if ((0x2001033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6d756c68U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2002033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c687375U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6d75U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2003033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x756c6875U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6dU;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2004033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x646976U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2005033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x64697675U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2006033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72656dU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x2007033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72656d75U;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                } else {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x63652e69U;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x66656eU;
                }
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        }
        vlSelfRef.__PVT__dbg_inst_ra[0U] = vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb.__VdfgExtracted_h4ff6f0a0__0[0U];
        vlSelfRef.__PVT__dbg_inst_ra[1U] = vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb.__VdfgExtracted_h4ff6f0a0__0[1U];
        vlSelfRef.__PVT__dbg_inst_ra[2U] = vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb.__VdfgExtracted_h4ff6f0a0__0[2U];
        vlSelfRef.__PVT__dbg_inst_rb[0U] = vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb.__VdfgExtracted_hf1ea1c82__0[0U];
        vlSelfRef.__PVT__dbg_inst_rb[1U] = vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb.__VdfgExtracted_hf1ea1c82__0[1U];
        vlSelfRef.__PVT__dbg_inst_rb[2U] = vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb.__VdfgExtracted_hf1ea1c82__0[2U];
        vlSelfRef.__PVT__dbg_inst_rd[0U] = vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb.__VdfgExtracted_h26d6b5e8__0[0U];
        vlSelfRef.__PVT__dbg_inst_rd[1U] = vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb.__VdfgExtracted_h26d6b5e8__0[1U];
        vlSelfRef.__PVT__dbg_inst_rd[2U] = vlSymsp->TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb.__VdfgExtracted_h26d6b5e8__0[2U];
        if ((((((((((((((((((((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                              || (0x7013U == (0x707fU 
                                              & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                             || (0x2013U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                            || (0x3013U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                           || (0x6013U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                          || (0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                         || (0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                        || (0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                       || (0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                      || (0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                     || (0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                    || (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                   | (((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                       || (0x5013U == (0xfc00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                      || (0x40005013U == (0xfc00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) 
                  | (0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                 | (0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                | (0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
               | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
              | ((((((3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                     || (0x1003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                    || (0x2003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                   || (0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                  || (0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                 || (0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) 
             | (((0x23U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                 || (0x1023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                || (0x2023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))))) {
            if ((1U & (~ ((((((((((((0x13U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                                    || (0x7013U == 
                                        (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                                   || (0x2013U == (0x707fU 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                                  || (0x3013U == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                                 || (0x6013U == (0x707fU 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                                || (0x4013U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                               || (0x1073U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                              || (0x2073U == (0x707fU 
                                              & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                             || (0x3073U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                            || (0x5073U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                           || (0x6073U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                          || (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))))) {
                if ((1U & (~ (((0x1013U == (0xfc00707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                               || (0x5013U == (0xfc00707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                              || (0x40005013U == (0xfc00707fU 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))))) {
                    if ((0x37U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                        if ((0x17U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                            if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                                if ((1U == (0x1fU & 
                                            (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                             >> 7U)))) {
                                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
                                }
                            } else if ((0x67U == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                                if ((IData)(((0x8000U 
                                              == (0xf8000U 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                                             & (0U 
                                                == 
                                                (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U)))))) {
                                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x726574U;
                                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
                                } else if ((1U == (0x1fU 
                                                   & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                      >> 7U)))) {
                                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x20285229U;
                                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
                                }
                            }
                            if ((0x6fU != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                                if ((0x67U != (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                                    if ((1U & (~ ((
                                                   ((((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                                                      || (0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                                                     || (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                                                    || (0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                                                   || (0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                                                  || (0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))))) {
                                        vlSelfRef.__PVT__dbg_inst_rd[0U] = 0x2dU;
                                        vlSelfRef.__PVT__dbg_inst_rd[1U] = 0U;
                                        vlSelfRef.__PVT__dbg_inst_rd[2U] = 0U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                        vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                        vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x7063U;
                        vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                        vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
                    }
                }
            }
            if (((((((((((((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                           || (0x7013U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                          || (0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                         || (0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                        || (0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                       || (0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                      || (0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                     || (0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                    || (0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                   || (0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                  || (0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                 || (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U));
            } else if ((((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                         || (0x5013U == (0xfc00707fU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                        || (0x40005013U == (0xfc00707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (0x1fU 
                                                 & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U));
            } else if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (0xfffff000U 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q);
            } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (0xfffff000U 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q);
            } else if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__pc_wb_q 
                                                 + 
                                                 (((- (IData)(
                                                              (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | (((0xff000U 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q) 
                                                      | (0x800U 
                                                         & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                            >> 9U))) 
                                                     | ((0x7e0U 
                                                         & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                              >> 0x14U))))));
            } else if ((0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U));
            } else if (((((((3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                            || (0x1003U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                           || (0x2003U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                          || (0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                         || (0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                        || (0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U));
            } else {
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0xfe0U 
                                                     & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                          >> 7U))));
            }
        }
    }
}

VL_INLINE_OPT void Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe0_dec1_verif__0(Vriscv_top_biriscv_trace_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe0_dec1_verif__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
    vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rd[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_rd[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rd[2U] = 0U;
    if (vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_valid_wb_w) {
        if (((((((((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                   | (0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                  | (0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                 | (0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                | (0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
               | (0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
              | (0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
             | (0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) {
            if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x616e6469U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x61646469U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x736c7469U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c746975U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x73U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6f7269U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x786f7269U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))
                      ? 0x736c6c69U : 0x73726c69U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x40005013U == (0xfc00707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                          | (0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                         | (0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                        | (0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                      | (0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                     | (0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                    | (0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) {
            if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73726169U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c7569U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x75697063U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x61U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x616464U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x737562U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x736c74U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))
                      ? 0x736c7475U : 0x786f72U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x6033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                      | (0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                     | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                    | (0x63U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) {
            if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6f72U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x616e64U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x736c6cU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73726cU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x737261U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6a616cU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))
                      ? 0x6a616c72U : 0x626571U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x1063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                          | (0x4063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                         | (0x5063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                        | (0x6063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                       | (0x7063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                      | (3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                     | (0x1003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                    | (0x2003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) {
            if ((0x1063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626e65U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x4063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626c74U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626765U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626c7475U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x7063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x62676575U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c62U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x1003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))
                      ? 0x6c68U : 0x6c77U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                          | (0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                         | (0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                        | (0x23U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                       | (0x1023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                      | (0x2023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                     | (0x73U == vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                    | (0x100073U == vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
            if ((0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c6275U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c6875U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c7775U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x23U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7362U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x1023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7368U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7377U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x73U == vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x63616c6cU;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x65U;
                } else {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7265616bU;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6562U;
                }
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x200073U == (0xcfffffffU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                          | (0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                         | (0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                        | (0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                       | (0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                      | (0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                     | (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                    | (0x2000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) {
            if ((0x200073U == (0xcfffffffU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x65726574U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73727277U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73727273U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73727263U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72727769U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72727369U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72726369U;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6373U;
                } else {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6d756cU;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                }
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x2001033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                          | (0x2002033U == (0xfe00707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                         | (0x2003033U == (0xfe00707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                        | (0x2004033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                       | (0x2005033U == (0xfe00707fU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                      | (0x2006033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                    | (0x100fU == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) {
            if ((0x2001033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6d756c68U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2002033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c687375U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6d75U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2003033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x756c6875U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6dU;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2004033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x646976U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2005033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x64697675U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2006033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72656dU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x2007033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72656d75U;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                } else {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x63652e69U;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x66656eU;
                }
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        }
        vlSelfRef.__PVT__dbg_inst_ra[0U] = vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[0U];
        vlSelfRef.__PVT__dbg_inst_ra[1U] = vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[1U];
        vlSelfRef.__PVT__dbg_inst_ra[2U] = vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[2U];
        vlSelfRef.__PVT__dbg_inst_rb[0U] = vlSelfRef.__VdfgExtracted_hf1ea1c82__0[0U];
        vlSelfRef.__PVT__dbg_inst_rb[1U] = vlSelfRef.__VdfgExtracted_hf1ea1c82__0[1U];
        vlSelfRef.__PVT__dbg_inst_rb[2U] = vlSelfRef.__VdfgExtracted_hf1ea1c82__0[2U];
        vlSelfRef.__PVT__dbg_inst_rd[0U] = vlSelfRef.__VdfgExtracted_h26d6b5e8__0[0U];
        vlSelfRef.__PVT__dbg_inst_rd[1U] = vlSelfRef.__VdfgExtracted_h26d6b5e8__0[1U];
        vlSelfRef.__PVT__dbg_inst_rd[2U] = vlSelfRef.__VdfgExtracted_h26d6b5e8__0[2U];
        if ((((((((((((((((((((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                              || (0x7013U == (0x707fU 
                                              & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                             || (0x2013U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                            || (0x3013U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                           || (0x6013U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                          || (0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                         || (0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                        || (0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                       || (0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                      || (0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                     || (0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                    || (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                   | (((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                       || (0x5013U == (0xfc00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                      || (0x40005013U == (0xfc00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) 
                  | (0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                 | (0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                | (0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
               | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
              | ((((((3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                     || (0x1003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                    || (0x2003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                   || (0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                  || (0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                 || (0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) 
             | (((0x23U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                 || (0x1023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                || (0x2023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))))) {
            if ((1U & (~ ((((((((((((0x13U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                                    || (0x7013U == 
                                        (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                                   || (0x2013U == (0x707fU 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                                  || (0x3013U == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                                 || (0x6013U == (0x707fU 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                                || (0x4013U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                               || (0x1073U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                              || (0x2073U == (0x707fU 
                                              & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                             || (0x3073U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                            || (0x5073U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                           || (0x6073U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                          || (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))))) {
                if ((1U & (~ (((0x1013U == (0xfc00707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                               || (0x5013U == (0xfc00707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                              || (0x40005013U == (0xfc00707fU 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))))) {
                    if ((0x37U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                        if ((0x17U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                            if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                                if ((1U == (0x1fU & 
                                            (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                             >> 7U)))) {
                                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
                                }
                            } else if ((0x67U == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                                if ((IData)(((0x8000U 
                                              == (0xf8000U 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                                             & (0U 
                                                == 
                                                (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U)))))) {
                                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x726574U;
                                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
                                } else if ((1U == (0x1fU 
                                                   & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                      >> 7U)))) {
                                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x20285229U;
                                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
                                }
                            }
                            if ((0x6fU != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                                if ((0x67U != (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                                    if ((1U & (~ ((
                                                   ((((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                                                      || (0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                                                     || (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                                                    || (0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                                                   || (0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                                                  || (0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))))) {
                                        vlSelfRef.__PVT__dbg_inst_rd[0U] = 0x2dU;
                                        vlSelfRef.__PVT__dbg_inst_rd[1U] = 0U;
                                        vlSelfRef.__PVT__dbg_inst_rd[2U] = 0U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                        vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                        vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x7063U;
                        vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                        vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
                    }
                }
            }
            if (((((((((((((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                           || (0x7013U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                          || (0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                         || (0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                        || (0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                       || (0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                      || (0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                     || (0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                    || (0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                   || (0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                  || (0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                 || (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U));
            } else if ((((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                         || (0x5013U == (0xfc00707fU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                        || (0x40005013U == (0xfc00707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (0x1fU 
                                                 & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U));
            } else if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (0xfffff000U 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q);
            } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (0xfffff000U 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q);
            } else if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__pc_wb_q 
                                                 + 
                                                 (((- (IData)(
                                                              (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | (((0xff000U 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q) 
                                                      | (0x800U 
                                                         & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                            >> 9U))) 
                                                     | ((0x7e0U 
                                                         & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                              >> 0x14U))))));
            } else if ((0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U));
            } else if (((((((3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                            || (0x1003U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                           || (0x2003U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                          || (0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                         || (0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                        || (0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U));
            } else {
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0xfe0U 
                                                     & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                          >> 7U))));
            }
        }
    }
}

VL_INLINE_OPT void Vriscv_top_biriscv_trace_sim___nba_sequent__TOP__v__u_core__u_issue__u_pipe0_dec1_verif__0(Vriscv_top_biriscv_trace_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_top_biriscv_trace_sim___nba_sequent__TOP__v__u_core__u_issue__u_pipe0_dec1_verif__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_139;
    VlWide<3>/*95:0*/ __Vtemp_185;
    VlWide<3>/*95:0*/ __Vtemp_232;
    VlWide<3>/*95:0*/ __Vtemp_278;
    // Body
    if ((0x40000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
        if ((0x20000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
            if ((0x10000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
                if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
                    __Vtemp_46[0U] = 0x7436U;
                    __Vtemp_92[0U] = 0x6135U;
                } else {
                    __Vtemp_46[0U] = 0x7435U;
                    __Vtemp_92[0U] = 0x6134U;
                }
            } else if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
                __Vtemp_46[0U] = 0x7434U;
                __Vtemp_92[0U] = 0x6133U;
            } else {
                __Vtemp_46[0U] = 0x7433U;
                __Vtemp_92[0U] = 0x6132U;
            }
        } else if ((0x10000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
            if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
                __Vtemp_46[0U] = 0x733131U;
                __Vtemp_92[0U] = 0x6131U;
            } else {
                __Vtemp_46[0U] = 0x733130U;
                __Vtemp_92[0U] = 0x6130U;
            }
        } else if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
            __Vtemp_46[0U] = 0x7339U;
            __Vtemp_92[0U] = 0x7331U;
        } else {
            __Vtemp_46[0U] = 0x7338U;
            __Vtemp_92[0U] = 0x7330U;
        }
    } else if ((0x20000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
        if ((0x10000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
            if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
                __Vtemp_46[0U] = 0x7337U;
                __Vtemp_92[0U] = 0x7432U;
            } else {
                __Vtemp_46[0U] = 0x7336U;
                __Vtemp_92[0U] = 0x7431U;
            }
        } else if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
            __Vtemp_46[0U] = 0x7335U;
            __Vtemp_92[0U] = 0x7430U;
        } else {
            __Vtemp_46[0U] = 0x7334U;
            __Vtemp_92[0U] = 0x7470U;
        }
    } else if ((0x10000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
        if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
            __Vtemp_46[0U] = 0x7333U;
            __Vtemp_92[0U] = 0x6770U;
        } else {
            __Vtemp_46[0U] = 0x7332U;
            __Vtemp_92[0U] = 0x7370U;
        }
    } else if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
        __Vtemp_46[0U] = 0x6137U;
        __Vtemp_92[0U] = 0x7261U;
    } else {
        __Vtemp_46[0U] = 0x6136U;
        __Vtemp_92[0U] = 0x7a65726fU;
    }
    vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[0U] = ((0x80000U 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)
                                                   ? 
                                                  __Vtemp_46[0U]
                                                   : 
                                                  __Vtemp_92[0U]);
    vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[1U] = 0U;
    vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[2U] = 0U;
    if ((0x800000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
        if ((0x400000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
            if ((0x200000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
                if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
                    __Vtemp_139[0U] = 0x7436U;
                    __Vtemp_185[0U] = 0x6135U;
                } else {
                    __Vtemp_139[0U] = 0x7435U;
                    __Vtemp_185[0U] = 0x6134U;
                }
            } else if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
                __Vtemp_139[0U] = 0x7434U;
                __Vtemp_185[0U] = 0x6133U;
            } else {
                __Vtemp_139[0U] = 0x7433U;
                __Vtemp_185[0U] = 0x6132U;
            }
        } else if ((0x200000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
            if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
                __Vtemp_139[0U] = 0x733131U;
                __Vtemp_185[0U] = 0x6131U;
            } else {
                __Vtemp_139[0U] = 0x733130U;
                __Vtemp_185[0U] = 0x6130U;
            }
        } else if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
            __Vtemp_139[0U] = 0x7339U;
            __Vtemp_185[0U] = 0x7331U;
        } else {
            __Vtemp_139[0U] = 0x7338U;
            __Vtemp_185[0U] = 0x7330U;
        }
    } else if ((0x400000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
        if ((0x200000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
            if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
                __Vtemp_139[0U] = 0x7337U;
                __Vtemp_185[0U] = 0x7432U;
            } else {
                __Vtemp_139[0U] = 0x7336U;
                __Vtemp_185[0U] = 0x7431U;
            }
        } else if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
            __Vtemp_139[0U] = 0x7335U;
            __Vtemp_185[0U] = 0x7430U;
        } else {
            __Vtemp_139[0U] = 0x7334U;
            __Vtemp_185[0U] = 0x7470U;
        }
    } else if ((0x200000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
        if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
            __Vtemp_139[0U] = 0x7333U;
            __Vtemp_185[0U] = 0x6770U;
        } else {
            __Vtemp_139[0U] = 0x7332U;
            __Vtemp_185[0U] = 0x7370U;
        }
    } else if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
        __Vtemp_139[0U] = 0x6137U;
        __Vtemp_185[0U] = 0x7261U;
    } else {
        __Vtemp_139[0U] = 0x6136U;
        __Vtemp_185[0U] = 0x7a65726fU;
    }
    vlSelfRef.__VdfgExtracted_hf1ea1c82__0[0U] = ((0x1000000U 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)
                                                   ? 
                                                  __Vtemp_139[0U]
                                                   : 
                                                  __Vtemp_185[0U]);
    vlSelfRef.__VdfgExtracted_hf1ea1c82__0[1U] = 0U;
    vlSelfRef.__VdfgExtracted_hf1ea1c82__0[2U] = 0U;
    if ((0x400U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
        if ((0x200U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
            if ((0x100U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
                if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
                    __Vtemp_232[0U] = 0x7436U;
                    __Vtemp_278[0U] = 0x6135U;
                } else {
                    __Vtemp_232[0U] = 0x7435U;
                    __Vtemp_278[0U] = 0x6134U;
                }
            } else if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
                __Vtemp_232[0U] = 0x7434U;
                __Vtemp_278[0U] = 0x6133U;
            } else {
                __Vtemp_232[0U] = 0x7433U;
                __Vtemp_278[0U] = 0x6132U;
            }
        } else if ((0x100U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
            if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
                __Vtemp_232[0U] = 0x733131U;
                __Vtemp_278[0U] = 0x6131U;
            } else {
                __Vtemp_232[0U] = 0x733130U;
                __Vtemp_278[0U] = 0x6130U;
            }
        } else if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
            __Vtemp_232[0U] = 0x7339U;
            __Vtemp_278[0U] = 0x7331U;
        } else {
            __Vtemp_232[0U] = 0x7338U;
            __Vtemp_278[0U] = 0x7330U;
        }
    } else if ((0x200U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
        if ((0x100U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
            if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
                __Vtemp_232[0U] = 0x7337U;
                __Vtemp_278[0U] = 0x7432U;
            } else {
                __Vtemp_232[0U] = 0x7336U;
                __Vtemp_278[0U] = 0x7431U;
            }
        } else if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
            __Vtemp_232[0U] = 0x7335U;
            __Vtemp_278[0U] = 0x7430U;
        } else {
            __Vtemp_232[0U] = 0x7334U;
            __Vtemp_278[0U] = 0x7470U;
        }
    } else if ((0x100U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
        if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
            __Vtemp_232[0U] = 0x7333U;
            __Vtemp_278[0U] = 0x6770U;
        } else {
            __Vtemp_232[0U] = 0x7332U;
            __Vtemp_278[0U] = 0x7370U;
        }
    } else if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
        __Vtemp_232[0U] = 0x6137U;
        __Vtemp_278[0U] = 0x7261U;
    } else {
        __Vtemp_232[0U] = 0x6136U;
        __Vtemp_278[0U] = 0x7a65726fU;
    }
    vlSelfRef.__VdfgExtracted_h26d6b5e8__0[0U] = ((0x800U 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)
                                                   ? 
                                                  __Vtemp_232[0U]
                                                   : 
                                                  __Vtemp_278[0U]);
    vlSelfRef.__VdfgExtracted_h26d6b5e8__0[1U] = 0U;
    vlSelfRef.__VdfgExtracted_h26d6b5e8__0[2U] = 0U;
}

VL_INLINE_OPT void Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d__0(Vriscv_top_biriscv_trace_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_139;
    VlWide<3>/*95:0*/ __Vtemp_185;
    VlWide<3>/*95:0*/ __Vtemp_232;
    VlWide<3>/*95:0*/ __Vtemp_278;
    // Body
    if ((0x40000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
        if ((0x20000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
            if ((0x10000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
                if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
                    __Vtemp_46[0U] = 0x7436U;
                    __Vtemp_92[0U] = 0x6135U;
                } else {
                    __Vtemp_46[0U] = 0x7435U;
                    __Vtemp_92[0U] = 0x6134U;
                }
            } else if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
                __Vtemp_46[0U] = 0x7434U;
                __Vtemp_92[0U] = 0x6133U;
            } else {
                __Vtemp_46[0U] = 0x7433U;
                __Vtemp_92[0U] = 0x6132U;
            }
        } else if ((0x10000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
            if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
                __Vtemp_46[0U] = 0x733131U;
                __Vtemp_92[0U] = 0x6131U;
            } else {
                __Vtemp_46[0U] = 0x733130U;
                __Vtemp_92[0U] = 0x6130U;
            }
        } else if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
            __Vtemp_46[0U] = 0x7339U;
            __Vtemp_92[0U] = 0x7331U;
        } else {
            __Vtemp_46[0U] = 0x7338U;
            __Vtemp_92[0U] = 0x7330U;
        }
    } else if ((0x20000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
        if ((0x10000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
            if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
                __Vtemp_46[0U] = 0x7337U;
                __Vtemp_92[0U] = 0x7432U;
            } else {
                __Vtemp_46[0U] = 0x7336U;
                __Vtemp_92[0U] = 0x7431U;
            }
        } else if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
            __Vtemp_46[0U] = 0x7335U;
            __Vtemp_92[0U] = 0x7430U;
        } else {
            __Vtemp_46[0U] = 0x7334U;
            __Vtemp_92[0U] = 0x7470U;
        }
    } else if ((0x10000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
        if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
            __Vtemp_46[0U] = 0x7333U;
            __Vtemp_92[0U] = 0x6770U;
        } else {
            __Vtemp_46[0U] = 0x7332U;
            __Vtemp_92[0U] = 0x7370U;
        }
    } else if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
        __Vtemp_46[0U] = 0x6137U;
        __Vtemp_92[0U] = 0x7261U;
    } else {
        __Vtemp_46[0U] = 0x6136U;
        __Vtemp_92[0U] = 0x7a65726fU;
    }
    vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[0U] = ((0x80000U 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                   ? 
                                                  __Vtemp_46[0U]
                                                   : 
                                                  __Vtemp_92[0U]);
    vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[1U] = 0U;
    vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[2U] = 0U;
    if ((0x800000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
        if ((0x400000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
            if ((0x200000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
                if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
                    __Vtemp_139[0U] = 0x7436U;
                    __Vtemp_185[0U] = 0x6135U;
                } else {
                    __Vtemp_139[0U] = 0x7435U;
                    __Vtemp_185[0U] = 0x6134U;
                }
            } else if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
                __Vtemp_139[0U] = 0x7434U;
                __Vtemp_185[0U] = 0x6133U;
            } else {
                __Vtemp_139[0U] = 0x7433U;
                __Vtemp_185[0U] = 0x6132U;
            }
        } else if ((0x200000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
            if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
                __Vtemp_139[0U] = 0x733131U;
                __Vtemp_185[0U] = 0x6131U;
            } else {
                __Vtemp_139[0U] = 0x733130U;
                __Vtemp_185[0U] = 0x6130U;
            }
        } else if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
            __Vtemp_139[0U] = 0x7339U;
            __Vtemp_185[0U] = 0x7331U;
        } else {
            __Vtemp_139[0U] = 0x7338U;
            __Vtemp_185[0U] = 0x7330U;
        }
    } else if ((0x400000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
        if ((0x200000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
            if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
                __Vtemp_139[0U] = 0x7337U;
                __Vtemp_185[0U] = 0x7432U;
            } else {
                __Vtemp_139[0U] = 0x7336U;
                __Vtemp_185[0U] = 0x7431U;
            }
        } else if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
            __Vtemp_139[0U] = 0x7335U;
            __Vtemp_185[0U] = 0x7430U;
        } else {
            __Vtemp_139[0U] = 0x7334U;
            __Vtemp_185[0U] = 0x7470U;
        }
    } else if ((0x200000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
        if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
            __Vtemp_139[0U] = 0x7333U;
            __Vtemp_185[0U] = 0x6770U;
        } else {
            __Vtemp_139[0U] = 0x7332U;
            __Vtemp_185[0U] = 0x7370U;
        }
    } else if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
        __Vtemp_139[0U] = 0x6137U;
        __Vtemp_185[0U] = 0x7261U;
    } else {
        __Vtemp_139[0U] = 0x6136U;
        __Vtemp_185[0U] = 0x7a65726fU;
    }
    vlSelfRef.__VdfgExtracted_hf1ea1c82__0[0U] = ((0x1000000U 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                   ? 
                                                  __Vtemp_139[0U]
                                                   : 
                                                  __Vtemp_185[0U]);
    vlSelfRef.__VdfgExtracted_hf1ea1c82__0[1U] = 0U;
    vlSelfRef.__VdfgExtracted_hf1ea1c82__0[2U] = 0U;
    if ((0x400U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
        if ((0x200U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
            if ((0x100U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
                if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
                    __Vtemp_232[0U] = 0x7436U;
                    __Vtemp_278[0U] = 0x6135U;
                } else {
                    __Vtemp_232[0U] = 0x7435U;
                    __Vtemp_278[0U] = 0x6134U;
                }
            } else if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
                __Vtemp_232[0U] = 0x7434U;
                __Vtemp_278[0U] = 0x6133U;
            } else {
                __Vtemp_232[0U] = 0x7433U;
                __Vtemp_278[0U] = 0x6132U;
            }
        } else if ((0x100U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
            if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
                __Vtemp_232[0U] = 0x733131U;
                __Vtemp_278[0U] = 0x6131U;
            } else {
                __Vtemp_232[0U] = 0x733130U;
                __Vtemp_278[0U] = 0x6130U;
            }
        } else if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
            __Vtemp_232[0U] = 0x7339U;
            __Vtemp_278[0U] = 0x7331U;
        } else {
            __Vtemp_232[0U] = 0x7338U;
            __Vtemp_278[0U] = 0x7330U;
        }
    } else if ((0x200U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
        if ((0x100U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
            if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
                __Vtemp_232[0U] = 0x7337U;
                __Vtemp_278[0U] = 0x7432U;
            } else {
                __Vtemp_232[0U] = 0x7336U;
                __Vtemp_278[0U] = 0x7431U;
            }
        } else if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
            __Vtemp_232[0U] = 0x7335U;
            __Vtemp_278[0U] = 0x7430U;
        } else {
            __Vtemp_232[0U] = 0x7334U;
            __Vtemp_278[0U] = 0x7470U;
        }
    } else if ((0x100U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
        if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
            __Vtemp_232[0U] = 0x7333U;
            __Vtemp_278[0U] = 0x6770U;
        } else {
            __Vtemp_232[0U] = 0x7332U;
            __Vtemp_278[0U] = 0x7370U;
        }
    } else if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
        __Vtemp_232[0U] = 0x6137U;
        __Vtemp_278[0U] = 0x7261U;
    } else {
        __Vtemp_232[0U] = 0x6136U;
        __Vtemp_278[0U] = 0x7a65726fU;
    }
    vlSelfRef.__VdfgExtracted_h26d6b5e8__0[0U] = ((0x800U 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)
                                                   ? 
                                                  __Vtemp_232[0U]
                                                   : 
                                                  __Vtemp_278[0U]);
    vlSelfRef.__VdfgExtracted_h26d6b5e8__0[1U] = 0U;
    vlSelfRef.__VdfgExtracted_h26d6b5e8__0[2U] = 0U;
}

VL_INLINE_OPT void Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d__1(Vriscv_top_biriscv_trace_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_d__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
    vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rd[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_rd[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rd[2U] = 0U;
    if (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_issue_r) {
        if (((((((((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                   | (0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                  | (0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                 | (0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                | (0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
               | (0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
              | (0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
             | (0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) {
            if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x616e6469U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x61646469U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x736c7469U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c746975U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x73U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6f7269U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x786f7269U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))
                      ? 0x736c6c69U : 0x73726c69U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x40005013U == (0xfc00707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                          | (0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                         | (0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                        | (0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                      | (0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                     | (0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                    | (0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) {
            if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73726169U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c7569U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x75697063U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x61U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x616464U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x737562U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x736c74U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))
                      ? 0x736c7475U : 0x786f72U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x6033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                      | (0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                     | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                    | (0x63U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) {
            if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6f72U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x616e64U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x736c6cU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73726cU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x737261U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6a616cU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))
                      ? 0x6a616c72U : 0x626571U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x1063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                          | (0x4063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                         | (0x5063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                        | (0x6063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                       | (0x7063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                      | (3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                     | (0x1003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                    | (0x2003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) {
            if ((0x1063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626e65U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x4063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626c74U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626765U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626c7475U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x7063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x62676575U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c62U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x1003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))
                      ? 0x6c68U : 0x6c77U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                          | (0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                         | (0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                        | (0x23U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                       | (0x1023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                      | (0x2023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                     | (0x73U == vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                    | (0x100073U == vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
            if ((0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c6275U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c6875U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c7775U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x23U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7362U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x1023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7368U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7377U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x73U == vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x63616c6cU;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x65U;
                } else {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7265616bU;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6562U;
                }
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x200073U == (0xcfffffffU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                          | (0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                         | (0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                        | (0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                       | (0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                      | (0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                     | (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                    | (0x2000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) {
            if ((0x200073U == (0xcfffffffU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x65726574U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73727277U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73727273U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73727263U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72727769U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72727369U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72726369U;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6373U;
                } else {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6d756cU;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                }
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x2001033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                          | (0x2002033U == (0xfe00707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                         | (0x2003033U == (0xfe00707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                        | (0x2004033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                       | (0x2005033U == (0xfe00707fU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                      | (0x2006033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                    | (0x100fU == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) {
            if ((0x2001033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6d756c68U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2002033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c687375U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6d75U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2003033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x756c6875U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6dU;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2004033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x646976U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2005033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x64697675U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2006033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72656dU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x2007033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72656d75U;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                } else {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x63652e69U;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x66656eU;
                }
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        }
        vlSelfRef.__PVT__dbg_inst_ra[0U] = vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[0U];
        vlSelfRef.__PVT__dbg_inst_ra[1U] = vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[1U];
        vlSelfRef.__PVT__dbg_inst_ra[2U] = vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[2U];
        vlSelfRef.__PVT__dbg_inst_rb[0U] = vlSelfRef.__VdfgExtracted_hf1ea1c82__0[0U];
        vlSelfRef.__PVT__dbg_inst_rb[1U] = vlSelfRef.__VdfgExtracted_hf1ea1c82__0[1U];
        vlSelfRef.__PVT__dbg_inst_rb[2U] = vlSelfRef.__VdfgExtracted_hf1ea1c82__0[2U];
        vlSelfRef.__PVT__dbg_inst_rd[0U] = vlSelfRef.__VdfgExtracted_h26d6b5e8__0[0U];
        vlSelfRef.__PVT__dbg_inst_rd[1U] = vlSelfRef.__VdfgExtracted_h26d6b5e8__0[1U];
        vlSelfRef.__PVT__dbg_inst_rd[2U] = vlSelfRef.__VdfgExtracted_h26d6b5e8__0[2U];
        if ((((((((((((((((((((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                              || (0x7013U == (0x707fU 
                                              & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                             || (0x2013U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                            || (0x3013U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                           || (0x6013U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                          || (0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                         || (0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                        || (0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                       || (0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                      || (0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                     || (0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                    || (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                   | (((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                       || (0x5013U == (0xfc00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                      || (0x40005013U == (0xfc00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) 
                  | (0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                 | (0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                | (0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
               | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
              | ((((((3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                     || (0x1003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                    || (0x2003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                   || (0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                  || (0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                 || (0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) 
             | (((0x23U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                 || (0x1023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                || (0x2023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))))) {
            if ((1U & (~ ((((((((((((0x13U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                                    || (0x7013U == 
                                        (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                                   || (0x2013U == (0x707fU 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                                  || (0x3013U == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                                 || (0x6013U == (0x707fU 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                                || (0x4013U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                               || (0x1073U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                              || (0x2073U == (0x707fU 
                                              & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                             || (0x3073U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                            || (0x5073U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                           || (0x6073U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                          || (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))))) {
                if ((1U & (~ (((0x1013U == (0xfc00707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                               || (0x5013U == (0xfc00707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                              || (0x40005013U == (0xfc00707fU 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))))) {
                    if ((0x37U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                        if ((0x17U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                            if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                                if ((1U == (0x1fU & 
                                            (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                             >> 7U)))) {
                                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
                                }
                            } else if ((0x67U == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                                if ((IData)(((0x8000U 
                                              == (0xf8000U 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                                             & (0U 
                                                == 
                                                (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                    >> 0x14U)))))) {
                                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x726574U;
                                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
                                } else if ((1U == (0x1fU 
                                                   & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                      >> 7U)))) {
                                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x20285229U;
                                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
                                }
                            }
                            if ((0x6fU != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                                if ((0x67U != (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                                    if ((1U & (~ ((
                                                   ((((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                                                      || (0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                                                     || (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                                                    || (0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                                                   || (0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                                                  || (0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))))) {
                                        vlSelfRef.__PVT__dbg_inst_rd[0U] = 0x2dU;
                                        vlSelfRef.__PVT__dbg_inst_rd[1U] = 0U;
                                        vlSelfRef.__PVT__dbg_inst_rd[2U] = 0U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                        vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                        vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x7063U;
                        vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                        vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
                    }
                }
            }
            if (((((((((((((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                           || (0x7013U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                          || (0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                         || (0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                        || (0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                       || (0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                      || (0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                     || (0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                    || (0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                   || (0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                  || (0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                 || (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                    >> 0x14U));
            } else if ((((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                         || (0x5013U == (0xfc00707fU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                        || (0x40005013U == (0xfc00707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (0x1fU 
                                                 & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                    >> 0x14U));
            } else if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (0xfffff000U 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r);
            } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (0xfffff000U 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r);
            } else if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_pc_r 
                                                 + 
                                                 (((- (IData)(
                                                              (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | (((0xff000U 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r) 
                                                      | (0x800U 
                                                         & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                            >> 9U))) 
                                                     | ((0x7e0U 
                                                         & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                              >> 0x14U))))));
            } else if ((0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                    >> 0x14U));
            } else if (((((((3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)) 
                            || (0x1003U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                           || (0x2003U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                          || (0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                         || (0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r))) 
                        || (0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r)))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                    >> 0x14U));
            } else {
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0xfe0U 
                                                     & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_a_r 
                                                          >> 7U))));
            }
        }
    }
}

VL_INLINE_OPT void Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb__0(Vriscv_top_biriscv_trace_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
    vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rd[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_rd[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rd[2U] = 0U;
    if (vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_valid_wb_w) {
        if (((((((((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                   | (0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                  | (0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                 | (0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                | (0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
               | (0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
              | (0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
             | (0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) {
            if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x616e6469U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x61646469U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x736c7469U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c746975U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x73U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6f7269U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x786f7269U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))
                      ? 0x736c6c69U : 0x73726c69U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x40005013U == (0xfc00707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                          | (0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                         | (0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                        | (0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                      | (0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                     | (0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                    | (0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) {
            if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73726169U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c7569U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x75697063U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x61U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x616464U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x737562U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x736c74U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))
                      ? 0x736c7475U : 0x786f72U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x6033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                      | (0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                     | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                    | (0x63U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) {
            if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6f72U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x616e64U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x736c6cU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73726cU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x737261U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6a616cU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))
                      ? 0x6a616c72U : 0x626571U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x1063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                          | (0x4063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                         | (0x5063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                        | (0x6063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                       | (0x7063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                      | (3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                     | (0x1003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                    | (0x2003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) {
            if ((0x1063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626e65U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x4063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626c74U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626765U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626c7475U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x7063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x62676575U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c62U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x1003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))
                      ? 0x6c68U : 0x6c77U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                          | (0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                         | (0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                        | (0x23U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                       | (0x1023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                      | (0x2023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                     | (0x73U == vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                    | (0x100073U == vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
            if ((0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c6275U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c6875U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c7775U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x23U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7362U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x1023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7368U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7377U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x73U == vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x63616c6cU;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x65U;
                } else {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7265616bU;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6562U;
                }
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x200073U == (0xcfffffffU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                          | (0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                         | (0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                        | (0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                       | (0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                      | (0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                     | (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                    | (0x2000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) {
            if ((0x200073U == (0xcfffffffU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x65726574U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73727277U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73727273U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73727263U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72727769U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72727369U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72726369U;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6373U;
                } else {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6d756cU;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                }
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x2001033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                          | (0x2002033U == (0xfe00707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                         | (0x2003033U == (0xfe00707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                        | (0x2004033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                       | (0x2005033U == (0xfe00707fU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                      | (0x2006033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                    | (0x100fU == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) {
            if ((0x2001033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6d756c68U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2002033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c687375U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6d75U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2003033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x756c6875U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6dU;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2004033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x646976U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2005033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x64697675U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2006033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72656dU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x2007033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72656d75U;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                } else {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x63652e69U;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x66656eU;
                }
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        }
        vlSelfRef.__PVT__dbg_inst_ra[0U] = vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[0U];
        vlSelfRef.__PVT__dbg_inst_ra[1U] = vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[1U];
        vlSelfRef.__PVT__dbg_inst_ra[2U] = vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[2U];
        vlSelfRef.__PVT__dbg_inst_rb[0U] = vlSelfRef.__VdfgExtracted_hf1ea1c82__0[0U];
        vlSelfRef.__PVT__dbg_inst_rb[1U] = vlSelfRef.__VdfgExtracted_hf1ea1c82__0[1U];
        vlSelfRef.__PVT__dbg_inst_rb[2U] = vlSelfRef.__VdfgExtracted_hf1ea1c82__0[2U];
        vlSelfRef.__PVT__dbg_inst_rd[0U] = vlSelfRef.__VdfgExtracted_h26d6b5e8__0[0U];
        vlSelfRef.__PVT__dbg_inst_rd[1U] = vlSelfRef.__VdfgExtracted_h26d6b5e8__0[1U];
        vlSelfRef.__PVT__dbg_inst_rd[2U] = vlSelfRef.__VdfgExtracted_h26d6b5e8__0[2U];
        if ((((((((((((((((((((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                              || (0x7013U == (0x707fU 
                                              & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                             || (0x2013U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                            || (0x3013U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                           || (0x6013U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                          || (0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                         || (0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                        || (0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                       || (0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                      || (0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                     || (0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                    || (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                   | (((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                       || (0x5013U == (0xfc00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                      || (0x40005013U == (0xfc00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) 
                  | (0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                 | (0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                | (0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
               | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
              | ((((((3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                     || (0x1003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                    || (0x2003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                   || (0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                  || (0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                 || (0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) 
             | (((0x23U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                 || (0x1023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                || (0x2023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))))) {
            if ((1U & (~ ((((((((((((0x13U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                                    || (0x7013U == 
                                        (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                                   || (0x2013U == (0x707fU 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                                  || (0x3013U == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                                 || (0x6013U == (0x707fU 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                                || (0x4013U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                               || (0x1073U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                              || (0x2073U == (0x707fU 
                                              & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                             || (0x3073U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                            || (0x5073U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                           || (0x6073U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                          || (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))))) {
                if ((1U & (~ (((0x1013U == (0xfc00707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                               || (0x5013U == (0xfc00707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                              || (0x40005013U == (0xfc00707fU 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))))) {
                    if ((0x37U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                        if ((0x17U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                            if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                                if ((1U == (0x1fU & 
                                            (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                             >> 7U)))) {
                                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
                                }
                            } else if ((0x67U == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                                if ((IData)(((0x8000U 
                                              == (0xf8000U 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                                             & (0U 
                                                == 
                                                (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U)))))) {
                                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x726574U;
                                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
                                } else if ((1U == (0x1fU 
                                                   & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                      >> 7U)))) {
                                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x20285229U;
                                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
                                }
                            }
                            if ((0x6fU != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                                if ((0x67U != (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                                    if ((1U & (~ ((
                                                   ((((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                                                      || (0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                                                     || (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                                                    || (0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                                                   || (0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                                                  || (0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))))) {
                                        vlSelfRef.__PVT__dbg_inst_rd[0U] = 0x2dU;
                                        vlSelfRef.__PVT__dbg_inst_rd[1U] = 0U;
                                        vlSelfRef.__PVT__dbg_inst_rd[2U] = 0U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                        vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                        vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x7063U;
                        vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                        vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
                    }
                }
            }
            if (((((((((((((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                           || (0x7013U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                          || (0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                         || (0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                        || (0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                       || (0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                      || (0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                     || (0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                    || (0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                   || (0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                  || (0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                 || (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U));
            } else if ((((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                         || (0x5013U == (0xfc00707fU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                        || (0x40005013U == (0xfc00707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (0x1fU 
                                                 & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U));
            } else if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (0xfffff000U 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q);
            } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (0xfffff000U 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q);
            } else if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__pc_wb_q 
                                                 + 
                                                 (((- (IData)(
                                                              (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | (((0xff000U 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q) 
                                                      | (0x800U 
                                                         & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                            >> 9U))) 
                                                     | ((0x7e0U 
                                                         & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                              >> 0x14U))))));
            } else if ((0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U));
            } else if (((((((3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) 
                            || (0x1003U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                           || (0x2003U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                          || (0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                         || (0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q))) 
                        || (0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U));
            } else {
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0xfe0U 
                                                     & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                                          >> 7U))));
            }
        }
    }
}

VL_INLINE_OPT void Vriscv_top_biriscv_trace_sim___nba_sequent__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb__0(Vriscv_top_biriscv_trace_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_top_biriscv_trace_sim___nba_sequent__TOP__v__u_core__u_issue__u_pipe0_ctrl__DOT__u_trace_wb__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_139;
    VlWide<3>/*95:0*/ __Vtemp_185;
    VlWide<3>/*95:0*/ __Vtemp_232;
    VlWide<3>/*95:0*/ __Vtemp_278;
    // Body
    if ((0x40000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
        if ((0x20000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
            if ((0x10000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
                if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
                    __Vtemp_46[0U] = 0x7436U;
                    __Vtemp_92[0U] = 0x6135U;
                } else {
                    __Vtemp_46[0U] = 0x7435U;
                    __Vtemp_92[0U] = 0x6134U;
                }
            } else if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
                __Vtemp_46[0U] = 0x7434U;
                __Vtemp_92[0U] = 0x6133U;
            } else {
                __Vtemp_46[0U] = 0x7433U;
                __Vtemp_92[0U] = 0x6132U;
            }
        } else if ((0x10000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
            if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
                __Vtemp_46[0U] = 0x733131U;
                __Vtemp_92[0U] = 0x6131U;
            } else {
                __Vtemp_46[0U] = 0x733130U;
                __Vtemp_92[0U] = 0x6130U;
            }
        } else if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
            __Vtemp_46[0U] = 0x7339U;
            __Vtemp_92[0U] = 0x7331U;
        } else {
            __Vtemp_46[0U] = 0x7338U;
            __Vtemp_92[0U] = 0x7330U;
        }
    } else if ((0x20000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
        if ((0x10000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
            if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
                __Vtemp_46[0U] = 0x7337U;
                __Vtemp_92[0U] = 0x7432U;
            } else {
                __Vtemp_46[0U] = 0x7336U;
                __Vtemp_92[0U] = 0x7431U;
            }
        } else if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
            __Vtemp_46[0U] = 0x7335U;
            __Vtemp_92[0U] = 0x7430U;
        } else {
            __Vtemp_46[0U] = 0x7334U;
            __Vtemp_92[0U] = 0x7470U;
        }
    } else if ((0x10000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
        if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
            __Vtemp_46[0U] = 0x7333U;
            __Vtemp_92[0U] = 0x6770U;
        } else {
            __Vtemp_46[0U] = 0x7332U;
            __Vtemp_92[0U] = 0x7370U;
        }
    } else if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
        __Vtemp_46[0U] = 0x6137U;
        __Vtemp_92[0U] = 0x7261U;
    } else {
        __Vtemp_46[0U] = 0x6136U;
        __Vtemp_92[0U] = 0x7a65726fU;
    }
    vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[0U] = ((0x80000U 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)
                                                   ? 
                                                  __Vtemp_46[0U]
                                                   : 
                                                  __Vtemp_92[0U]);
    vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[1U] = 0U;
    vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[2U] = 0U;
    if ((0x800000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
        if ((0x400000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
            if ((0x200000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
                if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
                    __Vtemp_139[0U] = 0x7436U;
                    __Vtemp_185[0U] = 0x6135U;
                } else {
                    __Vtemp_139[0U] = 0x7435U;
                    __Vtemp_185[0U] = 0x6134U;
                }
            } else if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
                __Vtemp_139[0U] = 0x7434U;
                __Vtemp_185[0U] = 0x6133U;
            } else {
                __Vtemp_139[0U] = 0x7433U;
                __Vtemp_185[0U] = 0x6132U;
            }
        } else if ((0x200000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
            if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
                __Vtemp_139[0U] = 0x733131U;
                __Vtemp_185[0U] = 0x6131U;
            } else {
                __Vtemp_139[0U] = 0x733130U;
                __Vtemp_185[0U] = 0x6130U;
            }
        } else if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
            __Vtemp_139[0U] = 0x7339U;
            __Vtemp_185[0U] = 0x7331U;
        } else {
            __Vtemp_139[0U] = 0x7338U;
            __Vtemp_185[0U] = 0x7330U;
        }
    } else if ((0x400000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
        if ((0x200000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
            if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
                __Vtemp_139[0U] = 0x7337U;
                __Vtemp_185[0U] = 0x7432U;
            } else {
                __Vtemp_139[0U] = 0x7336U;
                __Vtemp_185[0U] = 0x7431U;
            }
        } else if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
            __Vtemp_139[0U] = 0x7335U;
            __Vtemp_185[0U] = 0x7430U;
        } else {
            __Vtemp_139[0U] = 0x7334U;
            __Vtemp_185[0U] = 0x7470U;
        }
    } else if ((0x200000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
        if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
            __Vtemp_139[0U] = 0x7333U;
            __Vtemp_185[0U] = 0x6770U;
        } else {
            __Vtemp_139[0U] = 0x7332U;
            __Vtemp_185[0U] = 0x7370U;
        }
    } else if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
        __Vtemp_139[0U] = 0x6137U;
        __Vtemp_185[0U] = 0x7261U;
    } else {
        __Vtemp_139[0U] = 0x6136U;
        __Vtemp_185[0U] = 0x7a65726fU;
    }
    vlSelfRef.__VdfgExtracted_hf1ea1c82__0[0U] = ((0x1000000U 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)
                                                   ? 
                                                  __Vtemp_139[0U]
                                                   : 
                                                  __Vtemp_185[0U]);
    vlSelfRef.__VdfgExtracted_hf1ea1c82__0[1U] = 0U;
    vlSelfRef.__VdfgExtracted_hf1ea1c82__0[2U] = 0U;
    if ((0x400U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
        if ((0x200U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
            if ((0x100U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
                if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
                    __Vtemp_232[0U] = 0x7436U;
                    __Vtemp_278[0U] = 0x6135U;
                } else {
                    __Vtemp_232[0U] = 0x7435U;
                    __Vtemp_278[0U] = 0x6134U;
                }
            } else if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
                __Vtemp_232[0U] = 0x7434U;
                __Vtemp_278[0U] = 0x6133U;
            } else {
                __Vtemp_232[0U] = 0x7433U;
                __Vtemp_278[0U] = 0x6132U;
            }
        } else if ((0x100U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
            if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
                __Vtemp_232[0U] = 0x733131U;
                __Vtemp_278[0U] = 0x6131U;
            } else {
                __Vtemp_232[0U] = 0x733130U;
                __Vtemp_278[0U] = 0x6130U;
            }
        } else if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
            __Vtemp_232[0U] = 0x7339U;
            __Vtemp_278[0U] = 0x7331U;
        } else {
            __Vtemp_232[0U] = 0x7338U;
            __Vtemp_278[0U] = 0x7330U;
        }
    } else if ((0x200U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
        if ((0x100U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
            if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
                __Vtemp_232[0U] = 0x7337U;
                __Vtemp_278[0U] = 0x7432U;
            } else {
                __Vtemp_232[0U] = 0x7336U;
                __Vtemp_278[0U] = 0x7431U;
            }
        } else if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
            __Vtemp_232[0U] = 0x7335U;
            __Vtemp_278[0U] = 0x7430U;
        } else {
            __Vtemp_232[0U] = 0x7334U;
            __Vtemp_278[0U] = 0x7470U;
        }
    } else if ((0x100U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
        if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
            __Vtemp_232[0U] = 0x7333U;
            __Vtemp_278[0U] = 0x6770U;
        } else {
            __Vtemp_232[0U] = 0x7332U;
            __Vtemp_278[0U] = 0x7370U;
        }
    } else if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)) {
        __Vtemp_232[0U] = 0x6137U;
        __Vtemp_278[0U] = 0x7261U;
    } else {
        __Vtemp_232[0U] = 0x6136U;
        __Vtemp_278[0U] = 0x7a65726fU;
    }
    vlSelfRef.__VdfgExtracted_h26d6b5e8__0[0U] = ((0x800U 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q)
                                                   ? 
                                                  __Vtemp_232[0U]
                                                   : 
                                                  __Vtemp_278[0U]);
    vlSelfRef.__VdfgExtracted_h26d6b5e8__0[1U] = 0U;
    vlSelfRef.__VdfgExtracted_h26d6b5e8__0[2U] = 0U;
}

VL_INLINE_OPT void Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d__0(Vriscv_top_biriscv_trace_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_46;
    VlWide<3>/*95:0*/ __Vtemp_92;
    VlWide<3>/*95:0*/ __Vtemp_139;
    VlWide<3>/*95:0*/ __Vtemp_185;
    VlWide<3>/*95:0*/ __Vtemp_232;
    VlWide<3>/*95:0*/ __Vtemp_278;
    // Body
    if ((0x40000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
        if ((0x20000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
            if ((0x10000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
                if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
                    __Vtemp_46[0U] = 0x7436U;
                    __Vtemp_92[0U] = 0x6135U;
                } else {
                    __Vtemp_46[0U] = 0x7435U;
                    __Vtemp_92[0U] = 0x6134U;
                }
            } else if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
                __Vtemp_46[0U] = 0x7434U;
                __Vtemp_92[0U] = 0x6133U;
            } else {
                __Vtemp_46[0U] = 0x7433U;
                __Vtemp_92[0U] = 0x6132U;
            }
        } else if ((0x10000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
            if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
                __Vtemp_46[0U] = 0x733131U;
                __Vtemp_92[0U] = 0x6131U;
            } else {
                __Vtemp_46[0U] = 0x733130U;
                __Vtemp_92[0U] = 0x6130U;
            }
        } else if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
            __Vtemp_46[0U] = 0x7339U;
            __Vtemp_92[0U] = 0x7331U;
        } else {
            __Vtemp_46[0U] = 0x7338U;
            __Vtemp_92[0U] = 0x7330U;
        }
    } else if ((0x20000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
        if ((0x10000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
            if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
                __Vtemp_46[0U] = 0x7337U;
                __Vtemp_92[0U] = 0x7432U;
            } else {
                __Vtemp_46[0U] = 0x7336U;
                __Vtemp_92[0U] = 0x7431U;
            }
        } else if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
            __Vtemp_46[0U] = 0x7335U;
            __Vtemp_92[0U] = 0x7430U;
        } else {
            __Vtemp_46[0U] = 0x7334U;
            __Vtemp_92[0U] = 0x7470U;
        }
    } else if ((0x10000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
        if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
            __Vtemp_46[0U] = 0x7333U;
            __Vtemp_92[0U] = 0x6770U;
        } else {
            __Vtemp_46[0U] = 0x7332U;
            __Vtemp_92[0U] = 0x7370U;
        }
    } else if ((0x8000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
        __Vtemp_46[0U] = 0x6137U;
        __Vtemp_92[0U] = 0x7261U;
    } else {
        __Vtemp_46[0U] = 0x6136U;
        __Vtemp_92[0U] = 0x7a65726fU;
    }
    vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[0U] = ((0x80000U 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)
                                                   ? 
                                                  __Vtemp_46[0U]
                                                   : 
                                                  __Vtemp_92[0U]);
    vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[1U] = 0U;
    vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[2U] = 0U;
    if ((0x800000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
        if ((0x400000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
            if ((0x200000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
                if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
                    __Vtemp_139[0U] = 0x7436U;
                    __Vtemp_185[0U] = 0x6135U;
                } else {
                    __Vtemp_139[0U] = 0x7435U;
                    __Vtemp_185[0U] = 0x6134U;
                }
            } else if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
                __Vtemp_139[0U] = 0x7434U;
                __Vtemp_185[0U] = 0x6133U;
            } else {
                __Vtemp_139[0U] = 0x7433U;
                __Vtemp_185[0U] = 0x6132U;
            }
        } else if ((0x200000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
            if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
                __Vtemp_139[0U] = 0x733131U;
                __Vtemp_185[0U] = 0x6131U;
            } else {
                __Vtemp_139[0U] = 0x733130U;
                __Vtemp_185[0U] = 0x6130U;
            }
        } else if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
            __Vtemp_139[0U] = 0x7339U;
            __Vtemp_185[0U] = 0x7331U;
        } else {
            __Vtemp_139[0U] = 0x7338U;
            __Vtemp_185[0U] = 0x7330U;
        }
    } else if ((0x400000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
        if ((0x200000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
            if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
                __Vtemp_139[0U] = 0x7337U;
                __Vtemp_185[0U] = 0x7432U;
            } else {
                __Vtemp_139[0U] = 0x7336U;
                __Vtemp_185[0U] = 0x7431U;
            }
        } else if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
            __Vtemp_139[0U] = 0x7335U;
            __Vtemp_185[0U] = 0x7430U;
        } else {
            __Vtemp_139[0U] = 0x7334U;
            __Vtemp_185[0U] = 0x7470U;
        }
    } else if ((0x200000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
        if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
            __Vtemp_139[0U] = 0x7333U;
            __Vtemp_185[0U] = 0x6770U;
        } else {
            __Vtemp_139[0U] = 0x7332U;
            __Vtemp_185[0U] = 0x7370U;
        }
    } else if ((0x100000U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
        __Vtemp_139[0U] = 0x6137U;
        __Vtemp_185[0U] = 0x7261U;
    } else {
        __Vtemp_139[0U] = 0x6136U;
        __Vtemp_185[0U] = 0x7a65726fU;
    }
    vlSelfRef.__VdfgExtracted_hf1ea1c82__0[0U] = ((0x1000000U 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)
                                                   ? 
                                                  __Vtemp_139[0U]
                                                   : 
                                                  __Vtemp_185[0U]);
    vlSelfRef.__VdfgExtracted_hf1ea1c82__0[1U] = 0U;
    vlSelfRef.__VdfgExtracted_hf1ea1c82__0[2U] = 0U;
    if ((0x400U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
        if ((0x200U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
            if ((0x100U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
                if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
                    __Vtemp_232[0U] = 0x7436U;
                    __Vtemp_278[0U] = 0x6135U;
                } else {
                    __Vtemp_232[0U] = 0x7435U;
                    __Vtemp_278[0U] = 0x6134U;
                }
            } else if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
                __Vtemp_232[0U] = 0x7434U;
                __Vtemp_278[0U] = 0x6133U;
            } else {
                __Vtemp_232[0U] = 0x7433U;
                __Vtemp_278[0U] = 0x6132U;
            }
        } else if ((0x100U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
            if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
                __Vtemp_232[0U] = 0x733131U;
                __Vtemp_278[0U] = 0x6131U;
            } else {
                __Vtemp_232[0U] = 0x733130U;
                __Vtemp_278[0U] = 0x6130U;
            }
        } else if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
            __Vtemp_232[0U] = 0x7339U;
            __Vtemp_278[0U] = 0x7331U;
        } else {
            __Vtemp_232[0U] = 0x7338U;
            __Vtemp_278[0U] = 0x7330U;
        }
    } else if ((0x200U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
        if ((0x100U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
            if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
                __Vtemp_232[0U] = 0x7337U;
                __Vtemp_278[0U] = 0x7432U;
            } else {
                __Vtemp_232[0U] = 0x7336U;
                __Vtemp_278[0U] = 0x7431U;
            }
        } else if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
            __Vtemp_232[0U] = 0x7335U;
            __Vtemp_278[0U] = 0x7430U;
        } else {
            __Vtemp_232[0U] = 0x7334U;
            __Vtemp_278[0U] = 0x7470U;
        }
    } else if ((0x100U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
        if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
            __Vtemp_232[0U] = 0x7333U;
            __Vtemp_278[0U] = 0x6770U;
        } else {
            __Vtemp_232[0U] = 0x7332U;
            __Vtemp_278[0U] = 0x7370U;
        }
    } else if ((0x80U & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
        __Vtemp_232[0U] = 0x6137U;
        __Vtemp_278[0U] = 0x7261U;
    } else {
        __Vtemp_232[0U] = 0x6136U;
        __Vtemp_278[0U] = 0x7a65726fU;
    }
    vlSelfRef.__VdfgExtracted_h26d6b5e8__0[0U] = ((0x800U 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)
                                                   ? 
                                                  __Vtemp_232[0U]
                                                   : 
                                                  __Vtemp_278[0U]);
    vlSelfRef.__VdfgExtracted_h26d6b5e8__0[1U] = 0U;
    vlSelfRef.__VdfgExtracted_h26d6b5e8__0[2U] = 0U;
}

VL_INLINE_OPT void Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d__1(Vriscv_top_biriscv_trace_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_d__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
    vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rd[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_rd[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rd[2U] = 0U;
    if (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_issue_r) {
        if (((((((((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                   | (0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                  | (0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                 | (0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                | (0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
               | (0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
              | (0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
             | (0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))) {
            if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x616e6469U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x61646469U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x736c7469U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c746975U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x73U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6f7269U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x786f7269U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))
                      ? 0x736c6c69U : 0x73726c69U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x40005013U == (0xfc00707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                          | (0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                         | (0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                        | (0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                      | (0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                     | (0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                    | (0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))) {
            if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73726169U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c7569U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x75697063U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x61U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x616464U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x737562U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x736c74U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))
                      ? 0x736c7475U : 0x786f72U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x6033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                      | (0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                     | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                    | (0x63U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))) {
            if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6f72U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x616e64U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x736c6cU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73726cU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x737261U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6a616cU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))
                      ? 0x6a616c72U : 0x626571U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x1063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                          | (0x4063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                         | (0x5063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                        | (0x6063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                       | (0x7063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                      | (3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                     | (0x1003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                    | (0x2003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))) {
            if ((0x1063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626e65U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x4063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626c74U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626765U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626c7475U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x7063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x62676575U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c62U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x1003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))
                      ? 0x6c68U : 0x6c77U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                          | (0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                         | (0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                        | (0x23U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                       | (0x1023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                      | (0x2023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                     | (0x73U == vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                    | (0x100073U == vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
            if ((0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c6275U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c6875U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c7775U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x23U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7362U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x1023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7368U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7377U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x73U == vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x63616c6cU;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x65U;
                } else {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7265616bU;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6562U;
                }
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x200073U == (0xcfffffffU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                          | (0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                         | (0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                        | (0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                       | (0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                      | (0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                     | (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                    | (0x2000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))) {
            if ((0x200073U == (0xcfffffffU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x65726574U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73727277U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73727273U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73727263U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72727769U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72727369U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72726369U;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6373U;
                } else {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6d756cU;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                }
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x2001033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                          | (0x2002033U == (0xfe00707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                         | (0x2003033U == (0xfe00707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                        | (0x2004033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                       | (0x2005033U == (0xfe00707fU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                      | (0x2006033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                    | (0x100fU == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))) {
            if ((0x2001033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6d756c68U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2002033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c687375U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6d75U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2003033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x756c6875U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6dU;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2004033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x646976U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2005033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x64697675U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2006033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72656dU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x2007033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72656d75U;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                } else {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x63652e69U;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x66656eU;
                }
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        }
        vlSelfRef.__PVT__dbg_inst_ra[0U] = vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[0U];
        vlSelfRef.__PVT__dbg_inst_ra[1U] = vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[1U];
        vlSelfRef.__PVT__dbg_inst_ra[2U] = vlSelfRef.__VdfgExtracted_h4ff6f0a0__0[2U];
        vlSelfRef.__PVT__dbg_inst_rb[0U] = vlSelfRef.__VdfgExtracted_hf1ea1c82__0[0U];
        vlSelfRef.__PVT__dbg_inst_rb[1U] = vlSelfRef.__VdfgExtracted_hf1ea1c82__0[1U];
        vlSelfRef.__PVT__dbg_inst_rb[2U] = vlSelfRef.__VdfgExtracted_hf1ea1c82__0[2U];
        vlSelfRef.__PVT__dbg_inst_rd[0U] = vlSelfRef.__VdfgExtracted_h26d6b5e8__0[0U];
        vlSelfRef.__PVT__dbg_inst_rd[1U] = vlSelfRef.__VdfgExtracted_h26d6b5e8__0[1U];
        vlSelfRef.__PVT__dbg_inst_rd[2U] = vlSelfRef.__VdfgExtracted_h26d6b5e8__0[2U];
        if ((((((((((((((((((((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                              || (0x7013U == (0x707fU 
                                              & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                             || (0x2013U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                            || (0x3013U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                           || (0x6013U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                          || (0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                         || (0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                        || (0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                       || (0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                      || (0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                     || (0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                    || (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                   | (((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                       || (0x5013U == (0xfc00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                      || (0x40005013U == (0xfc00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))) 
                  | (0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                 | (0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                | (0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
               | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
              | ((((((3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                     || (0x1003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                    || (0x2003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                   || (0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                  || (0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                 || (0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))) 
             | (((0x23U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                 || (0x1023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                || (0x2023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))))) {
            if ((1U & (~ ((((((((((((0x13U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                                    || (0x7013U == 
                                        (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                                   || (0x2013U == (0x707fU 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                                  || (0x3013U == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                                 || (0x6013U == (0x707fU 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                                || (0x4013U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                               || (0x1073U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                              || (0x2073U == (0x707fU 
                                              & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                             || (0x3073U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                            || (0x5073U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                           || (0x6073U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                          || (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))))) {
                if ((1U & (~ (((0x1013U == (0xfc00707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                               || (0x5013U == (0xfc00707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                              || (0x40005013U == (0xfc00707fU 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))))) {
                    if ((0x37U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                        if ((0x17U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                            if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                                if ((1U == (0x1fU & 
                                            (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                             >> 7U)))) {
                                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
                                }
                            } else if ((0x67U == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                                if ((IData)(((0x8000U 
                                              == (0xf8000U 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                                             & (0U 
                                                == 
                                                (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                    >> 0x14U)))))) {
                                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x726574U;
                                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
                                } else if ((1U == (0x1fU 
                                                   & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                      >> 7U)))) {
                                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x20285229U;
                                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
                                }
                            }
                            if ((0x6fU != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                                if ((0x67U != (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                                    if ((1U & (~ ((
                                                   ((((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                                                      || (0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                                                     || (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                                                    || (0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                                                   || (0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                                                  || (0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))))) {
                                        vlSelfRef.__PVT__dbg_inst_rd[0U] = 0x2dU;
                                        vlSelfRef.__PVT__dbg_inst_rd[1U] = 0U;
                                        vlSelfRef.__PVT__dbg_inst_rd[2U] = 0U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                        vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                        vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x7063U;
                        vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                        vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
                    }
                }
            }
            if (((((((((((((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                           || (0x7013U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                          || (0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                         || (0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                        || (0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                       || (0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                      || (0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                     || (0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                    || (0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                   || (0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                  || (0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                 || (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                    >> 0x14U));
            } else if ((((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                         || (0x5013U == (0xfc00707fU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                        || (0x40005013U == (0xfc00707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (0x1fU 
                                                 & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                    >> 0x14U));
            } else if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (0xfffff000U 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r);
            } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (0xfffff000U 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r);
            } else if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_pc_r 
                                                 + 
                                                 (((- (IData)(
                                                              (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | (((0xff000U 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r) 
                                                      | (0x800U 
                                                         & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                            >> 9U))) 
                                                     | ((0x7e0U 
                                                         & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                              >> 0x14U))))));
            } else if ((0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                    >> 0x14U));
            } else if (((((((3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)) 
                            || (0x1003U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                           || (0x2003U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                          || (0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                         || (0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r))) 
                        || (0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r)))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                    >> 0x14U));
            } else {
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0xfe0U 
                                                     & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSymsp->TOP__v__u_core__u_issue.__PVT__opcode_b_r 
                                                          >> 7U))));
            }
        }
    }
}

VL_INLINE_OPT void Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb__0(Vriscv_top_biriscv_trace_sim* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vriscv_top_biriscv_trace_sim___ico_sequent__TOP__v__u_core__u_issue__u_pipe1_ctrl__DOT__u_trace_wb__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
    vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rd[0U] = 0x2dU;
    vlSelfRef.__PVT__dbg_inst_rd[1U] = 0U;
    vlSelfRef.__PVT__dbg_inst_rd[2U] = 0U;
    if (vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_valid_wb_w) {
        if (((((((((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                   | (0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                  | (0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                 | (0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                | (0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
               | (0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
              | (0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
             | (0x5013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) {
            if ((0x7013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x616e6469U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x61646469U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x736c7469U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c746975U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x73U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6f7269U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x786f7269U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))
                      ? 0x736c6c69U : 0x73726c69U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x40005013U == (0xfc00707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                          | (0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                         | (0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                        | (0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                       | (0x40000033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                      | (0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                     | (0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                    | (0x4033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) {
            if ((0x40005013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73726169U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c7569U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x75697063U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x61U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x33U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x616464U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x40000033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x737562U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x736c74U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x3033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))
                      ? 0x736c7475U : 0x786f72U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x6033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                          | (0x7033U == (0xfe00707fU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                         | (0x1033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                        | (0x5033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                       | (0x40005033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                      | (0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                     | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                    | (0x63U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) {
            if ((0x6033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6f72U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x7033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x616e64U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x1033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x736c6cU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73726cU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x40005033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x737261U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6a616cU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))
                      ? 0x6a616c72U : 0x626571U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x1063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                          | (0x4063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                         | (0x5063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                        | (0x6063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                       | (0x7063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                      | (3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                     | (0x1003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                    | (0x2003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) {
            if ((0x1063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626e65U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x4063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626c74U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626765U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x626c7475U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x7063U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x62676575U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c62U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 
                    ((0x1003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))
                      ? 0x6c68U : 0x6c77U);
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                          | (0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                         | (0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                        | (0x23U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                       | (0x1023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                      | (0x2023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                     | (0x73U == vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                    | (0x100073U == vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
            if ((0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c6275U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c6875U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c7775U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x23U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7362U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x1023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7368U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7377U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x73U == vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x63616c6cU;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x65U;
                } else {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x7265616bU;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6562U;
                }
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x200073U == (0xcfffffffU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                          | (0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                         | (0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                        | (0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                       | (0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                      | (0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                     | (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                    | (0x2000033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) {
            if ((0x200073U == (0xcfffffffU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x65726574U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73727277U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73727273U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x73727263U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72727769U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72727369U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6373U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72726369U;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6373U;
                } else {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6d756cU;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                }
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        } else if (((((((((0x2001033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                          | (0x2002033U == (0xfe00707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                         | (0x2003033U == (0xfe00707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                        | (0x2004033U == (0xfe00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                       | (0x2005033U == (0xfe00707fU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                      | (0x2006033U == (0xfe00707fU 
                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                     | (0x2007033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                    | (0x100fU == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) {
            if ((0x2001033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6d756c68U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2002033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x6c687375U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6d75U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2003033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x756c6875U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0x6dU;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2004033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x646976U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2005033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x64697675U;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else if ((0x2006033U == (0xfe00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72656dU;
                vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            } else {
                if ((0x2007033U == (0xfe00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x72656d75U;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                } else {
                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x63652e69U;
                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x66656eU;
                }
                vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
            }
        }
        vlSelfRef.__PVT__dbg_inst_ra[0U] = vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif.__VdfgExtracted_h4ff6f0a0__0[0U];
        vlSelfRef.__PVT__dbg_inst_ra[1U] = vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif.__VdfgExtracted_h4ff6f0a0__0[1U];
        vlSelfRef.__PVT__dbg_inst_ra[2U] = vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif.__VdfgExtracted_h4ff6f0a0__0[2U];
        vlSelfRef.__PVT__dbg_inst_rb[0U] = vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif.__VdfgExtracted_hf1ea1c82__0[0U];
        vlSelfRef.__PVT__dbg_inst_rb[1U] = vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif.__VdfgExtracted_hf1ea1c82__0[1U];
        vlSelfRef.__PVT__dbg_inst_rb[2U] = vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif.__VdfgExtracted_hf1ea1c82__0[2U];
        vlSelfRef.__PVT__dbg_inst_rd[0U] = vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif.__VdfgExtracted_h26d6b5e8__0[0U];
        vlSelfRef.__PVT__dbg_inst_rd[1U] = vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif.__VdfgExtracted_h26d6b5e8__0[1U];
        vlSelfRef.__PVT__dbg_inst_rd[2U] = vlSymsp->TOP__v__u_core__u_issue__u_pipe0_dec1_verif.__VdfgExtracted_h26d6b5e8__0[2U];
        if ((((((((((((((((((((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                              || (0x7013U == (0x707fU 
                                              & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                             || (0x2013U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                            || (0x3013U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                           || (0x6013U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                          || (0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                         || (0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                        || (0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                       || (0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                      || (0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                     || (0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                    || (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                   | (((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                       || (0x5013U == (0xfc00707fU 
                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                      || (0x40005013U == (0xfc00707fU 
                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) 
                  | (0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                 | (0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                | (0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
               | (0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
              | ((((((3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                     || (0x1003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                    || (0x2003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                   || (0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                  || (0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                 || (0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) 
             | (((0x23U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                 || (0x1023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                || (0x2023U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))))) {
            if ((1U & (~ ((((((((((((0x13U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                                    || (0x7013U == 
                                        (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                                   || (0x2013U == (0x707fU 
                                                   & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                                  || (0x3013U == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                                 || (0x6013U == (0x707fU 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                                || (0x4013U == (0x707fU 
                                                & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                               || (0x1073U == (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                              || (0x2073U == (0x707fU 
                                              & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                             || (0x3073U == (0x707fU 
                                             & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                            || (0x5073U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                           || (0x6073U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                          || (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))))) {
                if ((1U & (~ (((0x1013U == (0xfc00707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                               || (0x5013U == (0xfc00707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                              || (0x40005013U == (0xfc00707fU 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))))) {
                    if ((0x37U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                        if ((0x17U != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                            if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                                if ((1U == (0x1fU & 
                                            (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                             >> 7U)))) {
                                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
                                }
                            } else if ((0x67U == (0x707fU 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                                if ((IData)(((0x8000U 
                                              == (0xf8000U 
                                                  & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                                             & (0U 
                                                == 
                                                (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U)))))) {
                                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x726574U;
                                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0U;
                                    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
                                } else if ((1U == (0x1fU 
                                                   & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                      >> 7U)))) {
                                    vlSelfRef.__PVT__dbg_inst_str[0U] = 0x20285229U;
                                    vlSelfRef.__PVT__dbg_inst_str[1U] = 0x63616c6cU;
                                    vlSelfRef.__PVT__dbg_inst_str[2U] = 0U;
                                }
                            }
                            if ((0x6fU != (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                                if ((0x67U != (0x707fU 
                                               & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                                    if ((1U & (~ ((
                                                   ((((3U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                                                      || (0x1003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                                                     || (0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                                                    || (0x4003U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                                                   || (0x5003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                                                  || (0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))))) {
                                        vlSelfRef.__PVT__dbg_inst_rd[0U] = 0x2dU;
                                        vlSelfRef.__PVT__dbg_inst_rd[1U] = 0U;
                                        vlSelfRef.__PVT__dbg_inst_rd[2U] = 0U;
                                    }
                                }
                            }
                        }
                    }
                    if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                        vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                        vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x7063U;
                        vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
                    } else if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                        vlSelfRef.__PVT__dbg_inst_ra[0U] = 0x2dU;
                        vlSelfRef.__PVT__dbg_inst_ra[1U] = 0U;
                        vlSelfRef.__PVT__dbg_inst_ra[2U] = 0U;
                    }
                }
            }
            if (((((((((((((0x13U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                           || (0x7013U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                          || (0x2013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                         || (0x3013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                        || (0x6013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                       || (0x4013U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                      || (0x1073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                     || (0x2073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                    || (0x3073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                   || (0x5073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                  || (0x6073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                 || (0x7073U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U));
            } else if ((((0x1013U == (0xfc00707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                         || (0x5013U == (0xfc00707fU 
                                         & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                        || (0x40005013U == (0xfc00707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (0x1fU 
                                                 & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U));
            } else if ((0x37U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (0xfffff000U 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q);
            } else if ((0x17U == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (0xfffff000U 
                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q);
            } else if ((0x6fU == (0x7fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__pc_wb_q 
                                                 + 
                                                 (((- (IData)(
                                                              (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | (((0xff000U 
                                                       & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q) 
                                                      | (0x800U 
                                                         & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                            >> 9U))) 
                                                     | ((0x7e0U 
                                                         & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                              >> 0x14U))))));
            } else if ((0x67U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U));
            } else if (((((((3U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)) 
                            || (0x1003U == (0x707fU 
                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                           || (0x2003U == (0x707fU 
                                           & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                          || (0x4003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                         || (0x5003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q))) 
                        || (0x6003U == (0x707fU & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q)))) {
                vlSelfRef.__PVT__dbg_inst_rb[0U] = 0x2dU;
                vlSelfRef.__PVT__dbg_inst_rb[1U] = 0U;
                vlSelfRef.__PVT__dbg_inst_rb[2U] = 0U;
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                    >> 0x14U));
            } else {
                vlSelfRef.__PVT__dbg_inst_imm = (((- (IData)(
                                                             (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0xfe0U 
                                                     & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__opcode_wb_q 
                                                          >> 7U))));
            }
        }
    }
}
