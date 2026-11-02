#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned aica_ram_2668fc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("aica_ram_2668fc");
  return (unsigned)sh4_interp(0x8c2668fc, ar4, ar5, ar6, ar7);
}
__asm__(".globl aica_ram_2668fc\n.set aica_ram_2668fc, aica_ram_2668fc_def\n");
}
