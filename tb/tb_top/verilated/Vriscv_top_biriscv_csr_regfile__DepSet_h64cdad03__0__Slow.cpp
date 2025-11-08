// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_top.h for the primary calling header

#include "Vriscv_top__pch.h"
#include "Vriscv_top_biriscv_csr_regfile.h"

VL_ATTR_COLD void Vriscv_top_biriscv_csr_regfile___ctor_var_reset(Vriscv_top_biriscv_csr_regfile* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vriscv_top_biriscv_csr_regfile___ctor_var_reset\n"); );
    Vriscv_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->__PVT__clk_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11908517815223722933ull);
    vlSelf->__PVT__rst_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5726502174457611970ull);
    vlSelf->__PVT__ext_intr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7936816658220329910ull);
    vlSelf->__PVT__timer_intr_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14086070500649424613ull);
    vlSelf->__PVT__cpu_id_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17716042512655663375ull);
    vlSelf->__PVT__misa_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1795218194430829922ull);
    vlSelf->__PVT__exception_i = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12130853313480592709ull);
    vlSelf->__PVT__exception_pc_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4367809251299883802ull);
    vlSelf->__PVT__exception_addr_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8206873326730722983ull);
    vlSelf->__PVT__csr_ren_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4160156848061166607ull);
    vlSelf->__PVT__csr_raddr_i = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9012933799928420559ull);
    vlSelf->__PVT__csr_rdata_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9994589115226528162ull);
    vlSelf->__PVT__csr_waddr_i = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 13430853725906287376ull);
    vlSelf->__PVT__csr_wdata_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1601923610740566217ull);
    vlSelf->__PVT__csr_branch_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18282554067017894353ull);
    vlSelf->__PVT__csr_target_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17920179322722076055ull);
    vlSelf->__PVT__priv_o = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 977413424471612361ull);
    vlSelf->__PVT__status_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11259888103469126399ull);
    vlSelf->__PVT__satp_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11351852144089682277ull);
    vlSelf->__PVT__interrupt_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 761880671729982424ull);
    vlSelf->__PVT__csr_mepc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8912300469024302932ull);
    vlSelf->__PVT__csr_mcause_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2475974312391508953ull);
    vlSelf->__PVT__csr_sr_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11636480942508039189ull);
    vlSelf->__PVT__csr_mtvec_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6917498490170172483ull);
    vlSelf->__PVT__csr_mip_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2352073457626462460ull);
    vlSelf->__PVT__csr_mie_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4025060991301694264ull);
    vlSelf->__PVT__csr_mpriv_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7750960374107655743ull);
    vlSelf->__PVT__csr_mcycle_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10959796255019943024ull);
    vlSelf->__PVT__csr_mcycle_h_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4100677566011714612ull);
    vlSelf->__PVT__csr_mscratch_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2130500537598733536ull);
    vlSelf->__PVT__csr_mtval_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4421981254517084566ull);
    vlSelf->__PVT__csr_mtimecmp_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14667360920669187241ull);
    vlSelf->__PVT__csr_mtime_ie_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6964060437912043177ull);
    vlSelf->__PVT__csr_medeleg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18404613532138910756ull);
    vlSelf->__PVT__csr_mideleg_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14476863204005659738ull);
    vlSelf->__PVT__csr_sepc_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3828987962308212833ull);
    vlSelf->__PVT__csr_stvec_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1748561586902779527ull);
    vlSelf->__PVT__csr_scause_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16530470088314376576ull);
    vlSelf->__PVT__csr_stval_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1735638837206608350ull);
    vlSelf->__PVT__csr_satp_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17437457563691655291ull);
    vlSelf->__PVT__csr_sscratch_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4393604072883237885ull);
    vlSelf->__PVT__m_enabled_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 356325133909382512ull);
    vlSelf->__PVT__m_interrupts_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7937966725322070420ull);
    vlSelf->__PVT__s_enabled_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8410395196647610964ull);
    vlSelf->__PVT__s_interrupts_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10317929547563555151ull);
    vlSelf->__PVT__irq_priv_q = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3720668572823454618ull);
    vlSelf->__PVT__csr_mip_upd_q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1479218429812218031ull);
    vlSelf->__PVT__csr_mepc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10905623840785589150ull);
    vlSelf->__PVT__csr_mcause_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7794308365916900321ull);
    vlSelf->__PVT__csr_mtval_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13395408491760829441ull);
    vlSelf->__PVT__csr_sr_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14433495549233015149ull);
    vlSelf->__PVT__csr_mtvec_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9228904751842526200ull);
    vlSelf->__PVT__csr_mip_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14335505585088405272ull);
    vlSelf->__PVT__csr_mie_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7600183045796380083ull);
    vlSelf->__PVT__csr_mpriv_r = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4430516360512277849ull);
    vlSelf->__PVT__csr_mcycle_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 231082342683691814ull);
    vlSelf->__PVT__csr_mscratch_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8492874606594875334ull);
    vlSelf->__PVT__csr_mtimecmp_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8723940675969758911ull);
    vlSelf->__PVT__csr_mtime_ie_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4671391092657200488ull);
    vlSelf->__PVT__csr_medeleg_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14924343827292293471ull);
    vlSelf->__PVT__csr_mideleg_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3077561826692943509ull);
    vlSelf->__PVT__csr_mip_next_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3719699992058465556ull);
    vlSelf->__PVT__csr_mip_next_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11233538661788183565ull);
    vlSelf->__PVT__csr_sepc_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 467806057044844034ull);
    vlSelf->__PVT__csr_stvec_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11210345723317146431ull);
    vlSelf->__PVT__csr_scause_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12688904600876028407ull);
    vlSelf->__PVT__csr_stval_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4431550594123041206ull);
    vlSelf->__PVT__csr_satp_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7606248848705312336ull);
    vlSelf->__PVT__csr_sscratch_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6650014962856929925ull);
    vlSelf->__PVT__branch_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6269576432420957588ull);
    vlSelf->__PVT__branch_target_r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7348357966072563878ull);
    vlSelf->__Vdly__csr_mcycle_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 508630612529897484ull);
    vlSelf->__Vdly__csr_mcycle_h_q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17743635294545207290ull);
}
