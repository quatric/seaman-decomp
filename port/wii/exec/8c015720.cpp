#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_1298b8_m5_015720_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_1298b8_m5_015720");
  return (unsigned)sh4_interp(0x8c015720, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_1298b8_m5_015720\n.set Class_1298b8_m5_015720, Class_1298b8_m5_015720_def\n");
}
