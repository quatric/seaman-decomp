#include "../decls.h"
int FUN_8c0276f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_8c0fa5b4(0x8c35468c,ar5,ar6,ar7);
  iVar2 = (**(code **)(**(int **)(0x308 + ar4) + 0x40))
                    (*(int **)(0x308 + ar4),ar5,ar6,ar7);
  if (iVar1 == iVar2) {
    iVar2 = (**(code **)(**(int **)(0x308 + ar4) + 0x40))
                      (*(int **)(0x308 + ar4),ar5,ar6,ar7);
    if (0 < iVar2) {
      iVar2 = FUN_8c02b04c(ar4,1,ar6,ar7);
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0276f4\n.set _FUN_8c0276f4, _FUN_8c0276f4_def\n");
