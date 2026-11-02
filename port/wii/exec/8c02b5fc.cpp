#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned vec3_copy_8c02b5fc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("vec3_copy_8c02b5fc");
  return (unsigned)sh4_interp(0x8c02b5fc, ar4, ar5, ar6, ar7);
}
__asm__(".globl vec3_copy_8c02b5fc\n.set vec3_copy_8c02b5fc, vec3_copy_8c02b5fc_def\n");
}
