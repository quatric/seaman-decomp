#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_BUGBOX_3_0c8762_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_BUGBOX_3_0c8762");
  return (unsigned)sh4_interp(0x8c0c8758, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_BUGBOX_3_0c8762\n.set s_BUGBOX_3_0c8762, s_BUGBOX_3_0c8762_def\n");
}
