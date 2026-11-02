#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_gm1_Home_njd_085f50_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_gm1_Home_njd_085f50");
  return (unsigned)sh4_interp(0x8c085f4c, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_gm1_Home_njd_085f50\n.set s_gm1_Home_njd_085f50, s_gm1_Home_njd_085f50_def\n");
}
