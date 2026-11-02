#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_REACTION_TITILLATE_064bb8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_REACTION_TITILLATE_064bb8");
  return (unsigned)sh4_interp(0x8c064bb4, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_REACTION_TITILLATE_064bb8\n.set s_REACTION_TITILLATE_064bb8, s_REACTION_TITILLATE_064bb8_def\n");
}
