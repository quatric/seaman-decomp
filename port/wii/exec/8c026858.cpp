#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned CAnimBody_AdvanceFrame_wrapper_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("CAnimBody_AdvanceFrame_wrapper");
  return (unsigned)sh4_interp(0x8c026858, ar4, ar5, ar6, ar7);
}
__asm__(".globl CAnimBody_AdvanceFrame_wrapper\n.set CAnimBody_AdvanceFrame_wrapper, CAnimBody_AdvanceFrame_wrapper_def\n");
}
