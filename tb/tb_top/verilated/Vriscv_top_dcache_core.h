// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vriscv_top.h for the primary calling header

#ifndef VERILATED_VRISCV_TOP_DCACHE_CORE_H_
#define VERILATED_VRISCV_TOP_DCACHE_CORE_H_  // guard

#include "systemc"
#include "verilated_sc.h"
#include "verilated.h"
class Vriscv_top_dcache_core_data_ram;
class Vriscv_top_dcache_core_tag_ram;


class Vriscv_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vriscv_top_dcache_core final : public VerilatedModule {
  public:
    // CELLS
    Vriscv_top_dcache_core_tag_ram* u_tag0;
    Vriscv_top_dcache_core_tag_ram* u_tag1;
    Vriscv_top_dcache_core_data_ram* u_data0;
    Vriscv_top_dcache_core_data_ram* u_data1;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk_i,0,0);
        VL_IN8(__PVT__rst_i,0,0);
        VL_IN8(__PVT__mem_rd_i,0,0);
        VL_IN8(__PVT__mem_wr_i,3,0);
        VL_IN8(__PVT__mem_cacheable_i,0,0);
        VL_IN8(__PVT__mem_invalidate_i,0,0);
        VL_IN8(__PVT__mem_writeback_i,0,0);
        VL_IN8(__PVT__mem_flush_i,0,0);
        VL_IN8(__PVT__outport_accept_i,0,0);
        VL_IN8(__PVT__outport_ack_i,0,0);
        VL_IN8(__PVT__outport_error_i,0,0);
        VL_OUT8(__PVT__mem_accept_o,0,0);
        VL_OUT8(__PVT__mem_ack_o,0,0);
        VL_OUT8(__PVT__mem_error_o,0,0);
        VL_OUT8(__PVT__outport_wr_o,3,0);
        VL_OUT8(__PVT__outport_rd_o,0,0);
        VL_OUT8(__PVT__outport_len_o,7,0);
        CData/*3:0*/ __PVT__next_state_r;
        CData/*3:0*/ __PVT__state_q;
        CData/*3:0*/ __PVT__mem_wr_m_q;
        CData/*0:0*/ __PVT__mem_rd_m_q;
        CData/*0:0*/ __PVT__mem_inval_m_q;
        CData/*0:0*/ __PVT__mem_writeback_m_q;
        CData/*0:0*/ __PVT__mem_flush_m_q;
        CData/*0:0*/ __PVT__replace_way_q;
        CData/*0:0*/ __PVT__evict_way_w;
        CData/*0:0*/ __PVT__tag_dirty_any_m_w;
        CData/*0:0*/ __PVT__flushing_q;
        CData/*7:0*/ __PVT__tag_addr_x_r;
        CData/*7:0*/ __PVT__tag_addr_m_r;
        CData/*0:0*/ __PVT__tag0_write_m_r;
        CData/*0:0*/ __PVT__tag0_hit_m_w;
        CData/*0:0*/ __PVT__tag1_write_m_r;
        CData/*0:0*/ __PVT__tag1_hit_m_w;
        CData/*0:0*/ __PVT__tag_hit_any_m_w;
        CData/*0:0*/ __PVT__evict_way_r;
        CData/*3:0*/ __PVT__data0_write_m_r;
        CData/*3:0*/ __PVT__data1_write_m_r;
        CData/*7:0*/ __PVT__flush_addr_q;
        CData/*0:0*/ __PVT__flush_last_q;
        CData/*0:0*/ __PVT__mem_ack_r;
        CData/*0:0*/ __PVT__pmem_rd_q;
        CData/*0:0*/ __PVT__pmem_wr0_q;
        CData/*7:0*/ __PVT__pmem_len_q;
        CData/*3:0*/ __PVT__pmem_wr_q;
        CData/*0:0*/ __PVT__error_q;
        CData/*0:0*/ __VdfgExtracted_h87545026__0;
        CData/*0:0*/ __VdfgExtracted_h3d239356__0;
        CData/*0:0*/ __VdfgRegularize_h2088a453_0_5;
        VL_IN16(__PVT__mem_req_tag_i,10,0);
        VL_OUT16(__PVT__mem_resp_tag_o,10,0);
        SData/*10:0*/ __PVT__mem_tag_m_q;
        SData/*10:0*/ __PVT__data_addr_x_r;
        SData/*10:0*/ __PVT__data_addr_m_r;
        SData/*10:0*/ __PVT__data_write_addr_q;
        VL_IN(__PVT__mem_addr_i,31,0);
        VL_IN(__PVT__mem_data_wr_i,31,0);
        VL_IN(__PVT__outport_read_data_i,31,0);
        VL_OUT(__PVT__mem_data_rd_o,31,0);
        VL_OUT(__PVT__outport_addr_o,31,0);
        VL_OUT(__PVT__outport_write_data_o,31,0);
        IData/*31:0*/ __PVT__mem_addr_m_q;
        IData/*31:0*/ __PVT__mem_data_m_q;
        IData/*20:0*/ __PVT__tag_data_in_m_r;
    };
    struct {
        IData/*31:0*/ __PVT__evict_data_r;
        IData/*26:0*/ __PVT__evict_addr_r;
        IData/*31:0*/ __PVT__data0_data_in_m_w;
        IData/*31:0*/ __PVT__data_r;
        IData/*31:0*/ __PVT__pmem_addr_q;
        IData/*31:0*/ __PVT__pmem_write_data_q;
        VlWide<3>/*79:0*/ __PVT__dbg_state;
    };

    // INTERNAL VARIABLES
    Vriscv_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vriscv_top_dcache_core(Vriscv_top__Syms* symsp, const char* v__name);
    ~Vriscv_top_dcache_core();
    VL_UNCOPYABLE(Vriscv_top_dcache_core);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
