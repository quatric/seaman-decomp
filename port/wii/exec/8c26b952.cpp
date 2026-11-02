#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned get_field_20_26b952_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("get_field_20_26b952");
  return (unsigned)sh4_interp(0x8c26b952, ar4, ar5, ar6, ar7);
}
__asm__(".globl get_field_20_26b952\n.set get_field_20_26b952, get_field_20_26b952_def\n");
}
