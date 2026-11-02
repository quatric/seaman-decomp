#include "../decls.h"
unsigned long gd_dma_check(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long syscall_1f1164_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return gd_dma_check(ar4, ar5, ar6, ar7);
}
__asm__(".globl _syscall_1f1164\n.set _syscall_1f1164, _syscall_1f1164_def\n");
