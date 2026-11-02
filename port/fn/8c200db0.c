#include "../decls.h"
undefined4 FUN_8c200db0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int in_r0;
  int iVar2;
  undefined4 in_r2;
  int in_r3;
  undefined4 unaff_r10;
  int iVar3;
  int unaff_r12;
  int unaff_r13;
  int iVar4;
  int a5;
  
  puVar1 = (&FUN_8c1fbb6c);
  iVar4 = unaff_r13 + in_r3;
  iVar3 = (int)0x200;
  *(undefined4 *)(iVar4 + 0x30) = in_r2;
  *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(in_r0 + *(int *)(iVar4 + 4) * 0x50);
  a5 = 0;
  while( true ) {
    if (**(int **)(iVar4 + 0x1c) + 1 <= a5) {
      return 0;
    }
    iVar2 = (*(code *)puVar1)(unaff_r10,a5,unaff_r12,ar7);
    if (iVar2 < 0) break;
    a5 = a5 + 1;
    unaff_r12 = unaff_r12 + iVar3;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c200db0\n.set _FUN_8c200db0, _FUN_8c200db0_def\n");
