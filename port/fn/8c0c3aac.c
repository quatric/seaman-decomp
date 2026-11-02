#include "../decls.h"
undefined4 FUN_8c0c3aac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c01538c(ar4 + 0x19c,ar5,ar6,ar7);
  uVar1 = 0;
  FUN_8c014a94(ar4 + 0x19c,0,ar6,ar7);
  uVar1 = FUN_8c01636c(ar4 + 0x1ac,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0c3aac\n.set _FUN_8c0c3aac, _FUN_8c0c3aac_def\n");
