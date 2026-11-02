#include "../decls.h"
undefined4 FUN_8c201f2c_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = get_field_4_201c8e(ar4,ar5,ar6,ar7);
  if (*(int *)(iVar1 + 8) == 0) {
    ar6 = ar6 << 1;
  }
  uVar2 = FUN_8c201e14(ar4,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c201f2c\n.set _FUN_8c201f2c, _FUN_8c201f2c_def\n");
