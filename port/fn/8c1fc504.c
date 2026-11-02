#include "../decls.h"
undefined4 FUN_8c1fc504_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_stack_ffffffe8;
  uint ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_ffffffe8 >> 0x10),(short)ar6);
  uVar3 = ar7;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,10,ar6,uVar3,ain0);
    uVar3 = ain0 & 0xffff;
    FUN_8c1fcea8(ar4,ar4,ar5,uVar3,ar7 & 0xff,0,0,ain0);
    FUN_8c1fcef8(ar4,ar5,ar5,uVar3);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc504\n.set _FUN_8c1fc504, _FUN_8c1fc504_def\n");
