#include "../decls.h"
int FUN_8c0cf63c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 1;
  if (*ar4 != 1) {
    if (*(int *)(0x14c + (int)ar4) == 1) {
      iVar1 = (*(code *)(&FUN_8c0cf6bc))
                        (ar4,ar4 + *(short *)(0x148 + (int)ar4) * 5 + 1,
                         (int)*(short *)(0x148 + (int)ar4),ar7);
    }
    else {
      iVar1 = *(int *)(0x14c + (int)ar4);
      if (iVar1 == 3) {
        iVar1 = (*(code *)(&FUN_8c0cf7a4))
                          (ar4,ar4 + *(short *)(0x148 + (int)ar4) * 5 + 1,
                           (int)*(short *)(0x148 + (int)ar4),ar7);
      }
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0cf63c\n.set _FUN_8c0cf63c, _FUN_8c0cf63c_def\n");
