#include "../decls.h"
undefined1 * FUN_8c012a24_def(undefined1 *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = ar4 + 4;
  iVar4 = 0x18;
  do {
    uVar3 = -iVar4;
    if ((int)uVar3 < 0) {
      uVar2 = (undefined1)(*ar5 >> (~uVar3 & 0x1f) + 1);
    }
    else {
      uVar2 = (undefined1)(*ar5 << (uVar3 & 0x1f));
    }
    *ar4 = uVar2;
    ar4 = ar4 + 1;
    iVar4 = iVar4 + -8;
  } while (ar4 < puVar1);
  return puVar1;
}

__asm__(".globl _FUN_8c012a24\n.set _FUN_8c012a24, _FUN_8c012a24_def\n");
