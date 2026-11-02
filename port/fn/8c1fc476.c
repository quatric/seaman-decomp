#include "../decls.h"
undefined4 FUN_8c1fc476_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r14;
  undefined4 in_PR;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(unaff_r14,7,ar6,ar7,in_PR);
    uVar2 = 0;
    FUN_8c1fcea8(unaff_r14,unaff_r14,ar5,0,0,0,0,in_PR);
    FUN_8c1fcef8(unaff_r14,ar5,ar5,uVar2);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc476\n.set _FUN_8c1fc476, _FUN_8c1fc476_def\n");
