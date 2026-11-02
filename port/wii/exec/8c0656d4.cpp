#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_EVENT_ENDING_0656da_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_EVENT_ENDING_0656da");
  return (unsigned)sh4_interp(0x8c0656d4, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_EVENT_ENDING_0656da\n.set s_EVENT_ENDING_0656da, s_EVENT_ENDING_0656da_def\n");
}
