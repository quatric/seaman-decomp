#include "../decls.h"
undefined4 * FUN_8c1fb4c2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar4 = (ar4 + 0x1fU >> 5) + 1;
  puVar1 = (undefined4 *)*_DAT_8c475f04;
  puVar5 = _DAT_8c475f04;
  while( true ) {
    puVar3 = puVar1;
    if (uVar4 <= (uint)puVar3[1]) {
      if (puVar3[1] == uVar4) {
        *puVar5 = *puVar3;
      }
      else {
        iVar2 = puVar3[1] - uVar4;
        puVar3[1] = iVar2;
        puVar3 = puVar3 + iVar2 * 8;
        puVar3[1] = uVar4;
      }
      _DAT_8c475f04 = puVar5;
      return puVar3 + 8;
    }
    if (puVar3 == _DAT_8c475f04) break;
    puVar1 = (undefined4 *)*puVar3;
    puVar5 = puVar3;
  }
  return (undefined4 *)0;
}

__asm__(".globl _FUN_8c1fb4c2\n.set _FUN_8c1fb4c2, _FUN_8c1fb4c2_def\n");
