#include "../decls.h"
int FUN_8c10b6cc_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  int *ar5_00;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint *ar5_01;
  int *ar5_02;
  uint uVar9;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar8 = 0;
  iVar3 = ar4[1];
  iVar7 = 0;
  ar5_01 = (uint *)0x0;
  if (ar5 == (undefined4 *)0x0) {
    ar5_02 = (int *)0x0;
  }
  else {
    ar5_02 = (int *)*ar5;
  }
  uStack_28 = *(undefined4 *)(iVar3 + 4);
  uStack_24 = ar4[2];
  ar5_00 = ar5_02;
  iVar1 = FUN_8c11ea3c(*ar4,ar5_02,ar6,ar7);
  if (iVar1 != 0) {
    ar5_00 = (int *)*ar4;
    iVar8 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],ar5_00,ar6,ar7);
  }
  if ((iVar8 == 0) && (ar5_02 != (int *)0x0)) {
    iVar1 = *ar5_02;
    uVar9 = *(int *)(0x8c + -4 + iVar1) + *(int *)(0x8c + iVar1);
    puVar2 = (ushort *)FUN_8c10afbe(iVar1,ar5_00,ar6,ar7);
    uVar5 = 0;
    puVar4 = puVar2;
    if (uVar9 != 0) {
      do {
        uVar5 = uVar5 + 1;
        if ((*puVar4 & 0x40) != 0) {
          iVar7 = iVar7 + 1;
        }
        puVar4 = puVar4 + 1;
      } while (uVar5 < uVar9);
    }
    iVar7 = uVar9 - iVar7;
    if (iVar7 != 0) {
      ar5_01 = (uint *)(**(code **)(iVar3 + 8))(iVar7 * 4,&uStack_28,ar6,ar7);
      if (ar5_01 == (uint *)0x0) {
        return 1;
      }
      uVar5 = 0;
      puVar6 = ar5_01;
      if (uVar9 != 0) {
        do {
          if ((puVar2[uVar5] & 0x40) == 0) {
            *puVar6 = uVar5;
            puVar6 = puVar6 + 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar9);
      }
    }
    iVar1 = FUN_8c11d6f0(*ar4,ar5_01,iVar7,ar7);
    if (iVar1 != 0) {
      iVar8 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],*ar4,iVar7,ar7);
    }
    if (ar5_01 != (uint *)0x0) {
      (**(code **)(iVar3 + 0xc))(ar5_01,&uStack_28,iVar7,ar7);
    }
  }
  ar4[0xb] = ar5;
  return iVar8;
}

__asm__(".globl _FUN_8c10b6cc\n.set _FUN_8c10b6cc, _FUN_8c10b6cc_def\n");
