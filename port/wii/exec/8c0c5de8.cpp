#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_wtNumberOfItems_is_over_CGam_0c5df6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_wtNumberOfItems_is_over_CGam_0c5df6");
  return (unsigned)sh4_interp(0x8c0c5de8, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_wtNumberOfItems_is_over_CGam_0c5df6\n.set s_wtNumberOfItems_is_over_CGam_0c5df6, s_wtNumberOfItems_is_over_CGam_0c5df6_def\n");
}
