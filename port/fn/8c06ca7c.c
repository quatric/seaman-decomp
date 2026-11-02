#include "../decls.h"
int FUN_8c06ca7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined2 *)(ar4 + 0x266) = 0;
  iVar1 = *(int *)(ar4 + 0x220);
  if ((iVar1 == 0) && ((*(int *)(ar4 + 0x230) == 1 || (iVar1 = *(int *)(ar4 + 0x230), iVar1 == 5))))
  {
    iVar1 = *(int *)(ar4 + 0x218);
    if (iVar1 == 0) {
      *(undefined4 *)(ar4 + 0x34) = 0x43340000;
    }
    else if (iVar1 == 1) {
      *(undefined4 *)(ar4 + 0x34) = 0x42c80000;
    }
    else if (iVar1 == 2) {
      *(undefined4 *)(ar4 + 0x34) = 0x43340000;
    }
    iVar1 = 0x230;
    *(int *)(ar4 + 0x230) = *(int *)(ar4 + 0x230) + 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c06ca7c\n.set _FUN_8c06ca7c, _FUN_8c06ca7c_def\n");
