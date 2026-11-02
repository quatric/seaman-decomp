#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_Outside_0e5e56_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_Outside_0e5e56");
  return (unsigned)sh4_interp(0x8c0e5e54, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_Outside_0e5e56\n.set s_Outside_0e5e56, s_Outside_0e5e56_def\n");
}
