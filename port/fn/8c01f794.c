#include "../decls.h"
undefined4 FUN_8c01f794_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(ar4 + 4) == 0) {
    FUN_8c02009c(ar4,ar5,ar6,ar7);
  }
  else {
    iVar1 = **(int **)(ar4 + 4);
    if (iVar1 == 0xb) {
      FUN_8c01fab4(ar4,ar5,ar6,ar7);
    }
    else if (((iVar1 == 0xc) || (iVar1 == 0xd)) || (iVar1 == 0xe)) {
      FUN_8c01f9c4(ar4,ar5,ar6,ar7);
    }
    else {
      FUN_8c01f8a4(ar4,ar5,ar6,ar7);
    }
  }
  uVar2 = FUN_8c01f83c(ar4,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c01f794\n.set _FUN_8c01f794, _FUN_8c01f794_def\n");
