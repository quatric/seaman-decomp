#include "../decls.h"
undefined4 FUN_8c21410c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int iVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  iVar1 = (ar4 + -1) * 0x20;
  *(undefined4 *)(iVar1 + -0x73b3f22c) = in_fr4;
  *(undefined4 *)(iVar1 + -0x73b3f228) = in_fr5;
  *(undefined4 *)(iVar1 + -0x73b3f224) = in_fr6;
  return ain0;
}

__asm__(".globl _FUN_8c21410c\n.set _FUN_8c21410c, _FUN_8c21410c_def\n");
