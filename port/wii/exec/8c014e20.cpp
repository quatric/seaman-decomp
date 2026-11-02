#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned vec3_clear_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("vec3_clear");
  return (unsigned)sh4_interp(0x8c014e20, ar4, ar5, ar6, ar7);
}
__asm__(".globl vec3_clear\n.set vec3_clear, vec3_clear_def\n");
}
