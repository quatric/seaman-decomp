#include "../decls.h"
undefined4 FUN_8c1f5970_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = ar5;
  uStack_c = ar6;
  uStack_8 = ar7;
  uVar1 = FUN_8c1f4a44(ar4,0xe,&uStack_10,1);
  return uVar1;
}

__asm__(".globl _FUN_8c1f5970\n.set _FUN_8c1f5970, _FUN_8c1f5970_def\n");
