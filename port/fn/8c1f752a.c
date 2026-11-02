#include "../decls.h"
uint FUN_8c1f752a_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < ar5) {
    do {
      bVar1 = *ar4;
      ar4 = ar4 + 1;
      ar5 = ar5 + -1;
      uVar2 = uVar2 << 8 | (uint)bVar1;
    } while (ar5 != 0);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f752a\n.set _FUN_8c1f752a, _FUN_8c1f752a_def\n");
