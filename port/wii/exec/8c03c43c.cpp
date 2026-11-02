#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12a03c_m1_03c43c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12a03c_m1_03c43c");
  return (unsigned)sh4_interp(0x8c03c43c, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12a03c_m1_03c43c\n.set Class_12a03c_m1_03c43c, Class_12a03c_m1_03c43c_def\n");
}
