#include "../decls.h"
undefined4 FUN_8c2637e8_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_10 [4];
  int iStack_c;
  
  uVar1 = FUN_8c1f3968(ar4,auStack_10,ar6,ar7);
  iStack_c = iStack_c + 0x7ff;
  if (iStack_c < 0) {
    iStack_c = iStack_c + 0x7ff;
  }
  *ar5 = iStack_c >> 0xb;
  return uVar1;
}

__asm__(".globl _FUN_8c2637e8\n.set _FUN_8c2637e8, _FUN_8c2637e8_def\n");
