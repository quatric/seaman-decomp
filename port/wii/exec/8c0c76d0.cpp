#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_WARNING_EXIT_0c76d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_WARNING_EXIT_0c76d0");
  return (unsigned)sh4_interp(0x8c0c76d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_WARNING_EXIT_0c76d0\n.set s_WARNING_EXIT_0c76d0, s_WARNING_EXIT_0c76d0_def\n");
}
