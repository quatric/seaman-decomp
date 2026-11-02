#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long host_ret1(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long FUN_8c01b5f8_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return host_ret1(ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01b5f8\n.set FUN_8c01b5f8, FUN_8c01b5f8_def\n");

}
