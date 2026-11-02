#include "../decls.h"
undefined4 FUN_8c259138_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_r0;
  int iVar4;
  undefined4 *in_r2;
  uint uVar5;
  uint ar5_00;
  undefined4 ar6_00;
  uint unaff_r13;
  
  uVar2 = 0xffe7ffff;
  piVar1 = 0x8c4aabbc;
  if (*(uint *)*in_r2 != unaff_r13) {
    iVar4 = (int)0x90;
    ar6_00 = *(undefined4 *)(iVar4 + 4 + *(undefined4 *)0x8c4aabbc);
    ar5_00 = *(uint *)(iVar4 + *(undefined4 *)0x8c4aabbc) & 0xfdffff00 | 0x20000ff & unaff_r13;
    uVar5 = *(uint *)(iVar4 + 8 + *(undefined4 *)0x8c4aabbc);
    *(uint *)(iVar4 + *(undefined4 *)0x8c4aabbc) = ar5_00;
    uVar3 = 0x180000;
    *(undefined4 *)(iVar4 + 4 + *piVar1) = ar6_00;
    *(uint *)(iVar4 + 8 + *piVar1) = uVar5 & uVar2 | uVar3 & unaff_r13;
    in_r0 = FUN_8c20fe00(*piVar1,ar5_00,ar6_00,ar7);
    *(uint *)*(undefined4 *)0x8c4aabd8 = unaff_r13;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c259138\n.set _FUN_8c259138, _FUN_8c259138_def\n");
