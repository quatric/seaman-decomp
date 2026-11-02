#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_44_OUTWATERCAT_0c9920_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_44_OUTWATERCAT_0c9920");
  return (unsigned)sh4_interp(0x8c0c991c, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_44_OUTWATERCAT_0c9920\n.set s_44_OUTWATERCAT_0c9920, s_44_OUTWATERCAT_0c9920_def\n");
}
