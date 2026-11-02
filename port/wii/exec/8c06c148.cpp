#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_herb3_pvm_06c14c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_herb3_pvm_06c14c");
  return (unsigned)sh4_interp(0x8c06c148, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_herb3_pvm_06c14c\n.set s_herb3_pvm_06c14c, s_herb3_pvm_06c14c_def\n");
}
