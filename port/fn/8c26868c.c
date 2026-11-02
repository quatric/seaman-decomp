#include "../decls.h"
undefined4 FUN_8c26868c_def(uint ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 auStack_c [4];
  
  if ((int)ar4 < 0x200000) {
    aica_ram_2686d4(ar4 & 0xfffffffc,auStack_c,ar6,ar7);
    *ar5 = *(undefined2 *)((int)auStack_c + (ar4 & 2));
  }
  return 0;
}

__asm__(".globl _FUN_8c26868c\n.set _FUN_8c26868c, _FUN_8c26868c_def\n");
