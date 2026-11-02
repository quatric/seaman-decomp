#include "../decls.h"
undefined4 FUN_8c11cd44_def(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0x80000000;
  iVar2 = ar5;
  if ((ar5 == 0) || (iVar1 = FUN_8c11ca24(ar5,ar5,ar6,ar7), iVar1 != 0)) {
    iVar2 = FUN_8c11c9d2(ar4,iVar2,ar6,ar7);
    if (iVar2 == 0) {
      uVar3 = 0x12;
    }
    else {
      (*(code *)(uint)ar4[0xb])(ar4[4],ar4 + 2,uVar3);
      uVar3 = *ar4;
      *ar4 = 0;
      (*(code *)(uint)ar4[0xc])(ar4[4],ar4 + 2);
    }
  }
  else {
    uVar3 = *(undefined4 *)(ar5 + 0x40);
    *(undefined4 *)(ar5 + 0x40) = 0;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11cd44\n.set _FUN_8c11cd44, _FUN_8c11cd44_def\n");
