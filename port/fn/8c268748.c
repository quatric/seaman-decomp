#include "../decls.h"
undefined4 aica_ram_268748_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 auStack_8 [2];
  
  if (ar4 < 0x200000) {
    auStack_8[0] = ar5;
    FUN_8c1f9610(auStack_8,ar4 + 0xa0800000,4,1,0,0);
  }
  return 0;
}

__asm__(".globl _aica_ram_268748\n.set _aica_ram_268748, _aica_ram_268748_def\n");
