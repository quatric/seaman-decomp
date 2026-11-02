#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned halt_baddata_wrap_1b939a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("halt_baddata_wrap_1b939a");
  return (unsigned)sh4_interp(0x8c1b939a, ar4, ar5, ar6, ar7);
}
__asm__(".globl halt_baddata_wrap_1b939a\n.set halt_baddata_wrap_1b939a, halt_baddata_wrap_1b939a_def\n");
}
