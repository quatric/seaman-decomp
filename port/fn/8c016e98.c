#include "../decls.h"
undefined4 FUN_8c016e98_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_64 [100];
  
  (**(code **)(*ar5 + 0x38))(ar5,auStack_64,ar6,ar7);
  uVar1 = FUN_8c2336e8(auStack_64,ar4 + 0x30,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016e98\n.set _FUN_8c016e98, _FUN_8c016e98_def\n");
