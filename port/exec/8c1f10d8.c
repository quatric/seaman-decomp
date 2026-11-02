#include "../decls.h"
unsigned long gd_req_cmd(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long syscall_1f10d8_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return gd_req_cmd(ar4, ar5, ar6, ar7);
}
__asm__(".globl _syscall_1f10d8\n.set _syscall_1f10d8, _syscall_1f10d8_def\n");
