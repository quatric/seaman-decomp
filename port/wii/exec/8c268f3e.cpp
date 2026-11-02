#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_E1213_mwlRnaAddWrPos_rna_sj__268f4c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_E1213_mwlRnaAddWrPos_rna_sj__268f4c");
  return (unsigned)sh4_interp(0x8c268f3e, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_E1213_mwlRnaAddWrPos_rna_sj__268f4c\n.set s_E1213_mwlRnaAddWrPos_rna_sj__268f4c, s_E1213_mwlRnaAddWrPos_rna_sj__268f4c_def\n");
}
