#include "../decls.h"
int FUN_8c06f4c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c032160(ar4,ar5,ar6,ar7);
  *(undefined4 *)(0x2ac + ar4) = 0;
  *(undefined4 *)(0x2b0 + ar4) = 0;
  *(undefined4 *)(0x2b4 + ar4) = 0;
  vec3_clear(ar4 + 0x244,ar5,ar6,ar7);
  vec3_clear(ar4 + 0x2bc,ar5,ar6,ar7);
  iVar1 = 0x2cc;
  *(undefined4 *)(0x2cc + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c06f4c8\n.set _FUN_8c06f4c8, _FUN_8c06f4c8_def\n");
