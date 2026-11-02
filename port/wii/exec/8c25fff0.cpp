#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned get_field_a000a4_25fff0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("get_field_a000a4_25fff0");
  return (unsigned)sh4_interp(0x8c25fff0, ar4, ar5, ar6, ar7);
}
__asm__(".globl get_field_a000a4_25fff0\n.set get_field_a000a4_25fff0, get_field_a000a4_25fff0_def\n");
}
