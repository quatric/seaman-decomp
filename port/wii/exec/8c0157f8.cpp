#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_1298b8_m6_0157f8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_1298b8_m6_0157f8");
  return (unsigned)sh4_interp(0x8c0157f8, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_1298b8_m6_0157f8\n.set Class_1298b8_m6_0157f8, Class_1298b8_m6_0157f8_def\n");
}
