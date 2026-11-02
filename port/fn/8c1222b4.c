#include "../decls.h"
undefined4 FUN_8c1222b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  
  ar7_00 = 0;
  uVar2 = 0;
  uVar1 = FUN_8c120348(ar4 + 0x48,0x20,0,0);
  if (((uVar1 & 0xff) == 0) &&
     (uVar1 = FUN_8c120284(ar4,ar5,uVar2,ar7_00), (uVar1 & 0xff) == 0)) {
    uVar2 = FUN_8c11d432(ar4,1);
    return uVar2;
  }
  return 1;
}

__asm__(".globl _FUN_8c1222b4\n.set _FUN_8c1222b4, _FUN_8c1222b4_def\n");
