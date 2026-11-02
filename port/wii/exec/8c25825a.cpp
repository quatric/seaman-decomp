#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned pvr_25825a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("pvr_25825a");
  return (unsigned)sh4_interp(0x8c25825a, ar4, ar5, ar6, ar7);
}
__asm__(".globl pvr_25825a\n.set pvr_25825a, pvr_25825a_def\n");
}
