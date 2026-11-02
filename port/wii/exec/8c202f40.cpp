#include "../decls.h"
extern "C" {
unsigned host_dmac(unsigned, unsigned, unsigned, unsigned);
int sh4_dmac_202f40_def(int ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  return (int)host_dmac(ar4, ar5, ar6, ar7);
}
__asm__(".globl sh4_dmac_202f40\n.set sh4_dmac_202f40, sh4_dmac_202f40_def\n");
}
