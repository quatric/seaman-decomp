#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned aica_ram_268748_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("aica_ram_268748");
  return (unsigned)sh4_interp(0x8c268748, ar4, ar5, ar6, ar7);
}
__asm__(".globl aica_ram_268748\n.set aica_ram_268748, aica_ram_268748_def\n");
}
