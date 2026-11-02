#include "../decls.h"
undefined4 FUN_8c1fd4f0_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*ar4 != *ar5) {
      uVar2 = 0xffffffff;
    }
    ar4 = ar4 + 1;
    ar5 = ar5 + 1;
  } while (iVar1 < 0x200);
  return uVar2;
}

__asm__(".globl _FUN_8c1fd4f0\n.set _FUN_8c1fd4f0, _FUN_8c1fd4f0_def\n");
