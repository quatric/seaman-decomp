#include "../decls.h"
undefined4 FUN_8c25b052_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *in_r2;
  undefined4 *in_r3;
  undefined4 uVar1;
  int ar6_00;
  int ar7_00;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = *(int *)(*(int *)*in_r3 + ar4 + 8);
  ar6_00 = *(int *)(iVar2 + 0x24) + -1;
  ar7_00 = *(int *)(iVar2 + 0x28) + -1;
  (*in_r2)(0,0,ar6_00,ar7_00);
  FUN_8c20bdc0(iVar2 + 0x18,uVar1,ar6_00,ar7_00);
  uVar1 = FUN_8c20a482(0,*(undefined4 *)0x8c4aa508 + -1,*(undefined4 *)0x8c4aa50c + -1);
  return uVar1;
}

__asm__(".globl _FUN_8c25b052\n.set _FUN_8c25b052, _FUN_8c25b052_def\n");
