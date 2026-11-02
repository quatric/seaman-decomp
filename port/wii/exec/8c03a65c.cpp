#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12a03c_m6_03a65c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12a03c_m6_03a65c");
  return (unsigned)sh4_interp(0x8c03a65c, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12a03c_m6_03a65c\n.set Class_12a03c_m6_03a65c, Class_12a03c_m6_03a65c_def\n");
}
