#include "../decls.h"
int FUN_8c01e0a4_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar5_00;
  
  ar5_00 = ar5;
  if (*(undefined4 *)0x8c279288 != 0) {
    FUN_8c1fb57c(*(undefined4 *)0x8c279288,ar5,ar6,ar7);
  }
  *(undefined4 *)0x8c279288 = 0;
  *(undefined4 *)0x8c27928c = 0;
  iVar1 = 0x100;
  if (*ar5 < 0x100) {
    *(undefined4 *)0x8c27928c = *ar5;
    iVar1 = 0;
    if (*(undefined4 *)0x8c27928c != 0) {
      iVar1 = malloc_thunk(*(undefined4 *)0x8c27928c,ar5_00,ar6,ar7);
      *(undefined4 *)0x8c279288 = iVar1;
      iVar1 = memmove(*(undefined4 *)0x8c279288,ar5 + 1,*(undefined4 *)0x8c27928c,ar7);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01e0a4\n.set _FUN_8c01e0a4, _FUN_8c01e0a4_def\n");
