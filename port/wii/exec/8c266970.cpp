#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned aica_ram_266970_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("aica_ram_266970");
  return (unsigned)sh4_interp(0x8c266970, ar4, ar5, ar6, ar7);
}
__asm__(".globl aica_ram_266970\n.set aica_ram_266970, aica_ram_266970_def\n");
}
