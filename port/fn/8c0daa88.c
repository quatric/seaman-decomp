#include "../decls.h"
undefined4 FUN_8c0daa88_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(int *)(0x9d4 + (int)ar4) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*ar4 + 0x5c))(ar4,*(undefined4 *)(0x9d4 + (int)ar4),ar6,ar7);
    *(undefined4 *)(0x9d4 + (int)ar4) = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0daa88\n.set _FUN_8c0daa88, _FUN_8c0daa88_def\n");
