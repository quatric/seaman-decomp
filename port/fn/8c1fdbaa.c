#include "../decls.h"
undefined4 FUN_8c1fdbaa_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar6_00;
  undefined4 ar7_00;
  int iVar3;
  
  iVar3 = ar4 * 0x148;
  *(int *)(&DAT_8c4783fc + iVar3) = ar4 * 0x4c + -0x73b831c0;
  *(undefined4 *)(iVar3 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar3 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273abc + *(int *)(iVar3 + -0x73b87c1c) * 0x50);
  ar7_00 = *(undefined4 *)(iVar3 + -0x73b87bec);
  ar6_00 = *(int *)(iVar3 + -0x73b87bf0);
  *(int *)(iVar3 + -0x73b87bf0) = ar6_00 + 1;
  FUN_8c1fcdc2(ar4,*(undefined4 *)(ar4 * 0x80 + -0x73b8a038),ar6_00,ar7_00);
  uVar2 = *(undefined4 *)(&DAT_8c4783fc + iVar3);
  iVar1 = FUN_8c1fba98(ar4,uVar2,ar6_00,ar7_00);
  if (iVar1 < 0) {
    (&DAT_8c4783e9)[iVar3] = 0;
    (&DAT_8c4783e8)[iVar3] = 0;
LAB_8c1fdc3a:
    uVar2 = 0xffffff01;
  }
  else {
    iVar1 = FUN_8c200cf4(&DAT_8c4783e0 + iVar3,uVar2,ar6_00,ar7_00);
    if (-1 < iVar1) {
      *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar3) + 0x30) =
           *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar3) + 0x1c);
      iVar1 = FUN_8c1fd1e2(ar4,0,0x8c47e4ec,ar7_00);
      if (iVar1 < 0) goto LAB_8c1fdc3a;
      (&DAT_8c4783e9)[iVar3] = 1;
      (&DAT_8c4783ea)[iVar3] = 0;
      (&DAT_8c4783eb)[iVar3] = 0;
      (&DAT_8c4783ec)[iVar3] = 0;
      iVar1 = *(int *)(iVar3 + -0x73b87c1c);
      if (iVar1 == 0) {
        return 0xf;
      }
      if (iVar1 == 1) {
        return 0x21;
      }
      if (iVar1 == 2) {
        return 0x41;
      }
      if (iVar1 == 3) {
        return 0x7a;
      }
    }
    uVar2 = 0xffffff83;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fdbaa\n.set _FUN_8c1fdbaa, _FUN_8c1fdbaa_def\n");
