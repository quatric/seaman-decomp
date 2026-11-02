#include "../decls.h"
uint FUN_8c1fda44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = (&FUN_8c1fd510);
  iVar5 = 0;
  uVar4 = 1;
  uVar3 = 0;
  do {
    iVar2 = (*(code *)puVar1)(iVar5);
    iVar5 = iVar5 + 1;
    if (iVar2 != 0) {
      uVar3 = uVar3 | uVar4;
    }
    uVar4 = uVar4 << 1;
  } while (iVar5 < 8);
  return uVar3;
}

__asm__(".globl _FUN_8c1fda44\n.set _FUN_8c1fda44, _FUN_8c1fda44_def\n");
