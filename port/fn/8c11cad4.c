#include "../decls.h"
undefined4 FUN_8c11cad4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar4_00;
  
  if (ar4 == 0) {
    uVar1 = 6;
  }
  else if (*(int *)(ar4 + 0x18) == 0x2d79b6f5) {
    ar4_00 = *(int *)(ar4 + 0x14);
    iVar2 = (**(code **)(ar4_00 + 0x1c))(ar4_00 + 8);
    if ((*(int *)(ar4 + 0xc) != iVar2) ||
       (iVar2 = (**(code **)(ar4_00 + 0x20))(ar4_00 + 8), *(int *)(ar4 + 0x10) != iVar2)) {
      uVar1 = FUN_8c11cd02(ar4_00,0xf,ar6,ar7);
      return uVar1;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c11cad4\n.set _FUN_8c11cad4, _FUN_8c11cad4_def\n");
