#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_FATAL_ERROR_Cannot_get_semap_1f577c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_FATAL_ERROR_Cannot_get_semap_1f577c");
  return (unsigned)sh4_interp(0x8c1f577c, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_FATAL_ERROR_Cannot_get_semap_1f577c\n.set s_FATAL_ERROR_Cannot_get_semap_1f577c, s_FATAL_ERROR_Cannot_get_semap_1f577c_def\n");
}
