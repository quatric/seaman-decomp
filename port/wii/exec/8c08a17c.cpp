#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_GRAPHICS_MOTHLINE_08a182_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_GRAPHICS_MOTHLINE_08a182");
  return (unsigned)sh4_interp(0x8c08a17c, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_GRAPHICS_MOTHLINE_08a182\n.set s_GRAPHICS_MOTHLINE_08a182, s_GRAPHICS_MOTHLINE_08a182_def\n");
}
