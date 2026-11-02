#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned pvr_1ef84c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("pvr_1ef84c");
  return (unsigned)sh4_interp(0x8c1ef84c, ar4, ar5, ar6, ar7);
}
__asm__(".globl pvr_1ef84c\n.set pvr_1ef84c, pvr_1ef84c_def\n");
}
