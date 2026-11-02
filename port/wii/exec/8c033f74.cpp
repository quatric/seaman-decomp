#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_CAnimBody_SetInterpolate_033f7e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_CAnimBody_SetInterpolate_033f7e");
  return (unsigned)sh4_interp(0x8c033f74, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_CAnimBody_SetInterpolate_033f7e\n.set s_CAnimBody_SetInterpolate_033f7e, s_CAnimBody_SetInterpolate_033f7e_def\n");
}
