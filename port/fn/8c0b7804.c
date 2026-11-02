#include "../decls.h"
undefined4 FUN_8c0b7804_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_10;
  int aiStack_c [2];
  
  aiStack_c[0] = 0;
  iStack_10 = 0;
  uVar2 = 0x4208;
  iVar1 = (*(code *)(&FUN_8c0b7628))
                    ((&DATA_8c13bfe4) + 0x42,0x8c431a68,0x4208,ar7)
  ;
  if (iVar1 == 1) {
    uVar2 = 0;
  }
  else {
    FUN_8c1f826c(ar4,aiStack_c,uVar2,ar7);
    FUN_8c1f826c(0x8c431a68 + 0x1e,&iStack_10,uVar2,ar7);
    if (aiStack_c[0] == iStack_10) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0b7804\n.set _FUN_8c0b7804, _FUN_8c0b7804_def\n");
