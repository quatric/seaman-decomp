#include "../decls.h"
undefined4 FUN_8c1f4ec6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = 0x8c4727b4;
  iVar2 = (int)0xfcc;
  iVar3 = *(undefined4 *)0x8c4727b4;
  *(int *)(iVar2 + iVar3) = *(int *)(iVar2 + iVar3) + *(int *)(iVar2 + 0xc + iVar3) * 4;
  **(uint **)(iVar2 + *piVar1) = ar4 << 0x10 | (int)0x300;
  *(undefined4 *)(iVar2 + 0xc + *piVar1) = 1;
  *(int *)(iVar2 + 0x10 + *piVar1) = *(int *)(iVar2 + 0x10 + *piVar1) + 4;
  return 0;
}

__asm__(".globl _FUN_8c1f4ec6\n.set _FUN_8c1f4ec6, _FUN_8c1f4ec6_def\n");
