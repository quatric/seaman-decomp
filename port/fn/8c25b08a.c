#include "../decls.h"
undefined4 FUN_8c25b08a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ar7_00;
  
  iVar1 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,ar4,ar7);
  if (-1 < iVar1) {
    uVar2 = 0;
    iVar3 = iVar1 * 0x44 + DAT_8c277b08;
    ar7_00 = *(int *)(iVar3 + 0x28) + -1;
    iVar3 = *(int *)(iVar3 + 0x24) + -1;
    FUN_8c20a482(0,0,iVar3,ar7_00);
    FUN_8c20bdc0(iVar1 * 0x44 + DAT_8c277b08 + 0x18,uVar2,iVar3,ar7_00);
    uVar2 = FUN_8c20a482(0,0,_DAT_8c4aa508 + -1,_DAT_8c4aa50c + -1);
    return uVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c25b08a\n.set _FUN_8c25b08a, _FUN_8c25b08a_def\n");
