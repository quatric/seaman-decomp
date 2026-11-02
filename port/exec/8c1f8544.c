#include "../decls.h"
unsigned long host_rtc_read(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long aica_reg_1f8544_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return host_rtc_read(ar4, ar5, ar6, ar7);
}
__asm__(".globl _aica_reg_1f8544\n.set _aica_reg_1f8544, _aica_reg_1f8544_def\n");
