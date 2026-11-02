#include "../decls.h"
int FUN_8c264fea_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0xc);
  if (iVar1 == 3) {
    *(undefined4 *)(ar4 + 0xc) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c264fea\n.set _FUN_8c264fea, _FUN_8c264fea_def\n");
