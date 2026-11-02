#include "../decls.h"
undefined4 FUN_8c0d4fa8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if ((byte)ar5 < 2) {
    uVar1 = s_40_BUBBLE_MONO_0d4fea(ar4,ar5,ar6,ar7);
  }
  else {
    uVar1 = FUN_8c0d5040(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0d4fa8\n.set _FUN_8c0d4fa8, _FUN_8c0d4fa8_def\n");
