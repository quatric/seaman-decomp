#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_64_JUNGLE_NIGHT_0e7062_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_64_JUNGLE_NIGHT_0e7062");
  return (unsigned)sh4_interp(0x8c0e705c, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_64_JUNGLE_NIGHT_0e7062\n.set s_64_JUNGLE_NIGHT_0e7062, s_64_JUNGLE_NIGHT_0e7062_def\n");
}
