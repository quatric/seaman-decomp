#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Vec3_ctor_copy_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Vec3_ctor_copy");
  return (unsigned)sh4_interp(0x8c022c88, ar4, ar5, ar6, ar7);
}
__asm__(".globl Vec3_ctor_copy\n.set Vec3_ctor_copy, Vec3_ctor_copy_def\n");
}
