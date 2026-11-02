#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Vec3_set_xyz_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Vec3_set_xyz");
  return (unsigned)sh4_interp(0x8c023d68, ar4, ar5, ar6, ar7);
}
__asm__(".globl Vec3_set_xyz\n.set Vec3_set_xyz, Vec3_set_xyz_def\n");
}
