#include "../decls.h"
int FUN_8c02257c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar7_00;
  undefined4 auStack_8 [2];
  
  iVar1 = FUN_8c2680ec(auStack_8,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c2681d0(auStack_8[0],0,0,ar7);
    FUN_8c268250(auStack_8[0],0x7f,0,ar7);
    ar7_00 = 0;
    iVar1 = FUN_8c26813c(auStack_8[0],ar5,ar6,0);
    if (iVar1 == 0) {
      iVar1 = FUN_8c26809c(auStack_8[0],ar5,ar6,ar7_00);
    }
    else {
      iVar1 = FUN_8c26809c(auStack_8[0],ar5,ar6,ar7_00);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02257c\n.set _FUN_8c02257c, _FUN_8c02257c_def\n");
