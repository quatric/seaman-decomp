#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_129a24_m1_019b68_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_129a24_m1_019b68");
  return (unsigned)sh4_interp(0x8c019b68, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_129a24_m1_019b68\n.set Class_129a24_m1_019b68, Class_129a24_m1_019b68_def\n");
}
