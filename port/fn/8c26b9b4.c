#include "../decls.h"
undefined4 FUN_8c26b9b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(&DATA_8c278700);
  *(int *)(&DATA_8c278700) = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    uVar1 = memset(0x8c4c00b8,0,(int)0xc00);
    return uVar1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c26b9b4\n.set _FUN_8c26b9b4, _FUN_8c26b9b4_def\n");
