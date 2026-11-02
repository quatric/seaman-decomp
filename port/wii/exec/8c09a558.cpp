#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12a7f4_m3_09a558_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12a7f4_m3_09a558");
  return (unsigned)sh4_interp(0x8c09a558, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12a7f4_m3_09a558\n.set Class_12a7f4_m3_09a558, Class_12a7f4_m3_09a558_def\n");
}
