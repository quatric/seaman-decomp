#include "../decls.h"
undefined4 FUN_8c25d028_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_1c = 0x10000000;
  uStack_18 = 0x80000000;
  uStack_14 = 0x80000000;
  uStack_10 = 0x80000000;
  uStack_c = 0x80000000;
  uStack_8 = 0x80000000;
  uVar1 = FUN_8c20a87c(ar4,&uStack_1c,0x18,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c25d028\n.set _FUN_8c25d028, _FUN_8c25d028_def\n");
