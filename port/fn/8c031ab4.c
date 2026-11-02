#include "../decls.h"
undefined4 FUN_8c031ab4_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *ar5_00;
  undefined8 in_dr0;
  undefined4 uVar1;
  char cVar2;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar2 = '\0';
  ar5_00 = ar5;
  FUN_8c0231c8(ar4 + 0x80,ar5,ar6,ar7);
  uStack_10 = (undefined4)in_dr0;
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar2 == '\0') {
    *(undefined4 *)ar5 = uVar1;
    uStack_10 = uVar1;
  }
  else {
    *ar5 = in_dr0;
  }
  FUN_8c02327c(ar4 + 0x80,ar5_00,ar6,ar7);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uStack_14 = uVar1;
  if (cVar2 != '\0') {
    uStack_14 = (undefined4)in_dr0;
    uStack_10 = uVar1;
  }
  if (cVar2 == '\0') {
    *(undefined4 *)((int)ar5 + 4) = uStack_14;
  }
  else {
    *(undefined8 *)((int)ar5 + 4) = CONCAT44(uStack_10,uStack_14);
  }
  return 0;
}

__asm__(".globl _FUN_8c031ab4\n.set _FUN_8c031ab4, _FUN_8c031ab4_def\n");
