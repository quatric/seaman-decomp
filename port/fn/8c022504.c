#include "../decls.h"
int FUN_8c022504_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  int aiStack_10 [2];
  
  aiStack_10[0] = 0;
  ar5_00 = ar5;
  iVar1 = FUN_8c265704(aiStack_10,ar5,ar6,ar7);
  if (iVar1 == 0) {
    ar7 = 0xffffffff;
    ar6 = 0;
    iVar1 = FUN_8c265ea0(aiStack_10[0],ar5,0,0xffffffff,0);
    ar5_00 = ar5;
    if (iVar1 == 0) {
      iVar1 = FUN_8c2669f4(aiStack_10[0],ar5,ar6,ar7);
      ar5_00 = ar5;
    }
  }
  if (aiStack_10[0] != 0) {
    FUN_8c265784(aiStack_10[0],ar5_00,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c022504\n.set _FUN_8c022504, _FUN_8c022504_def\n");
