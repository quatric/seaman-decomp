#include "../decls.h"
undefined1 * FUN_8c23ba42_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  
  puVar1 = &DAT_8c4ab278;
  puVar5 = &DAT_8c4ab280;
  puVar3 = (undefined4 *)&DAT_8c4ab284;
  puVar2 = &DAT_8c277b40;
  for (iVar4 = _DAT_8c4c1300; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar1 = (undefined1 *)(*(code *)*puVar2)(0,*puVar3,puVar5);
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c23ba42\n.set _FUN_8c23ba42, _FUN_8c23ba42_def\n");
