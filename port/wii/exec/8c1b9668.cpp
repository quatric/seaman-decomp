#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned halt_unimplemented_wrap_1b9668_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("halt_unimplemented_wrap_1b9668");
  return (unsigned)sh4_interp(0x8c1b9668, ar4, ar5, ar6, ar7);
}
__asm__(".globl halt_unimplemented_wrap_1b9668\n.set halt_unimplemented_wrap_1b9668, halt_unimplemented_wrap_1b9668_def\n");
}
