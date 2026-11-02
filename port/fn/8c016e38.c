#include "../decls.h"
undefined4 FUN_8c016e38_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_14 [20];
  
  (**(code **)(*ar5 + 0x34))(ar5,auStack_14,ar6,ar7);
  uVar1 = FUN_8c233d14(ar4 + 0x30,auStack_14,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016e38\n.set _FUN_8c016e38, _FUN_8c016e38_def\n");
