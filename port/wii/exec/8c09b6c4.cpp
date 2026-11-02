#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
float FUN_8c09b6c4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c09b6c4");
  sh4_interp(0x8c09b6c4, ar4, ar5, ar6, ar7); return sh4_fpu_fr0();
}
__asm__(".globl FUN_8c09b6c4\n.set FUN_8c09b6c4, FUN_8c09b6c4_def\n");
}
