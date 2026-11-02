#include "../decls.h"
int FUN_8c10bb9a_def(undefined4 *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_8c11eb6c(*ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar3 = FUN_8c11cd44(*(undefined4 *)(uint)ar4[1],*ar4,ar6,ar7);
  }
  if (((iVar3 == 0) && (iVar2 = ar4[0xb], *ar5 = iVar2, iVar2 != 0)) && (iVar1 != *(int *)*ar5)) {
    iVar3 = 0xb;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c10bb9a\n.set _FUN_8c10bb9a, _FUN_8c10bb9a_def\n");
