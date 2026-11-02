#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned ret_const_0_06d830_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("ret_const_0_06d830");
  return (unsigned)sh4_interp(0x8c06d830, ar4, ar5, ar6, ar7);
}
__asm__(".globl ret_const_0_06d830\n.set ret_const_0_06d830, ret_const_0_06d830_def\n");
}
