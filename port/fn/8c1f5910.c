#include "../decls.h"
undefined4 FUN_8c1f5910_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = 0x10;
  uStack_8 = ar5;
  uVar1 = FUN_8c1f4a44(ar4,0xf,&uStack_c,1);
  return uVar1;
}

__asm__(".globl _FUN_8c1f5910\n.set _FUN_8c1f5910, _FUN_8c1f5910_def\n");
