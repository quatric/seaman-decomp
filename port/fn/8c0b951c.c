#include "../decls.h"
undefined4 FUN_8c0b951c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [16];
  
  uVar2 = 10;
  (*(code *)(&memmove))
            (auStack_18,(&DATA_8c13bfe4) + 0x836,10,ar7);
  iVar1 = FUN_8c0b95a0(ar4,auStack_18,uVar2,ar7);
  if (iVar1 < 1) {
    uVar2 = 10;
    (*(code *)(&memmove))
              (auStack_18,(&DATA_8c13bfe4) + 0x841,10,ar7);
    iVar1 = FUN_8c0b95a0(ar4,auStack_18,uVar2,ar7);
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0b951c\n.set _FUN_8c0b951c, _FUN_8c0b951c_def\n");
