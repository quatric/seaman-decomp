#include "../decls.h"
undefined4 FUN_8c020588_def(undefined4 ar4,int ar5,int *ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  int iVar2;
  int *ar6_00;
  
  if (*ar6 == ar5) {
    ar6_00 = ar6;
    iVar2 = FUN_8c020258(ar6 + 4,ar7,ar6,ar7);
    if (iVar2 == 0) {
      iVar2 = FUN_8c020258(ar6 + 0xc,s0,ar6_00,ar7);
      if (iVar2 == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c020588\n.set _FUN_8c020588, _FUN_8c020588_def\n");
