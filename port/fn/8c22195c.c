#include "../decls.h"
undefined4 FUN_8c22195c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int iVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  iVar1 = (ar4 + -1) * 0x20;
  *(undefined4 *)(iVar1 + -0x73b3f10c) = in_fr4;
  *(undefined4 *)(iVar1 + -0x73b3f108) = in_fr5;
  *(undefined4 *)(iVar1 + -0x73b3f104) = in_fr6;
  return ain0;
}

__asm__(".globl _FUN_8c22195c\n.set _FUN_8c22195c, _FUN_8c22195c_def\n");
