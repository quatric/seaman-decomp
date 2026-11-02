#include "../decls.h"
int FUN_8c06c9c8_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(ar4 + 0x24) = *ar5;
  vec3_copy_8c023d8c(ar4 + 0x50,ar5 + 1,ar6,ar7);
  FUN_8c023e04(ar4 + 0x5c,ar5 + 4,ar6,ar7);
  *(undefined4 *)(ar4 + 0x74) = ar5[8];
  *(undefined4 *)(0x218 + ar4) = 3;
  *(undefined4 *)(0x21c + ar4) = 0xffffffff;
  iVar1 = *(undefined4 *)0x8c2809a8;
  *(undefined4 *)0x8c2809a8 = iVar1 + 1;
  return iVar1 + 1;
}

__asm__(".globl _FUN_8c06c9c8\n.set _FUN_8c06c9c8, _FUN_8c06c9c8_def\n");
