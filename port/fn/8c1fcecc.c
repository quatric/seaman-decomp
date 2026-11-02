#include "../decls.h"
undefined4 FUN_8c1fcecc_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  undefined4 in_r0;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = ar4 * 0x80 + 0x8c475fc0;
  puVar2 = (undefined1 *)(iVar3 + 0x4c);
  do {
    uVar1 = *ar5;
    ar5 = ar5 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (puVar2 < (undefined1 *)(iVar3 + 0x6c));
  return in_r0;
}

__asm__(".globl _FUN_8c1fcecc\n.set _FUN_8c1fcecc, _FUN_8c1fcecc_def\n");
