#include "../decls.h"
undefined4 FUN_8c0f5f08_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c01538c(ar4 + 0x1b4,ar5,ar6,ar7);
  uVar1 = 0;
  FUN_8c014a94(ar4 + 0x1b4,0,ar6,ar7);
  uVar1 = FUN_8c016524(ar4 + 0x170,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f5f08\n.set _FUN_8c0f5f08, _FUN_8c0f5f08_def\n");
