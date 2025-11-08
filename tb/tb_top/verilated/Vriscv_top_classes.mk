# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vriscv_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace-fst/--trace-saif/--trace-vcd)
VM_TRACE = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing output mode in SAIF format?  0/1 (from --trace-saif)
VM_TRACE_SAIF = 0
# Tracing output mode in VCD format?  0/1 (from --trace-vcd)
VM_TRACE_VCD = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
  Vriscv_top \
  Vriscv_top___024root__DepSet_h5688f9bc__0 \
  Vriscv_top___024root__DepSet_he22d92c5__0 \
  Vriscv_top_riscv_top__DepSet_he2eff3da__0 \
  Vriscv_top_dcache__DepSet_h7de940ce__0 \
  Vriscv_top_icache__DepSet_h8106992d__0 \
  Vriscv_top_riscv_core__S1__DepSet_hbf939043__0 \
  Vriscv_top_riscv_core__S1__DepSet_h39322bd6__0 \
  Vriscv_top_dcache_core__DepSet_h4854d334__0 \
  Vriscv_top_biriscv_issue__DepSet_hbf69a5e5__0 \
  Vriscv_top_biriscv_issue__DepSet_h384c5e7c__0 \
  Vriscv_top_icache_tag_ram__DepSet_h2d1800ad__0 \
  Vriscv_top_icache_data_ram__DepSet_h22a8eed5__0 \
  Vriscv_top_biriscv_csr__SB0__DepSet_ha0c54eac__0 \
  Vriscv_top_dcache_core_tag_ram__DepSet_hd701296b__0 \
  Vriscv_top_dcache_core_data_ram__DepSet_h5e101ddd__0 \
  Vriscv_top_biriscv_csr_regfile__DepSet_hebe8177e__0 \
  Vriscv_top_biriscv_csr_regfile__DepSet_h64cdad03__0 \
  Vriscv_top_biriscv_regfile__DepSet_h8c137e42__0 \
  Vriscv_top_biriscv_regfile__DepSet_h0bb315d7__0 \
  Vriscv_top_biriscv_trace_sim__DepSet_h931d7b04__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
  Vriscv_top__ConstPool_0 \
  Vriscv_top___024root__Slow \
  Vriscv_top___024root__DepSet_h5688f9bc__0__Slow \
  Vriscv_top___024root__DepSet_he22d92c5__0__Slow \
  Vriscv_top_riscv_top__Slow \
  Vriscv_top_riscv_top__DepSet_he2eff3da__0__Slow \
  Vriscv_top_riscv_top__DepSet_h6dce885f__0__Slow \
  Vriscv_top_dcache__Slow \
  Vriscv_top_dcache__DepSet_h7de940ce__0__Slow \
  Vriscv_top_dcache__DepSet_hfaccfb53__0__Slow \
  Vriscv_top_icache__Slow \
  Vriscv_top_icache__DepSet_h8106992d__0__Slow \
  Vriscv_top_icache__DepSet_h0ea73334__0__Slow \
  Vriscv_top_riscv_core__S1__Slow \
  Vriscv_top_riscv_core__S1__DepSet_hbf939043__0__Slow \
  Vriscv_top_riscv_core__S1__DepSet_h39322bd6__0__Slow \
  Vriscv_top_dcache_core__Slow \
  Vriscv_top_dcache_core__DepSet_h4854d334__0__Slow \
  Vriscv_top_dcache_core__DepSet_hc779694d__0__Slow \
  Vriscv_top_biriscv_issue__Slow \
  Vriscv_top_biriscv_issue__DepSet_hbf69a5e5__0__Slow \
  Vriscv_top_biriscv_issue__DepSet_h384c5e7c__0__Slow \
  Vriscv_top_icache_tag_ram__Slow \
  Vriscv_top_icache_tag_ram__DepSet_haabdbbb4__0__Slow \
  Vriscv_top_icache_data_ram__Slow \
  Vriscv_top_icache_data_ram__DepSet_hae0da56c__0__Slow \
  Vriscv_top_biriscv_csr__SB0__Slow \
  Vriscv_top_biriscv_csr__SB0__DepSet_ha0c54eac__0__Slow \
  Vriscv_top_biriscv_csr__SB0__DepSet_h2fe905b5__0__Slow \
  Vriscv_top_dcache_core_tag_ram__Slow \
  Vriscv_top_dcache_core_tag_ram__DepSet_h60a4e2ee__0__Slow \
  Vriscv_top_dcache_core_data_ram__Slow \
  Vriscv_top_dcache_core_data_ram__DepSet_hd9b5b664__0__Slow \
  Vriscv_top_biriscv_csr_regfile__Slow \
  Vriscv_top_biriscv_csr_regfile__DepSet_hebe8177e__0__Slow \
  Vriscv_top_biriscv_csr_regfile__DepSet_h64cdad03__0__Slow \
  Vriscv_top_biriscv_regfile__Slow \
  Vriscv_top_biriscv_regfile__DepSet_h0bb315d7__0__Slow \
  Vriscv_top_biriscv_trace_sim__Slow \
  Vriscv_top_biriscv_trace_sim__DepSet_h1cc1111d__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
  Vriscv_top__Dpi \
  Vriscv_top__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
  Vriscv_top__Syms \
  Vriscv_top__Trace__0__Slow \
  Vriscv_top__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
  verilated \
  verilated_dpi \
  verilated_vcd_c \
  verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \

# Verilated -*- Makefile -*-
