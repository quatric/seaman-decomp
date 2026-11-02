#include "../decls.h"
undefined4 * FUN_8c1fb664_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *unaff_r14;
  undefined4 *puVar9;
  
  uVar8 = (ar5 + 0x1fU >> 5) + 1;
  uVar7 = uVar8;
  if (*(uint *)(ar4 + -0x1c) < uVar8) {
    uVar7 = *(uint *)(ar4 + -0x1c);
  }
  FUN_8c1fb586(unaff_r14,ar5,ar6,ar7);
  puVar9 = (undefined4 *)*_DAT_8c475f04;
  puVar4 = _DAT_8c475f04;
  while( true ) {
    puVar3 = puVar9;
    if (uVar8 <= (uint)puVar3[1]) {
      if (puVar3[1] == uVar8) {
        *puVar4 = *puVar3;
      }
      else {
        iVar2 = puVar3[1] - uVar8;
        puVar3[1] = iVar2;
        puVar3 = puVar3 + iVar2 * 8;
      }
      puVar9 = puVar3 + 8;
      if (unaff_r14 != puVar9) {
        if (unaff_r14 < puVar9) {
          puVar1 = puVar3 + uVar7 * 8 + 8;
          while (puVar9 < puVar1) {
            puVar5 = puVar1 + -8;
            FUN_8c010794(0x20,puVar1,unaff_r14);
            puVar1 = puVar5;
            unaff_r14 = unaff_r14 + -8;
          }
        }
        else if (puVar9 < unaff_r14) {
          puVar5 = puVar3 + uVar7 * 8 + 8;
          puVar1 = puVar9;
          while (puVar1 < puVar5) {
            puVar6 = puVar1 + 8;
            FUN_8c010794(0x20,puVar1,unaff_r14);
            puVar1 = puVar6;
            unaff_r14 = unaff_r14 + 8;
          }
        }
      }
      puVar3[1] = uVar8;
      _DAT_8c475f04 = puVar4;
      return puVar9;
    }
    if (puVar3 == _DAT_8c475f04) break;
    puVar9 = (undefined4 *)*puVar3;
    puVar4 = puVar3;
  }
  return (undefined4 *)0;
}

__asm__(".globl _FUN_8c1fb664\n.set _FUN_8c1fb664, _FUN_8c1fb664_def\n");
