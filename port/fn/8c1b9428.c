#include "../decls.h"
undefined4 FUN_8c1b9428_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int in_r1;
  int in_GBR;
  
  uVar1 = FUN_8c1ba396(ar4,ar5,ar6,ar7,*(undefined4 *)(&stack0x00000000 + -in_r1));
  *(short *)(in_GBR + 0x196) = (short)uVar1;
  uVar1 = FUN_8c1ba1a4(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1b9428\n.set _FUN_8c1b9428, _FUN_8c1b9428_def\n");
