#include "../decls.h"
int FUN_8c01c774_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  
  uStack_18 = *(&DATA_8c12fb14);
  uStack_17 = (&DATA_8c12fb14)[1];
  uStack_16 = (&DATA_8c12fb14)[2];
  uStack_15 = (&DATA_8c12fb14)[3];
  iVar2 = FUN_8c1f5d6c(ar4[2],&uStack_18,ar6,ar7);
  iVar1 = 0x2450;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 1;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c01c774\n.set _FUN_8c01c774, _FUN_8c01c774_def\n");
