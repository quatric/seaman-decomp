#include "../decls.h"
unsigned long long libgcc_divide_helper_0101e4_def(unsigned long ar4_, unsigned long ar5_, unsigned long ar6, unsigned long ar7)
{
  int ar4 = (int)ar4_, ar5 = (int)ar5_;
  if (ar5 == 0) { *(unsigned *)0x8c2787a8 = 0x44e; return 0; }
  return (unsigned long long)(unsigned)(ar4 / ar5);
}
__asm__(".globl _libgcc_divide_helper_0101e4\n.set _libgcc_divide_helper_0101e4, _libgcc_divide_helper_0101e4_def\n");
