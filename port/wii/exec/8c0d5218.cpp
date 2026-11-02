#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_GRAPHICS_ENV_0d5220_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_GRAPHICS_ENV_0d5220");
  return (unsigned)sh4_interp(0x8c0d5218, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_GRAPHICS_ENV_0d5220\n.set s_GRAPHICS_ENV_0d5220, s_GRAPHICS_ENV_0d5220_def\n");
}
