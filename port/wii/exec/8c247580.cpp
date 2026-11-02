#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned float_to_color_u8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("float_to_color_u8");
  return (unsigned)sh4_interp(0x8c247580, ar4, ar5, ar6, ar7);
}
__asm__(".globl float_to_color_u8\n.set float_to_color_u8, float_to_color_u8_def\n");
}
