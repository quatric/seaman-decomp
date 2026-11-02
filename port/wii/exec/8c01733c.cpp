#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_129938_m6_01733c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_129938_m6_01733c");
  return (unsigned)sh4_interp(0x8c01733c, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_129938_m6_01733c\n.set Class_129938_m6_01733c, Class_129938_m6_01733c_def\n");
}
