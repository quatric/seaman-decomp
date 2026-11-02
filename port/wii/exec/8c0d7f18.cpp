#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_66_JUNGLE_RAIN_5_0d7f1a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_66_JUNGLE_RAIN_5_0d7f1a");
  return (unsigned)sh4_interp(0x8c0d7f18, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_66_JUNGLE_RAIN_5_0d7f1a\n.set s_66_JUNGLE_RAIN_5_0d7f1a, s_66_JUNGLE_RAIN_5_0d7f1a_def\n");
}
