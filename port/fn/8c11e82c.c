#include "../decls.h"
undefined4 FUN_8c11e82c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c11cad4(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = ar4[5];
    if (ar4[1] != 0) {
      uVar2 = FUN_8c11cd02(iVar1,9);
      return uVar2;
    }
    ar4[6] = 0;
    if (ar4[2] != 0) {
      (**(code **)(iVar1 + 0x18))(*ar4,iVar1 + 8,ar6,ar7);
    }
    (**(code **)(iVar1 + 0x18))(ar4,iVar1 + 8,ar6,ar7);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c11e82c\n.set _FUN_8c11e82c, _FUN_8c11e82c_def\n");
