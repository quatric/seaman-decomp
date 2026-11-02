#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long long libgcc_divide_helper_0106dc_def(unsigned long ar4_, unsigned long ar5_, unsigned long ar6, unsigned long ar7)
{
  unsigned ar4 = (unsigned)ar4_, ar5 = (unsigned)ar5_;
  if (ar5 == 0) { *(le<unsigned>* )0x8c2787a8 = 0x44e; return 0; }
  return (unsigned long long)(unsigned)(ar4 % ar5);
}
__asm__(".globl libgcc_divide_helper_0106dc\n.set libgcc_divide_helper_0106dc, libgcc_divide_helper_0106dc_def\n");

}
