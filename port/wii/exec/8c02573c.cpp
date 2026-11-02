#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned CAnimal_m2_02573c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("CAnimal_m2_02573c");
  return (unsigned)sh4_interp(0x8c02573c, ar4, ar5, ar6, ar7);
}
__asm__(".globl CAnimal_m2_02573c\n.set CAnimal_m2_02573c, CAnimal_m2_02573c_def\n");
}
