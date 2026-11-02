#include "../decls.h"
uint FUN_8c110aea_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') {
    uVar2 = (*(undefined4 **)(ar4 + 0xc))[1];
    iVar1 = FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),uVar2,ar6,ar7);
    if (iVar1 != 0) {
      uVar2 = FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),uVar2,ar6,ar7);
      FUN_8c110a90(ar4,iVar1,uVar2,ar7);
    }
  }
  iVar1 = **(int **)(ar4 + 0xc);
  return *(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar1 + 0x40)) == *(int *)(iVar1 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c110aea\n.set _FUN_8c110aea, _FUN_8c110aea_def\n");
