#include "../decls.h"
int FUN_8c0f7204_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x2c);
  if (iVar1 == 2) {
    iVar1 = FUN_8c0f6ac4(ar4,ar5,ar6,ar7);
  }
  else if (iVar1 == 3) {
    iVar1 = FUN_8c0f7278(ar4,ar5,ar6,ar7);
  }
  else if (iVar1 == 4) {
    iVar1 = FUN_8c0f692c(ar4,ar5,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0f7204\n.set _FUN_8c0f7204, _FUN_8c0f7204_def\n");
