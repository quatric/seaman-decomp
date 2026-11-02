#include "../decls.h"
unsigned long gd_check_cmd(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long syscall_1f10ec_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return gd_check_cmd(ar4, ar5, ar6, ar7);
}
__asm__(".globl _syscall_1f10ec\n.set _syscall_1f10ec, _syscall_1f10ec_def\n");
