#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c10f168_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c10f168");
  return (unsigned)sh4_interp(0x8c10f168, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c10f168\n.set FUN_8c10f168, FUN_8c10f168_def\n");
}
