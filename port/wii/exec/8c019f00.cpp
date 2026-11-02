#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_1299f8_m3_019f00_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_1299f8_m3_019f00");
  return (unsigned)sh4_interp(0x8c019f00, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_1299f8_m3_019f00\n.set Class_1299f8_m3_019f00, Class_1299f8_m3_019f00_def\n");
}
