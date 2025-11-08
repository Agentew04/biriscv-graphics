// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_biriscv_regfile.h"

VL_INLINE_OPT void Vriscv_top_biriscv_regfile___nba_sequent__TOP__v__u_core__u_issue__u_regfile__0(Vriscv_top_biriscv_regfile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_biriscv_regfile___nba_sequent__TOP__v__u_core__u_issue__u_regfile__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.__Vcellinp__v__rst_i) {
        vlSelfRef.__PVT__REGFILE__DOT__reg_r31_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r30_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r29_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r12_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r11_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r7_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r10_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r5_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r8_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r3_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r6_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r1_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r4_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r2_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r9_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r13_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r14_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r15_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r16_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r17_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r18_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r19_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r20_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r21_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r22_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r23_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r24_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r25_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r26_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r27_q = 0U;
        vlSelfRef.__PVT__REGFILE__DOT__reg_r28_q = 0U;
    } else {
        if ((0x1fU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r31_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0x1fU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r31_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0x1eU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r30_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0x1eU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r30_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0x1dU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r29_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0x1dU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r29_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0xcU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r12_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0xcU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r12_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0xbU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r11_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0xbU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r11_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((7U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r7_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((7U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r7_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0xaU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r10_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0xaU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r10_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((5U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r5_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((5U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r5_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((8U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r8_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((8U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r8_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((3U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r3_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((3U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r3_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((6U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r6_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((6U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r6_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((1U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r1_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((1U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r1_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((4U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r4_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((4U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r4_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((2U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r2_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((2U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r2_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((9U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r9_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((9U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r9_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0xdU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r13_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0xdU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r13_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0xeU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r14_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0xeU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r14_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0xfU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r15_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0xfU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r15_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0x10U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r16_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0x10U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r16_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0x11U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r17_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0x11U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r17_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0x12U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r18_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0x12U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r18_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0x13U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r19_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0x13U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r19_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0x14U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r20_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0x14U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r20_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0x15U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r21_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0x15U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r21_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0x16U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r22_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0x16U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r22_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0x17U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r23_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0x17U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r23_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0x18U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r24_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0x18U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r24_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0x19U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r25_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0x19U == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r25_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0x1aU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r26_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0x1aU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r26_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0x1bU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r27_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0x1bU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r27_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
        if ((0x1cU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe0_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r28_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__result_wb_q;
        } else if ((0x1cU == (IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__pipe1_rd_wb_w))) {
            vlSelfRef.__PVT__REGFILE__DOT__reg_r28_q 
                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe1_ctrl__DOT__result_wb_q;
        }
    }
}
