#include "../decls.h"
undefined4 FUN_8c115732_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*ar4 + 0x10))(*ar4,ar4[0xe] << 3,ar6,ar7);
  *(undefined4 *)((int)0xb0 + (int)ar4) = uVar1;
  if (*(int *)((int)0xb0 + (int)ar4) == 0) {
    uVar1 = FUN_8c1204c4(ar4,0x71);
    return uVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c115732\n.set _FUN_8c115732, _FUN_8c115732_def\n");
