#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_gme_Home_nj_08869c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_gme_Home_nj_08869c");
  return (unsigned)sh4_interp(0x8c08869c, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_gme_Home_nj_08869c\n.set s_gme_Home_nj_08869c, s_gme_Home_nj_08869c_def\n");
}
