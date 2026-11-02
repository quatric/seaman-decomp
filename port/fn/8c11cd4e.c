#include "../decls.h"
undefined4 FUN_8c11cd4e_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r12;
  undefined4 uVar2;
  int unaff_r13;
  
  if ((unaff_r12 == 0) || (iVar1 = FUN_8c11ca24(unaff_r12,ar5,ar6,ar7), iVar1 != 0)) {
    iVar1 = FUN_8c11c9d2(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      uVar2 = 0x12;
    }
    else {
      (*(code *)(uint)ar4[0xb])(ar4[4],ar4 + 2,ar6,ar7);
      uVar2 = *ar4;
      *ar4 = 0;
      (*(code *)(uint)ar4[0xc])(ar4[4],ar4 + 2,ar6,ar7);
    }
  }
  else {
    uVar2 = *(undefined4 *)(unaff_r13 + 0x40);
    *(undefined4 *)(unaff_r13 + 0x40) = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c11cd4e\n.set _FUN_8c11cd4e, _FUN_8c11cd4e_def\n");
