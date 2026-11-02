#include "../decls.h"
undefined4 FUN_8c1fdc80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  iVar2 = ar4 * 0x148;
  if ((&DAT_8c4783e2)[iVar2] == '\0') {
    return 0xffffff01;
  }
  *(undefined4 *)(iVar2 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar2 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273a78 + *(int *)(iVar2 + -0x73b87c1c) * 0x50);
  ar6_00 = *(int *)(iVar2 + -0x73b87bf0);
  ar7_00 = *(undefined4 *)(iVar2 + -0x73b87bec);
  *(int *)(iVar2 + -0x73b87bf0) = ar6_00 + 1;
  uVar1 = *(undefined4 *)(ar4 * 0x80 + -0x73b8a038);
  FUN_8c1fcdc2(ar4,uVar1,ar6_00,ar7_00);
  uVar1 = FUN_8c200a00(ar4,uVar1,ar6_00,ar7_00);
  return uVar1;
}

__asm__(".globl _FUN_8c1fdc80\n.set _FUN_8c1fdc80, _FUN_8c1fdc80_def\n");
