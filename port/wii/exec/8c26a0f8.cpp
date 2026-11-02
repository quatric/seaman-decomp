#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned noop_26a0f8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("noop_26a0f8");
  return (unsigned)sh4_interp(0x8c26a0f8, ar4, ar5, ar6, ar7);
}
__asm__(".globl noop_26a0f8\n.set noop_26a0f8, noop_26a0f8_def\n");
}
