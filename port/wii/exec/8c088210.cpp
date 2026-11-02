#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned CAnimal_m7_088210_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("CAnimal_m7_088210");
  return (unsigned)sh4_interp(0x8c088210, ar4, ar5, ar6, ar7);
}
__asm__(".globl CAnimal_m7_088210\n.set CAnimal_m7_088210, CAnimal_m7_088210_def\n");
}
