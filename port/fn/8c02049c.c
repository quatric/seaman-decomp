#include "../decls.h"
undefined4 FUN_8c02049c_def(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = *ar5;
  if (((iVar1 != 0xc) && (iVar1 != 0xd)) && (iVar1 != 0xe)) {
    piVar3 = ar5;
    if (*ar4 != 0) {
      FUN_8c262168(*ar4,ar5,ar6,ar7);
    }
    if (ar5[2] != 0) {
      FUN_8c1fb57c(ar5[2],piVar3,ar6,ar7);
    }
  }
  *ar4 = 0;
  ar5[2] = 0;
  piVar3 = ar5 + 4;
  FUN_8c020600(ar4,*ar5,ar4 + 8,piVar3);
  uVar2 = FUN_8c0205e8(ar4,ar4 + 9,ar5,piVar3);
  return uVar2;
}

__asm__(".globl _FUN_8c02049c\n.set _FUN_8c02049c, _FUN_8c02049c_def\n");
