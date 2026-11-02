#include "../decls.h"
undefined4 FUN_8c26a956_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_20 [3];
  char cStack_1d;
  
  thunk_FUN_8c267250(*(undefined4 *)(ar4 + 0x30),ar5,auStack_20,ar7);
  uVar1 = libgcc_divide_helper_010468(cStack_1d * 0xf,0x7f);
  return uVar1;
}

__asm__(".globl _FUN_8c26a956\n.set _FUN_8c26a956, _FUN_8c26a956_def\n");
