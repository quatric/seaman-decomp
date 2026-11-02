#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_E8101207_can_t_create_sj_ADX_26450a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_E8101207_can_t_create_sj_ADX_26450a");
  return (unsigned)sh4_interp(0x8c264504, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_E8101207_can_t_create_sj_ADX_26450a\n.set s_E8101207_can_t_create_sj_ADX_26450a, s_E8101207_can_t_create_sj_ADX_26450a_def\n");
}
