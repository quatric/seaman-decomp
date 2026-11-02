#include "../decls.h"
unsigned long mw_debug_printf(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long debug_printf_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return mw_debug_printf(ar4, ar5, ar6, ar7);
}
__asm__(".globl _debug_printf\n.set _debug_printf, _debug_printf_def\n");
