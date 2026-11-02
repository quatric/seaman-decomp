#include "../decls.h"
unsigned long host_memset(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long memset_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return host_memset(ar4, ar5, ar6, ar7);
}
__asm__(".globl _memset\n.set _memset, _memset_def\n");
