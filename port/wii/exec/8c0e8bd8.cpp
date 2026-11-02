#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned ret_const_0_0e8bd8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("ret_const_0_0e8bd8");
  return (unsigned)sh4_interp(0x8c0e8bd8, ar4, ar5, ar6, ar7);
}
__asm__(".globl ret_const_0_0e8bd8\n.set ret_const_0_0e8bd8, ret_const_0_0e8bd8_def\n");
}
