#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12aeec_m7_0a5af4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12aeec_m7_0a5af4");
  return (unsigned)sh4_interp(0x8c0a5af4, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12aeec_m7_0a5af4\n.set Class_12aeec_m7_0a5af4, Class_12aeec_m7_0a5af4_def\n");
}
