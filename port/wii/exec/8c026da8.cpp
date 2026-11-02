#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned CAnimBody_GetCurFrame_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("CAnimBody_GetCurFrame");
  return (unsigned)sh4_interp(0x8c026da8, ar4, ar5, ar6, ar7);
}
__asm__(".globl CAnimBody_GetCurFrame\n.set CAnimBody_GetCurFrame, CAnimBody_GetCurFrame_def\n");
}
