#include "../decls.h"
undefined4 FUN_8c212284_def(int *ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = 0xff000038;
  *(undefined4 *)0x8c4aa210 = ar6;
  iVar2 = *(int *)(uint)ar4[2] * 4;
  uVar3 = *(uint *)(*ar4 + iVar2);
  uVar4 = uVar3 >> 0x18;
  *puVar1 = uVar4;
  *(undefined4 *)0xff00003c = uVar4;
  FUN_8c207300(0x3ffffff & uVar3 | 0xe0000000,ar5,ar7,ar7);
  *(int *)(*ar4 + iVar2) = *(int *)(*ar4 + iVar2) + (ar7 >> 2) * 4;
  return 0;
}

__asm__(".globl _FUN_8c212284\n.set _FUN_8c212284, _FUN_8c212284_def\n");
