#include "../decls.h"
undefined4 FUN_8c268650_def(uint ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 auStack_8 [8];
  
  if ((int)ar4 < 0x200000) {
    aica_ram_2686d4(ar4 & 0xfffffffc,auStack_8,ar6,ar7);
    *ar5 = auStack_8[ar4 & 3];
  }
  return 0;
}

__asm__(".globl _FUN_8c268650\n.set _FUN_8c268650, _FUN_8c268650_def\n");
