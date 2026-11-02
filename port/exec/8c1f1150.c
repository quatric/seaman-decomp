#include "../decls.h"
unsigned long gd_dma_req(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long syscall_1f1150_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return gd_dma_req(ar4, ar5, ar6, ar7);
}
__asm__(".globl _syscall_1f1150\n.set _syscall_1f1150, _syscall_1f1150_def\n");
