#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned game_init_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("game_init");
  return (unsigned)sh4_interp(0x8c0f7b70, ar4, ar5, ar6, ar7);
}
__asm__(".globl game_init\n.set game_init, game_init_def\n");
}
