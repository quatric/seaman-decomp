#include "../decls.h"
undefined4 FUN_8c016f50_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (**(code **)(*ar5 + 0x34))(ar5,ar4 + 0x30,ar6,ar7);
  uVar1 = FUN_8c016f84(ar5,ar4 + 0x20,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016f50\n.set _FUN_8c016f50, _FUN_8c016f50_def\n");
