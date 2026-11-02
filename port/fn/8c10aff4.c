#include "../decls.h"
undefined4 FUN_8c10aff4_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)(*ar5 + 4);
  uStack_c = 0;
  if (ar5[1] != 0) {
    uStack_c = *(undefined4 *)(ar5[1] + 8);
  }
  uVar1 = (**(code **)(*ar5 + 8))(ar4,&uStack_10,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c10aff4\n.set _FUN_8c10aff4, _FUN_8c10aff4_def\n");
