#include "../decls.h"
undefined4 FUN_8c11cb5a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r13;
  int ar4_00;
  
  if (unaff_r13 == 0) {
    uVar1 = 6;
  }
  else if (*(int *)(unaff_r13 + 0x18) == 0x2783d5f5) {
    ar4_00 = *(int *)(unaff_r13 + 0x14);
    iVar2 = (**(code **)(ar4_00 + 0x1c))(ar4_00 + 8,ar5,ar6,ar7);
    if ((*(int *)(unaff_r13 + 0xc) != iVar2) ||
       (iVar2 = (**(code **)(ar4_00 + 0x20))(ar4_00 + 8,ar5,ar6,ar7),
       *(int *)(unaff_r13 + 0x10) != iVar2)) {
      uVar1 = FUN_8c11cd02(ar4_00,0x11,ar6,ar7);
      return uVar1;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0x10;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c11cb5a\n.set _FUN_8c11cb5a, _FUN_8c11cb5a_def\n");
