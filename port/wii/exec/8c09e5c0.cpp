#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_Mr3_Home_njd_09e5c2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_Mr3_Home_njd_09e5c2");
  return (unsigned)sh4_interp(0x8c09e5c0, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_Mr3_Home_njd_09e5c2\n.set s_Mr3_Home_njd_09e5c2, s_Mr3_Home_njd_09e5c2_def\n");
}
