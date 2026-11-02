#include "../decls.h"
int FUN_8c11a88c_def(int *ar4,short *ar5,short *ar6,undefined4 ar7)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int *a7;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *piStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar4 = FUN_8c11a634(ar4,&piStack_38,ar6,ar7);
  if (uVar4 == 0) {
    iVar6 = (int)0x80;
    *(undefined4 *)(iVar6 + (int)ar4) = 0;
  }
  else {
    iStack_30 = -1;
    uVar10 = 0;
    iStack_34 = 0;
    iStack_28 = 0;
    iStack_2c = 0;
    sVar2 = *(short *)(*piStack_38 + 2);
    a7 = (int *)(int)sVar2;
    iVar7 = 0;
    if (uVar4 != 0) {
      do {
        uVar10 = uVar10 + 1;
        ar6 = (short *)(*(int *)((int)piStack_38 + iVar7) + 2);
        *ar6 = *ar6 - sVar2;
        iVar7 = iVar7 + 4;
      } while (uVar10 < uVar4);
    }
    if ((*(undefined **)((int)0x130 + (int)ar4) == (&FUN_8c11617a)) &&
       ((*(char *)((int)0xf8 + (int)ar4) == '\0' || (((uint)ar5 & 0xff) != 0)))) {
      uVar10 = 1;
      ar6 = ar5;
      iVar7 = FUN_8c11a0e8(ar4,*piStack_38,ar5,a7);
      iVar6 = iVar7;
      if ((iVar7 != 0) && (iVar5 = iVar7, 1 < *(uint *)((int)0x138 + (int)ar4))) {
        do {
          uVar8 = 1;
          iVar6 = *piStack_38;
          sVar2 = *(short *)(iVar6 + 2);
          if (1 < uVar4) {
            sVar3 = *(short *)(piStack_38[1] + 2);
            while (sVar3 < sVar2) {
              iVar9 = uVar8 - 1;
              piVar1 = piStack_38 + uVar8;
              uVar8 = uVar8 + 1;
              piStack_38[iVar9] = *piVar1;
              if (uVar4 <= uVar8) break;
              sVar3 = *(short *)(piStack_38[uVar8] + 2);
            }
          }
          piStack_38[uVar8 - 1] = iVar6;
          ar6 = ar5;
          iVar6 = FUN_8c11a0e8(ar4,*piStack_38,ar5,a7);
          *(int *)(iVar5 + 0x10) = iVar6;
          uVar10 = uVar10 + 1;
        } while ((iVar6 != 0) && (iVar5 = iVar6, uVar10 < *(uint *)((int)0x138 + (int)ar4)));
      }
      if (iVar6 != 0) {
        *(undefined4 *)(iVar6 + 0x10) = 0;
      }
    }
    else {
      uVar10 = *(uint *)((int)0x138 + (int)ar4);
      if (uVar4 <= *(uint *)((int)0x138 + (int)ar4)) {
        uVar10 = uVar4;
      }
      iVar6 = uVar10 << 2;
      iVar7 = 0;
      while (uVar10 != 0) {
        iVar6 = iVar6 + -4;
        uVar10 = uVar10 - 1;
        a7 = &iStack_30;
        ar6 = ar5;
        iVar5 = FUN_8c119c68(ar4,*(undefined4 *)((int)piStack_38 + iVar6),ar5,a7);
        if (iVar5 != 0) {
          *(int *)(iVar5 + 0x10) = iVar7;
          iVar7 = iVar5;
        }
      }
    }
    *(int *)((int)0x80 + (int)ar4) = iVar7;
    iStack_24 = *ar4;
    iVar6 = (**(code **)(iStack_24 + 0x18))(iStack_24,piStack_38,ar6,a7);
    if ((iVar7 != 0) && (((uint)ar5 & 0xff) == 0)) {
      iVar11 = iStack_28 + iStack_2c;
      iVar9 = *(int *)((int)0x1d0 + (int)ar4);
      iVar12 = (iStack_30 + *(int *)((int)0x12c + (int)ar4)) - iStack_34;
      iVar13 = *(int *)(*(int *)((int)0x12c + (int)ar4) * 4 + iVar9);
      iVar5 = *(int *)(iStack_34 * 4 + iVar9);
      iVar6 = iStack_30 * 4;
      iVar9 = *(int *)(iVar6 + iVar9);
      for (; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x10)) {
        iVar6 = (*(code *)(&FUN_8c119a18))
                          ((uint)*(ushort *)(iVar7 + 0x14) - iVar12,*(int *)(iVar7 + 8) - iVar11,
                           *(int *)(iVar7 + 4) - ((iVar13 - iVar5) + iVar9),a7);
        *(int *)(iVar7 + 4) = iVar6;
      }
    }
  }
  return iVar6;
}

__asm__(".globl _FUN_8c11a88c\n.set _FUN_8c11a88c, _FUN_8c11a88c_def\n");
