#include "../decls.h"
int FUN_8c25ffba_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int unaff_r14;
  
  iVar1 = *(int *)(unaff_r14 + 4);
  if (iVar1 == 3) {
    FUN_8c264fea(*(undefined4 *)(unaff_r14 + 8),ar5,ar6,ar7);
    iVar1 = (int)0x9c;
    *(undefined4 *)(iVar1 + unaff_r14) = 0;
    *(undefined4 *)(unaff_r14 + 4) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c25ffba\n.set _FUN_8c25ffba, _FUN_8c25ffba_def\n");
