#include "../decls.h"
undefined4 FUN_8c1f5816_def(undefined4 ar4,undefined4 ar5,int ar6,int ar7,uint s0)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  uint uStack_c;
  
  uStack_c = ar6 << 0x18 | ar7 << 0x10 | s0;
  uStack_10 = ar5;
  uVar1 = FUN_8c1f4a44(ar4,0xd,&uStack_10,2);
  return uVar1;
}

__asm__(".globl _FUN_8c1f5816\n.set _FUN_8c1f5816, _FUN_8c1f5816_def\n");
