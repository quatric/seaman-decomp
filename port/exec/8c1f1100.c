#include "../decls.h"
unsigned long gd_exec_server(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long syscall_1f1100_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return gd_exec_server(ar4, ar5, ar6, ar7);
}
__asm__(".globl _syscall_1f1100\n.set _syscall_1f1100, _syscall_1f1100_def\n");
