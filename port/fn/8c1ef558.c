#include "../decls.h"
undefined4 FUN_8c1ef558_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 in_r0;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 auStack_10 [2];
  
  if (*(undefined4 *)0x8c470e70 != 0) {
    iVar4 = *(undefined4 *)0x8c470e70 + -1;
    iVar2 = (int)0x10f4;
    uVar3 = (0x8c470e98 & 0x1fffffe0) + 0x20;
    *(uint *)(0xa0000000 | uVar3) = iVar4 * 0x10000 | 0x80000200;
    piVar1 = 0x8c4727b4;
    *(undefined4 *)0x8c470e90 = 1;
    *(uint *)(*(int *)(iVar2 + *piVar1) + 4) = uVar3;
    *(undefined4 *)(*(int *)(iVar2 + *piVar1) + 0x18) = 1;
    auStack_10[0] = 1;
    in_r0 = FUN_8c1f4cb8(iVar4 * 6,9,auStack_10,1,0,0);
    *(undefined4 *)0x8c470e78 = *(undefined4 *)0x8c470e70;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1ef558\n.set _FUN_8c1ef558, _FUN_8c1ef558_def\n");
