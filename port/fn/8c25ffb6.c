#include "../decls.h"
int FUN_8c25ffb6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 4);
  if (iVar1 == 3) {
    FUN_8c264fea(*(undefined4 *)(ar4 + 8));
    iVar1 = (int)0x9c;
    *(undefined4 *)(iVar1 + ar4) = 0;
    *(undefined4 *)(ar4 + 4) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c25ffb6\n.set _FUN_8c25ffb6, _FUN_8c25ffb6_def\n");
