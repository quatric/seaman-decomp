#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_CAnimBody_SetAnimation_033a94_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_CAnimBody_SetAnimation_033a94");
  return (unsigned)sh4_interp(0x8c033a8c, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_CAnimBody_SetAnimation_033a94\n.set s_CAnimBody_SetAnimation_033a94, s_CAnimBody_SetAnimation_033a94_def\n");
}
