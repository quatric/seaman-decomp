#include "../decls.h"
undefined4 FUN_8c10b0d8_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar4 + 4);
  uStack_c = 0;
  if (ar4[1] != 0) {
    uStack_c = *(undefined4 *)(ar4[1] + 8);
  }
  uVar1 = (**(code **)(*ar4 + 0x18))(&uStack_10,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c10b0d8\n.set _FUN_8c10b0d8, _FUN_8c10b0d8_def\n");
