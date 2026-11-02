#include "../decls.h"
undefined4 FUN_8c2022b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int unaff_r12;
  undefined4 unaff_r13;
  undefined1 *unaff_r14;
  
  iVar2 = *(int *)(ar4 + 0x28);
  uVar1 = (undefined1)unaff_r13;
  if (((iVar2 == 0) || (iVar2 == 1)) || (iVar2 == 2)) {
    *unaff_r14 = 2;
    uVar3 = FUN_8c202302(ar4,ar5,ar6,ar7);
    *(undefined1 *)(unaff_r12 + 1) = (char)uVar3;
    unaff_r14[2] = uVar1;
    unaff_r14[3] = uVar1;
  }
  else {
    if (iVar2 == 3) {
      uVar4 = 1;
    }
    else {
      if (iVar2 != 4) {
        return iVar2;
      }
      uVar4 = 3;
    }
    *unaff_r14 = uVar4;
    uVar3 = FUN_8c202330(ar4,ar5,ar6,ar7);
    *(undefined1 *)(unaff_r12 + 1) = (char)uVar3;
    unaff_r14[2] = uVar1;
    unaff_r14[3] = uVar1;
  }
  return unaff_r13;
}

__asm__(".globl _FUN_8c2022b8\n.set _FUN_8c2022b8, _FUN_8c2022b8_def\n");
