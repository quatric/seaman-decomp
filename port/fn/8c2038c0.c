#include "../decls.h"
undefined4 FUN_8c2038c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iStack_14;
  int aiStack_10 [2];
  
  if ((*(undefined4 *)0x8c4a9bb0 & 4) == 0) {
    uVar1 = FUN_8c2048aa(1,ar4,ar5,ar7);
  }
  else {
    FUN_8c204006(&iStack_14,aiStack_10,ar6,ar7);
    uVar1 = FUN_8c2048aa((uint)(iStack_14 < aiStack_10[0]),ar4,ar5,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c2038c0\n.set _FUN_8c2038c0, _FUN_8c2038c0_def\n");
