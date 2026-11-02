#include "../decls.h"
undefined4 FUN_8c2687c8_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 auStack_10 [2];
  
  if ((int)ar4 < 0x200000) {
    aica_ram_2686d4(ar4 & 0xfffffffc,auStack_10,ar6,ar7);
    *(undefined1 *)((ar4 & 3) + (int)auStack_10) = (undefined1)ar5;
    aica_ram_268788(ar4 & 0xfffffffc,auStack_10[0],ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c2687c8\n.set _FUN_8c2687c8, _FUN_8c2687c8_def\n");
