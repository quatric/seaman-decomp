#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned ret_const_3f800000_06d828_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("ret_const_3f800000_06d828");
  return (unsigned)sh4_interp(0x8c06d828, ar4, ar5, ar6, ar7);
}
__asm__(".globl ret_const_3f800000_06d828\n.set ret_const_3f800000_06d828, ret_const_3f800000_06d828_def\n");
}
