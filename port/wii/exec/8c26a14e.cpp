#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long mw_debug_printf(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long debug_printf_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return mw_debug_printf(ar4, ar5, ar6, ar7);
}
__asm__(".globl debug_printf\n.set debug_printf, debug_printf_def\n");

}
