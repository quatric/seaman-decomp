#include "../decls.h"
undefined4 FUN_8c1f56f4_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = ar6 << 0x18;
  uStack_10 = ar5;
  uVar1 = FUN_8c1f4a44(ar4,10,&uStack_10,2);
  return uVar1;
}

__asm__(".globl _FUN_8c1f56f4\n.set _FUN_8c1f56f4, _FUN_8c1f56f4_def\n");
