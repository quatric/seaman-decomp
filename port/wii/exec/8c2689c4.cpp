#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned noop_2689c4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("noop_2689c4");
  return (unsigned)sh4_interp(0x8c2689c4, ar4, ar5, ar6, ar7);
}
__asm__(".globl noop_2689c4\n.set noop_2689c4, noop_2689c4_def\n");
}
