#include "../decls.h"
undefined4 FUN_8c11ca24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  
  if (ar4 == 0) {
    return 6;
  }
  if (*(int *)(0xf0 + ar4) == 0x218df4f5) {
    iVar1 = FUN_8c11c9d2(*(undefined4 *)(0xfc + ar4),ar5,ar6,ar7);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(*(int *)(0xfc + ar4) + 0x1c))(0xf4 + ar4);
    if ((*(int *)(0xe8 + ar4) == iVar1) &&
       (iVar1 = (**(code **)(*(int *)(0xfc + ar4) + 0x20))(0xf4 + ar4),
       *(int *)(0xec + ar4) == iVar1)) {
      return 0;
    }
    ar5_00 = 2;
    uVar2 = *(undefined4 *)(0xfc + ar4);
  }
  else {
    ar5_00 = 0xb;
    uVar2 = *(undefined4 *)(0xfc + ar4);
  }
  uVar2 = FUN_8c11cd02(uVar2,ar5_00,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c11ca24\n.set _FUN_8c11ca24, _FUN_8c11ca24_def\n");
