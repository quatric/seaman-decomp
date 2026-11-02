#include "../decls.h"
undefined4 FUN_8c0dff1c_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ar5;
  FUN_8c0daf80(ar4,ar5,ar6,ar7);
  FUN_8c0d063c((int)ar4 + 0x13b24,uVar2,ar6,ar7);
  FUN_8c0d98e4((int)ar4 + 0x22704,uVar2,ar6,ar7);
  FUN_8c0d6954((int)ar4 + 0xa68,uVar2,ar6,ar7);
  FUN_8c0dbdf4(ar4,uVar2,ar6,ar7);
  *(undefined4 *)(0x1020 + (int)ar4) = 0;
  FUN_8c0e3f24(ar4,uVar2,ar6,ar7);
  uVar2 = ar5;
  FUN_8c0d4fa8((int)ar4 + 0x10ac,ar5,ar6,ar7);
  if ((ar5 & 0xff) < 2) {
    uVar1 = (**(code **)(0x1c0 + *ar4))(ar4,uVar2,ar6,ar7);
  }
  else {
    uVar1 = (**(code **)(*ar4 + 0x74))(ar4,uVar2,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0dff1c\n.set _FUN_8c0dff1c, _FUN_8c0dff1c_def\n");
