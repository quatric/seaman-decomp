#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned ret_const_8c2785e8_26b1ca_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("ret_const_8c2785e8_26b1ca");
  return (unsigned)sh4_interp(0x8c26b1ca, ar4, ar5, ar6, ar7);
}
__asm__(".globl ret_const_8c2785e8_26b1ca\n.set ret_const_8c2785e8_26b1ca, ret_const_8c2785e8_26b1ca_def\n");
}
