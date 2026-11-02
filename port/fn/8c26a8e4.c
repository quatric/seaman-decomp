#include "../decls.h"
undefined4 FUN_8c26a8e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_20 [2];
  char cStack_1e;
  
  thunk_FUN_8c267250(*(undefined4 *)(ar4 + 0x30),0,auStack_20,ar7);
  uVar1 = libgcc_divide_helper_010468(cStack_1e * -0x77e + 0x80,0xff);
  return uVar1;
}

__asm__(".globl _FUN_8c26a8e4\n.set _FUN_8c26a8e4, _FUN_8c26a8e4_def\n");
