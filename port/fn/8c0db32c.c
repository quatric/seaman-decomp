#include "../decls.h"
undefined4 FUN_8c0db32c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  undefined4 uVar1;
  undefined4 auStack_10 [2];
  
  if (ar7 == 0xe) {
    uVar1 = FUN_8c02174c(0x8c2b59d0,0x26,ar6,0xe);
  }
  else {
    auStack_10[0] = FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7);
    uVar1 = 0xd;
    FUN_8c021994(0x8c2b59d0,auStack_10[0],0xd,ar7);
    uVar1 = FUN_8c021a8c(0x8c2b59d0,auStack_10,uVar1,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0db32c\n.set _FUN_8c0db32c, _FUN_8c0db32c_def\n");
