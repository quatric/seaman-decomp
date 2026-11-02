#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_MrEgg_Home_nj_09d47c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_MrEgg_Home_nj_09d47c");
  return (unsigned)sh4_interp(0x8c09d47c, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_MrEgg_Home_nj_09d47c\n.set s_MrEgg_Home_nj_09d47c, s_MrEgg_Home_nj_09d47c_def\n");
}
