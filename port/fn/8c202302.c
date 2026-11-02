#include "../decls.h"
uint FUN_8c202302_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(ar4 + 0x28) == 1) {
    uVar1 = (uint)0x80;
  }
  if (*(int *)(ar4 + 4) == 1) {
    uVar1 = uVar1 | 4;
  }
  if (*(int *)(ar4 + 8) == 1) {
    uVar1 = uVar1 | 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c202302\n.set _FUN_8c202302, _FUN_8c202302_def\n");
