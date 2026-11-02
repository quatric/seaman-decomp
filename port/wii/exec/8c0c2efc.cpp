#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_WARNING_NOPAD_0c2f08_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_WARNING_NOPAD_0c2f08");
  return (unsigned)sh4_interp(0x8c0c2efc, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_WARNING_NOPAD_0c2f08\n.set s_WARNING_NOPAD_0c2f08, s_WARNING_NOPAD_0c2f08_def\n");
}
