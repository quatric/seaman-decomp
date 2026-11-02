#include "../decls.h"
undefined4 FUN_8c2124d0_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iStack_34;
  int iStack_30;
  byte abStack_2c [4];
  byte abStack_28 [4];
  byte abStack_24 [4];
  byte abStack_20 [8];
  
  puVar1 = (&FUN_8c23c814);
  iVar6 = *ar5 + ar4;
  iVar5 = 0;
  FUN_8c23c814(&iStack_30,iVar6,4,ar7);
  iVar7 = iVar6 + 4;
  uVar4 = 4;
  (*(code *)puVar1)(&iStack_34,iVar7,4,ar7);
  *ar5 = *ar5 + 8;
  iStack_30 = FUN_8c2124aa(iStack_30,iVar7,uVar4,ar7);
  if (iStack_30 == 0x4e4a494e) {
    *ar6 = 0x4e4a494e;
    goto LAB_8c212588;
  }
  iVar8 = 0x4e4a434d;
  if (iStack_30 != 0x4e4a434d) {
    iVar8 = 0x4e4a424d;
    if (iStack_30 == 0x4e4a424d) {
LAB_8c212580:
      *ar6 = iVar8;
      goto LAB_8c212588;
    }
    iVar8 = 0x4e4a544c;
    if (iStack_30 != 0x4e4a544c) {
      iVar8 = 0x4e4a4c49;
      if (iStack_30 == 0x4e4a4c49) goto LAB_8c212580;
      iVar8 = 0x4e4a4341;
      if (iStack_30 != 0x4e4a4341) {
        iVar8 = 0x4e4d444d;
        if (iStack_30 == 0x4e4d444d) goto LAB_8c212580;
        iVar8 = 0x4e4c494d;
        if (iStack_30 != 0x4e4c494d) {
          iVar8 = 0x4e43414d;
          if (iStack_30 == 0x4e43414d) goto LAB_8c212580;
          iVar8 = 0x4e53534d;
          if (iStack_30 != 0x4e53534d) {
            *ar6 = 0x2a2a2a2a;
            return 0;
          }
        }
      }
    }
  }
  *ar6 = iVar8;
LAB_8c212588:
  iVar7 = malloc_thunk(iStack_34,iVar7,uVar4,ar7);
  if (iVar7 == 0) {
    return 0;
  }
  (*(code *)puVar1)(iVar7,iVar6 + 8,iStack_34,ar7);
  iVar8 = iVar6 + 8 + iStack_34;
  *ar5 = *ar5 + iStack_34;
  uVar4 = 4;
  iVar6 = iVar8;
  (*(code *)puVar1)(&iStack_30,iVar8,4,ar7);
  *ar5 = *ar5 + 4;
  iStack_30 = FUN_8c2124aa(iStack_30,iVar6,uVar4,ar7);
  if (iStack_30 != 0x504f4630) {
    return iVar7;
  }
  (*(code *)puVar1)(&iStack_34,iVar8 + 4,4,ar7);
  *ar5 = *ar5 + 4;
  iVar6 = iVar8 + 8;
  while( true ) {
    do {
      iVar8 = iVar6;
      if (iStack_34 == 0) {
        return iVar7;
      }
      (*(code *)puVar1)(abStack_28,iVar8,1,ar7);
      uVar2 = (uint)0xc0;
      iVar6 = iVar8 + 1;
      *ar5 = *ar5 + 1;
      iStack_34 = iStack_34 + -1;
      uVar2 = abStack_28[0] & uVar2;
    } while (uVar2 == 0);
    if (uVar2 == 0x40) break;
    if (uVar2 == (int)0x80) {
      (*(code *)puVar1)(abStack_2c,iVar6,1,ar7);
      iVar6 = iVar8 + 2;
      iStack_34 = iStack_34 + -1;
      *ar5 = *ar5 + 1;
      uVar2 = (abStack_28[0] & 0x3f) << 8 | (uint)abStack_2c[0];
      goto LAB_8c21270c;
    }
    if (uVar2 == (int)0xc0) {
      (*(code *)puVar1)(abStack_2c,iVar6,1,ar7);
      iStack_34 = iStack_34 + -1;
      (*(code *)puVar1)(abStack_20,iVar8 + 2,1,ar7);
      iStack_34 = iStack_34 + -1;
      (*(code *)puVar1)(abStack_24,iVar8 + 3,1,ar7);
      iVar6 = iVar8 + 4;
      iStack_34 = iStack_34 + -1;
      *ar5 = *ar5 + 3;
      uVar2 = (abStack_28[0] & 0x3f) << 0x18 | (uint)abStack_2c[0] << 0x10 |
              (uint)abStack_20[0] << 8 | (uint)abStack_24[0];
LAB_8c21270c:
      iVar5 = iVar5 + uVar2 * 4;
      piVar3 = (int *)(iVar7 + iVar5);
      if (*piVar3 != 0) {
        *piVar3 = *piVar3 + iVar7;
      }
    }
  }
  uVar2 = abStack_28[0] & 0x3f;
  goto LAB_8c21270c;
}

__asm__(".globl _FUN_8c2124d0\n.set _FUN_8c2124d0, _FUN_8c2124d0_def\n");
