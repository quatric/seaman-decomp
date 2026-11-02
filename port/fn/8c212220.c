#include "../decls.h"
undefined4 FUN_8c212220_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int ar5_00;
  uint uVar3;
  uint ar6_00;
  
  ar6_00 = ((int *)(uint)ar4[2])[1];
  iVar1 = *(int *)(uint)ar4[2] * 4;
  ar5_00 = ar4[1];
  uVar2 = *(uint *)(*ar4 + iVar1);
  uVar3 = uVar2 >> 0x18;
  *(undefined4 *)0xff000038 = uVar3;
  *(undefined4 *)0xff00003c = uVar3;
  FUN_8c207300(0x3ffffff & uVar2 | 0xe0000000,ar5_00,ar6_00,ar7);
  *(uint *)(*ar4 + iVar1) = *(int *)(*ar4 + iVar1) + (ar6_00 & 0xfffffffc);
  return 0;
}

__asm__(".globl _FUN_8c212220\n.set _FUN_8c212220, _FUN_8c212220_def\n");
