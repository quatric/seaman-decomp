#include "../decls.h"
int FUN_8c0d5de0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c015bb8(ar4 + 0x10,ar5,ar6,ar7);
  iVar1 = (*(code *)(&thunk_FUN_8c0151e8))
                    (*(undefined4 *)(*(int *)(iVar1 + 4) + 4),0x17,ar6,ar7);
  *(int *)(ar4 + 0x14) = iVar1 + 4;
  return iVar1;
}

__asm__(".globl _FUN_8c0d5de0\n.set _FUN_8c0d5de0, _FUN_8c0d5de0_def\n");
