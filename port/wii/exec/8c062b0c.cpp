#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_REACTION_WAKED_TAP_062b14_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_REACTION_WAKED_TAP_062b14");
  return (unsigned)sh4_interp(0x8c062b0c, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_REACTION_WAKED_TAP_062b14\n.set s_REACTION_WAKED_TAP_062b14, s_REACTION_WAKED_TAP_062b14_def\n");
}
