#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long long libgcc_divide_helper_010468_def(unsigned long ar4_, unsigned long ar5_, unsigned long ar6, unsigned long ar7)
{
  int ar4 = (int)ar4_, ar5 = (int)ar5_;
  if (ar5 == 0) { *(le<unsigned>* )0x8c2787a8 = 0x44e; return 0; }
  return (unsigned long long)(unsigned)(ar4 / ar5);
}
__asm__(".globl libgcc_divide_helper_010468\n.set libgcc_divide_helper_010468, libgcc_divide_helper_010468_def\n");

}
