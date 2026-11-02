#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Vec3_scale_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Vec3_scale");
  return (unsigned)sh4_interp(0x8c023b8c, ar4, ar5, ar6, ar7);
}
__asm__(".globl Vec3_scale\n.set Vec3_scale, Vec3_scale_def\n");
}
