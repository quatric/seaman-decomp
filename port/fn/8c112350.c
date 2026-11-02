#include "../decls.h"
undefined4 FUN_8c112350_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (**(code **)(ar4 + 0x14))(ar4,1,0x18,ar7);
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c112350\n.set _FUN_8c112350, _FUN_8c112350_def\n");
