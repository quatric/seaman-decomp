#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_Cp_Home_njd_08bf2c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_Cp_Home_njd_08bf2c");
  return (unsigned)sh4_interp(0x8c08bf2c, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_Cp_Home_njd_08bf2c\n.set s_Cp_Home_njd_08bf2c, s_Cp_Home_njd_08bf2c_def\n");
}
