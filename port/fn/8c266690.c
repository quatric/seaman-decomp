#include "../decls.h"
int FUN_8c266690_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x7000103;
  if ((ar4 != 0) && (iVar1 = 0, *(int *)(ar4 + 4) != 1)) {
    iVar1 = 0x7000102;
  }
  if (iVar1 != 0) {
    FUN_8c2688a0((&FUN_8c266690),iVar1);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c266690\n.set _FUN_8c266690, _FUN_8c266690_def\n");
