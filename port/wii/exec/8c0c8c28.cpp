#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_BUGBOX_4_0c8c30_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_BUGBOX_4_0c8c30");
  return (unsigned)sh4_interp(0x8c0c8c28, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_BUGBOX_4_0c8c30\n.set s_BUGBOX_4_0c8c30, s_BUGBOX_4_0c8c30_def\n");
}
