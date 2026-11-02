#include "../decls.h"
undefined4 FUN_8c25b044_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar6_00;
  int ar7_00;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = *(int *)(*DAT_8c277b04 + ar4 * 0xc + 8);
  ar6_00 = *(int *)(iVar2 + 0x24) + -1;
  ar7_00 = *(int *)(iVar2 + 0x28) + -1;
  FUN_8c20a482(0,0,ar6_00,ar7_00);
  FUN_8c20bdc0(iVar2 + 0x18,uVar1,ar6_00,ar7_00);
  uVar1 = FUN_8c20a482(0,0,_DAT_8c4aa508 + -1,_DAT_8c4aa50c + -1);
  return uVar1;
}

__asm__(".globl _FUN_8c25b044\n.set _FUN_8c25b044, _FUN_8c25b044_def\n");
