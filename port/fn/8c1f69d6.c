#include "../decls.h"
int FUN_8c1f69d6_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  
  iVar1 = ar5 * 0x124 + 0x210 + ar4;
  if (*(int *)(iVar1 + 0xc) != 0) {
    in_r0 = (int)0x204;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(in_r0 + ar4);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f69d6\n.set _FUN_8c1f69d6, _FUN_8c1f69d6_def\n");
