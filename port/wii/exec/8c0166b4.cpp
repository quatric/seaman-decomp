#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_129808_m6_0166b4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_129808_m6_0166b4");
  return (unsigned)sh4_interp(0x8c0166b4, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_129808_m6_0166b4\n.set Class_129808_m6_0166b4, Class_129808_m6_0166b4_def\n");
}
