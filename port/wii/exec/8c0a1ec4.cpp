#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_CMushroomerBody_AwayFrom_0a1ed0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_CMushroomerBody_AwayFrom_0a1ed0");
  return (unsigned)sh4_interp(0x8c0a1ec4, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_CMushroomerBody_AwayFrom_0a1ed0\n.set s_CMushroomerBody_AwayFrom_0a1ed0, s_CMushroomerBody_AwayFrom_0a1ed0_def\n");
}
