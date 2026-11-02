#include "../decls.h"
undefined4 aica_ram_2686d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 < 0x200000) {
    FUN_8c1f92c0(ar4 + 0xa0800000,ar5,4,1,0,0);
  }
  return 0;
}

__asm__(".globl _aica_ram_2686d4\n.set _aica_ram_2686d4, _aica_ram_2686d4_def\n");
