#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
float FUN_8c124d10_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c124d10");
  sh4_interp(0x8c124d10, ar4, ar5, ar6, ar7); return sh4_fpu_fr0();
}
__asm__(".globl FUN_8c124d10\n.set FUN_8c124d10, FUN_8c124d10_def\n");
}
