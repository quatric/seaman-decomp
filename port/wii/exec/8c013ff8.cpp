#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long host_memset(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long memset_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return host_memset(ar4, ar5, ar6, ar7);
}
__asm__(".globl guest_memset\n.set guest_memset, memset_def\n");

}
