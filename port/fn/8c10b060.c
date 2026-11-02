#include "../decls.h"
undefined4 FUN_8c10b060_def(undefined4 ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar6 + 4);
  uStack_c = 0;
  if (ar6[1] != 0) {
    uStack_c = *(undefined4 *)(ar6[1] + 8);
  }
  uVar1 = (**(code **)(*ar6 + 0x10))(ar4,ar5,&uStack_10,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c10b060\n.set _FUN_8c10b060, _FUN_8c10b060_def\n");
