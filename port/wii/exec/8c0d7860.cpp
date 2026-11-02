#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12bea8_m1_0d7860_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12bea8_m1_0d7860");
  return (unsigned)sh4_interp(0x8c0d7860, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12bea8_m1_0d7860\n.set Class_12bea8_m1_0d7860, Class_12bea8_m1_0d7860_def\n");
}
