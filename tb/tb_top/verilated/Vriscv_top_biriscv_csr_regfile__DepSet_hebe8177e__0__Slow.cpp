// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top__Syms.h"
#include "Vriscv_top_biriscv_csr_regfile.h"

VL_ATTR_COLD void Vriscv_top_biriscv_csr_regfile___stl_sequent__TOP__v__u_core__u_csr__u_csrfile__0(Vriscv_top_biriscv_csr_regfile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_biriscv_csr_regfile___stl_sequent__TOP__v__u_core__u_csr__u_csrfile__0\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__csr_mcycle_r = ((IData)(1U) + vlSelfRef.__PVT__csr_mcycle_q);
    vlSelfRef.__PVT__csr_waddr_i = ((IData)(vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wr_wb_q)
                                     ? (vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__opcode_wb_q 
                                        >> 0x14U) : 0U);
    vlSelfRef.__PVT__branch_r = 0U;
    vlSelfRef.__PVT__branch_target_r = 0U;
    if ((0x20U == (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w))) {
        vlSelfRef.__PVT__branch_r = 1U;
        vlSelfRef.__PVT__branch_target_r = ((3U == (IData)(vlSelfRef.__PVT__irq_priv_q))
                                             ? vlSelfRef.__PVT__csr_mtvec_q
                                             : vlSelfRef.__PVT__csr_stvec_q);
    } else if (((0x30U <= (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)) 
                & (0x33U >= (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))) {
        vlSelfRef.__PVT__branch_r = 1U;
        vlSelfRef.__PVT__branch_target_r = ((3U == 
                                             (3U & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))
                                             ? vlSelfRef.__PVT__csr_mepc_q
                                             : vlSelfRef.__PVT__csr_sepc_q);
    } else if ((0x10U == (0x30U & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))) {
        vlSelfRef.__PVT__branch_r = 1U;
        vlSelfRef.__PVT__branch_target_r = vlSelfRef.__PVT__csr_mtvec_q;
    } else if ((0x34U == (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w))) {
        vlSelfRef.__PVT__branch_r = 1U;
        vlSelfRef.__PVT__branch_target_r = ((IData)(4U) 
                                            + vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_pc_w);
    }
    vlSelfRef.__PVT__csr_mtvec_r = vlSelfRef.__PVT__csr_mtvec_q;
    vlSelfRef.__PVT__csr_mscratch_r = vlSelfRef.__PVT__csr_mscratch_q;
    vlSelfRef.__PVT__csr_mideleg_r = vlSelfRef.__PVT__csr_mideleg_q;
    vlSelfRef.__PVT__csr_stvec_r = vlSelfRef.__PVT__csr_stvec_q;
    vlSelfRef.__PVT__csr_mie_r = vlSelfRef.__PVT__csr_mie_q;
    vlSelfRef.__PVT__csr_satp_r = vlSelfRef.__PVT__csr_satp_q;
    vlSelfRef.__PVT__csr_sscratch_r = vlSelfRef.__PVT__csr_sscratch_q;
    vlSelfRef.__PVT__csr_mtimecmp_r = vlSelfRef.__PVT__csr_mtimecmp_q;
    vlSelfRef.__PVT__csr_medeleg_r = vlSelfRef.__PVT__csr_medeleg_q;
    vlSelfRef.__PVT__csr_stval_r = vlSelfRef.__PVT__csr_stval_q;
    vlSelfRef.__PVT__csr_mtime_ie_r = vlSelfRef.__PVT__csr_mtime_ie_q;
    if ((0x20U != (0x30U & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))) {
        if ((1U & (~ ((0x30U <= (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)) 
                      & (0x33U >= (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))))) {
            if ((0x10U != (0x30U & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                            if ((0x100U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                                                vlSelfRef.__PVT__csr_mtvec_r 
                                                                    = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.__PVT__csr_waddr_i)))) {
                                                                vlSelfRef.__PVT__csr_mie_r 
                                                                    = 
                                                                    (0xaaaU 
                                                                     & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q);
                                                            }
                                                        }
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                                                vlSelfRef.__PVT__csr_mideleg_r 
                                                                    = 
                                                                    (0xffffU 
                                                                     & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q);
                                                            }
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.__PVT__csr_waddr_i)))) {
                                                                vlSelfRef.__PVT__csr_medeleg_r 
                                                                    = 
                                                                    (0xffffU 
                                                                     & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((0x40U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.__PVT__csr_waddr_i)))) {
                                                                vlSelfRef.__PVT__csr_mscratch_r 
                                                                    = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((0x100U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                          >> 7U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                              >> 6U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__csr_waddr_i)))) {
                                                            vlSelfRef.__PVT__csr_mie_r 
                                                                = 
                                                                ((0xfffffdddU 
                                                                  & vlSelfRef.__PVT__csr_mie_r) 
                                                                 | (0x222U 
                                                                    & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                      >> 9U)))) {
                            if ((0x100U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                              >> 7U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                                                vlSelfRef.__PVT__csr_stvec_r 
                                                                    = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((0x40U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.__PVT__csr_waddr_i)))) {
                                                                vlSelfRef.__PVT__csr_sscratch_r 
                                                                    = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((0x80U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                  >> 6U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.__PVT__csr_waddr_i)))) {
                                                                vlSelfRef.__PVT__csr_satp_r 
                                                                    = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if ((0x400U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                        if ((0x200U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                            if ((0x100U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                if ((0x80U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                    if ((0x40U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.__PVT__csr_waddr_i)))) {
                                                                vlSelfRef.__PVT__csr_mtimecmp_r 
                                                                    = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q;
                                                                vlSelfRef.__PVT__csr_mtime_ie_r = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__csr_mepc_r = vlSelfRef.__PVT__csr_mepc_q;
    vlSelfRef.__PVT__csr_sepc_r = vlSelfRef.__PVT__csr_sepc_q;
    vlSelfRef.__PVT__csr_mtval_r = vlSelfRef.__PVT__csr_mtval_q;
    vlSelfRef.__PVT__csr_sr_r = vlSelfRef.__PVT__csr_sr_q;
    vlSelfRef.__PVT__csr_mpriv_r = vlSelfRef.__PVT__csr_mpriv_q;
    if ((0x20U == (0x30U & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))) {
        if ((3U != (IData)(vlSelfRef.__PVT__irq_priv_q))) {
            vlSelfRef.__PVT__csr_stval_r = 0U;
            vlSelfRef.__PVT__csr_sepc_r = vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_pc_w;
        }
        if ((3U == (IData)(vlSelfRef.__PVT__irq_priv_q))) {
            vlSelfRef.__PVT__csr_mepc_r = vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_pc_w;
            vlSelfRef.__PVT__csr_mtval_r = 0U;
            vlSelfRef.__PVT__csr_sr_r = ((0xffffff7fU 
                                          & vlSelfRef.__PVT__csr_sr_r) 
                                         | (0x80U & 
                                            (vlSelfRef.__PVT__csr_sr_r 
                                             << 4U)));
            vlSelfRef.__PVT__csr_mpriv_r = 3U;
            vlSelfRef.__PVT__csr_sr_r = ((0xffffe7ffU 
                                          & vlSelfRef.__PVT__csr_sr_r) 
                                         | ((IData)(vlSelfRef.__PVT__csr_mpriv_q) 
                                            << 0xbU));
            vlSelfRef.__PVT__csr_sr_r = (0xfffffff7U 
                                         & vlSelfRef.__PVT__csr_sr_r);
        } else {
            vlSelfRef.__PVT__csr_sr_r = ((0xffffffdfU 
                                          & vlSelfRef.__PVT__csr_sr_r) 
                                         | (0x20U & 
                                            (vlSelfRef.__PVT__csr_sr_r 
                                             << 4U)));
            vlSelfRef.__PVT__csr_mpriv_r = 1U;
            vlSelfRef.__PVT__csr_sr_r = ((0xfffffeffU 
                                          & vlSelfRef.__PVT__csr_sr_r) 
                                         | ((1U == (IData)(vlSelfRef.__PVT__csr_mpriv_q)) 
                                            << 8U));
            vlSelfRef.__PVT__csr_sr_r = (0xfffffffdU 
                                         & vlSelfRef.__PVT__csr_sr_r);
        }
    } else {
        if ((1U & (~ ((0x30U <= (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)) 
                      & (0x33U >= (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))))) {
            if ((0x10U != (0x30U & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                  >> 0xaU)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                      >> 9U)))) {
                            if ((0x100U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                             >> 2U)))) {
                                                        if (
                                                            (2U 
                                                             & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                                                vlSelfRef.__PVT__csr_stval_r 
                                                                    = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                        }
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                                                vlSelfRef.__PVT__csr_sepc_r 
                                                                    = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((0x10U == (0x30U & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))) {
                vlSelfRef.__PVT__csr_mepc_r = vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_pc_w;
                vlSelfRef.__PVT__csr_mtval_r = ((0x20U 
                                                 & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w))
                                                 ? 0U
                                                 : 
                                                ((0x10U 
                                                  & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w))
                                                  ? 
                                                 ((8U 
                                                   & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w))
                                                   ? 
                                                  ((4U 
                                                    & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w))
                                                      ? vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_addr_w
                                                      : 0U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w))
                                                      ? vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_addr_w
                                                      : vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_pc_w))
                                                    : 0U)
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w))
                                                    ? vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_addr_w
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w))
                                                      ? 0U
                                                      : vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_addr_w)
                                                     : vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_pc_w)))
                                                  : 0U));
            } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                 >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                              >> 0xaU)))) {
                    if ((0x200U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                        if ((0x100U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                          >> 7U)))) {
                                if ((0x40U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                                            vlSelfRef.__PVT__csr_mepc_r 
                                                                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q;
                                                        }
                                                    }
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                                        if (
                                                            (1U 
                                                             & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                                            vlSelfRef.__PVT__csr_mtval_r 
                                                                = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (((0x30U <= (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)) 
             & (0x33U >= (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))) {
            if ((3U == (3U & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))) {
                vlSelfRef.__PVT__csr_mpriv_r = (3U 
                                                & (vlSelfRef.__PVT__csr_sr_r 
                                                   >> 0xbU));
                vlSelfRef.__PVT__csr_sr_r = ((0xfffffff7U 
                                              & vlSelfRef.__PVT__csr_sr_r) 
                                             | (8U 
                                                & (vlSelfRef.__PVT__csr_sr_r 
                                                   >> 4U)));
                vlSelfRef.__PVT__csr_sr_r = (0x80U 
                                             | vlSelfRef.__PVT__csr_sr_r);
                vlSelfRef.__PVT__csr_sr_r = (0xffffe7ffU 
                                             & vlSelfRef.__PVT__csr_sr_r);
            } else {
                vlSelfRef.__PVT__csr_mpriv_r = ((0x100U 
                                                 & vlSelfRef.__PVT__csr_sr_r)
                                                 ? 1U
                                                 : 0U);
                vlSelfRef.__PVT__csr_sr_r = ((0xfffffffdU 
                                              & vlSelfRef.__PVT__csr_sr_r) 
                                             | (2U 
                                                & (vlSelfRef.__PVT__csr_sr_r 
                                                   >> 4U)));
                vlSelfRef.__PVT__csr_sr_r = (0x20U 
                                             | vlSelfRef.__PVT__csr_sr_r);
                vlSelfRef.__PVT__csr_sr_r = (0xfffffeffU 
                                             & vlSelfRef.__PVT__csr_sr_r);
            }
        } else if ((0x10U == (0x30U & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))) {
            vlSelfRef.__PVT__csr_sr_r = ((0xffffff7fU 
                                          & vlSelfRef.__PVT__csr_sr_r) 
                                         | (0x80U & 
                                            (vlSelfRef.__PVT__csr_sr_r 
                                             << 4U)));
            vlSelfRef.__PVT__csr_mpriv_r = 3U;
            vlSelfRef.__PVT__csr_sr_r = ((0xffffe7ffU 
                                          & vlSelfRef.__PVT__csr_sr_r) 
                                         | ((IData)(vlSelfRef.__PVT__csr_mpriv_q) 
                                            << 0xbU));
            vlSelfRef.__PVT__csr_sr_r = (0xfffffff7U 
                                         & vlSelfRef.__PVT__csr_sr_r);
        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                             >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                    if ((0x100U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                      >> 7U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                          >> 6U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.__PVT__csr_waddr_i)))) {
                                                        vlSelfRef.__PVT__csr_sr_r 
                                                            = vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x100U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.__PVT__csr_waddr_i)))) {
                                                    vlSelfRef.__PVT__csr_sr_r 
                                                        = 
                                                        ((0xfffbfeccU 
                                                          & vlSelfRef.__PVT__csr_sr_r) 
                                                         | (0x40133U 
                                                            & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__csr_mip_next_r = vlSelfRef.__PVT__csr_mip_next_q;
    vlSelfRef.__PVT__csr_mip_r = vlSelfRef.__PVT__csr_mip_q;
    if ((0x20U != (0x30U & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))) {
        if ((1U & (~ ((0x30U <= (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)) 
                      & (0x33U >= (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))))) {
            if ((0x10U != (0x30U & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                              >> 0xbU)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                  >> 0xaU)))) {
                        if ((0x200U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                            if ((0x100U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                              >> 7U)))) {
                                    if ((0x40U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                    >> 5U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                     >> 4U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                         >> 3U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.__PVT__csr_waddr_i)))) {
                                                                vlSelfRef.__PVT__csr_mip_r 
                                                                    = 
                                                                    (0xaaaU 
                                                                     & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((0x100U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                          >> 7U)))) {
                                if ((0x40U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                     >> 3U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__csr_waddr_i)))) {
                                                            vlSelfRef.__PVT__csr_mip_r 
                                                                = 
                                                                ((0xfffffdddU 
                                                                  & vlSelfRef.__PVT__csr_mip_r) 
                                                                 | (0x222U 
                                                                    & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((IData)(vlSymsp->TOP.__Vcellinp__v__intr_i) 
         & (vlSelfRef.__PVT__csr_mideleg_q >> 0xbU))) {
        vlSelfRef.__PVT__csr_mip_next_r = (0x200U | vlSelfRef.__PVT__csr_mip_next_r);
    }
    if (((IData)(vlSymsp->TOP.__Vcellinp__v__intr_i) 
         & (~ (vlSelfRef.__PVT__csr_mideleg_q >> 0xbU)))) {
        vlSelfRef.__PVT__csr_mip_next_r = (0x800U | vlSelfRef.__PVT__csr_mip_next_r);
    }
    if ((vlSelfRef.__PVT__csr_mcycle_q == vlSelfRef.__PVT__csr_mtimecmp_q)) {
        vlSelfRef.__PVT__csr_mtime_ie_r = 0U;
        vlSelfRef.__PVT__csr_mip_next_r = ((0x80U & vlSelfRef.__PVT__csr_mideleg_q)
                                            ? ((0xffffffdfU 
                                                & vlSelfRef.__PVT__csr_mip_next_r) 
                                               | ((IData)(vlSelfRef.__PVT__csr_mtime_ie_q) 
                                                  << 5U))
                                            : ((0xffffff7fU 
                                                & vlSelfRef.__PVT__csr_mip_next_r) 
                                               | ((IData)(vlSelfRef.__PVT__csr_mtime_ie_q) 
                                                  << 7U)));
    }
    vlSelfRef.__PVT__csr_mip_r = (vlSelfRef.__PVT__csr_mip_r 
                                  | vlSelfRef.__PVT__csr_mip_next_r);
}

VL_ATTR_COLD void Vriscv_top_biriscv_csr_regfile___stl_sequent__TOP__v__u_core__u_csr__u_csrfile__1(Vriscv_top_biriscv_csr_regfile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_biriscv_csr_regfile___stl_sequent__TOP__v__u_core__u_csr__u_csrfile__1\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__csr_mcause_r = vlSelfRef.__PVT__csr_mcause_q;
    vlSelfRef.__PVT__csr_scause_r = vlSelfRef.__PVT__csr_scause_q;
    if ((0x20U == (0x30U & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))) {
        if ((3U == (IData)(vlSelfRef.__PVT__irq_priv_q))) {
            if ((8U & vlSymsp->TOP__v__u_core__u_csr.__PVT__interrupt_w)) {
                vlSelfRef.__PVT__csr_mcause_r = 0x80000003U;
            } else if ((0x80U & vlSymsp->TOP__v__u_core__u_csr.__PVT__interrupt_w)) {
                vlSelfRef.__PVT__csr_mcause_r = 0x80000007U;
            } else if ((0x800U & vlSymsp->TOP__v__u_core__u_csr.__PVT__interrupt_w)) {
                vlSelfRef.__PVT__csr_mcause_r = 0x8000000bU;
            }
        }
        if ((3U != (IData)(vlSelfRef.__PVT__irq_priv_q))) {
            if ((2U & vlSymsp->TOP__v__u_core__u_csr.__PVT__interrupt_w)) {
                vlSelfRef.__PVT__csr_scause_r = 0x80000001U;
            } else if ((0x20U & vlSymsp->TOP__v__u_core__u_csr.__PVT__interrupt_w)) {
                vlSelfRef.__PVT__csr_scause_r = 0x80000005U;
            } else if ((0x200U & vlSymsp->TOP__v__u_core__u_csr.__PVT__interrupt_w)) {
                vlSelfRef.__PVT__csr_scause_r = 0x80000009U;
            }
        }
    } else if ((1U & (~ ((0x30U <= (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)) 
                         & (0x33U >= (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))))) {
        if ((0x10U == (0x30U & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))) {
            vlSelfRef.__PVT__csr_mcause_r = (0xfU & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w));
        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                             >> 0xbU)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                          >> 0xaU)))) {
                if ((0x200U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                    if ((0x100U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                      >> 7U)))) {
                            if ((0x40U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                              >> 5U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                                    if (
                                                        (1U 
                                                         & (~ (IData)(vlSelfRef.__PVT__csr_waddr_i)))) {
                                                        vlSelfRef.__PVT__csr_mcause_r 
                                                            = 
                                                            (0x8000000fU 
                                                             & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((0x10U != (0x30U & (IData)(vlSymsp->TOP__v__u_core.__PVT__csr_writeback_exception_w)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                          >> 0xbU)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                              >> 0xaU)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                  >> 9U)))) {
                        if ((0x100U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                            if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                          >> 7U)))) {
                                if ((0x40U & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                    >> 4U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                     >> 3U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelfRef.__PVT__csr_waddr_i) 
                                                         >> 2U)))) {
                                                    if (
                                                        (2U 
                                                         & (IData)(vlSelfRef.__PVT__csr_waddr_i))) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(vlSelfRef.__PVT__csr_waddr_i)))) {
                                                            vlSelfRef.__PVT__csr_scause_r 
                                                                = 
                                                                (0x8000000fU 
                                                                 & vlSymsp->TOP__v__u_core__u_issue.__PVT__u_pipe0_ctrl__DOT__csr_wdata_wb_q);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
