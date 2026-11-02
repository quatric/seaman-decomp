#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned noop_268d60_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("noop_268d60");
  return (unsigned)sh4_interp(0x8c268d60, ar4, ar5, ar6, ar7);
}
__asm__(".globl noop_268d60\n.set noop_268d60, noop_268d60_def\n");
}
