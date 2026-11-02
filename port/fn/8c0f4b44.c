#include "../decls.h"
undefined4 FUN_8c0f4b44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr4;
  
  *(int *)(ar4 + 0x78) = (int)((ulonglong)in_dr4 >> 0x20);
  *(int *)(ar4 + 0x7c) = (int)in_dr4;
  uVar1 = FUN_8c219070(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f4b44\n.set _FUN_8c0f4b44, _FUN_8c0f4b44_def\n");
