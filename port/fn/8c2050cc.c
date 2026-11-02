#include "../decls.h"
undefined4 FUN_8c2050cc_def(int *ar4,int ar5,undefined4 *ar6,int ar7)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *ar6_00;
  int iVar8;
  ushort *puVar9;
  
  iVar8 = *ar4;
  puVar9 = (ushort *)*ar6;
  if ((iVar8 == 0) || (iVar3 = ar5, puVar9 == (ushort *)0x0)) {
    return 0;
  }
  do {
    uVar1 = *puVar9;
    iVar7 = 0;
    if ((((uVar1 & 0x20) != 0) || ((uVar1 & 0x40) != 0)) ||
       (((uVar1 & 2) == 0 &&
        (((0x80 & uVar1) != 0 || (((uVar1 & 2) == 0 && ((0x100 & uVar1) != 0))))))))
    {
      iVar7 = 1;
    }
    uVar1 = *puVar9;
    uVar5 = (uint)uVar1;
    if (((((int)0x200 & uVar5) != 0) || (((int)0x400 & uVar5) != 0)) ||
       (((uVar1 & 2) == 0 &&
        ((((int)0x800 & uVar5) != 0 ||
         (((uVar1 & 2) == 0 && (((int)0x1000 & uVar5) != 0)))))))) {
      iVar7 = 2;
    }
    if (iVar7 == 0) {
      if (iVar8 == 0) {
        return 0;
      }
      if (*(int *)(iVar8 + 0xc) < *(int *)(puVar9 + 6)) {
        do {
          iVar8 = *(int *)(iVar8 + 8);
          if (iVar8 == 0) {
            return 0;
          }
        } while (*(int *)(iVar8 + 0xc) < *(int *)(puVar9 + 6));
      }
      if (iVar8 == 0) {
        return 0;
      }
      if (puVar9 == (ushort *)0x0) {
        return 0;
      }
      if (*(int *)(puVar9 + 6) < *(int *)(iVar8 + 0xc)) {
        do {
          puVar9 = *(ushort **)(puVar9 + 4);
          if (puVar9 == (ushort *)0x0) {
            return 0;
          }
        } while (*(int *)(puVar9 + 6) < *(int *)(iVar8 + 0xc));
      }
    }
    else {
      if (*(int *)(iVar8 + 0xc) + *(int *)(iVar8 + 0x10) == *(int *)(puVar9 + 6)) {
        uVar2 = *(uint *)(iVar8 + 0xc);
        if ((int)uVar2 < 0) {
          uVar2 = ~(~uVar2 + 1 & 0x1f) + 1;
        }
        else {
          uVar2 = uVar2 & 0x1f;
        }
        if (uVar2 != 0) {
          iVar3 = FUN_8c204e40(uVar5,iVar3,ar6,ar7);
          if (iVar3 == 0) {
            return 3;
          }
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar8 + 0xc);
          *(uint *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + 0x1fU & 0xffffffe0;
          iVar4 = *(int *)(iVar8 + 0xc) - *(int *)(iVar3 + 0xc);
          *(int *)(iVar3 + 0x10) = iVar4;
          *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) - iVar4;
          if (*(int *)(iVar8 + 4) == 0) {
            FUN_8c204e92(ar4,ar5,iVar3,ar7);
          }
          else {
            FUN_8c204eb6(ar5,iVar3,*(int *)(iVar8 + 4),ar7);
          }
        }
        iVar3 = *(int *)(puVar9 + 6);
        FUN_8c204f2a(*(undefined4 *)(iVar8 + 0xc),iVar3,*(undefined4 *)(puVar9 + 8),ar7);
        iVar6 = *(int *)(puVar9 + 6);
        iVar4 = *(int *)(iVar8 + 0xc);
        *(int *)(puVar9 + 6) = iVar4;
        ar6 = (undefined4 *)(iVar6 - iVar4);
        *(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + *(int *)(puVar9 + 8);
        if (iVar7 == 1) {
          *(undefined4 *)(*(int *)(puVar9 + 10) + 0x1c) = *(undefined4 *)(puVar9 + 6);
        }
        else {
          ar6 = (undefined4 *)((uint)ar6 >> 2);
          ar7 = (int)ar6 * 4;
          iVar3 = 0;
          *(undefined4 *)(*(int *)(puVar9 + 10) + 8) = *(undefined4 *)(puVar9 + 6);
          uVar5 = 0;
          do {
            if (*(int *)(*(int *)(puVar9 + 10) + 0xc + uVar5) != 0) {
              iVar7 = *(int *)(*(int *)(puVar9 + 10) + 0xc + iVar3);
              *(int *)(iVar7 + 0x1c) = *(int *)(iVar7 + 0x1c) + (int)ar6 * -4;
            }
            uVar5 = uVar5 + 4;
            iVar3 = iVar3 + 4;
          } while (uVar5 < 0x40);
        }
        ar6_00 = *(undefined4 **)(iVar8 + 8);
        if ((ar6_00 != (undefined4 *)0x0) &&
           (*(int *)(iVar8 + 0xc) + *(int *)(iVar8 + 0x10) == ar6_00[3])) {
          *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) + ar6_00[4];
          iVar3 = ar5;
          ar6 = ar6_00;
          FUN_8c204ed2(ar4,ar5,ar6_00,ar7);
          FUN_8c204e6c(ar6_00,iVar3,ar6,ar7);
        }
      }
      if ((puVar9 != (ushort *)0x0) && (*(int *)(puVar9 + 6) < *(int *)(iVar8 + 0xc))) {
        do {
          puVar9 = *(ushort **)(puVar9 + 4);
          if (puVar9 == (ushort *)0x0) break;
        } while (*(int *)(puVar9 + 6) < *(int *)(iVar8 + 0xc));
      }
    }
    if (puVar9 == (ushort *)0x0) {
      return 0;
    }
    if (iVar8 == 0) {
      return 0;
    }
  } while( true );
}

__asm__(".globl _FUN_8c2050cc\n.set _FUN_8c2050cc, _FUN_8c2050cc_def\n");
