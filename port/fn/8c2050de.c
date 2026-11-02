#include "../decls.h"
undefined4 FUN_8c2050de_def(undefined4 ar4,int ar5,undefined4 *ar6,int ar7)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *unaff_r8;
  int unaff_r9;
  int iVar5;
  undefined4 *ar6_00;
  int iVar6;
  ushort *puVar7;
  undefined4 in_PR;
  
  iVar6 = *unaff_r8;
  puVar7 = (ushort *)*ar6;
  if ((iVar6 == 0) || (puVar7 == (ushort *)0x0)) {
    return 0;
  }
  do {
    uVar1 = *puVar7;
    iVar5 = 0;
    if ((((uVar1 & 0x20) != 0) || ((uVar1 & 0x40) != 0)) ||
       (((uVar1 & 2) == 0 &&
        (((uVar1 & 0x80) != 0 || (((uVar1 & 2) == 0 && ((uVar1 & 0x100) != 0)))))))) {
      iVar5 = 1;
    }
    uVar1 = *puVar7;
    if ((((uVar1 & 0x200) != 0) || ((uVar1 & 0x400) != 0)) ||
       (((uVar1 & 2) == 0 &&
        (((uVar1 & 0x800) != 0 || (((uVar1 & 2) == 0 && ((uVar1 & 0x1000) != 0)))))))) {
      iVar5 = 2;
    }
    if (iVar5 == 0) {
      if (iVar6 == 0) {
        return 0;
      }
      if (*(int *)(iVar6 + 0xc) < *(int *)(puVar7 + 6)) {
        do {
          iVar6 = *(int *)(iVar6 + 8);
          if (iVar6 == 0) {
            return 0;
          }
        } while (*(int *)(iVar6 + 0xc) < *(int *)(puVar7 + 6));
      }
      if (iVar6 == 0) {
        return 0;
      }
      if (puVar7 == (ushort *)0x0) {
        return 0;
      }
      if (*(int *)(puVar7 + 6) < *(int *)(iVar6 + 0xc)) {
        do {
          puVar7 = *(ushort **)(puVar7 + 4);
          if (puVar7 == (ushort *)0x0) {
            return 0;
          }
        } while (*(int *)(puVar7 + 6) < *(int *)(iVar6 + 0xc));
      }
    }
    else {
      if (*(int *)(iVar6 + 0xc) + *(int *)(iVar6 + 0x10) == *(int *)(puVar7 + 6)) {
        uVar2 = *(uint *)(iVar6 + 0xc);
        if ((int)uVar2 < 0) {
          uVar2 = ~(~uVar2 + 1 & 0x1f) + 1;
        }
        else {
          uVar2 = uVar2 & 0x1f;
        }
        if (uVar2 != 0) {
          iVar3 = FUN_8c204e40((uint)uVar1,ar5,ar6,ar7);
          if (iVar3 == 0) {
            return 3;
          }
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar6 + 0xc);
          *(uint *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + 0x1fU & 0xffffffe0;
          iVar4 = *(int *)(iVar6 + 0xc) - *(int *)(iVar3 + 0xc);
          *(int *)(iVar3 + 0x10) = iVar4;
          *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) - iVar4;
          if (*(int *)(iVar6 + 4) == 0) {
            FUN_8c204e92(unaff_r8,unaff_r9,iVar3,ar7,in_PR);
          }
          else {
            FUN_8c204eb6(unaff_r9,iVar3,*(int *)(iVar6 + 4),ar7,in_PR);
          }
        }
        ar5 = *(int *)(puVar7 + 6);
        FUN_8c204f2a(*(undefined4 *)(iVar6 + 0xc),ar5,*(undefined4 *)(puVar7 + 8),ar7);
        iVar4 = *(int *)(puVar7 + 6);
        iVar3 = *(int *)(iVar6 + 0xc);
        *(int *)(puVar7 + 6) = iVar3;
        ar6 = (undefined4 *)(iVar4 - iVar3);
        *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + *(int *)(puVar7 + 8);
        if (iVar5 == 1) {
          *(undefined4 *)(*(int *)(puVar7 + 10) + 0x1c) = *(undefined4 *)(puVar7 + 6);
        }
        else {
          ar6 = (undefined4 *)((uint)ar6 >> 2);
          ar7 = (int)ar6 * 4;
          ar5 = 0;
          *(undefined4 *)(*(int *)(puVar7 + 10) + 8) = *(undefined4 *)(puVar7 + 6);
          uVar2 = 0;
          do {
            if (*(int *)(*(int *)(puVar7 + 10) + 0xc + uVar2) != 0) {
              iVar5 = *(int *)(*(int *)(puVar7 + 10) + 0xc + ar5);
              *(int *)(iVar5 + 0x1c) = *(int *)(iVar5 + 0x1c) + (int)ar6 * -4;
            }
            uVar2 = uVar2 + 4;
            ar5 = ar5 + 4;
          } while (uVar2 < 0x40);
        }
        ar6_00 = *(undefined4 **)(iVar6 + 8);
        if ((ar6_00 != (undefined4 *)0x0) &&
           (*(int *)(iVar6 + 0xc) + *(int *)(iVar6 + 0x10) == ar6_00[3])) {
          *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + ar6_00[4];
          ar5 = unaff_r9;
          ar6 = ar6_00;
          FUN_8c204ed2(unaff_r8,unaff_r9,ar6_00,ar7,in_PR);
          FUN_8c204e6c(ar6_00,ar5,ar6,ar7,in_PR);
        }
      }
      if ((puVar7 != (ushort *)0x0) && (*(int *)(puVar7 + 6) < *(int *)(iVar6 + 0xc))) {
        do {
          puVar7 = *(ushort **)(puVar7 + 4);
          if (puVar7 == (ushort *)0x0) break;
        } while (*(int *)(puVar7 + 6) < *(int *)(iVar6 + 0xc));
      }
    }
    if (puVar7 == (ushort *)0x0) {
      return 0;
    }
    if (iVar6 == 0) {
      return 0;
    }
  } while( true );
}

__asm__(".globl _FUN_8c2050de\n.set _FUN_8c2050de, _FUN_8c2050de_def\n");
