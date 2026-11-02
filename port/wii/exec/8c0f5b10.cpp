#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_Failed_to_load_textuer_FOOD_0f5b18_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_Failed_to_load_textuer_FOOD_0f5b18");
  return (unsigned)sh4_interp(0x8c0f5b10, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_Failed_to_load_textuer_FOOD_0f5b18\n.set s_Failed_to_load_textuer_FOOD_0f5b18, s_Failed_to_load_textuer_FOOD_0f5b18_def\n");
}
