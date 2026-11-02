#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned thunk_FUN_8c267b30_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("thunk_FUN_8c267b30");
  return (unsigned)sh4_interp(0x8c267cc0, ar4, ar5, ar6, ar7);
}
__asm__(".globl thunk_FUN_8c267b30\n.set thunk_FUN_8c267b30, thunk_FUN_8c267b30_def\n");
}
