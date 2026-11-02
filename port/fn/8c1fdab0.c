#include "../decls.h"
undefined4 FUN_8c1fdab0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar6_00;
  undefined4 ar7_00;
  int iVar3;
  
  iVar3 = ar4 * 0x148;
  if (*(int *)(_DAT_8c4783dc + 8) == 1) {
    uVar1 = FUN_8c1fdc80(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  if ((&DAT_8c4783e2)[iVar3] != '\0') {
    *(undefined4 *)(iVar3 + -0x73b87bf0) = 1;
    *(undefined4 *)(iVar3 + -0x73b87bec) =
         *(undefined4 *)(&DAT_8c273a78 + *(int *)(iVar3 + -0x73b87c1c) * 0x50);
    ar6_00 = *(int *)(iVar3 + -0x73b87bf0);
    ar7_00 = *(undefined4 *)(iVar3 + -0x73b87bec);
    *(int *)(iVar3 + -0x73b87bf0) = ar6_00 + 1;
    FUN_8c1fcdc2(ar4,*(undefined4 *)(ar4 * 0x80 + -0x73b8a038),ar6_00,ar7_00);
    uVar1 = *(undefined4 *)(&DAT_8c4783fc + iVar3);
    iVar2 = FUN_8c1fba98(ar4,uVar1,ar6_00,ar7_00);
    if (-1 < iVar2) {
      iVar2 = FUN_8c200cf4(&DAT_8c4783e0 + iVar3,uVar1,ar6_00,ar7_00);
      if (iVar2 < 0) {
        return 0xffffff83;
      }
      *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar3) + 0x30) =
           *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar3) + 0x1c);
      (&DAT_8c4783e9)[iVar3] = 1;
      (&DAT_8c4783e8)[iVar3] = 1;
      (&DAT_8c4783ea)[iVar3] = 0;
      (&DAT_8c4783eb)[iVar3] = 0;
      (&DAT_8c4783ec)[iVar3] = 0;
      uVar1 = FUN_8c200a00(ar4,uVar1,ar6_00,ar7_00);
      return uVar1;
    }
    (&DAT_8c4783e9)[iVar3] = 0;
    (&DAT_8c4783e8)[iVar3] = 0;
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1fdab0\n.set _FUN_8c1fdab0, _FUN_8c1fdab0_def\n");
