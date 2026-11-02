#include "../decls.h"
undefined4 FUN_8c10c3a0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar1 = *ar4;
  uStack_14 = *(undefined4 *)(iVar1 + 4);
  uStack_10 = 0;
  if (ar4[3] != 0) {
    (**(code **)(iVar1 + 0xc))(ar4[3],&uStack_14,ar6,ar7);
  }
  (**(code **)(iVar1 + 0xc))(ar4,&uStack_14,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c10c3a0\n.set _FUN_8c10c3a0, _FUN_8c10c3a0_def\n");
