#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12b758_m1_0e4b5c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12b758_m1_0e4b5c");
  return (unsigned)sh4_interp(0x8c0e4b5c, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12b758_m1_0e4b5c\n.set Class_12b758_m1_0e4b5c, Class_12b758_m1_0e4b5c_def\n");
}
