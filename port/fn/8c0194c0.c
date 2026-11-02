#include "../decls.h"
undefined4 FUN_8c0194c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x7c) = in_fr4;
  uVar1 = FUN_8c257148((int)((*(float *)(ar4 + 0x7c) * 65536.0) / 360.0),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0194c0\n.set _FUN_8c0194c0, _FUN_8c0194c0_def\n");
